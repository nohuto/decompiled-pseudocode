/*
 * XREFs of __frnd @ 0x4B2FEC9A
 * Callers:
 *     __d_inttype @ 0x4B2FB356 (__d_inttype.c)
 *     __ceil_default @ 0x4B2FD662 (__ceil_default.c)
 *     __floor_default @ 0x4B2FE05F (__floor_default.c)
 * Callees:
 *     <none>
 */

double __cdecl _frnd(double a1)
{
  double result; // st7

  _ST7 = a1;
  __asm { frndint }
  return result;
}
