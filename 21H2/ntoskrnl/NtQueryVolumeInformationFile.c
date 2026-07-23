/*
 * XREFs of NtQueryVolumeInformationFile @ 0x1406456E0
 * Callers:
 *     PfpVolumeOpenAndVerify @ 0x1406746EC (PfpVolumeOpenAndVerify.c)
 *     PfSnIsVolumeMounted @ 0x140676234 (PfSnIsVolumeMounted.c)
 *     PfSnQueryVolumeInfo @ 0x140676938 (PfSnQueryVolumeInfo.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140236060 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     IopVerifierExAllocatePool_1 @ 0x14024454C (IopVerifierExAllocatePool_1.c)
 *     IopGetMountFlag @ 0x14026A270 (IopGetMountFlag.c)
 *     IopReferenceFileObject @ 0x140353770 (IopReferenceFileObject.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     IopReleaseFileObjectLock @ 0x1403584A0 (IopReleaseFileObjectLock.c)
 *     IoGetRelatedDeviceObject @ 0x14035C670 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x14035C790 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x14035CB30 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     IopGetDriverPathInformation @ 0x140500B1C (IopGetDriverPathInformation.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 *     IopSynchronousApiServiceTail @ 0x1405F7CBC (IopSynchronousApiServiceTail.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406FEF98 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x140716160 (IopSynchronousServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x140890FB4 (IopAllocateIrpCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtQueryVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  struct _KTHREAD *CurrentThread; // r8
  KPROCESSOR_MODE PreviousMode; // di
  FS_INFORMATION_CLASS v10; // r15d
  ULONG v11; // eax
  NTSTATUS result; // eax
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  __int16 v15; // ax
  bool v16; // al
  ULONG v17; // r8d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _DWORD *v21; // r9
  PADAPTER_OBJECT v22; // rdi
  PADAPTER_OBJECT v23; // rbx
  int v24; // r14d
  char MountFlag; // cl
  _DMA_OPERATIONS *DmaOperations; // rbx
  int FreeAdapterChannel_high; // eax
  struct _KTHREAD *v28; // rax
  PADAPTER_OBJECT v29; // rbx
  PRTL_BALANCED_NODE v30; // rax
  NTSTATUS v31; // ebx
  _BYTE *PoolWithQuota_0; // r14
  NTSTATUS DriverPathInformation; // eax
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  struct _KEVENT *Pool_1; // rax
  struct _KEVENT *v36; // r14
  IRP *v37; // rax
  __int64 v38; // rcx
  IRP *v39; // rbx
  PIO_STATUS_BLOCK v40; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  struct _IRP *v42; // rax
  char v43; // si
  KPROCESSOR_MODE v44; // r14
  char v45; // [rsp+40h] [rbp-78h] BYREF
  KPROCESSOR_MODE v46; // [rsp+41h] [rbp-77h]
  bool v47; // [rsp+42h] [rbp-76h]
  NTSTATUS v48; // [rsp+44h] [rbp-74h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-70h] BYREF
  PVOID P; // [rsp+50h] [rbp-68h]
  _BYTE *v51; // [rsp+58h] [rbp-60h]
  PADAPTER_OBJECT v52; // [rsp+60h] [rbp-58h]
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-50h]
  struct _KTHREAD *v54; // [rsp+70h] [rbp-48h]
  PIRP Irp; // [rsp+78h] [rbp-40h]
  __int128 v56; // [rsp+80h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+B8h] [rbp+0h]

  DmaAdapter = 0LL;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v54 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v46 = PreviousMode;
  if ( PreviousMode )
  {
    v10 = FsInformationClass;
    if ( (unsigned int)FsInformationClass >= FileFsMaximumInformation )
      return -1073741821;
    v11 = *((unsigned __int8 *)IopQueryFsOperationLength + (int)FsInformationClass);
    if ( !(_BYTE)v11 )
      return -1073741821;
    if ( Length < v11 )
      return -1073741820;
    v13 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v13 = (__int64)IoStatusBlock;
    *(_DWORD *)v13 = *(_DWORD *)v13;
    v14 = CurrentThread->ApcState.Process[1].AffinityPadding[10];
    v16 = 0;
    if ( v14 )
    {
      v15 = *(_WORD *)(v14 + 8);
      if ( v15 == 332 || v15 == 452 )
        v16 = 1;
    }
    v47 = v16;
    v17 = 4;
    if ( !v16 )
      v17 = *((unsigned __int8 *)IopQuerySetFsAlignmentRequirement + (int)FsInformationClass);
    ProbeForWrite(FsInformation, Length, v17);
  }
  else
  {
    v10 = FsInformationClass;
  }
  result = IopReferenceFileObject(FileHandle, IopQueryFsOperationAccess[v10], PreviousMode, (PVOID *)&DmaAdapter, 0LL);
  v48 = result;
  if ( result < 0 )
    return result;
  v22 = DmaAdapter;
  v23 = DmaAdapter + 5;
  v52 = DmaAdapter + 5;
  v24 = *(_DWORD *)&DmaAdapter[5].Version;
  if ( (v24 & 0x800) != 0 )
  {
    if ( v10 != FileFsDeviceInformation )
    {
      HalPutDmaAdapter(DmaAdapter);
      return -1073741808;
    }
LABEL_23:
    if ( (*(_DWORD *)&DmaAdapter[5].Version & 0x800) != 0 || LODWORD(DmaAdapter->DmaOperations->GetDmaAlignment) != 20 )
    {
      MountFlag = 0;
      DmaOperations = DmaAdapter->DmaOperations;
      if ( DmaOperations->FreeMapRegisters )
        MountFlag = IopGetMountFlag((__int64)DmaAdapter->DmaOperations);
      if ( Length >= 8 )
      {
        *(_DWORD *)FsInformation = DmaOperations->GetDmaAlignment;
        FreeAdapterChannel_high = HIDWORD(DmaOperations->FreeAdapterChannel);
        *((_DWORD *)FsInformation + 1) = FreeAdapterChannel_high;
        if ( MountFlag )
          *((_DWORD *)FsInformation + 1) = FreeAdapterChannel_high | 0x20;
        IoStatusBlock->Status = 0;
        IoStatusBlock->Information = 8LL;
        v48 = 0;
        HalPutDmaAdapter(v22);
        return 0;
      }
      else
      {
        HalPutDmaAdapter(v22);
        return -1073741820;
      }
    }
    goto LABEL_32;
  }
  if ( v10 == FileFsDeviceInformation )
    goto LABEL_23;
LABEL_32:
  if ( (v24 & 2) != 0 )
  {
    v28 = KeGetCurrentThread();
    --v28->KernelApcDisable;
    v29 = DmaAdapter;
    v30 = KeAbPreAcquire((ULONG_PTR)&DmaAdapter[8], 0LL, 0);
    v45 = 0;
    if ( _InterlockedExchange((volatile __int32 *)(&v29[7].Size + 1), 1) )
    {
      v22 = DmaAdapter;
      v31 = IopWaitAndAcquireFileObjectLock(DmaAdapter, (__int64)&v45);
    }
    else
    {
      if ( v30 )
        BYTE2(v30[1].Left) |= 1u;
      v22 = DmaAdapter;
      ObfReferenceObject(DmaAdapter);
      v31 = 0;
    }
    if ( v45 )
      goto LABEL_47;
    v45 = 1;
    v23 = v52;
  }
  else
  {
    v45 = 0;
  }
  if ( v10 == FileFsDriverPathInformation )
  {
    v51 = 0LL;
    PoolWithQuota_0 = IopVerifierExAllocatePoolWithQuota_0(v19, Length);
    v51 = PoolWithQuota_0;
    memmove(PoolWithQuota_0, FsInformation, Length);
    DriverPathInformation = IopGetDriverPathInformation((__int64)v22, (__int64)PoolWithQuota_0, Length);
    v31 = DriverPathInformation;
    v48 = DriverPathInformation;
    if ( DriverPathInformation < 0 )
      RtlRaiseStatus(DriverPathInformation);
    *(_BYTE *)FsInformation = *PoolWithQuota_0;
    IoStatusBlock->Status = 0;
    IoStatusBlock->Information = 12LL;
    if ( PoolWithQuota_0 )
      ExFreePoolWithTag(PoolWithQuota_0, 0);
    if ( (*(_DWORD *)&v22[5].Version & 2) != 0 )
      IopReleaseFileObjectLock(v22);
LABEL_47:
    HalPutDmaAdapter(v22);
    return v31;
  }
  IopResetEvent((__int64)v22, v18, v20, v21);
  RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v22);
  DeviceObject = RelatedDeviceObject;
  if ( (*(_DWORD *)&v23->Version & 2) != 0 )
  {
    v36 = 0LL;
  }
  else
  {
    Pool_1 = (struct _KEVENT *)IopVerifierExAllocatePool_1();
    v36 = Pool_1;
    P = Pool_1;
    if ( !Pool_1 )
    {
      HalPutDmaAdapter(v22);
      return -1073741670;
    }
    KeInitializeEvent(Pool_1, SynchronizationEvent, 0);
    RelatedDeviceObject = DeviceObject;
  }
  v37 = (IRP *)IopAllocateIrpExReturn(
                 (__int64)RelatedDeviceObject,
                 (unsigned __int8)RelatedDeviceObject->StackSize,
                 0LL,
                 retaddr);
  v39 = v37;
  Irp = v37;
  if ( !v37 )
  {
    if ( (*(_DWORD *)&v52->Version & 2) == 0 )
      ExFreePoolWithTag(v36, 0);
    IopAllocateIrpCleanup(v22, 0LL);
    return -1073741670;
  }
  v37->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v22;
  v37->Tail.Overlay.Thread = v54;
  v37->RequestorMode = v46;
  v56 = 0LL;
  if ( v45 )
  {
    v40 = IoStatusBlock;
    v36 = 0LL;
  }
  else
  {
    v37->Flags = 4;
    v40 = (PIO_STATUS_BLOCK)&v56;
  }
  v39->UserEvent = v36;
  v39->UserIosb = v40;
  v39->Overlay.AllocationSize.QuadPart = 0LL;
  CurrentStackLocation = v39->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = 10;
  CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v22;
  v39->UserBuffer = FsInformation;
  v39->AssociatedIrp.MasterIrp = 0LL;
  v39->MdlAddress = 0LL;
  v42 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(v38, Length);
  v39->AssociatedIrp.MasterIrp = v42;
  if ( !IopDisableBufferedIoInit )
    memset(v42, 0, Length);
  v39->Flags |= 0x870u;
  CurrentStackLocation[-1].Parameters.Read.Length = Length;
  CurrentStackLocation[-1].Parameters.Create.Options = v10;
  v43 = v45;
  v44 = v46;
  result = IopSynchronousServiceTail(DeviceObject, v39, v46, v45, 2);
  if ( !v43 )
    return IopSynchronousApiServiceTail(result, P, v39, v44, (unsigned int *)&v56, IoStatusBlock);
  return result;
}
