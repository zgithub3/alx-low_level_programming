#include "main.h"
/**
 * swap_int - swap the value of two integer
 * @a: int pointer type
 * @b: int pointer type
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	    *a=*b;
	    *b=temp;
}
