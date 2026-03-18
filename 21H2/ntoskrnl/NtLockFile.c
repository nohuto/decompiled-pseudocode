/*
 * XREFs of NtLockFile @ 0x14071D220
 * Callers:
 *     <none>
 * Callees:
 *     IopSetLockOperationProcess @ 0x1402A36D0 (IopSetLockOperationProcess.c)
 *     PsGetCurrentProcess @ 0x1402A3820 (PsGetCurrentProcess.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x1402AAB50 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopResetEvent @ 0x1402AABB0 (IopResetEvent.c)
 *     IopAllocateIrpExReturn @ 0x1402AACA0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     IopReferenceFileObject @ 0x1402AC790 (IopReferenceFileObject.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     MmIsDriverVerifying @ 0x1402D87B0 (MmIsDriverVerifying.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     IopDecrementCompletionContextUsageCount @ 0x1404178E8 (IopDecrementCompletionContextUsageCount.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x1404179B0 (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     IopExceptionCleanupEx @ 0x140658670 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140709FAC (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x140731680 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     IoSetIoCompletion @ 0x1407D55B0 (IoSetIoCompletion.c)
 *     IopAllocateIrpCleanup @ 0x140933BA4 (IopAllocateIrpCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     VfFastIoCheckState @ 0x140A8A8D4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140A8A9AC (VfFastIoSnapState.c)
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
  struct _KEVENT *v11; // rsi
  KPROCESSOR_MODE PreviousMode; // r12
  NTSTATUS result; // eax
  __int64 v14; // rcx
  struct _FILE_OBJECT *v15; // rbx
  _KPROCESS *CurrentProcess; // rax
  NTSTATUS v17; // eax
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  struct _DRIVER_OBJECT *DriverObject; // rcx
  PFAST_IO_DISPATCH FastIoDispatch; // rdx
  __int64 (__fastcall *FastIoLock)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, int, BOOLEAN, __int128 *, PDEVICE_OBJECT); // r15
  void *v22; // r14
  char v23; // al
  PIO_STATUS_BLOCK v24; // rcx
  int v25; // esi
  int v26; // eax
  int v27; // ecx
  bool v28; // r14
  struct _KTHREAD *v29; // rax
  volatile __int32 *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  NTSTATUS v34; // r14d
  char v35; // r15
  __int64 v36; // r8
  __int64 v37; // rdx
  IRP *v38; // rax
  IRP *v39; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  char v41; // al
  CHAR *Pool2; // rax
  int HandleInformation; // [rsp+28h] [rbp-B0h]
  char v44; // [rsp+50h] [rbp-88h] BYREF
  char v45; // [rsp+51h] [rbp-87h]
  PVOID Object; // [rsp+58h] [rbp-80h] BYREF
  __int128 v47; // [rsp+60h] [rbp-78h] BYREF
  LONGLONG QuadPart; // [rsp+70h] [rbp-68h] BYREF
  LONGLONG v49; // [rsp+78h] [rbp-60h] BYREF
  PIRP Irp; // [rsp+80h] [rbp-58h] BYREF
  PVOID v51; // [rsp+88h] [rbp-50h]
  struct _OBJECT_HANDLE_INFORMATION v52; // [rsp+90h] [rbp-48h] BYREF
  PVOID v53; // [rsp+98h] [rbp-40h] BYREF
  __int64 v54; // [rsp+A0h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-30h]
  LARGE_INTEGER v56; // [rsp+F0h] [rbp+18h] BYREF
  PVOID v57; // [rsp+F8h] [rbp+20h]

  v57 = ApcContext;
  v56.QuadPart = (LONGLONG)ApcRoutine;
  Object = 0LL;
  v11 = 0LL;
  v51 = 0LL;
  QuadPart = 0LL;
  v49 = 0LL;
  v52 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, &Object, &v52);
  if ( result >= 0 )
  {
    if ( PreviousMode )
    {
      if ( (v52.GrantedAccess & 3) == 0 )
      {
        ObfDereferenceObject(Object);
        return -1073741790;
      }
      v14 = (__int64)IoStatusBlock;
      if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v14 = *(_DWORD *)v14;
      IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v56, *((_BYTE *)Object + 80) & 2);
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = ByteOffset->QuadPart;
      if ( ((unsigned __int8)Length & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v49 = Length->QuadPart;
      v15 = (struct _FILE_OBJECT *)Object;
      if ( *((_QWORD *)Object + 22) && (v56.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      {
        ObfDereferenceObject(Object);
        return -1073741811;
      }
    }
    else
    {
      QuadPart = ByteOffset->QuadPart;
      v49 = Length->QuadPart;
      v15 = (struct _FILE_OBJECT *)Object;
    }
    v15->LockOperation = 1;
    CurrentProcess = PsGetCurrentProcess();
    result = IopSetLockOperationProcess((__int64)v15, (__int64)CurrentProcess, 0);
    if ( result >= 0 )
    {
      if ( Event )
      {
        v53 = 0LL;
        v17 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v53, 0LL);
        v11 = (struct _KEVENT *)v53;
        v51 = v53;
        if ( v17 >= 0 )
          KeResetEvent((PRKEVENT)v53);
      }
      RelatedDeviceObject = IoGetRelatedDeviceObject(v15);
      DriverObject = RelatedDeviceObject->DriverObject;
      FastIoDispatch = DriverObject->FastIoDispatch;
      if ( FastIoDispatch )
      {
        FastIoLock = (__int64 (__fastcall *)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, int, BOOLEAN, __int128 *, PDEVICE_OBJECT))FastIoDispatch->FastIoLock;
        if ( FastIoLock )
        {
          v47 = 0LL;
          if ( (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(DriverObject) )
            v22 = (void *)VfFastIoSnapState();
          else
            v22 = 0LL;
          LOBYTE(HandleInformation) = FailImmediately;
          v23 = FastIoLock(
                  v15,
                  &QuadPart,
                  &v49,
                  CurrentThread->ApcState.Process,
                  Key,
                  HandleInformation,
                  ExclusiveLock,
                  &v47,
                  RelatedDeviceObject);
          v45 = v23;
          if ( v22 )
          {
            VfFastIoCheckState(v22);
            v23 = v45;
          }
          if ( v23 )
          {
            if ( (v56.LowPart & 1) != 0 )
            {
              v24 = IoStatusBlock;
              HIDWORD(IoStatusBlock->Pointer) = DWORD2(v47);
              v24->Status = v47;
            }
            else
            {
              *(_OWORD *)&IoStatusBlock->Status = v47;
            }
            if ( v11 )
            {
              if ( (v15->Flags & 0x8000000) == 0 )
                KeSetEvent(v11, 0, 0);
              ObfDereferenceObject(v11);
            }
            if ( v15->CompletionContext )
            {
              v25 = (int)v57;
              if ( v57 )
              {
                if ( (v15->Flags & 0x2000000) == 0 )
                {
                  v54 = 0LL;
                  Irp = 0LL;
                  v44 = 0;
                  IopIncrementCompletionContextUsageCountAndReadData((ULONG_PTR)v15, &v44, &v54, &Irp);
                  if ( v54 )
                  {
                    v26 = IoSetIoCompletion(v54, (_DWORD)Irp, v25, v47, *((__int64 *)&v47 + 1), 1);
                    v27 = v47;
                    if ( v26 < 0 )
                      v27 = -1073741670;
                    LODWORD(v47) = v27;
                  }
                  if ( v44 )
                    IopDecrementCompletionContextUsageCount((ULONG_PTR)v15);
                }
              }
            }
            ObfDereferenceObject(v15);
            return v47;
          }
        }
      }
      if ( (v15->Flags & 2) != 0 )
      {
        v28 = (v15->Flags & 4) != 0;
        v29 = KeGetCurrentThread();
        --v29->KernelApcDisable;
        v30 = (volatile __int32 *)Object;
        v31 = KeAbPreAcquire((__int64)Object + 128, 0LL);
        v44 = 0;
        if ( _InterlockedExchange(v30 + 29, 1) )
        {
          LOBYTE(v33) = v28;
          LOBYTE(v32) = PreviousMode;
          v15 = (struct _FILE_OBJECT *)Object;
          v34 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, v32, v33, v31, &v44);
        }
        else
        {
          if ( v31 )
            *(_BYTE *)(v31 + 18) = 1;
          v15 = (struct _FILE_OBJECT *)Object;
          ObfReferenceObject(Object);
          v34 = 0;
        }
        if ( v44 )
        {
          if ( v11 )
            ObfDereferenceObject(v11);
          ObfDereferenceObject(v15);
          return v34;
        }
        v35 = 1;
      }
      else
      {
        v35 = 0;
      }
      IopResetEvent((__int64)v15);
      LOBYTE(v36) = v35 ^ 1;
      LOBYTE(v37) = RelatedDeviceObject->StackSize;
      v38 = (IRP *)IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v37, v36);
      v39 = v38;
      Irp = v38;
      if ( v38 )
      {
        v38->Tail.Overlay.OriginalFileObject = v15;
        v38->Tail.Overlay.Thread = CurrentThread;
        v38->RequestorMode = PreviousMode;
        v38->UserEvent = v11;
        v38->UserIosb = IoStatusBlock;
        v38->Overlay.AllocationSize = v56;
        v38->Overlay.AsynchronousParameters.UserApcContext = v57;
        CurrentStackLocation = v38->Tail.Overlay.CurrentStackLocation;
        *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 273;
        CurrentStackLocation[-1].FileObject = v15;
        CurrentStackLocation[-1].Flags = 0;
        v41 = 0;
        if ( FailImmediately )
        {
          CurrentStackLocation[-1].Flags = 1;
          v41 = 1;
        }
        if ( ExclusiveLock )
          CurrentStackLocation[-1].Flags = v41 | 2;
        CurrentStackLocation[-1].Parameters.Create.Options = Key;
        CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
        Pool2 = (CHAR *)ExAllocatePool2(97LL, 8LL, 538996553LL);
        *(_QWORD *)Pool2 = v49;
        v39->Tail.Overlay.AuxiliaryBuffer = Pool2;
        CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)Pool2;
        return IopSynchronousServiceTail(RelatedDeviceObject, v39, PreviousMode, v35, 2);
      }
      else
      {
        IopAllocateIrpCleanup(v15, v11);
        return -1073741670;
      }
    }
  }
  return result;
}
