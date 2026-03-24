/*
 * XREFs of IopExceptionCleanupEx @ 0x1405CDBA4
 * Callers:
 *     NtSetInformationFile @ 0x140352270 (NtSetInformationFile.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x1403F1B00 (IopFreeCopyObjectsFromDataBuffer.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1403F1D24 (IopAllocateAndPopulateWriteIrp.c)
 *     IopReadFile @ 0x1405CE318 (IopReadFile.c)
 *     NtQueryInformationFile @ 0x1405FAEA0 (NtQueryInformationFile.c)
 *     BuildQueryDirectoryIrp @ 0x14064FCB0 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x1406508C0 (NtQueryVolumeInformationFile.c)
 *     NtUnlockFile @ 0x14068F570 (NtUnlockFile.c)
 *     NtReadFileScatter @ 0x140699E80 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x14069A620 (NtWriteFileGather.c)
 *     NtQueryEaFile @ 0x14069B320 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406AE6E0 (NtNotifyChangeDirectoryFileEx.c)
 *     IopXxxControlFile @ 0x1406FE010 (IopXxxControlFile.c)
 *     NtLockFile @ 0x140708790 (NtLockFile.c)
 *     NtSetEaFile @ 0x140730CB0 (NtSetEaFile.c)
 *     NtSetVolumeInformationFile @ 0x14076D170 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1408923AC (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x140895B40 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     IoFreeMdl @ 0x1402E9600 (IoFreeMdl.c)
 *     IopReleaseFileObjectLock @ 0x14034D750 (IopReleaseFileObjectLock.c)
 *     IoFreeIrp @ 0x140353540 (IoFreeIrp.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
