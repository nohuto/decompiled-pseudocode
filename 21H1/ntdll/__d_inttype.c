/*
 * XREFs of __d_inttype @ 0x4B2FB356
 * Callers:
 *     __powhlp @ 0x4B2FB3BE (__powhlp.c)
 * Callees:
 *     __frnd @ 0x4B2FEC9A (__frnd.c)
 *     __fpclass @ 0x4B2FECAE (__fpclass.c)
 */

int __cdecl _d_inttype(double X)
{
  if ( (_fpclass(X) & 0x90) != 0 )
    return 0;
  _frnd(X);
  _frnd(X * 0.5);
  return 2;
}
