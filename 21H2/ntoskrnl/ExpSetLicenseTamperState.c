/*
 * XREFs of ExpSetLicenseTamperState @ 0x1405B3294
 * Callers:
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x1407AB7D4 (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExSetLicenseTamperState @ 0x14094D4A0 (ExSetLicenseTamperState.c)
 *     sub_14094D7E0 @ 0x14094D7E0 (sub_14094D7E0.c)
 *     SLUpdateLicenseDataInternal @ 0x14094E460 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     ExpSetKernelDataProtection @ 0x1405E4F30 (ExpSetKernelDataProtection.c)
 */

__int64 __fastcall ExpSetLicenseTamperState(__int64 a1, int a2)
{
  _DWORD v3[14]; // [rsp+20h] [rbp-38h] BYREF

  *(_DWORD *)(a1 + 46988) = a2;
  memset(v3, 0, 48);
  v3[2] = a2;
  return ExpSetKernelDataProtection(a1, v3, 2LL, 0LL);
}
