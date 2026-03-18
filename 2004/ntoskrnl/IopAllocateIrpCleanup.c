/*
 * XREFs of IopAllocateIrpCleanup @ 0x14088DD34
 * Callers:
 *     NtSetInformationFile @ 0x14028FD10 (NtSetInformationFile.c)
 *     IopQueryXxxInformation @ 0x140605A8C (IopQueryXxxInformation.c)
 *     IopXxxControlFile @ 0x140674CF0 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x1406780E0 (NtQueryInformationFile.c)
 *     NtWriteFile @ 0x14068B600 (NtWriteFile.c)
 *     NtReadFile @ 0x14068C230 (NtReadFile.c)
 *     IopGetSetSecurityObject @ 0x14068C9D0 (IopGetSetSecurityObject.c)
 *     BuildQueryDirectoryIrp @ 0x14068CF20 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x14068EAF0 (NtQueryVolumeInformationFile.c)
 *     NtLockFile @ 0x14069F3F0 (NtLockFile.c)
 *     NtUnlockFile @ 0x1406DF1B0 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x1406E7FA0 (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x1406EA6D0 (NtQueryEaFile.c)
 *     NtReadFileScatter @ 0x1406EBFB0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406EC5C0 (NtWriteFileGather.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406FCF10 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetEaFile @ 0x14071EAF0 (NtSetEaFile.c)
 *     NtSetVolumeInformationFile @ 0x14075AA70 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x140769B10 (IoSetInformation.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14088F32C (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x1408928F0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IopReleaseFileObjectLock @ 0x140205FA0 (IopReleaseFileObjectLock.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 */

void __fastcall IopAllocateIrpCleanup(PADAPTER_OBJECT DmaAdapter, PADAPTER_OBJECT a2)
{
  if ( a2 )
    HalPutDmaAdapter(a2);
  if ( (*(_DWORD *)&DmaAdapter[5].Version & 2) != 0 )
    IopReleaseFileObjectLock(DmaAdapter);
  HalPutDmaAdapter(DmaAdapter);
}
