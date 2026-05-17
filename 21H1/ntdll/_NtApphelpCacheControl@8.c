/*
 * XREFs of _NtApphelpCacheControl@8 @ 0x4B2F2E40
 * Callers:
 *     _CompatCachepLookupCdb@8 @ 0x4B2D1C4D (_CompatCachepLookupCdb@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtApphelpCacheControl(int a1, int a2)
{
  return Wow64SystemServiceCall();
}
