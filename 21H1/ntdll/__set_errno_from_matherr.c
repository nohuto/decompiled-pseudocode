/*
 * XREFs of __set_errno_from_matherr @ 0x4B2FDD8F
 * Callers:
 *     __except1 @ 0x4B2FD7DF (__except1.c)
 *     __umatherr @ 0x4B2FDDBE (__umatherr.c)
 *     __87except @ 0x4B2FEB82 (__87except.c)
 * Callees:
 *     __errno @ 0x4B33D420 (__errno.c)
 */

int *__cdecl _set_errno_from_matherr(int a1)
{
  int *result; // eax

  if ( a1 == 1 )
  {
    result = _errno();
    *result = 33;
  }
  else
  {
    result = (int *)(a1 - 2);
    if ( (unsigned int)(a1 - 2) <= 1 )
    {
      result = _errno();
      *result = 34;
    }
  }
  return result;
}
