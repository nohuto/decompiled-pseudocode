/*
 * XREFs of _RtlULongLongToUInt@12 @ 0x4B2E4CC8
 * Callers:
 *     _LdrpCalcAllocSize@8 @ 0x4B2AA0E1 (_LdrpCalcAllocSize@8.c)
 *     _MuiRegAllocArray @ 0x4B2AD7D8 (_MuiRegAllocArray.c)
 *     _LdrpResSearchResourceInsideDirectory@52 @ 0x4B2BE960 (_LdrpResSearchResourceInsideDirectory@52.c)
 *     _LdrpHandleTlsData@4 @ 0x4B2D0CD1 (_LdrpHandleTlsData@4.c)
 *     _SafeAllocBlob @ 0x4B2D3295 (_SafeAllocBlob.c)
 *     _RtlpMuiRegGetOrAddStringToPool@16 @ 0x4B2D4807 (_RtlpMuiRegGetOrAddStringToPool@16.c)
 *     _RtlpMuiRegDupLanguageList@8 @ 0x4B2D5E04 (_RtlpMuiRegDupLanguageList@8.c)
 *     _RtlCreateAtomTableEx@12 @ 0x4B2E0014 (_RtlCreateAtomTableEx@12.c)
 *     _RtlpInitializeAssemblyStorageMap@12 @ 0x4B2E33A0 (_RtlpInitializeAssemblyStorageMap@12.c)
 *     _RtlULongMult@12 @ 0x4B306D00 (_RtlULongMult@12.c)
 *     _LdrpCompareResourceNamesWithValidation@24 @ 0x4B306D17 (_LdrpCompareResourceNamesWithValidation@24.c)
 *     _RtlCreateQueryDebugBuffer@8 @ 0x4B336810 (_RtlCreateQueryDebugBuffer@8.c)
 *     _RtlpValidateRemoteDebugInformation@16 @ 0x4B337DB3 (_RtlpValidateRemoteDebugInformation@16.c)
 *     _RtlpConvertAbsoluteToRelativeSecurityAttribute@12 @ 0x4B34B9A0 (_RtlpConvertAbsoluteToRelativeSecurityAttribute@12.c)
 *     _RtlpConvertRelativeToAbsoluteSecurityAttribute@16 @ 0x4B34BDB0 (_RtlpConvertRelativeToAbsoluteSecurityAttribute@16.c)
 *     _RtlpValidRelativeAttribute@8 @ 0x4B34CD2B (_RtlpValidRelativeAttribute@8.c)
 *     _RtlpSystemBootStatusRequest@16 @ 0x4B350FCD (_RtlpSystemBootStatusRequest@16.c)
 *     _RtlpMUIEnumerateFolder@12 @ 0x4B354614 (_RtlpMUIEnumerateFolder@12.c)
 *     _MuiRegAllocArray_0 @ 0x4B35616E (_MuiRegAllocArray_0.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x4B364433 (RtlpHeapTrkAllocCacheAligned.c)
 *     _RtlSetFeatureConfigurations@16 @ 0x4B369740 (_RtlSetFeatureConfigurations@16.c)
 *     _RtlpFcUpdateUsageSubscriptions@12 @ 0x4B3698AF (_RtlpFcUpdateUsageSubscriptions@12.c)
 *     _RtlpMuiRegDupLanguageConfigList@8 @ 0x4B36B18D (_RtlpMuiRegDupLanguageConfigList@8.c)
 *     _RtlpMuiRegResizeStringPool@16 @ 0x4B36BD9D (_RtlpMuiRegResizeStringPool@16.c)
 *     _SafeReallocBlob @ 0x4B36D0C0 (_SafeReallocBlob.c)
 *     _RtlpHpStackTraceAllocAdd@12 @ 0x4B36DEC6 (_RtlpHpStackTraceAllocAdd@12.c)
 *     _RtlSparseArrayStart@20 @ 0x4B37E41B (_RtlSparseArrayStart@20.c)
 *     _PsspCaptureHandleTrace@8 @ 0x4B387016 (_PsspCaptureHandleTrace@8.c)
 *     _PsspCaptureAuxiliaryPages@20 @ 0x4B38738C (_PsspCaptureAuxiliaryPages@20.c)
 *     PsspCaptureVaSpaceInformation2 @ 0x4B3876A6 (PsspCaptureVaSpaceInformation2.c)
 *     _PsspCaptureThreadInformation@16 @ 0x4B388568 (_PsspCaptureThreadInformation@16.c)
 *     _PsspDuplicateSnapshotLocalToRemote@16 @ 0x4B388F93 (_PsspDuplicateSnapshotLocalToRemote@16.c)
 *     _PsspDuplicateSnapshotRemoteToRemote@20 @ 0x4B389365 (_PsspDuplicateSnapshotRemoteToRemote@20.c)
 *     _RtlStackDbStackAdd@12 @ 0x4B38A376 (_RtlStackDbStackAdd@12.c)
 *     _RtlpStackDbSegmentFindOrCreate@8 @ 0x4B38AB3B (_RtlpStackDbSegmentFindOrCreate@8.c)
 * Callees:
 *     <none>
 */

int __thiscall RtlULongLongToUInt(int *this, int a2, int a3)
{
  int v3; // edx

  v3 = 0;
  if ( a3 )
  {
    v3 = -1073741675;
    a2 = -1;
  }
  *this = a2;
  return v3;
}
