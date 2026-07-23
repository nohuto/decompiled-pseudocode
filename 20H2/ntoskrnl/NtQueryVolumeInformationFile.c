/*
 * XREFs of NtQueryVolumeInformationFile @ 0x1406077E0
 * Callers:
 *     PfSnQueryVolumeInfo @ 0x1406E8494 (PfSnQueryVolumeInfo.c)
 *     PfSnIsVolumeMounted @ 0x1406E85D0 (PfSnIsVolumeMounted.c)
 *     PfpVolumeOpenAndVerify @ 0x1406F1C64 (PfpVolumeOpenAndVerify.c)
 * Callees:
 *     IopVerifierExAllocatePoolWithQuota @ 0x140209FF0 (IopVerifierExAllocatePoolWithQuota.c)
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     IopGetMountFlag @ 0x14020FD40 (IopGetMountFlag.c)
 *     IoGetRelatedDeviceObject @ 0x140211290 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402113B0 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140211750 (IopResetEvent.c)
 *     IopReferenceFileObject @ 0x14021EA80 (IopReferenceFileObject.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     IopReleaseFileObjectLock @ 0x1402238A0 (IopReleaseFileObjectLock.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     IopVerifierExAllocatePool_1 @ 0x140325470 (IopVerifierExAllocatePool_1.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     IopGetDriverPathInformation @ 0x1404FF018 (IopGetDriverPathInformation.c)
 *     IopExceptionCleanupEx @ 0x1405CBC64 (IopExceptionCleanupEx.c)
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x1406107D0 (IopSynchronousServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14064A5E0 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousApiServiceTail @ 0x1406BCEBC (IopSynchronousApiServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x140893884 (IopAllocateIrpCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  __int64 v18; // rcx
  PADAPTER_OBJECT v19; // rdi
  PADAPTER_OBJECT v20; // rbx
  int v21; // r14d
  char MountFlag; // cl
  _DMA_OPERATIONS *DmaOperations; // rbx
  int FreeAdapterChannel_high; // eax
  struct _KTHREAD *v25; // rax
  PADAPTER_OBJECT v26; // rbx
  __int64 v27; // rax
  NTSTATUS v28; // ebx
  _BYTE *PoolWithQuota; // r14
  NTSTATUS DriverPathInformation; // eax
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  struct _KEVENT *Pool_1; // rax
  struct _KEVENT *v33; // r14
  IRP *v34; // rax
  __int64 v35; // rcx
  IRP *v36; // rbx
  PIO_STATUS_BLOCK v37; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  struct _IRP *v39; // rax
  char v40; // si
  unsigned __int8 v41; // r14
  char v42; // [rsp+40h] [rbp-78h] BYREF
  KPROCESSOR_MODE v43; // [rsp+41h] [rbp-77h]
  bool v44; // [rsp+42h] [rbp-76h]
  NTSTATUS v45; // [rsp+44h] [rbp-74h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-70h] BYREF
  PVOID P; // [rsp+50h] [rbp-68h]
  _BYTE *v48; // [rsp+58h] [rbp-60h]
  PADAPTER_OBJECT v49; // [rsp+60h] [rbp-58h]
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-50h]
  struct _KTHREAD *v51; // [rsp+70h] [rbp-48h]
  PIRP Irp; // [rsp+78h] [rbp-40h]
  __int128 v53; // [rsp+80h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+B8h] [rbp+0h]

  DmaAdapter = 0LL;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v51 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v43 = PreviousMode;
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
    v44 = v16;
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
  v45 = result;
  if ( result < 0 )
    return result;
  v19 = DmaAdapter;
  v20 = DmaAdapter + 5;
  v49 = DmaAdapter + 5;
  v21 = *(_DWORD *)&DmaAdapter[5].Version;
  if ( (v21 & 0x800) != 0 )
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
        v45 = 0;
        HalPutDmaAdapter(v19);
        return 0;
      }
      else
      {
        HalPutDmaAdapter(v19);
        return -1073741820;
      }
    }
    goto LABEL_32;
  }
  if ( v10 == FileFsDeviceInformation )
    goto LABEL_23;
LABEL_32:
  if ( (v21 & 2) != 0 )
  {
    v25 = KeGetCurrentThread();
    --v25->KernelApcDisable;
    v26 = DmaAdapter;
    v27 = KeAbPreAcquire((ULONG_PTR)&DmaAdapter[8], 0LL, 0);
    v42 = 0;
    if ( _InterlockedExchange((volatile __int32 *)(&v26[7].Size + 1), 1) )
    {
      v19 = DmaAdapter;
      v28 = IopWaitAndAcquireFileObjectLock(DmaAdapter, (__int64)&v42);
    }
    else
    {
      if ( v27 )
        *(_BYTE *)(v27 + 26) |= 1u;
      v19 = DmaAdapter;
      ObfReferenceObject(DmaAdapter);
      v28 = 0;
    }
    if ( v42 )
      goto LABEL_47;
    v42 = 1;
    v20 = v49;
  }
  else
  {
    v42 = 0;
  }
  if ( v10 == FileFsDriverPathInformation )
  {
    v48 = 0LL;
    PoolWithQuota = IopVerifierExAllocatePoolWithQuota(v18, Length);
    v48 = PoolWithQuota;
    memmove(PoolWithQuota, FsInformation, Length);
    DriverPathInformation = IopGetDriverPathInformation((__int64)v19, (__int64)PoolWithQuota, Length);
    v28 = DriverPathInformation;
    v45 = DriverPathInformation;
    if ( DriverPathInformation < 0 )
      RtlRaiseStatus(DriverPathInformation);
    *(_BYTE *)FsInformation = *PoolWithQuota;
    IoStatusBlock->Status = 0;
    IoStatusBlock->Information = 12LL;
    if ( PoolWithQuota )
      ExFreePoolWithTag(PoolWithQuota, 0);
    if ( (*(_DWORD *)&v19[5].Version & 2) != 0 )
      IopReleaseFileObjectLock(v19);
LABEL_47:
    HalPutDmaAdapter(v19);
    return v28;
  }
  IopResetEvent((__int64)v19);
  RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v19);
  DeviceObject = RelatedDeviceObject;
  if ( (*(_DWORD *)&v20->Version & 2) != 0 )
  {
    v33 = 0LL;
  }
  else
  {
    Pool_1 = (struct _KEVENT *)IopVerifierExAllocatePool_1();
    v33 = Pool_1;
    P = Pool_1;
    if ( !Pool_1 )
    {
      HalPutDmaAdapter(v19);
      return -1073741670;
    }
    KeInitializeEvent(Pool_1, SynchronizationEvent, 0);
    RelatedDeviceObject = DeviceObject;
  }
  v34 = (IRP *)IopAllocateIrpExReturn(
                 (__int64)RelatedDeviceObject,
                 (unsigned __int8)RelatedDeviceObject->StackSize,
                 0LL,
                 retaddr);
  v36 = v34;
  Irp = v34;
  if ( !v34 )
  {
    if ( (*(_DWORD *)&v49->Version & 2) == 0 )
      ExFreePoolWithTag(v33, 0);
    IopAllocateIrpCleanup(v19, 0LL);
    return -1073741670;
  }
  v34->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v19;
  v34->Tail.Overlay.Thread = v51;
  v34->RequestorMode = v43;
  v53 = 0LL;
  if ( v42 )
  {
    v37 = IoStatusBlock;
    v33 = 0LL;
  }
  else
  {
    v34->Flags = 4;
    v37 = (PIO_STATUS_BLOCK)&v53;
  }
  v36->UserEvent = v33;
  v36->UserIosb = v37;
  v36->Overlay.AllocationSize.QuadPart = 0LL;
  CurrentStackLocation = v36->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = 10;
  CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v19;
  v36->UserBuffer = FsInformation;
  v36->AssociatedIrp.MasterIrp = 0LL;
  v36->MdlAddress = 0LL;
  v39 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v35, Length);
  v36->AssociatedIrp.MasterIrp = v39;
  if ( !IopDisableBufferedIoInit )
    memset(v39, 0, Length);
  v36->Flags |= 0x870u;
  CurrentStackLocation[-1].Parameters.Read.Length = Length;
  CurrentStackLocation[-1].Parameters.Create.Options = v10;
  v40 = v42;
  v41 = v43;
  result = IopSynchronousServiceTail(DeviceObject, v36, v43, v42, 2);
  if ( !v40 )
    return IopSynchronousApiServiceTail((unsigned int)result, P, v36, v41, &v53, IoStatusBlock);
  return result;
}
