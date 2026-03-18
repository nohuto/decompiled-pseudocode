/*
 * XREFs of IopExceptionCleanup @ 0x14088D1F8
 * Callers:
 *     NtSetInformationFile @ 0x140253490 (NtSetInformationFile.c)
 *     BuildQueryDirectoryIrp @ 0x1405E3A50 (BuildQueryDirectoryIrp.c)
 *     NtWriteFile @ 0x1405E3F90 (NtWriteFile.c)
 *     NtReadFile @ 0x1405E54D0 (NtReadFile.c)
 *     NtQueryVolumeInformationFile @ 0x1405F5260 (NtQueryVolumeInformationFile.c)
 *     IopXxxControlFile @ 0x1405FCC10 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140600000 (NtQueryInformationFile.c)
 *     NtLockFile @ 0x140699320 (NtLockFile.c)
 *     NtUnlockFile @ 0x1406BEC50 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x1406C9520 (NtQueryEaFile.c)
 *     NtReadFileScatter @ 0x1406CACB0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406CB2C0 (NtWriteFileGather.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406D9E90 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetEaFile @ 0x14071CE70 (NtSetEaFile.c)
 *     NtSetVolumeInformationFile @ 0x140758BF0 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14088E00C (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x1408915D0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IoFreeIrp @ 0x1402541B0 (IoFreeIrp.c)
 *     IopReleaseFileObjectLock @ 0x14025EEC0 (IopReleaseFileObjectLock.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     IoFreeMdl @ 0x1402C0A80 (IoFreeMdl.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall IopExceptionCleanup(PADAPTER_OBJECT DmaAdapter, PIRP Irp, PADAPTER_OBJECT a3, PVOID P)
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
  if ( (*(_DWORD *)&DmaAdapter[5].Version & 2) != 0 )
    IopReleaseFileObjectLock(DmaAdapter);
  if ( a3 )
    HalPutDmaAdapter(a3);
  if ( P )
    ExFreePoolWithTag(P, 0);
  HalPutDmaAdapter(DmaAdapter);
}
