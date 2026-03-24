/*
 * XREFs of HalGetVectorInput @ 0x1403CA8A0
 * Callers:
 *     IopConnectInterruptFullySpecified @ 0x1407CBD80 (IopConnectInterruptFullySpecified.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalGetVectorInput(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64))off_140C00648[0])(a1);
}
