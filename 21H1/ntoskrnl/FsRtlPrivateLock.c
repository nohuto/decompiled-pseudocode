/*
 * XREFs of FsRtlPrivateLock @ 0x1402E3940
 * Callers:
 *     FsRtlProcessFileLock @ 0x1404EA530 (FsRtlProcessFileLock.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1402C1284 (ExAllocateFromNPagedLookasideList.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x1402E28D8 (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     FsRtlPrivateInsertLock @ 0x1402E4864 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x1402E4A80 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     KeReleaseSpinLock @ 0x1402E7EE0 (KeReleaseSpinLock.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     FsRtlPrivateInitializeFileLock @ 0x14031F568 (FsRtlPrivateInitializeFileLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     FsRtlCompleteLockIrpReal @ 0x1404E9ED0 (FsRtlCompleteLockIrpReal.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404EA310 (FsRtlPrivateCancelFileLockIrp.c)
 *     FsRtlPrivateRemoveLock @ 0x1404EA4E0 (FsRtlPrivateRemoveLock.c)
 */

BOOLEAN __stdcall FsRtlPrivateLock(
        PFILE_LOCK FileLock,
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        PLARGE_INTEGER Length,
        PEPROCESS ProcessId,
        ULONG Key,
        BOOLEAN FailImmediately,
        BOOLEAN ExclusiveLock,
        PIO_STATUS_BLOCK Iosb,
        PIRP Irp,
        PVOID Context,
        BOOLEAN AlreadySynchronized)
{
  PFILE_OBJECT v14; // r15
  KSPIN_LOCK *v16; // rsi
  KSPIN_LOCK *LockInformation; // r14
  LONGLONG QuadPart; // r8
  __int64 v19; // rcx
  char v20; // al
  PIO_STATUS_BLOCK v21; // rbx
  _QWORD *v22; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // eax
  bool v28; // zf
  __int64 v29; // r8
  NTSTATUS v30; // edi
  KIRQL NewIrql; // [rsp+40h] [rbp-88h]
  BOOLEAN v32; // [rsp+41h] [rbp-87h]
  char v33; // [rsp+42h] [rbp-86h]
  int v34; // [rsp+48h] [rbp-80h] BYREF
  KSPIN_LOCK *v35; // [rsp+50h] [rbp-78h]
  KSPIN_LOCK *v36; // [rsp+58h] [rbp-70h]
  __int128 v37; // [rsp+60h] [rbp-68h] BYREF
  __int128 v38; // [rsp+70h] [rbp-58h]
  __int128 v39; // [rsp+80h] [rbp-48h]
  struct _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+90h] [rbp-38h]

  v14 = FileObject;
  v33 = 0;
  v35 = 0LL;
  v16 = 0LL;
  v36 = 0LL;
  NewIrql = -1;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  LockInformation = (KSPIN_LOCK *)FileLock->LockInformation;
  v35 = LockInformation;
  if ( !LockInformation )
  {
    LOBYTE(FileObject) = Irp == 0LL;
    if ( !(unsigned __int8)FsRtlPrivateInitializeFileLock(FileLock, FileObject) )
      goto LABEL_14;
    FileLock->FastIoIsQuestionable = 1;
    LockInformation = (KSPIN_LOCK *)FileLock->LockInformation;
    v35 = LockInformation;
  }
  *(LARGE_INTEGER *)&v37 = *FileOffset;
  QuadPart = Length->QuadPart;
  *((_QWORD *)&v37 + 1) = QuadPart;
  *((_QWORD *)&v39 + 1) = v37 + QuadPart - 1;
  DWORD1(v38) = Key;
  *((_QWORD *)&v38 + 1) = v14;
  *(_QWORD *)&v39 = ProcessId;
  LOBYTE(v38) = ExclusiveLock;
  v16 = LockInformation + 3;
  v36 = LockInformation + 3;
  if ( *((_QWORD *)&v39 + 1) < (unsigned __int64)v37 && QuadPart )
  {
    v21 = Iosb;
    Iosb->Status = -1073741407;
    goto LABEL_10;
  }
  v33 = 1;
  NewIrql = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
  v19 = (__int64)(LockInformation + 3);
  if ( ExclusiveLock )
    v20 = FsRtlPrivateCheckForExclusiveLockAccess(v19, (__int64)&v37);
  else
    v20 = FsRtlPrivateCheckForSharedLockAccess(v19, &v37);
  if ( v20 )
  {
    if ( (unsigned __int8)FsRtlPrivateInsertLock(LockInformation, v14, &v37) )
    {
      v21 = Iosb;
      Iosb->Status = 0;
LABEL_10:
      v32 = 1;
      goto LABEL_29;
    }
    if ( Irp )
    {
      KeReleaseSpinLock(LockInformation + 3, NewIrql);
      RtlRaiseStatus(-1073741670);
    }
  }
  else
  {
    if ( FailImmediately )
    {
      v21 = Iosb;
      Iosb->Status = -1073741739;
      goto LABEL_10;
    }
    if ( Irp )
    {
      v22 = ExAllocateFromNPagedLookasideList(&FsRtlWaitingLockLookasideList);
      if ( !v22 )
      {
        KeReleaseSpinLock(LockInformation + 3, NewIrql);
        RtlRaiseStatus(-1073741670);
      }
      v22[3] = Irp;
      v22[2] = Context;
      v22[1] = LockInformation[1];
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation->Control |= 1u;
      *v22 = 0LL;
      if ( LockInformation[6] )
        *(_QWORD *)LockInformation[7] = v22;
      else
        LockInformation[6] = (KSPIN_LOCK)v22;
      LockInformation[7] = (KSPIN_LOCK)v22;
      Irp->IoStatus.Information = (ULONG_PTR)LockInformation;
      _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, (__int64)FsRtlPrivateCancelFileLockIrp);
      if ( Irp->Cancel && _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL) )
      {
        Irp->CancelIrql = NewIrql;
        FsRtlPrivateCancelFileLockIrp(0LL, Irp);
        v33 = 0;
      }
      v21 = Iosb;
      Iosb->Status = 259;
      LockInformation = v35;
      v16 = v36;
      goto LABEL_10;
    }
  }
LABEL_14:
  v32 = 0;
  v21 = Iosb;
LABEL_29:
  if ( v33 )
  {
    KxReleaseSpinLock(v16);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && NewIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << (NewIrql + 1));
          v28 = (v27 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v27;
          if ( v28 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          LockInformation = v35;
        }
      }
    }
    __writecr8(NewIrql);
  }
  if ( Irp && v21->Status != 259 )
  {
    v34 = 0;
    ObfReferenceObjectWithTag(v14, 0x746C6644u);
    FsRtlCompleteLockIrpReal(LockInformation[1], Context, Irp, (unsigned int)v21->Status, &v34, v14);
    v30 = v34;
    if ( v34 < 0 && v21->Status >= 0 )
    {
      LOBYTE(v29) = 1;
      FsRtlPrivateRemoveLock(LockInformation, &v37, v29);
    }
    ObfDereferenceObjectWithTag(v14, 0x746C6644u);
    v21->Status = v30;
  }
  return v32;
}
