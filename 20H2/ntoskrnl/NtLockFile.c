/*
 * XREFs of NtLockFile @ 0x1406B3730
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140211290 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402113B0 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140211750 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x140211810 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     IopReferenceFileObject @ 0x14021EA80 (IopReferenceFileObject.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     PsGetCurrentProcess @ 0x1402BFB80 (PsGetCurrentProcess.c)
 *     IopSetLockOperationProcess @ 0x1403056F8 (IopSetLockOperationProcess.c)
 *     IopDecrementCompletionContextUsageCount @ 0x1403F0294 (IopDecrementCompletionContextUsageCount.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x1403F035C (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     IopVerifierExAllocatePoolWithQuota_4 @ 0x140506C70 (IopVerifierExAllocatePoolWithQuota_4.c)
 *     IopExceptionCleanupEx @ 0x1405CBC64 (IopExceptionCleanupEx.c)
 *     IopSynchronousServiceTail @ 0x1406107D0 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14064A5E0 (IopWaitAndAcquireFileObjectLock.c)
 *     IoSetIoCompletion @ 0x1406D2C40 (IoSetIoCompletion.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x140893884 (IopAllocateIrpCleanup.c)
 *     VfFastIoCheckState @ 0x1409CC9C4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409CCA9C (VfFastIoSnapState.c)
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
  struct _FILE_OBJECT *v15; // rbx
  _KPROCESS *CurrentProcess; // rax
  __int64 v17; // r9
  NTSTATUS v18; // eax
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  PFAST_IO_DISPATCH FastIoDispatch; // r14
  __int64 (__fastcall *FastIoLock)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, int, BOOLEAN, __int128 *, PDEVICE_OBJECT); // r14
  void *v22; // rsi
  char v23; // al
  PIO_STATUS_BLOCK v24; // rcx
  int v25; // eax
  int v26; // ecx
  char v27; // si
  struct _KTHREAD *v28; // rax
  PADAPTER_OBJECT v29; // rbx
  __int64 v30; // rax
  NTSTATUS v31; // esi
  char v32; // r15
  __int64 v33; // r8
  __int64 v34; // rdx
  IRP *v35; // rax
  IRP *v36; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  char v38; // al
  CHAR *PoolWithQuota_4; // rax
  int HandleInformation; // [rsp+28h] [rbp-B0h]
  char v41; // [rsp+50h] [rbp-88h] BYREF
  char v42; // [rsp+51h] [rbp-87h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp-80h] BYREF
  PRKEVENT Eventa; // [rsp+60h] [rbp-78h]
  __int128 v45; // [rsp+68h] [rbp-70h] BYREF
  LONGLONG QuadPart; // [rsp+78h] [rbp-60h] BYREF
  LONGLONG v47; // [rsp+80h] [rbp-58h] BYREF
  PIRP Irp; // [rsp+88h] [rbp-50h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v49; // [rsp+90h] [rbp-48h] BYREF
  PVOID Object; // [rsp+98h] [rbp-40h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-30h]
  __int64 retaddr; // [rsp+D8h] [rbp+0h]
  LARGE_INTEGER v54; // [rsp+F0h] [rbp+18h] BYREF
  PVOID v55; // [rsp+F8h] [rbp+20h]

  v55 = ApcContext;
  v54.QuadPart = (LONGLONG)ApcRoutine;
  DmaAdapter = 0LL;
  Eventa = 0LL;
  QuadPart = 0LL;
  v47 = 0LL;
  v49 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, (PVOID *)&DmaAdapter, &v49);
  if ( result >= 0 )
  {
    if ( PreviousMode )
    {
      if ( (v49.GrantedAccess & 3) == 0 )
      {
        HalPutDmaAdapter(DmaAdapter);
        return -1073741790;
      }
      v14 = (__int64)IoStatusBlock;
      if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v14 = *(_DWORD *)v14;
      IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v54, DmaAdapter[5].Version & 2);
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = ByteOffset->QuadPart;
      if ( ((unsigned __int8)Length & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v47 = Length->QuadPart;
      v15 = (struct _FILE_OBJECT *)DmaAdapter;
      if ( *(_QWORD *)&DmaAdapter[11].Version && (v54.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      {
        HalPutDmaAdapter(DmaAdapter);
        return -1073741811;
      }
    }
    else
    {
      QuadPart = ByteOffset->QuadPart;
      v47 = Length->QuadPart;
      v15 = (struct _FILE_OBJECT *)DmaAdapter;
    }
    v15->LockOperation = 1;
    CurrentProcess = PsGetCurrentProcess();
    result = IopSetLockOperationProcess((__int64)v15, (__int64)CurrentProcess, 0, v17);
    if ( result >= 0 )
    {
      if ( Event )
      {
        Object = 0LL;
        v18 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
        Eventa = (PRKEVENT)Object;
        if ( v18 >= 0 )
          KeResetEvent((PRKEVENT)Object);
      }
      RelatedDeviceObject = IoGetRelatedDeviceObject(v15);
      FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
      if ( FastIoDispatch )
      {
        FastIoLock = (__int64 (__fastcall *)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, int, BOOLEAN, __int128 *, PDEVICE_OBJECT))FastIoDispatch->FastIoLock;
        if ( FastIoLock )
        {
          v45 = 0LL;
          if ( (MmVerifierData & 0x10) != 0 )
            v22 = (void *)VfFastIoSnapState();
          else
            v22 = 0LL;
          LOBYTE(HandleInformation) = FailImmediately;
          v23 = FastIoLock(
                  v15,
                  &QuadPart,
                  &v47,
                  CurrentThread->ApcState.Process,
                  Key,
                  HandleInformation,
                  ExclusiveLock,
                  &v45,
                  RelatedDeviceObject);
          v41 = v23;
          if ( v22 )
          {
            VfFastIoCheckState(v22);
            v23 = v41;
          }
          if ( v23 )
          {
            if ( (v54.LowPart & 1) != 0 )
            {
              v24 = IoStatusBlock;
              HIDWORD(IoStatusBlock->Pointer) = DWORD2(v45);
              v24->Status = v45;
            }
            else
            {
              *(_OWORD *)&IoStatusBlock->Status = v45;
            }
            if ( Eventa )
            {
              if ( (v15->Flags & 0x8000000) == 0 )
                KeSetEvent(Eventa, 0, 0);
              HalPutDmaAdapter((PADAPTER_OBJECT)Eventa);
            }
            if ( v15->CompletionContext && ApcContext && (v15->Flags & 0x2000000) == 0 )
            {
              v51 = 0LL;
              Irp = 0LL;
              v42 = 0;
              IopIncrementCompletionContextUsageCountAndReadData((ULONG_PTR)v15, &v42, &v51, &Irp);
              if ( v51 )
              {
                v25 = IoSetIoCompletion(v51, (_DWORD)Irp, (_DWORD)ApcContext, v45, *((__int64 *)&v45 + 1), 1);
                v26 = v45;
                if ( v25 < 0 )
                  v26 = -1073741670;
                LODWORD(v45) = v26;
              }
              if ( v42 )
                IopDecrementCompletionContextUsageCount((ULONG_PTR)v15);
            }
            HalPutDmaAdapter((PADAPTER_OBJECT)v15);
            return v45;
          }
        }
      }
      if ( (v15->Flags & 2) != 0 )
      {
        v27 = (v15->Flags & 4) != 0;
        v28 = KeGetCurrentThread();
        --v28->KernelApcDisable;
        v29 = DmaAdapter;
        v30 = KeAbPreAcquire((ULONG_PTR)&DmaAdapter[8], 0LL, 0);
        v41 = 0;
        if ( _InterlockedExchange((volatile __int32 *)(&v29[7].Size + 1), 1) )
        {
          v15 = (struct _FILE_OBJECT *)DmaAdapter;
          v31 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)DmaAdapter, PreviousMode, v27, v30, &v41);
        }
        else
        {
          if ( v30 )
            *(_BYTE *)(v30 + 26) |= 1u;
          v15 = (struct _FILE_OBJECT *)DmaAdapter;
          ObfReferenceObject(DmaAdapter);
          v31 = 0;
        }
        if ( v41 )
        {
          if ( Eventa )
            HalPutDmaAdapter((PADAPTER_OBJECT)Eventa);
          HalPutDmaAdapter((PADAPTER_OBJECT)v15);
          return v31;
        }
        v32 = 1;
      }
      else
      {
        v32 = 0;
      }
      IopResetEvent((__int64)v15);
      LOBYTE(v33) = v32 ^ 1;
      LOBYTE(v34) = RelatedDeviceObject->StackSize;
      v35 = (IRP *)IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v34, v33, retaddr);
      v36 = v35;
      Irp = v35;
      if ( v35 )
      {
        v35->Tail.Overlay.OriginalFileObject = v15;
        v35->Tail.Overlay.Thread = CurrentThread;
        v35->RequestorMode = PreviousMode;
        v35->UserEvent = Eventa;
        v35->UserIosb = IoStatusBlock;
        v35->Overlay.AllocationSize = v54;
        v35->Overlay.AsynchronousParameters.UserApcContext = v55;
        CurrentStackLocation = v35->Tail.Overlay.CurrentStackLocation;
        *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 273;
        CurrentStackLocation[-1].FileObject = v15;
        CurrentStackLocation[-1].Flags = 0;
        v38 = 0;
        if ( FailImmediately )
        {
          CurrentStackLocation[-1].Flags = 1;
          v38 = 1;
        }
        if ( ExclusiveLock )
          CurrentStackLocation[-1].Flags = v38 | 2;
        CurrentStackLocation[-1].Parameters.Create.Options = Key;
        CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
        PoolWithQuota_4 = (CHAR *)IopVerifierExAllocatePoolWithQuota_4();
        *(_QWORD *)PoolWithQuota_4 = v47;
        v36->Tail.Overlay.AuxiliaryBuffer = PoolWithQuota_4;
        CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)PoolWithQuota_4;
        return IopSynchronousServiceTail(RelatedDeviceObject, v36, (__int64)v15, 0, PreviousMode, v32, 2u);
      }
      else
      {
        IopAllocateIrpCleanup((PADAPTER_OBJECT)v15, (PADAPTER_OBJECT)Eventa);
        return -1073741670;
      }
    }
  }
  return result;
}
