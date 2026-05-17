/*
 * XREFs of _RtlULongPtrAdd@12 @ 0x4B2A9463
 * Callers:
 *     _LdrpSearchResourceSection_U@20 @ 0x4B2BC6A0 (_LdrpSearchResourceSection_U@20.c)
 *     _LdrpResSearchResourceInsideDirectory@52 @ 0x4B2BE960 (_LdrpResSearchResourceInsideDirectory@52.c)
 *     _LdrpResCompareResourceNames@32 @ 0x4B2BF6C8 (_LdrpResCompareResourceNames@32.c)
 *     _LdrpHandleTlsData@4 @ 0x4B2D0CD1 (_LdrpHandleTlsData@4.c)
 *     _RtlpCombineAcls@32 @ 0x4B2D8CAF (_RtlpCombineAcls@32.c)
 *     _RtlCreateAtomTableEx@12 @ 0x4B2E0014 (_RtlCreateAtomTableEx@12.c)
 *     _RtlpAllocateAtomTableEntry@12 @ 0x4B2E0744 (_RtlpAllocateAtomTableEntry@12.c)
 *     _LdrpCompareResourceNamesWithValidation@24 @ 0x4B306D17 (_LdrpCompareResourceNamesWithValidation@24.c)
 *     _LdrpResSearchResourceHandle@32 @ 0x4B3434F8 (_LdrpResSearchResourceHandle@32.c)
 *     _RtlAddAccessFilterAce@32 @ 0x4B34AD40 (_RtlAddAccessFilterAce@32.c)
 *     _RtlpConvertAbsoluteToRelativeSecurityAttribute@12 @ 0x4B34B9A0 (_RtlpConvertAbsoluteToRelativeSecurityAttribute@12.c)
 *     _RtlpConvertRelativeToAbsoluteSecurityAttribute@16 @ 0x4B34BDB0 (_RtlpConvertRelativeToAbsoluteSecurityAttribute@16.c)
 *     _RtlpValidRelativeAttribute@8 @ 0x4B34CD2B (_RtlpValidRelativeAttribute@8.c)
 *     _RtlQueryRegistryValueWithFallback@28 @ 0x4B3511F0 (_RtlQueryRegistryValueWithFallback@28.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x4B364433 (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlpHeapTrkReportResult @ 0x4B364CBD (RtlpHeapTrkReportResult.c)
 *     _RtlSetFeatureConfigurations@16 @ 0x4B369740 (_RtlSetFeatureConfigurations@16.c)
 *     _RtlpFcUpdateUsageSubscriptions@12 @ 0x4B3698AF (_RtlpFcUpdateUsageSubscriptions@12.c)
 *     _SafeReallocBlob @ 0x4B36D0C0 (_SafeReallocBlob.c)
 *     _PsspCaptureHandleTrace@8 @ 0x4B387016 (_PsspCaptureHandleTrace@8.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x4B3876A6 (PsspCaptureVaSpaceInformation2.c)
 *     PsspHandleDumper @ 0x4B3880B0 (PsspHandleDumper.c)
 *     PsspDumpThread @ 0x4B38883C (PsspDumpThread.c)
 *     _PsspDuplicateSnapshotLocalToRemote@16 @ 0x4B388F93 (_PsspDuplicateSnapshotLocalToRemote@16.c)
 *     _PsspDuplicateSnapshotRemoteToRemote@20 @ 0x4B389365 (_PsspDuplicateSnapshotRemoteToRemote@20.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall RtlULongPtrAdd(unsigned int a1, int a2, int *a3)
{
  unsigned int v3; // eax
  int v4; // edx
  unsigned int result; // eax

  v3 = a1 + a2;
  if ( a1 + a2 < a1 )
    v4 = -1;
  else
    v4 = a1 + a2;
  result = v3 < a1 ? 0xC0000095 : 0;
  *a3 = v4;
  return result;
}
