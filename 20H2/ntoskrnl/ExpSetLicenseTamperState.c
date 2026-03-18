/*
 * XREFs of ExpSetLicenseTamperState @ 0x1405B1664
 * Callers:
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x1407A152C (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExSetLicenseTamperState @ 0x14094FB00 (ExSetLicenseTamperState.c)
 *     sub_14094FE40 @ 0x14094FE40 (sub_14094FE40.c)
 *     SLUpdateLicenseDataInternal @ 0x140950AC0 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     ExpSetKernelDataProtection @ 0x1406B1500 (ExpSetKernelDataProtection.c)
 */

__int64 __fastcall ExpSetLicenseTamperState(__int64 a1, int a2)
{
  _DWORD v3[14]; // [rsp+20h] [rbp-38h] BYREF

  *(_DWORD *)(a1 + 46988) = a2;
  memset(v3, 0, 48);
  v3[2] = a2;
  return ExpSetKernelDataProtection(a1, v3, 2LL, 0LL);
}
