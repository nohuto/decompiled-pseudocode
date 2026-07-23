/*
 * XREFs of NtUnlockFile @ 0x1406B6C50
 * Callers:
 *     <none>
 * Callees:
 *     IoGetAttachedDevice @ 0x14020D8F0 (IoGetAttachedDevice.c)
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140211290 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402113B0 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140211750 (IopResetEvent.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     IopVerifierExAllocatePool_0 @ 0x14029FE88 (IopVerifierExAllocatePool_0.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     IopVerifierExAllocatePoolWithQuota_4 @ 0x140506C70 (IopVerifierExAllocatePoolWithQuota_4.c)
 *     IopExceptionCleanupEx @ 0x1405CBC64 (IopExceptionCleanupEx.c)
 *     IopSynchronousServiceTail @ 0x1406107D0 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14064A5E0 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousApiServiceTail @ 0x1406BCEBC (IopSynchronousApiServiceTail.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x140893884 (IopAllocateIrpCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 *     VfFastIoCheckState @ 0x1409CC9C4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409CCA9C (VfFastIoSnapState.c)
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
  NTSTATUS v23; // edi
  struct _KEVENT *v24; // rsi
  struct _KEVENT *Pool_0; // rax
  __int64 v26; // rdx
  __int64 Irp; // rax
  IRP *v28; // rdi
  PIO_STATUS_BLOCK v29; // rax
  struct _KEVENT *v30; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  CHAR *PoolWithQuota_4; // rax
  __int64 v33; // r9
  KPROCESSOR_MODE PreviousMode; // [rsp+40h] [rbp-78h]
  _BYTE DmaAdapter[15]; // [rsp+41h] [rbp-77h] BYREF
  struct _KEVENT *HandleInformation; // [rsp+50h] [rbp-68h] BYREF
  LONGLONG v37; // [rsp+58h] [rbp-60h] BYREF
  LONGLONG QuadPart; // [rsp+60h] [rbp-58h] BYREF
  PADAPTER_OBJECT v39; // [rsp+68h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-48h]
  __int128 v41; // [rsp+78h] [rbp-40h] BYREF
  __int128 v42; // [rsp+88h] [rbp-30h] BYREF
  __int64 retaddr; // [rsp+B8h] [rbp+0h]

  QuadPart = 0LL;
  v37 = 0LL;
  HandleInformation = 0LL;
  v42 = 0LL;
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
  v39 = *(PADAPTER_OBJECT *)&DmaAdapter[7];
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
    if ( ((unsigned __int8)ByteOffset & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    QuadPart = ByteOffset->QuadPart;
    if ( ((unsigned __int8)Length & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v37 = Length->QuadPart;
    v10 = v39;
    v9 = *(struct _FILE_OBJECT **)&DmaAdapter[7];
  }
  else
  {
    QuadPart = ByteOffset->QuadPart;
    v37 = Length->QuadPart;
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
      v41 = 0LL;
      if ( (MmVerifierData & 0x10) != 0 )
        v16 = (void *)VfFastIoSnapState();
      else
        v16 = 0LL;
      v17 = v15(v9, &QuadPart, &v37, CurrentThread->ApcState.Process, Key, &v41, v13);
      if ( v16 )
        VfFastIoCheckState(v16);
      if ( v17 )
      {
        *(_OWORD *)&IoStatusBlock->Status = v41;
        HalPutDmaAdapter((PADAPTER_OBJECT)v9);
        return v41;
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
      v23 = IopWaitAndAcquireFileObjectLock(
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
      v23 = 0;
    }
    if ( !DmaAdapter[0] )
    {
      v24 = 0LL;
      HandleInformation = 0LL;
      v10 = v39;
      goto LABEL_35;
    }
LABEL_33:
    HalPutDmaAdapter((PADAPTER_OBJECT)v9);
    return v23;
  }
  Pool_0 = (struct _KEVENT *)IopVerifierExAllocatePool_0(FastIoDispatch, 0x18uLL);
  v24 = Pool_0;
  HandleInformation = Pool_0;
  if ( !Pool_0 )
  {
    v23 = -1073741670;
    goto LABEL_33;
  }
  KeInitializeEvent(Pool_0, SynchronizationEvent, 0);
  v18 = 0;
LABEL_35:
  IopResetEvent((__int64)v9);
  LOBYTE(v26) = v13->StackSize;
  Irp = IopAllocateIrpExReturn((__int64)v13, v26, 0LL, retaddr);
  v28 = (IRP *)Irp;
  *(_QWORD *)&DmaAdapter[7] = Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = v9;
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_BYTE *)(Irp + 64) = PreviousMode;
    if ( v18 )
    {
      v29 = IoStatusBlock;
      v30 = 0LL;
    }
    else
    {
      *(_DWORD *)(Irp + 16) = 4;
      v29 = (PIO_STATUS_BLOCK)&v42;
      v30 = v24;
    }
    v28->UserEvent = v30;
    v28->UserIosb = v29;
    v28->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v28->Tail.Overlay.CurrentStackLocation;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 529;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v10;
    PoolWithQuota_4 = (CHAR *)IopVerifierExAllocatePoolWithQuota_4();
    *(_QWORD *)PoolWithQuota_4 = v37;
    v28->Tail.Overlay.AuxiliaryBuffer = PoolWithQuota_4;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)PoolWithQuota_4;
    CurrentStackLocation[-1].Parameters.Create.Options = Key;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
    result = IopSynchronousServiceTail(v13, v28, (__int64)v10, 0, PreviousMode, v18, 2u);
    if ( !v18 )
    {
      LOBYTE(v33) = PreviousMode;
      return IopSynchronousApiServiceTail((unsigned int)result, v24, v28, v33, &v42, IoStatusBlock);
    }
  }
  else
  {
    if ( v24 )
      ExFreePoolWithTag(v24, 0);
    IopAllocateIrpCleanup((PADAPTER_OBJECT)v9, 0LL);
    return -1073741670;
  }
  return result;
}
