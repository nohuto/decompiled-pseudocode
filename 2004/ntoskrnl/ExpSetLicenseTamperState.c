/*
 * XREFs of ExpSetLicenseTamperState @ 0x1405ADB04
 * Callers:
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x140794C84 (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExSetLicenseTamperState @ 0x140949D40 (ExSetLicenseTamperState.c)
 *     sub_14094A080 @ 0x14094A080 (sub_14094A080.c)
 *     SLUpdateLicenseDataInternal @ 0x14094AD00 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     ExpSetKernelDataProtection @ 0x1406D80E0 (ExpSetKernelDataProtection.c)
 */

__int64 __fastcall ExpSetLicenseTamperState(__int64 a1, int a2)
{
  _DWORD v3[14]; // [rsp+20h] [rbp-38h] BYREF

  *(_DWORD *)(a1 + 37612) = a2;
  memset(v3, 0, 48);
  v3[2] = a2;
  return ExpSetKernelDataProtection(a1, v3, 2LL, 0LL);
}
