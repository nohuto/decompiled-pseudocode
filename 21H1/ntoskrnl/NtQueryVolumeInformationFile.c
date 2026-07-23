/*
 * XREFs of NtQueryVolumeInformationFile @ 0x1405F5260
 * Callers:
 *     PfpVolumeOpenAndVerify @ 0x1405D27B4 (PfpVolumeOpenAndVerify.c)
 *     PfSnIsVolumeMounted @ 0x140670844 (PfSnIsVolumeMounted.c)
 *     PfSnQueryVolumeInfo @ 0x140670F48 (PfSnQueryVolumeInfo.c)
 * Callees:
 *     IopVerifierExAllocatePoolWithQuota @ 0x1402054FC (IopVerifierExAllocatePoolWithQuota.c)
 *     IopGetMountFlag @ 0x140242060 (IopGetMountFlag.c)
 *     IoGetRelatedDeviceObject @ 0x140252E60 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140252F80 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140253320 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     IopReleaseFileObjectLock @ 0x14025EEC0 (IopReleaseFileObjectLock.c)
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     IopReferenceFileObject @ 0x140263EB0 (IopReferenceFileObject.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     IopVerifierExAllocatePool_1 @ 0x140316D0C (IopVerifierExAllocatePool_1.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     IopGetDriverPathInformation @ 0x1404FB0F4 (IopGetDriverPathInformation.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x1405FD780 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x1406C796C (IopSynchronousApiServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14070A3B8 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x14088CA14 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14088D1F8 (IopExceptionCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtQueryVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  SIZE_T v5; // r13
  NTSTATUS v8; // edi
  struct _KTHREAD *CurrentThread; // r8
  KPROCESSOR_MODE PreviousMode; // si
  FS_INFORMATION_CLASS v11; // r12d
  ULONG v12; // eax
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  bool v15; // al
  ULONG v16; // r8d
  __int16 v17; // ax
  NTSTATUS result; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  _DWORD *v21; // r9
  PADAPTER_OBJECT v22; // rsi
  PIRP v23; // rbx
  __int64 v24; // rcx
  char MountFlag; // cl
  _DMA_OPERATIONS *DmaOperations; // rbx
  int FreeAdapterChannel_high; // eax
  unsigned int v28; // ecx
  struct _KTHREAD *v29; // rax
  PADAPTER_OBJECT v30; // rbx
  __int64 v31; // rax
  NTSTATUS v32; // ebx
  IRP *v33; // rax
  IRP *v34; // rbx
  PIO_STATUS_BLOCK v35; // rax
  struct _KEVENT *v36; // rcx
  __int64 v37; // rax
  struct _IRP *PoolWithQuota; // rax
  __int64 v39; // rax
  char v40; // r15
  unsigned __int8 v41; // di
  struct _KEVENT *Pool_1; // rax
  _BYTE *v43; // r12
  NTSTATUS DriverPathInformation; // eax
  char v45; // [rsp+40h] [rbp-78h] BYREF
  KPROCESSOR_MODE v46; // [rsp+41h] [rbp-77h]
  bool v47; // [rsp+42h] [rbp-76h]
  NTSTATUS v48; // [rsp+44h] [rbp-74h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-70h] BYREF
  PVOID P; // [rsp+50h] [rbp-68h]
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-60h]
  PIRP Irp; // [rsp+60h] [rbp-58h]
  __int64 v53; // [rsp+68h] [rbp-50h]
  _BYTE *v54; // [rsp+70h] [rbp-48h]
  __int128 v55; // [rsp+78h] [rbp-40h] BYREF

  v5 = Length;
  v8 = 0;
  DmaAdapter = 0LL;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v53 = (__int64)CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v46 = PreviousMode;
  if ( PreviousMode )
  {
    v11 = FsInformationClass;
    if ( (unsigned int)FsInformationClass >= FileFsMaximumInformation )
      return -1073741821;
    v12 = *((unsigned __int8 *)IopQueryFsOperationLength + (int)FsInformationClass);
    if ( !(_BYTE)v12 )
      return -1073741821;
    if ( Length < v12 )
      return -1073741820;
    v13 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v13 = *(_DWORD *)v13;
    v14 = CurrentThread->ApcState.Process[1].AffinityPadding[10];
    v15 = 0;
    if ( v14 )
    {
      v17 = *(_WORD *)(v14 + 8);
      if ( v17 == 332 || v17 == 452 )
        v15 = 1;
    }
    v47 = v15;
    if ( v15 )
      v16 = 4;
    else
      v16 = *((unsigned __int8 *)IopQuerySetFsAlignmentRequirement + (int)FsInformationClass);
    ProbeForWrite(FsInformation, Length, v16);
  }
  else
  {
    v11 = FsInformationClass;
  }
  result = IopReferenceFileObject(FileHandle, IopQueryFsOperationAccess[v11], PreviousMode, (PVOID *)&DmaAdapter, 0LL);
  v48 = result;
  if ( result >= 0 )
  {
    v22 = DmaAdapter;
    v23 = (PIRP)&DmaAdapter[5];
    Irp = (PIRP)&DmaAdapter[5];
    v24 = *(unsigned int *)&DmaAdapter[5].Version;
    if ( (*(_DWORD *)&DmaAdapter[5].Version & 0x800) != 0 )
    {
      if ( v11 != FileFsDeviceInformation )
      {
        HalPutDmaAdapter(DmaAdapter);
        return -1073741808;
      }
    }
    else if ( v11 != FileFsDeviceInformation )
    {
      goto LABEL_30;
    }
    if ( (*(_DWORD *)&DmaAdapter[5].Version & 0x800) != 0 || LODWORD(DmaAdapter->DmaOperations->GetDmaAlignment) != 20 )
    {
      MountFlag = 0;
      DmaOperations = DmaAdapter->DmaOperations;
      if ( DmaOperations->FreeMapRegisters )
        MountFlag = IopGetMountFlag((__int64)DmaAdapter->DmaOperations);
      if ( (unsigned int)v5 < 8 )
      {
        v8 = -1073741820;
      }
      else
      {
        *(_DWORD *)FsInformation = DmaOperations->GetDmaAlignment;
        FreeAdapterChannel_high = HIDWORD(DmaOperations->FreeAdapterChannel);
        *((_DWORD *)FsInformation + 1) = FreeAdapterChannel_high;
        if ( MountFlag )
          *((_DWORD *)FsInformation + 1) = FreeAdapterChannel_high | 0x20;
        IoStatusBlock->Status = 0;
        IoStatusBlock->Information = 8LL;
        v48 = 0;
      }
      HalPutDmaAdapter(v22);
      return v8;
    }
LABEL_30:
    if ( (v24 & 2) != 0 )
    {
      v28 = (unsigned int)v24 >> 2;
      LOBYTE(v28) = v28 & 1;
      LODWORD(DeviceObject) = v28;
      v29 = KeGetCurrentThread();
      --v29->KernelApcDisable;
      v30 = DmaAdapter;
      v31 = KeAbPreAcquire((ULONG_PTR)&DmaAdapter[8], 0LL, 0);
      v45 = 0;
      if ( _InterlockedExchange((volatile __int32 *)(&v30[7].Size + 1), 1) )
      {
        v22 = DmaAdapter;
        v32 = IopWaitAndAcquireFileObjectLock(DmaAdapter, (__int64)&v45);
      }
      else
      {
        if ( v31 )
          *(_BYTE *)(v31 + 26) |= 1u;
        v22 = DmaAdapter;
        ObfReferenceObject(DmaAdapter);
        v32 = 0;
      }
      if ( v45 )
        goto LABEL_63;
      v45 = 1;
      v23 = Irp;
    }
    else
    {
      v45 = 0;
    }
    if ( v11 != FileFsDriverPathInformation )
    {
      IopResetEvent((__int64)v22, v19, v20, v21);
      DeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v22);
      if ( (*(_DWORD *)&v23->Type & 2) == 0 )
      {
        Pool_1 = (struct _KEVENT *)IopVerifierExAllocatePool_1();
        P = Pool_1;
        if ( !Pool_1 )
        {
          HalPutDmaAdapter(v22);
          return -1073741670;
        }
        KeInitializeEvent(Pool_1, SynchronizationEvent, 0);
      }
      v33 = (IRP *)IopAllocateIrpExReturn();
      Irp = v33;
      if ( v33 )
      {
        v34 = v33;
        v33->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v22;
        v33->Tail.Overlay.Thread = (PETHREAD)v53;
        v33->RequestorMode = v46;
        v55 = 0LL;
        if ( v45 )
        {
          v35 = IoStatusBlock;
          v36 = 0LL;
        }
        else
        {
          v33->Flags = 4;
          v35 = (PIO_STATUS_BLOCK)&v55;
          v36 = (struct _KEVENT *)P;
        }
        v34->UserEvent = v36;
        v34->UserIosb = v35;
        v34->Overlay.AllocationSize.QuadPart = 0LL;
        v37 = (__int64)&v34->Tail.Overlay.CurrentStackLocation[-1];
        v53 = v37;
        *(_BYTE *)v37 = 10;
        *(_QWORD *)(v37 + 48) = v22;
        v34->UserBuffer = FsInformation;
        v34->AssociatedIrp.MasterIrp = 0LL;
        v34->MdlAddress = 0LL;
        PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota((__int64)v36, v5);
        v34->AssociatedIrp.MasterIrp = PoolWithQuota;
        if ( !IopDisableBufferedIoInit )
          memset(PoolWithQuota, 0, v5);
        v34->Flags |= 0x870u;
        v39 = v53;
        *(_DWORD *)(v53 + 8) = v5;
        *(_DWORD *)(v39 + 16) = v11;
        v40 = v45;
        v41 = v46;
        result = IopSynchronousServiceTail(DeviceObject, v34, v46, v45, 2);
        if ( !v40 )
          return IopSynchronousApiServiceTail((unsigned int)result, P, v34, v41, &v55, IoStatusBlock);
        return result;
      }
      if ( (*(_DWORD *)&v23->Type & 2) == 0 )
        ExFreePoolWithTag(P, 0);
      IopAllocateIrpCleanup(v22, 0LL);
      return -1073741670;
    }
    v54 = 0LL;
    v43 = IopVerifierExAllocatePoolWithQuota(v24, v5);
    v54 = v43;
    memmove(v43, FsInformation, v5);
    DriverPathInformation = IopGetDriverPathInformation((__int64)v22, (__int64)v43, v5);
    v32 = DriverPathInformation;
    v48 = DriverPathInformation;
    if ( DriverPathInformation < 0 )
      RtlRaiseStatus(DriverPathInformation);
    *(_BYTE *)FsInformation = *v43;
    IoStatusBlock->Status = 0;
    IoStatusBlock->Information = 12LL;
    if ( v43 )
      ExFreePoolWithTag(v43, 0);
    if ( (*(_DWORD *)&v22[5].Version & 2) != 0 )
      IopReleaseFileObjectLock(v22);
LABEL_63:
    HalPutDmaAdapter(v22);
    return v32;
  }
  return result;
}
