/*
 * XREFs of GetNamespaceId @ 0x1C0004344
 * Callers:
 *     QueryProtocolInfoLogPageData @ 0x1C000143C (QueryProtocolInfoLogPageData.c)
 *     ScsiUnmapRequest @ 0x1C0001C54 (ScsiUnmapRequest.c)
 *     NVMeHwBuildIo @ 0x1C0003960 (NVMeHwBuildIo.c)
 *     ScsiSyncCacheRequest @ 0x1C00042B8 (ScsiSyncCacheRequest.c)
 *     NVMeInitStreams @ 0x1C000D7C0 (NVMeInitStreams.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C001082C (FormInquiryDeviceIdentifiersData.c)
 *     IoctlQueryEnduranceInformation @ 0x1C00119D8 (IoctlQueryEnduranceInformation.c)
 *     IoctlStorageStreamsGetOpenStreams @ 0x1C00120D8 (IoctlStorageStreamsGetOpenStreams.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C001228C (IoctlStorageStreamsGetParameters.c)
 *     IoctlStorageStreamsReleaseId @ 0x1C0012640 (IoctlStorageStreamsReleaseId.c)
 *     ProtocolCommandCompletion @ 0x1C0014800 (ProtocolCommandCompletion.c)
 *     ProtocolCommandToNVMe @ 0x1C00149A4 (ProtocolCommandToNVMe.c)
 *     QueryProtocolInfoFeatureData @ 0x1C0014D34 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C0014F9C (QueryProtocolInfoIdentifyData.c)
 *     ScsiSanitizeRequest @ 0x1C0015774 (ScsiSanitizeRequest.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C00160A0 (NVMeAsyncEventRequestCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetNamespaceId(__int64 a1, unsigned int a2)
{
  __int64 v2; // rcx

  if ( a2 < *(_DWORD *)(a1 + 200) && (_mm_lfence(), (v2 = *(_QWORD *)(a1 + 8LL * a2 + 1720)) != 0) )
    return *(unsigned int *)(v2 + 16);
  else
    return 0LL;
}
