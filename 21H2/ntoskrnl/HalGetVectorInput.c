/*
 * XREFs of HalGetVectorInput @ 0x1403D8FC0
 * Callers:
 *     IopConnectInterruptFullySpecified @ 0x1408590B0 (IopConnectInterruptFullySpecified.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalGetVectorInput(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64))off_140C01C98[0])(a1);
}
