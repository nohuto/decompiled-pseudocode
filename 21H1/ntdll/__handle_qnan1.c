/*
 * XREFs of __handle_qnan1 @ 0x4B2FDA94
 * Callers:
 *     _fabs @ 0x4B2F83F0 (_fabs.c)
 *     __ceil_default @ 0x4B2FD662 (__ceil_default.c)
 *     __floor_default @ 0x4B2FE05F (__floor_default.c)
 * Callees:
 *     __umatherr @ 0x4B2FDDBE (__umatherr.c)
 *     __ctrlfp @ 0x4B2FDFCC (__ctrlfp.c)
 *     __errno @ 0x4B33D420 (__errno.c)
 */

double __cdecl _handle_qnan1(int a1, double a2, int a3)
{
  double result; // st7

  if ( _matherr_flag )
  {
    *_errno() = 33;
    _ctrlfp(a3, 0xFFFF);
    return a2;
  }
  else
  {
    result = a2;
    _umatherr(
      1,
      a1,
      SLODWORD(a2),
      SHIDWORD(a2),
      COERCE_UNSIGNED_INT64(0.0),
      HIDWORD(COERCE_UNSIGNED_INT64(0.0)),
      a2,
      a3);
  }
  return result;
}
