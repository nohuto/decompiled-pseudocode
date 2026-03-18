/*
 * XREFs of NtUnlockFile @ 0x14071CD90
 * Callers:
 *     <none>
 * Callees:
 *     IoGetAttachedDevice @ 0x1402A78F0 (IoGetAttachedDevice.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     IopResetEvent @ 0x1402AABB0 (IopResetEvent.c)
 *     IopAllocateIrpExReturn @ 0x1402AACA0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     MmIsDriverVerifying @ 0x1402D87B0 (MmIsDriverVerifying.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     IopExceptionCleanupEx @ 0x140658670 (IopExceptionCleanupEx.c)
 *     IopSynchronousApiServiceTail @ 0x1406BF8BC (IopSynchronousApiServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140709FAC (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x140731680 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     IopAllocateIrpCleanup @ 0x140933BA4 (IopAllocateIrpCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     VfFastIoCheckState @ 0x140A8A8D4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140A8A9AC (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtUnlockFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER ByteOffset,
        PLARGE_INTEGER Length,
        ULONG Key)
{
  struct _KTHREAD *CurrentThread; // r14
  KPROCESSOR_MODE PreviousMode; // r13
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v11; // rbx
  __int64 v12; // rcx
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v14; // r15
  struct _DRIVER_OBJECT *DriverObject; // rcx
  PFAST_IO_DISPATCH FastIoDispatch; // rax
  __int64 (__fastcall *FastIoUnlockSingle)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, __int128 *, struct _DEVICE_OBJECT *); // rsi
  void *v18; // rdi
  char v19; // r14
  char v20; // r14
  bool v21; // di
  struct _KTHREAD *v22; // rax
  volatile __int32 *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  NTSTATUS v27; // edi
  LONG *p_LockNV; // rsi
  struct _KEVENT *Pool2; // rax
  __int64 v30; // rdx
  __int64 Irp; // rax
  IRP *v32; // rdi
  PIO_STATUS_BLOCK v33; // rax
  struct _KEVENT *v34; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  CHAR *v36; // rax
  __int64 v37; // [rsp+40h] [rbp-78h] BYREF
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  struct _KEVENT *HandleInformation; // [rsp+50h] [rbp-68h] BYREF
  LONGLONG v40; // [rsp+58h] [rbp-60h] BYREF
  LONGLONG QuadPart; // [rsp+60h] [rbp-58h] BYREF
  PVOID v42; // [rsp+68h] [rbp-50h]
  __int128 v43; // [rsp+70h] [rbp-48h] BYREF
  struct _KTHREAD *v44; // [rsp+80h] [rbp-38h]
  unsigned int v45[6]; // [rsp+88h] [rbp-30h] BYREF

  QuadPart = 0LL;
  v40 = 0LL;
  HandleInformation = 0LL;
  *(_OWORD *)v45 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v44 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  Object = 0LL;
  result = ObReferenceObjectByHandle(
             FileHandle,
             0,
             (POBJECT_TYPE)IoFileObjectType,
             PreviousMode,
             &Object,
             (POBJECT_HANDLE_INFORMATION)&HandleInformation);
  v11 = (struct _FILE_OBJECT *)Object;
  v42 = Object;
  if ( result < 0 )
    return result;
  if ( PreviousMode )
  {
    if ( (BYTE4(HandleInformation) & 3) == 0 )
    {
      ObfDereferenceObject(Object);
      return -1073741790;
    }
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v12 = (__int64)IoStatusBlock;
    *(_DWORD *)v12 = *(_DWORD *)v12;
    if ( ((unsigned __int8)ByteOffset & 3) != 0 || (QuadPart = ByteOffset->QuadPart, ((unsigned __int8)Length & 3) != 0) )
      ExRaiseDatatypeMisalignment();
    v40 = Length->QuadPart;
    v11 = (struct _FILE_OBJECT *)Object;
  }
  else
  {
    QuadPart = ByteOffset->QuadPart;
    v40 = Length->QuadPart;
  }
  if ( (v11->Flags & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(v11->DeviceObject);
  else
    AttachedDevice = IoGetRelatedDeviceObject(v11);
  v14 = AttachedDevice;
  DriverObject = AttachedDevice->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  if ( FastIoDispatch )
  {
    FastIoUnlockSingle = (__int64 (__fastcall *)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, __int128 *, struct _DEVICE_OBJECT *))FastIoDispatch->FastIoUnlockSingle;
    if ( FastIoUnlockSingle )
    {
      v43 = 0LL;
      if ( (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(DriverObject) )
        v18 = (void *)VfFastIoSnapState();
      else
        v18 = 0LL;
      v19 = FastIoUnlockSingle(v11, &QuadPart, &v40, CurrentThread->ApcState.Process, Key, &v43, v14);
      if ( v18 )
        VfFastIoCheckState(v18);
      if ( v19 )
      {
        *(_OWORD *)&IoStatusBlock->Status = v43;
        ObfDereferenceObject(v11);
        return v43;
      }
    }
  }
  if ( (v11->Flags & 2) != 0 )
  {
    v20 = 1;
    v21 = (v11->Flags & 4) != 0;
    v22 = KeGetCurrentThread();
    --v22->KernelApcDisable;
    v23 = (volatile __int32 *)Object;
    v24 = KeAbPreAcquire((__int64)Object + 128, 0LL);
    LOBYTE(v37) = 0;
    if ( _InterlockedExchange(v23 + 29, 1) )
    {
      LOBYTE(v26) = v21;
      LOBYTE(v25) = PreviousMode;
      v11 = (struct _FILE_OBJECT *)Object;
      v27 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, v25, v26, v24, &v37);
    }
    else
    {
      if ( v24 )
        *(_BYTE *)(v24 + 18) = 1;
      v11 = (struct _FILE_OBJECT *)Object;
      ObfReferenceObject(Object);
      v27 = 0;
    }
    if ( !(_BYTE)v37 )
    {
      p_LockNV = 0LL;
      HandleInformation = 0LL;
      goto LABEL_36;
    }
LABEL_34:
    ObfDereferenceObject(v11);
    return v27;
  }
  Pool2 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 538996553LL);
  p_LockNV = &Pool2->Header.LockNV;
  HandleInformation = Pool2;
  if ( !Pool2 )
  {
    v27 = -1073741670;
    goto LABEL_34;
  }
  KeInitializeEvent(Pool2, SynchronizationEvent, 0);
  v20 = 0;
LABEL_36:
  IopResetEvent((__int64)v11);
  LOBYTE(v30) = v14->StackSize;
  Irp = IopAllocateIrpExReturn((__int64)v14, v30, 0LL);
  v32 = (IRP *)Irp;
  Object = (PVOID)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = v11;
    *(_QWORD *)(Irp + 152) = v44;
    *(_BYTE *)(Irp + 64) = PreviousMode;
    if ( v20 )
    {
      v33 = IoStatusBlock;
      v34 = 0LL;
    }
    else
    {
      *(_DWORD *)(Irp + 16) = 4;
      v33 = (PIO_STATUS_BLOCK)v45;
      v34 = (struct _KEVENT *)p_LockNV;
    }
    v32->UserEvent = v34;
    v32->UserIosb = v33;
    v32->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v32->Tail.Overlay.CurrentStackLocation;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 529;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v42;
    v36 = (CHAR *)ExAllocatePool2(97LL, 8LL, 538996553LL);
    *(_QWORD *)v36 = v40;
    v32->Tail.Overlay.AuxiliaryBuffer = v36;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v36;
    CurrentStackLocation[-1].Parameters.Create.Options = Key;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
    result = IopSynchronousServiceTail(v14, v32, PreviousMode, v20, 2);
    if ( !v20 )
      return IopSynchronousApiServiceTail(result, p_LockNV, v32, PreviousMode, v45, IoStatusBlock);
  }
  else
  {
    if ( p_LockNV )
      ExFreePoolWithTag(p_LockNV, 0);
    IopAllocateIrpCleanup(v11, 0LL);
    return -1073741670;
  }
  return result;
}
