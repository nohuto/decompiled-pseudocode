/*
 * XREFs of _RtlGetReturnAddressHijackTarget@0 @ 0x4B2B0650
 * Callers:
 *     _SwitchedRtlGetVersion@4 @ 0x4B2B0445 (_SwitchedRtlGetVersion@4.c)
 *     ___libm_error_support @ 0x4B2FD3A2 (___libm_error_support.c)
 *     __umatherr @ 0x4B2FDDBE (__umatherr.c)
 *     __87except @ 0x4B2FEB82 (__87except.c)
 * Callees:
 *     <none>
 */

ULONG_PTR RtlGetReturnAddressHijackTarget(void)
{
  ULONG_PTR result; // rax

  LODWORD(result) = 0;
  return result;
}
