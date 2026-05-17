/*
 * XREFs of _ZwEnumerateKey@24 @ 0x4B2F2CA0
 * Callers:
 *     _RtlpProcessIFEOKeyFilter@12 @ 0x4B2AA107 (_RtlpProcessIFEOKeyFilter@12.c)
 *     __RtlpRemovePendingDeleteLanguages@8 @ 0x4B2AC58A (__RtlpRemovePendingDeleteLanguages@8.c)
 *     __RtlpMuiRegLoadInstalledFromKey@8 @ 0x4B2AC6E3 (__RtlpMuiRegLoadInstalledFromKey@8.c)
 *     _RtlpAssemblyStorageMapResolutionDefaultCallback@12 @ 0x4B2E2BE0 (_RtlpAssemblyStorageMapResolutionDefaultCallback@12.c)
 *     _RtlpIsEmptyImageFileOptionsKey@4 @ 0x4B342529 (_RtlpIsEmptyImageFileOptionsKey@4.c)
 *     _RtlpCleanupRegistryKeys@0 @ 0x4B353540 (_RtlpCleanupRegistryKeys@0.c)
 *     _RtlpNtEnumerateSubKey@16 @ 0x4B36D180 (_RtlpNtEnumerateSubKey@16.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwEnumerateKey(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return Wow64SystemServiceCall();
}
