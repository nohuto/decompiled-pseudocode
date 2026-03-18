/*
 * XREFs of NtOpenKey @ 0x1406A5B90
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406A5770 (ExpWatchProductTypeWork.c)
 *     AdtpObjsInitialize @ 0x14084CD18 (AdtpObjsInitialize.c)
 *     ExpWatchLicenseInfoWork @ 0x1409F8680 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x140B1CC84 (ExpWatchProductTypeInitialization.c)
 *     IopProtectSystemPartition @ 0x140B2F684 (IopProtectSystemPartition.c)
 * Callees:
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     CmOpenKey @ 0x1407CABA0 (CmOpenKey.c)
 */

__int64 NtOpenKey()
{
  int v0; // r8d
  int v1; // r10d
  int v2; // r11d
  unsigned int v3; // r8d
  __int64 v5[3]; // [rsp+30h] [rbp-18h] BYREF

  *(_OWORD *)v5 = 0LL;
  CmpInitializeThreadInfo((__int64)v5);
  CmOpenKey(v2, v1, v0, 0, 0LL, KeGetCurrentThread()->PreviousMode);
  CmCleanupThreadInfo(v5);
  return v3;
}
