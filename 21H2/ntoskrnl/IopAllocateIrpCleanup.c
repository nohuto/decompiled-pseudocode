/*
 * XREFs of IopAllocateIrpCleanup @ 0x140890E54
 * Callers:
 *     NtSetInformationFile @ 0x140352270 (NtSetInformationFile.c)
 *     NtQueryInformationFile @ 0x1405FAEA0 (NtQueryInformationFile.c)
 *     IopGetSetSecurityObject @ 0x14064F760 (IopGetSetSecurityObject.c)
 *     BuildQueryDirectoryIrp @ 0x14064FCB0 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x1406508C0 (NtQueryVolumeInformationFile.c)
 *     NtUnlockFile @ 0x14068F570 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x140698D00 (NtFlushBuffersFileEx.c)
 *     NtReadFileScatter @ 0x140699E80 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x14069A620 (NtWriteFileGather.c)
 *     NtQueryEaFile @ 0x14069B320 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406AE6E0 (NtNotifyChangeDirectoryFileEx.c)
 *     IopQueryXxxInformation @ 0x1406C9708 (IopQueryXxxInformation.c)
 *     IopXxxControlFile @ 0x1406FE010 (IopXxxControlFile.c)
 *     NtLockFile @ 0x140708790 (NtLockFile.c)
 *     NtSetEaFile @ 0x140730CB0 (NtSetEaFile.c)
 *     NtSetVolumeInformationFile @ 0x14076D170 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x14077C0D0 (IoSetInformation.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1408923AC (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x140895B40 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     IopReleaseFileObjectLock @ 0x14034D750 (IopReleaseFileObjectLock.c)
 */

void __fastcall IopAllocateIrpCleanup(PADAPTER_OBJECT DmaAdapter, PADAPTER_OBJECT a2)
{
  if ( a2 )
    HalPutDmaAdapter(a2);
  if ( (*(_DWORD *)&DmaAdapter[5].Version & 2) != 0 )
    IopReleaseFileObjectLock(DmaAdapter);
  HalPutDmaAdapter(DmaAdapter);
}
