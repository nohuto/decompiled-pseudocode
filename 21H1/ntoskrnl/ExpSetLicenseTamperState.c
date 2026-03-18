/*
 * XREFs of ExpSetLicenseTamperState @ 0x1405AD3E4
 * Callers:
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x140792454 (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExSetLicenseTamperState @ 0x1409489A0 (ExSetLicenseTamperState.c)
 *     sub_140948CE0 @ 0x140948CE0 (sub_140948CE0.c)
 *     SLUpdateLicenseDataInternal @ 0x140949960 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     ExpSetKernelDataProtection @ 0x1406B8830 (ExpSetKernelDataProtection.c)
 */

__int64 __fastcall ExpSetLicenseTamperState(__int64 a1, int a2)
{
  _DWORD v3[14]; // [rsp+20h] [rbp-38h] BYREF

  *(_DWORD *)(a1 + 37612) = a2;
  memset(v3, 0, 48);
  v3[2] = a2;
  return ExpSetKernelDataProtection(a1, v3, 2LL, 0LL);
}
