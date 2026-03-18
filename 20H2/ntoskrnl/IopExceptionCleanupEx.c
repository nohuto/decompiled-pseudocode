/*
 * XREFs of IopExceptionCleanupEx @ 0x1405CBC64
 * Callers:
 *     NtSetInformationFile @ 0x14020FE90 (NtSetInformationFile.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x1403F0D38 (IopFreeCopyObjectsFromDataBuffer.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1403F0F00 (IopAllocateAndPopulateWriteIrp.c)
 *     IopReadFile @ 0x1405CC21C (IopReadFile.c)
 *     NtWriteFile @ 0x1405F84C0 (NtWriteFile.c)
 *     NtReadFile @ 0x1405F9240 (NtReadFile.c)
 *     BuildQueryDirectoryIrp @ 0x1405FA070 (BuildQueryDirectoryIrp.c)
 *     NtQueryInformationFile @ 0x1405FB1C0 (NtQueryInformationFile.c)
 *     NtQueryVolumeInformationFile @ 0x1406077E0 (NtQueryVolumeInformationFile.c)
 *     IopXxxControlFile @ 0x14060FB00 (IopXxxControlFile.c)
 *     NtLockFile @ 0x1406B3730 (NtLockFile.c)
 *     NtUnlockFile @ 0x1406B6C50 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x1406BE550 (NtQueryEaFile.c)
 *     NtReadFileScatter @ 0x1406C05A0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406C0D40 (NtWriteFileGather.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406CFAE0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetEaFile @ 0x14072C980 (NtSetEaFile.c)
 *     NtSetVolumeInformationFile @ 0x140769230 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140894DEC (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x140898570 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IoFreeMdl @ 0x14020A410 (IoFreeMdl.c)
 *     IoFreeIrp @ 0x140218F40 (IoFreeIrp.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     IopReleaseFileObjectLock @ 0x1402238A0 (IopReleaseFileObjectLock.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
