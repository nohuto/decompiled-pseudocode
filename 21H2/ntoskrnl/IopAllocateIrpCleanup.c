/*
 * XREFs of IopAllocateIrpCleanup @ 0x140890FB4
 * Callers:
 *     NtSetInformationFile @ 0x14035CFC0 (NtSetInformationFile.c)
 *     NtUnlockFile @ 0x1405EF3E0 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x1405F79F0 (NtFlushBuffersFileEx.c)
 *     NtReadFileScatter @ 0x1405F9040 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1405F97E0 (NtWriteFileGather.c)
 *     NtQueryEaFile @ 0x1405FA4E0 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x14060CF80 (NtNotifyChangeDirectoryFileEx.c)
 *     IopGetSetSecurityObject @ 0x140644580 (IopGetSetSecurityObject.c)
 *     BuildQueryDirectoryIrp @ 0x140644AD0 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x1406456E0 (NtQueryVolumeInformationFile.c)
 *     IopQueryXxxInformation @ 0x140677FF8 (IopQueryXxxInformation.c)
 *     NtQueryInformationFile @ 0x1406EA600 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x1407153F0 (IopXxxControlFile.c)
 *     NtLockFile @ 0x14071FB70 (NtLockFile.c)
 *     NtSetEaFile @ 0x140730E70 (NtSetEaFile.c)
 *     NtSetVolumeInformationFile @ 0x14076D330 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x14077C290 (IoSetInformation.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14089250C (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x140895CA0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     IopReleaseFileObjectLock @ 0x1403584A0 (IopReleaseFileObjectLock.c)
 */

void __fastcall IopAllocateIrpCleanup(PADAPTER_OBJECT DmaAdapter, PADAPTER_OBJECT a2)
{
  if ( a2 )
    HalPutDmaAdapter(a2);
  if ( (*(_DWORD *)&DmaAdapter[5].Version & 2) != 0 )
    IopReleaseFileObjectLock(DmaAdapter);
  HalPutDmaAdapter(DmaAdapter);
}
