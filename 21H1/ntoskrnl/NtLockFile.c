/*
 * XREFs of NtLockFile @ 0x140699320
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140252E60 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140252F80 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140253320 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x1402533E0 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     IopReferenceFileObject @ 0x140263EB0 (IopReferenceFileObject.c)
 *     IopSetLockOperationProcess @ 0x1402E3C10 (IopSetLockOperationProcess.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     IopVerifierExAllocatePoolWithQuota_4 @ 0x140502C10 (IopVerifierExAllocatePoolWithQuota_4.c)
 *     IopSynchronousServiceTail @ 0x1405FD780 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     IoSetIoCompletion @ 0x1406DD050 (IoSetIoCompletion.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14070A3B8 (IopWaitAndAcquireFileObjectLock.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x14088CA14 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14088D1F8 (IopExceptionCleanup.c)
 *     VfFastIoCheckState @ 0x1409C6994 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409C6A6C (VfFastIoSnapState.c)
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
  _QWORD *p_Port; // rcx
  NTSTATUS v27; // eax
  int v28; // eax
  int v29; // edx
  struct _KTHREAD *v30; // rax
  PADAPTER_OBJECT v31; // rbx
  __int64 v32; // rax
  NTSTATUS v33; // esi
  char v34; // r15
  __int64 Irp; // rax
  IRP *v36; // r14
  __int64 v37; // rsi
  char v38; // al
  CHAR *PoolWithQuota_4; // rax
  int v40; // [rsp+28h] [rbp-A0h]
  __int64 v41; // [rsp+50h] [rbp-78h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp-70h] BYREF
  PRKEVENT Eventa; // [rsp+60h] [rbp-68h]
  __int128 v44; // [rsp+68h] [rbp-60h] BYREF
  LONGLONG QuadPart; // [rsp+78h] [rbp-50h] BYREF
  LONGLONG v46; // [rsp+80h] [rbp-48h] BYREF
  PVOID Object; // [rsp+88h] [rbp-40h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v48; // [rsp+90h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-30h]
  PIO_APC_ROUTINE v50; // [rsp+E0h] [rbp+18h] BYREF
  PVOID v51; // [rsp+E8h] [rbp+20h]

  v51 = ApcContext;
  v50 = ApcRoutine;
  DmaAdapter = 0LL;
  Eventa = 0LL;
  QuadPart = 0LL;
  v46 = 0LL;
  v48 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, (PVOID *)&DmaAdapter, &v48);
  if ( result >= 0 )
  {
    if ( PreviousMode )
    {
      if ( (v48.GrantedAccess & 3) == 0 )
      {
        HalPutDmaAdapter(DmaAdapter);
        return -1073741790;
      }
      v14 = (__int64)IoStatusBlock;
      if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v14 = *(_DWORD *)v14;
      IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v50, DmaAdapter[5].Version & 2);
      if ( ((unsigned __int8)ByteOffset & 3) != 0
        || (QuadPart = ByteOffset->QuadPart, ((unsigned __int8)Length & 3) != 0) )
      {
        ExRaiseDatatypeMisalignment();
      }
      v46 = Length->QuadPart;
      v15 = DmaAdapter;
      if ( *(_QWORD *)&DmaAdapter[11].Version && ((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      {
        HalPutDmaAdapter(DmaAdapter);
        return -1073741811;
      }
    }
    else
    {
      QuadPart = ByteOffset->QuadPart;
      v46 = Length->QuadPart;
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
          v44 = 0LL;
          if ( (MmVerifierData & 0x10) != 0 )
            v23 = (void *)VfFastIoSnapState();
          else
            v23 = 0LL;
          LOBYTE(v40) = FailImmediately;
          v24 = FastIoLock(
                  v16,
                  &QuadPart,
                  &v46,
                  CurrentThread->ApcState.Process,
                  Key,
                  v40,
                  ExclusiveLock,
                  &v44,
                  RelatedDeviceObject);
          LOBYTE(v41) = v24;
          if ( v23 )
          {
            VfFastIoCheckState(v23);
            v24 = v41;
          }
          if ( v24 )
          {
            if ( ((unsigned __int8)v50 & 1) != 0 )
            {
              v25 = IoStatusBlock;
              HIDWORD(IoStatusBlock->Pointer) = DWORD2(v44);
              v25->Status = v44;
            }
            else
            {
              *(_OWORD *)&IoStatusBlock->Status = v44;
            }
            if ( Eventa )
            {
              if ( (v16->Flags & 0x8000000) == 0 )
                KeSetEvent(Eventa, 0, 0);
              HalPutDmaAdapter((PADAPTER_OBJECT)Eventa);
            }
            p_Port = &v16->CompletionContext->Port;
            if ( p_Port && ApcContext && (v16->Flags & 0x2000000) == 0 )
            {
              v28 = IoSetIoCompletion(*p_Port, p_Port[1], (_DWORD)ApcContext, v44, *((__int64 *)&v44 + 1), 1);
              v29 = v44;
              if ( v28 < 0 )
                v29 = -1073741670;
              LODWORD(v44) = v29;
            }
            HalPutDmaAdapter((PADAPTER_OBJECT)v16);
            return v44;
          }
        }
      }
      if ( (v16->Flags & 2) != 0 )
      {
        v30 = KeGetCurrentThread();
        --v30->KernelApcDisable;
        v31 = DmaAdapter;
        v32 = KeAbPreAcquire((ULONG_PTR)&DmaAdapter[8], 0LL, 0);
        LOBYTE(v41) = 0;
        if ( _InterlockedExchange((volatile __int32 *)(&v31[7].Size + 1), 1) )
        {
          v16 = (struct _FILE_OBJECT *)DmaAdapter;
          v33 = IopWaitAndAcquireFileObjectLock(DmaAdapter, (__int64)&v41);
        }
        else
        {
          if ( v32 )
            *(_BYTE *)(v32 + 26) |= 1u;
          v16 = (struct _FILE_OBJECT *)DmaAdapter;
          ObfReferenceObject(DmaAdapter);
          v33 = 0;
        }
        if ( (_BYTE)v41 )
        {
          if ( Eventa )
            HalPutDmaAdapter((PADAPTER_OBJECT)Eventa);
          HalPutDmaAdapter((PADAPTER_OBJECT)v16);
          return v33;
        }
        v34 = 1;
      }
      else
      {
        v34 = 0;
      }
      IopResetEvent((__int64)v16, v17, v18, v19);
      Irp = IopAllocateIrpExReturn();
      v36 = (IRP *)Irp;
      Object = (PVOID)Irp;
      if ( Irp )
      {
        *(_QWORD *)(Irp + 192) = v16;
        *(_QWORD *)(Irp + 152) = CurrentThread;
        *(_BYTE *)(Irp + 64) = PreviousMode;
        *(_QWORD *)(Irp + 80) = Eventa;
        *(_QWORD *)(Irp + 72) = IoStatusBlock;
        *(_QWORD *)(Irp + 88) = v50;
        *(_QWORD *)(Irp + 96) = v51;
        v37 = *(_QWORD *)(Irp + 184);
        *(_WORD *)(v37 - 72) = 273;
        *(_QWORD *)(v37 - 24) = v16;
        *(_BYTE *)(v37 - 70) = 0;
        v38 = 0;
        if ( FailImmediately )
        {
          *(_BYTE *)(v37 - 70) = 1;
          v38 = 1;
        }
        if ( ExclusiveLock )
          *(_BYTE *)(v37 - 70) = v38 | 2;
        *(_DWORD *)(v37 - 56) = Key;
        *(_QWORD *)(v37 - 48) = QuadPart;
        PoolWithQuota_4 = (CHAR *)IopVerifierExAllocatePoolWithQuota_4();
        *(_QWORD *)PoolWithQuota_4 = v46;
        v36->Tail.Overlay.AuxiliaryBuffer = PoolWithQuota_4;
        *(_QWORD *)(v37 - 64) = PoolWithQuota_4;
        return IopSynchronousServiceTail(RelatedDeviceObject, v36, (__int64)v16, 0LL, PreviousMode, v34, 2u);
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
