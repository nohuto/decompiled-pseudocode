/*
 * XREFs of NtUnlockFile @ 0x1406DF1B0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     IopVerifierExAllocatePool @ 0x140228EE8 (IopVerifierExAllocatePool.c)
 *     IoGetRelatedDeviceObject @ 0x14028F6E0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x14028F800 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x14028FBA0 (IopResetEvent.c)
 *     IoGetAttachedDevice @ 0x140290C30 (IoGetAttachedDevice.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     IopVerifierExAllocatePoolWithQuota_4 @ 0x140503260 (IopVerifierExAllocatePoolWithQuota_4.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140648F18 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x140675860 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x1406E826C (IopSynchronousApiServiceTail.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x14088DD34 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14088E518 (IopExceptionCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     VfFastIoCheckState @ 0x1409C69A4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409C6A7C (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtUnlockFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER ByteOffset,
        PLARGE_INTEGER Length,
        ULONG Key)
{
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v9; // rbx
  PADAPTER_OBJECT v10; // r12
  __int64 v11; // rcx
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v13; // r15
  __int64 FastIoDispatch; // rcx
  __int64 (__fastcall *v15)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, __int128 *, struct _DEVICE_OBJECT *); // rsi
  void *v16; // rdi
  char v17; // r14
  char v18; // r14
  char v19; // di
  struct _KTHREAD *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  _DWORD *v25; // r9
  NTSTATUS v26; // edi
  struct _KEVENT *v27; // rsi
  struct _KEVENT *Pool; // rax
  __int64 v29; // rdx
  __int64 Irp; // rax
  IRP *v31; // rdi
  PIO_STATUS_BLOCK v32; // rax
  struct _KEVENT *v33; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  CHAR *PoolWithQuota_4; // rax
  __int64 v36; // r9
  KPROCESSOR_MODE PreviousMode; // [rsp+40h] [rbp-78h]
  _BYTE DmaAdapter[15]; // [rsp+41h] [rbp-77h] BYREF
  struct _KEVENT *HandleInformation; // [rsp+50h] [rbp-68h] BYREF
  LONGLONG v40; // [rsp+58h] [rbp-60h] BYREF
  LONGLONG QuadPart; // [rsp+60h] [rbp-58h] BYREF
  PADAPTER_OBJECT v42; // [rsp+68h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-48h]
  __int128 v44; // [rsp+78h] [rbp-40h] BYREF
  __int128 v45; // [rsp+88h] [rbp-30h] BYREF
  __int64 retaddr; // [rsp+B8h] [rbp+0h]

  QuadPart = 0LL;
  v40 = 0LL;
  HandleInformation = 0LL;
  v45 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  *(_QWORD *)&DmaAdapter[7] = 0LL;
  result = ObReferenceObjectByHandle(
             FileHandle,
             0,
             (POBJECT_TYPE)IoFileObjectType,
             PreviousMode,
             (PVOID *)&DmaAdapter[7],
             (POBJECT_HANDLE_INFORMATION)&HandleInformation);
  v9 = *(struct _FILE_OBJECT **)&DmaAdapter[7];
  v10 = *(PADAPTER_OBJECT *)&DmaAdapter[7];
  v42 = *(PADAPTER_OBJECT *)&DmaAdapter[7];
  if ( result < 0 )
    return result;
  if ( PreviousMode )
  {
    if ( (BYTE4(HandleInformation) & 3) == 0 )
    {
      HalPutDmaAdapter(*(PADAPTER_OBJECT *)&DmaAdapter[7]);
      return -1073741790;
    }
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v11 = (__int64)IoStatusBlock;
    *(_DWORD *)v11 = *(_DWORD *)v11;
    if ( ((unsigned __int8)ByteOffset & 3) != 0 || (QuadPart = ByteOffset->QuadPart, ((unsigned __int8)Length & 3) != 0) )
      ExRaiseDatatypeMisalignment();
    v40 = Length->QuadPart;
    v10 = v42;
    v9 = *(struct _FILE_OBJECT **)&DmaAdapter[7];
  }
  else
  {
    QuadPart = ByteOffset->QuadPart;
    v40 = Length->QuadPart;
  }
  if ( (v9->Flags & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(v9->DeviceObject);
  else
    AttachedDevice = IoGetRelatedDeviceObject(v9);
  v13 = AttachedDevice;
  FastIoDispatch = (__int64)AttachedDevice->DriverObject->FastIoDispatch;
  if ( FastIoDispatch )
  {
    v15 = *(__int64 (__fastcall **)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, __int128 *, struct _DEVICE_OBJECT *))(FastIoDispatch + 56);
    if ( v15 )
    {
      v44 = 0LL;
      if ( (MmVerifierData & 0x10) != 0 )
        v16 = (void *)VfFastIoSnapState();
      else
        v16 = 0LL;
      v17 = v15(v9, &QuadPart, &v40, CurrentThread->ApcState.Process, Key, &v44, v13);
      if ( v16 )
        VfFastIoCheckState(v16);
      if ( v17 )
      {
        *(_OWORD *)&IoStatusBlock->Status = v44;
        HalPutDmaAdapter((PADAPTER_OBJECT)v9);
        return v44;
      }
    }
  }
  if ( (v9->Flags & 2) != 0 )
  {
    v18 = 1;
    v19 = (v9->Flags & 4) != 0;
    v20 = KeGetCurrentThread();
    --v20->KernelApcDisable;
    v21 = *(_QWORD *)&DmaAdapter[7];
    v22 = KeAbPreAcquire(*(_QWORD *)&DmaAdapter[7] + 128LL, 0LL, 0);
    DmaAdapter[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)(v21 + 116), 1) )
    {
      v9 = *(struct _FILE_OBJECT **)&DmaAdapter[7];
      v26 = IopWaitAndAcquireFileObjectLock(
              *(volatile signed __int32 **)&DmaAdapter[7],
              PreviousMode,
              v19,
              v22,
              DmaAdapter);
    }
    else
    {
      if ( v22 )
        *(_BYTE *)(v22 + 26) |= 1u;
      v9 = *(struct _FILE_OBJECT **)&DmaAdapter[7];
      ObfReferenceObject(*(PVOID *)&DmaAdapter[7]);
      v26 = 0;
    }
    if ( !DmaAdapter[0] )
    {
      v27 = 0LL;
      HandleInformation = 0LL;
      v10 = v42;
      goto LABEL_37;
    }
LABEL_35:
    HalPutDmaAdapter((PADAPTER_OBJECT)v9);
    return v26;
  }
  Pool = (struct _KEVENT *)IopVerifierExAllocatePool(FastIoDispatch, 0x18uLL);
  v27 = Pool;
  HandleInformation = Pool;
  if ( !Pool )
  {
    v26 = -1073741670;
    goto LABEL_35;
  }
  KeInitializeEvent(Pool, SynchronizationEvent, 0);
  v18 = 0;
LABEL_37:
  IopResetEvent((__int64)v9, v23, v24, v25);
  LOBYTE(v29) = v13->StackSize;
  Irp = IopAllocateIrpExReturn((__int64)v13, v29, 0LL, retaddr);
  v31 = (IRP *)Irp;
  *(_QWORD *)&DmaAdapter[7] = Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = v9;
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_BYTE *)(Irp + 64) = PreviousMode;
    if ( v18 )
    {
      v32 = IoStatusBlock;
      v33 = 0LL;
    }
    else
    {
      *(_DWORD *)(Irp + 16) = 4;
      v32 = (PIO_STATUS_BLOCK)&v45;
      v33 = v27;
    }
    v31->UserEvent = v33;
    v31->UserIosb = v32;
    v31->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v31->Tail.Overlay.CurrentStackLocation;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 529;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v10;
    PoolWithQuota_4 = (CHAR *)IopVerifierExAllocatePoolWithQuota_4();
    *(_QWORD *)PoolWithQuota_4 = v40;
    v31->Tail.Overlay.AuxiliaryBuffer = PoolWithQuota_4;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)PoolWithQuota_4;
    CurrentStackLocation[-1].Parameters.Create.Options = Key;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
    result = IopSynchronousServiceTail(v13, v31, (__int64)v10, 0LL, PreviousMode, v18, 2u);
    if ( !v18 )
    {
      LOBYTE(v36) = PreviousMode;
      return IopSynchronousApiServiceTail((unsigned int)result, v27, v31, v36, &v45, IoStatusBlock);
    }
  }
  else
  {
    if ( v27 )
      ExFreePoolWithTag(v27, 0);
    IopAllocateIrpCleanup((PADAPTER_OBJECT)v9, 0LL);
    return -1073741670;
  }
  return result;
}
