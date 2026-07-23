/*
 * XREFs of IopExceptionCleanupEx @ 0x1405CDBA4
 * Callers:
 *     NtSetInformationFile @ 0x14035CFC0 (NtSetInformationFile.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x1403F19D0 (IopFreeCopyObjectsFromDataBuffer.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1403F1D8C (IopAllocateAndPopulateWriteIrp.c)
 *     IopReadFile @ 0x1405CE318 (IopReadFile.c)
 *     NtUnlockFile @ 0x1405EF3E0 (NtUnlockFile.c)
 *     NtReadFileScatter @ 0x1405F9040 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1405F97E0 (NtWriteFileGather.c)
 *     NtQueryEaFile @ 0x1405FA4E0 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x14060CF80 (NtNotifyChangeDirectoryFileEx.c)
 *     BuildQueryDirectoryIrp @ 0x140644AD0 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x1406456E0 (NtQueryVolumeInformationFile.c)
 *     NtQueryInformationFile @ 0x1406EA600 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x1407153F0 (IopXxxControlFile.c)
 *     NtLockFile @ 0x14071FB70 (NtLockFile.c)
 *     NtSetEaFile @ 0x140730E70 (NtSetEaFile.c)
 *     NtSetVolumeInformationFile @ 0x14076D330 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14089250C (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x140895CA0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     IoFreeMdl @ 0x14029A950 (IoFreeMdl.c)
 *     IopReleaseFileObjectLock @ 0x1403584A0 (IopReleaseFileObjectLock.c)
 *     IoFreeIrp @ 0x14035E290 (IoFreeIrp.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall IopExceptionCleanupEx(PADAPTER_OBJECT DmaAdapter, PIRP Irp, PADAPTER_OBJECT a3, PVOID P, char a5)
{
  struct _IRP *MasterIrp; // rcx
  struct _MDL *MdlAddress; // rcx

  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( MasterIrp )
    ExFreePoolWithTag(MasterIrp, 0);
  MdlAddress = Irp->MdlAddress;
  if ( MdlAddress )
    IoFreeMdl(MdlAddress);
  IoFreeIrp(Irp);
  if ( a5 )
    IopReleaseFileObjectLock(DmaAdapter);
  if ( a3 )
    HalPutDmaAdapter(a3);
  if ( P )
    ExFreePoolWithTag(P, 0);
  HalPutDmaAdapter(DmaAdapter);
}
