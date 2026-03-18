/*
 * XREFs of IopAllocateIrpCleanup @ 0x140893884
 * Callers:
 *     NtSetInformationFile @ 0x14020FE90 (NtSetInformationFile.c)
 *     NtWriteFile @ 0x1405F84C0 (NtWriteFile.c)
 *     NtReadFile @ 0x1405F9240 (NtReadFile.c)
 *     IopGetSetSecurityObject @ 0x1405F9B20 (IopGetSetSecurityObject.c)
 *     BuildQueryDirectoryIrp @ 0x1405FA070 (BuildQueryDirectoryIrp.c)
 *     NtQueryInformationFile @ 0x1405FB1C0 (NtQueryInformationFile.c)
 *     NtQueryVolumeInformationFile @ 0x1406077E0 (NtQueryVolumeInformationFile.c)
 *     IopXxxControlFile @ 0x14060FB00 (IopXxxControlFile.c)
 *     IopQueryXxxInformation @ 0x140634898 (IopQueryXxxInformation.c)
 *     NtLockFile @ 0x1406B3730 (NtLockFile.c)
 *     NtUnlockFile @ 0x1406B6C50 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x1406BCBF0 (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x1406BE550 (NtQueryEaFile.c)
 *     NtReadFileScatter @ 0x1406C05A0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406C0D40 (NtWriteFileGather.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406CFAE0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetEaFile @ 0x14072C980 (NtSetEaFile.c)
 *     NtSetVolumeInformationFile @ 0x140769230 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x140778120 (IoSetInformation.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140894DEC (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x140898570 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     IopReleaseFileObjectLock @ 0x1402238A0 (IopReleaseFileObjectLock.c)
 */

void __fastcall IopAllocateIrpCleanup(PADAPTER_OBJECT DmaAdapter, PADAPTER_OBJECT a2)
{
  if ( a2 )
    HalPutDmaAdapter(a2);
  if ( (*(_DWORD *)&DmaAdapter[5].Version & 2) != 0 )
    IopReleaseFileObjectLock(DmaAdapter);
  HalPutDmaAdapter(DmaAdapter);
}
