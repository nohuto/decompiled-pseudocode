/*
 * XREFs of NtQueryVolumeInformationFile @ 0x14068EAF0
 * Callers:
 *     PfSnQueryVolumeInfo @ 0x1406BDB4C (PfSnQueryVolumeInfo.c)
 *     PfSnIsVolumeMounted @ 0x1406BDC88 (PfSnIsVolumeMounted.c)
 *     PfpVolumeOpenAndVerify @ 0x1406D111C (PfpVolumeOpenAndVerify.c)
 * Callees:
 *     IopReleaseFileObjectLock @ 0x140205FA0 (IopReleaseFileObjectLock.c)
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     IopReferenceFileObject @ 0x14020AF90 (IopReferenceFileObject.c)
 *     IoGetRelatedDeviceObject @ 0x14028F6E0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x14028F800 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x14028FBA0 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140297CB0 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     IopGetMountFlag @ 0x140298D00 (IopGetMountFlag.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     IopVerifierExAllocatePool_1 @ 0x1403547B0 (IopVerifierExAllocatePool_1.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     IopGetDriverPathInformation @ 0x1404FB744 (IopGetDriverPathInformation.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140648F18 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x140675860 (IopSynchronousServiceTail.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     IopSynchronousApiServiceTail @ 0x1406E826C (IopSynchronousApiServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x14088DD34 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14088E518 (IopExceptionCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  IRP *v34; // rax
  IRP *v35; // rbx
  PIO_STATUS_BLOCK v36; // rax
  struct _KEVENT *v37; // rcx
  __int64 v38; // rax
  struct _IRP *PoolWithQuota_0; // rax
  _DWORD *v40; // r9
  __int64 v41; // rax
  char v42; // r15
  unsigned __int8 v43; // di
  struct _KEVENT *Pool_1; // rax
  _BYTE *v45; // r12
  NTSTATUS DriverPathInformation; // eax
  char v47; // [rsp+40h] [rbp-78h] BYREF
  KPROCESSOR_MODE v48; // [rsp+41h] [rbp-77h]
  bool v49; // [rsp+42h] [rbp-76h]
  NTSTATUS v50; // [rsp+44h] [rbp-74h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-70h] BYREF
  PVOID P; // [rsp+50h] [rbp-68h]
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-60h]
  PIRP Irp; // [rsp+60h] [rbp-58h]
  __int64 v55; // [rsp+68h] [rbp-50h]
  _BYTE *v56; // [rsp+70h] [rbp-48h]
  __int128 v57; // [rsp+78h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+B8h] [rbp+0h]

  v5 = Length;
  v8 = 0;
  DmaAdapter = 0LL;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v55 = (__int64)CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v48 = PreviousMode;
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
    v49 = v15;
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
  v50 = result;
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
        MountFlag = IopGetMountFlag((__int64)DmaAdapter->DmaOperations, v19, v20, v21);
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
        v50 = 0;
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
      v47 = 0;
      if ( _InterlockedExchange((volatile __int32 *)(&v30[7].Size + 1), 1) )
      {
        v22 = DmaAdapter;
        v32 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)DmaAdapter, v48, (char)DeviceObject, v31, &v47);
      }
      else
      {
        if ( v31 )
          *(_BYTE *)(v31 + 26) |= 1u;
        v22 = DmaAdapter;
        ObfReferenceObject(DmaAdapter);
        v32 = 0;
      }
      if ( v47 )
        goto LABEL_63;
      v47 = 1;
      v23 = Irp;
    }
    else
    {
      v47 = 0;
    }
    if ( v11 != FileFsDriverPathInformation )
    {
      IopResetEvent((__int64)v22, v19, v20, v21);
      RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v22);
      DeviceObject = RelatedDeviceObject;
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
        RelatedDeviceObject = DeviceObject;
      }
      v34 = (IRP *)IopAllocateIrpExReturn(
                     (__int64)RelatedDeviceObject,
                     (unsigned __int8)RelatedDeviceObject->StackSize,
                     0LL,
                     retaddr);
      Irp = v34;
      if ( v34 )
      {
        v35 = v34;
        v34->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v22;
        v34->Tail.Overlay.Thread = (PETHREAD)v55;
        v34->RequestorMode = v48;
        v57 = 0LL;
        if ( v47 )
        {
          v36 = IoStatusBlock;
          v37 = 0LL;
        }
        else
        {
          v34->Flags = 4;
          v36 = (PIO_STATUS_BLOCK)&v57;
          v37 = (struct _KEVENT *)P;
        }
        v35->UserEvent = v37;
        v35->UserIosb = v36;
        v35->Overlay.AllocationSize.QuadPart = 0LL;
        v38 = (__int64)&v35->Tail.Overlay.CurrentStackLocation[-1];
        v55 = v38;
        *(_BYTE *)v38 = 10;
        *(_QWORD *)(v38 + 48) = v22;
        v35->UserBuffer = FsInformation;
        v35->AssociatedIrp.MasterIrp = 0LL;
        v35->MdlAddress = 0LL;
        PoolWithQuota_0 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0((__int64)v37, v5);
        v35->AssociatedIrp.MasterIrp = PoolWithQuota_0;
        if ( !IopDisableBufferedIoInit )
          memset(PoolWithQuota_0, 0, v5);
        v35->Flags |= 0x870u;
        v41 = v55;
        *(_DWORD *)(v55 + 8) = v5;
        *(_DWORD *)(v41 + 16) = v11;
        v42 = v47;
        v43 = v48;
        LOBYTE(v40) = 1;
        result = IopSynchronousServiceTail(DeviceObject, v35, (__int64)v22, v40, v48, v47, 2u);
        if ( !v42 )
          return IopSynchronousApiServiceTail((unsigned int)result, P, v35, v43, &v57, IoStatusBlock);
        return result;
      }
      if ( (*(_DWORD *)&v23->Type & 2) == 0 )
        ExFreePoolWithTag(P, 0);
      IopAllocateIrpCleanup(v22, 0LL);
      return -1073741670;
    }
    v56 = 0LL;
    v45 = IopVerifierExAllocatePoolWithQuota_0(v24, v5);
    v56 = v45;
    memmove(v45, FsInformation, v5);
    DriverPathInformation = IopGetDriverPathInformation((__int64)v22, (__int64)v45, v5);
    v32 = DriverPathInformation;
    v50 = DriverPathInformation;
    if ( DriverPathInformation < 0 )
      RtlRaiseStatus(DriverPathInformation);
    *(_BYTE *)FsInformation = *v45;
    IoStatusBlock->Status = 0;
    IoStatusBlock->Information = 12LL;
    if ( v45 )
      ExFreePoolWithTag(v45, 0);
    if ( (*(_DWORD *)&v22[5].Version & 2) != 0 )
      IopReleaseFileObjectLock(v22);
LABEL_63:
    HalPutDmaAdapter(v22);
    return v32;
  }
  return result;
}
