/*
 * XREFs of ExpSetLicenseTamperState @ 0x1405B3064
 * Callers:
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x1407AB5D4 (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExSetLicenseTamperState @ 0x14094D2D0 (ExSetLicenseTamperState.c)
 *     sub_14094D610 @ 0x14094D610 (sub_14094D610.c)
 *     SLUpdateLicenseDataInternal @ 0x14094E290 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     ExpSetKernelDataProtection @ 0x140685DD0 (ExpSetKernelDataProtection.c)
 */

__int64 __fastcall ExpSetLicenseTamperState(__int64 a1, int a2)
{
  _DWORD v3[14]; // [rsp+20h] [rbp-38h] BYREF

  *(_DWORD *)(a1 + 46988) = a2;
  memset(v3, 0, 48);
  v3[2] = a2;
  return ExpSetKernelDataProtection(a1, v3, 2LL, 0LL);
}
