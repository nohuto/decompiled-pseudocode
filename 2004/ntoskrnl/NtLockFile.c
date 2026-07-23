/*
 * XREFs of NtLockFile @ 0x14069F3F0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     IopReferenceFileObject @ 0x14020AF90 (IopReferenceFileObject.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x14028F6E0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x14028F800 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x14028FBA0 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x14028FC60 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     KeResetEvent @ 0x140297C10 (KeResetEvent.c)
 *     IopSetLockOperationProcess @ 0x1402D6EC0 (IopSetLockOperationProcess.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     IopVerifierExAllocatePoolWithQuota_4 @ 0x140503260 (IopVerifierExAllocatePoolWithQuota_4.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140648F18 (IopWaitAndAcquireFileObjectLock.c)
 *     IoSetIoCompletion @ 0x1406569F0 (IoSetIoCompletion.c)
 *     IopSynchronousServiceTail @ 0x140675860 (IopSynchronousServiceTail.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x14088DD34 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14088E518 (IopExceptionCleanup.c)
 *     VfFastIoCheckState @ 0x1409C69A4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409C6A7C (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtLockFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER ByteOffset,
        PLARGE_INTEGER Length,
        ULONG Key,
        BOOLEAN FailImmediately,
        BOOLEAN ExclusiveLock)
{
  KPROCESSOR_MODE PreviousMode; // r12
  NTSTATUS result; // eax
  __int64 v14; // rcx
  PADAPTER_OBJECT v15; // rax
  struct _FILE_OBJECT *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  _DWORD *v19; // r9
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  PFAST_IO_DISPATCH FastIoDispatch; // r14
  __int64 (__fastcall *FastIoLock)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, int, BOOLEAN, __int128 *, PDEVICE_OBJECT); // r14
  void *v23; // rsi
  char v24; // al
  PIO_STATUS_BLOCK v25; // rcx
  __int64 *CompletionContext; // rcx
  NTSTATUS v27; // eax
  int v28; // eax
  int v29; // edx
  char v30; // si
  struct _KTHREAD *v31; // rax
  PADAPTER_OBJECT v32; // rbx
  __int64 v33; // rax
  NTSTATUS v34; // esi
  char v35; // r15
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 Irp; // rax
  IRP *v39; // r14
  __int64 v40; // rsi
  char v41; // al
  CHAR *PoolWithQuota_4; // rax
  int v43; // [rsp+28h] [rbp-A0h]
  __int64 v44; // [rsp+50h] [rbp-78h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp-70h] BYREF
  PRKEVENT Eventa; // [rsp+60h] [rbp-68h]
  __int128 v47; // [rsp+68h] [rbp-60h] BYREF
  LONGLONG QuadPart; // [rsp+78h] [rbp-50h] BYREF
  LONGLONG v49; // [rsp+80h] [rbp-48h] BYREF
  PVOID Object; // [rsp+88h] [rbp-40h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v51; // [rsp+90h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-30h]
  __int64 retaddr; // [rsp+C8h] [rbp+0h]
  PIO_APC_ROUTINE v54; // [rsp+E0h] [rbp+18h] BYREF
  PVOID v55; // [rsp+E8h] [rbp+20h]

  v55 = ApcContext;
  v54 = ApcRoutine;
  DmaAdapter = 0LL;
  Eventa = 0LL;
  QuadPart = 0LL;
  v49 = 0LL;
  v51 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, (PVOID *)&DmaAdapter, &v51);
  if ( result >= 0 )
  {
    if ( PreviousMode )
    {
      if ( (v51.GrantedAccess & 3) == 0 )
      {
        HalPutDmaAdapter(DmaAdapter);
        return -1073741790;
      }
      v14 = (__int64)IoStatusBlock;
      if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v14 = *(_DWORD *)v14;
      IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v54, DmaAdapter[5].Version & 2);
      if ( ((unsigned __int8)ByteOffset & 3) != 0
        || (QuadPart = ByteOffset->QuadPart, ((unsigned __int8)Length & 3) != 0) )
      {
        ExRaiseDatatypeMisalignment();
      }
      v49 = Length->QuadPart;
      v15 = DmaAdapter;
      if ( *(_QWORD *)&DmaAdapter[11].Version && ((unsigned __int64)v54 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      {
        HalPutDmaAdapter(DmaAdapter);
        return -1073741811;
      }
    }
    else
    {
      QuadPart = ByteOffset->QuadPart;
      v49 = Length->QuadPart;
      v15 = DmaAdapter;
    }
    LOBYTE(v15[4].DmaOperations) = 1;
    v16 = (struct _FILE_OBJECT *)DmaAdapter;
    result = IopSetLockOperationProcess((__int64)DmaAdapter, (__int64)KeGetCurrentThread()->ApcState.Process, 0);
    if ( result >= 0 )
    {
      if ( Event )
      {
        Object = 0LL;
        v27 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
        Eventa = (PRKEVENT)Object;
        if ( v27 >= 0 )
          KeResetEvent((PRKEVENT)Object);
      }
      RelatedDeviceObject = IoGetRelatedDeviceObject(v16);
      FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
      if ( FastIoDispatch )
      {
        FastIoLock = (__int64 (__fastcall *)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, int, BOOLEAN, __int128 *, PDEVICE_OBJECT))FastIoDispatch->FastIoLock;
        if ( FastIoLock )
        {
          v47 = 0LL;
          if ( (MmVerifierData & 0x10) != 0 )
            v23 = (void *)VfFastIoSnapState();
          else
            v23 = 0LL;
          LOBYTE(v43) = FailImmediately;
          v24 = FastIoLock(
                  v16,
                  &QuadPart,
                  &v49,
                  CurrentThread->ApcState.Process,
                  Key,
                  v43,
                  ExclusiveLock,
                  &v47,
                  RelatedDeviceObject);
          LOBYTE(v44) = v24;
          if ( v23 )
          {
            VfFastIoCheckState(v23);
            v24 = v44;
          }
          if ( v24 )
          {
            if ( ((unsigned __int8)v54 & 1) != 0 )
            {
              v25 = IoStatusBlock;
              HIDWORD(IoStatusBlock->Pointer) = DWORD2(v47);
              v25->Status = v47;
            }
            else
            {
              *(_OWORD *)&IoStatusBlock->Status = v47;
            }
            if ( Eventa )
            {
              if ( (v16->Flags & 0x8000000) == 0 )
                KeSetEvent(Eventa, 0, 0);
              HalPutDmaAdapter((PADAPTER_OBJECT)Eventa);
            }
            CompletionContext = (__int64 *)v16->CompletionContext;
            if ( CompletionContext && ApcContext && (v16->Flags & 0x2000000) == 0 )
            {
              v28 = IoSetIoCompletion(
                      *CompletionContext,
                      CompletionContext[1],
                      (__int64)ApcContext,
                      (_DWORD *)(unsigned int)v47,
                      *((__int64 *)&v47 + 1),
                      1u);
              v29 = v47;
              if ( v28 < 0 )
                v29 = -1073741670;
              LODWORD(v47) = v29;
            }
            HalPutDmaAdapter((PADAPTER_OBJECT)v16);
            return v47;
          }
        }
      }
      if ( (v16->Flags & 2) != 0 )
      {
        v30 = (v16->Flags & 4) != 0;
        v31 = KeGetCurrentThread();
        --v31->KernelApcDisable;
        v32 = DmaAdapter;
        v33 = KeAbPreAcquire((ULONG_PTR)&DmaAdapter[8], 0LL, 0);
        LOBYTE(v44) = 0;
        if ( _InterlockedExchange((volatile __int32 *)(&v32[7].Size + 1), 1) )
        {
          v16 = (struct _FILE_OBJECT *)DmaAdapter;
          v34 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)DmaAdapter, PreviousMode, v30, v33, &v44);
        }
        else
        {
          if ( v33 )
            *(_BYTE *)(v33 + 26) |= 1u;
          v16 = (struct _FILE_OBJECT *)DmaAdapter;
          ObfReferenceObject(DmaAdapter);
          v34 = 0;
        }
        if ( (_BYTE)v44 )
        {
          if ( Eventa )
            HalPutDmaAdapter((PADAPTER_OBJECT)Eventa);
          HalPutDmaAdapter((PADAPTER_OBJECT)v16);
          return v34;
        }
        v35 = 1;
      }
      else
      {
        v35 = 0;
      }
      IopResetEvent((__int64)v16, v17, v18, v19);
      LOBYTE(v36) = v35 ^ 1;
      LOBYTE(v37) = RelatedDeviceObject->StackSize;
      Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v37, v36, retaddr);
      v39 = (IRP *)Irp;
      Object = (PVOID)Irp;
      if ( Irp )
      {
        *(_QWORD *)(Irp + 192) = v16;
        *(_QWORD *)(Irp + 152) = CurrentThread;
        *(_BYTE *)(Irp + 64) = PreviousMode;
        *(_QWORD *)(Irp + 80) = Eventa;
        *(_QWORD *)(Irp + 72) = IoStatusBlock;
        *(_QWORD *)(Irp + 88) = v54;
        *(_QWORD *)(Irp + 96) = v55;
        v40 = *(_QWORD *)(Irp + 184);
        *(_WORD *)(v40 - 72) = 273;
        *(_QWORD *)(v40 - 24) = v16;
        *(_BYTE *)(v40 - 70) = 0;
        v41 = 0;
        if ( FailImmediately )
        {
          *(_BYTE *)(v40 - 70) = 1;
          v41 = 1;
        }
        if ( ExclusiveLock )
          *(_BYTE *)(v40 - 70) = v41 | 2;
        *(_DWORD *)(v40 - 56) = Key;
        *(_QWORD *)(v40 - 48) = QuadPart;
        PoolWithQuota_4 = (CHAR *)IopVerifierExAllocatePoolWithQuota_4();
        *(_QWORD *)PoolWithQuota_4 = v49;
        v39->Tail.Overlay.AuxiliaryBuffer = PoolWithQuota_4;
        *(_QWORD *)(v40 - 64) = PoolWithQuota_4;
        return IopSynchronousServiceTail(RelatedDeviceObject, v39, (__int64)v16, 0LL, PreviousMode, v35, 2u);
      }
      else
      {
        IopAllocateIrpCleanup((PADAPTER_OBJECT)v16, (PADAPTER_OBJECT)Eventa);
        return -1073741670;
      }
    }
  }
  return result;
}
