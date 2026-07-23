/*
 * XREFs of FsRtlPrivateLock @ 0x1402F8A80
 * Callers:
 *     FsRtlProcessFileLock @ 0x1404EE3F0 (FsRtlProcessFileLock.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140205EF4 (ExAllocateFromNPagedLookasideList.c)
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x14021E6F0 (KeReleaseSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     FsRtlPrivateInsertLock @ 0x1402F8D50 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x1402F950C (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlPrivateCheckForExclusiveLockAccess @ 0x1402F99EC (FsRtlPrivateCheckForExclusiveLockAccess.c)
 *     FsRtlPrivateInitializeFileLock @ 0x1402F9E20 (FsRtlPrivateInitializeFileLock.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     FsRtlCompleteLockIrpReal @ 0x1404EDD90 (FsRtlCompleteLockIrpReal.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404EE1D0 (FsRtlPrivateCancelFileLockIrp.c)
 *     FsRtlPrivateRemoveLock @ 0x1404EE3A0 (FsRtlPrivateRemoveLock.c)
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
  char *v19; // rcx
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
  int NewIrql; // [rsp+40h] [rbp-88h]
  int v32; // [rsp+48h] [rbp-80h] BYREF
  KSPIN_LOCK *v33; // [rsp+50h] [rbp-78h]
  KSPIN_LOCK *v34; // [rsp+58h] [rbp-70h]
  __int128 v35; // [rsp+60h] [rbp-68h] BYREF
  __int128 v36; // [rsp+70h] [rbp-58h]
  __int128 v37; // [rsp+80h] [rbp-48h]
  struct _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+90h] [rbp-38h]

  v14 = FileObject;
  BYTE2(NewIrql) = 0;
  v33 = 0LL;
  v16 = 0LL;
  v34 = 0LL;
  LOBYTE(NewIrql) = -1;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  LockInformation = (KSPIN_LOCK *)FileLock->LockInformation;
  v33 = LockInformation;
  if ( !LockInformation )
  {
    LOBYTE(FileObject) = Irp == 0LL;
    if ( !(unsigned __int8)FsRtlPrivateInitializeFileLock(FileLock, FileObject) )
      goto LABEL_14;
    FileLock->FastIoIsQuestionable = 1;
    LockInformation = (KSPIN_LOCK *)FileLock->LockInformation;
    v33 = LockInformation;
  }
  *(LARGE_INTEGER *)&v35 = *FileOffset;
  QuadPart = Length->QuadPart;
  *((_QWORD *)&v35 + 1) = QuadPart;
  *((_QWORD *)&v37 + 1) = v35 + QuadPart - 1;
  DWORD1(v36) = Key;
  *((_QWORD *)&v36 + 1) = v14;
  *(_QWORD *)&v37 = ProcessId;
  LOBYTE(v36) = ExclusiveLock;
  v16 = LockInformation + 3;
  v34 = LockInformation + 3;
  if ( *((_QWORD *)&v37 + 1) < (unsigned __int64)v35 && QuadPart )
  {
    v21 = Iosb;
    Iosb->Status = -1073741407;
    goto LABEL_10;
  }
  BYTE2(NewIrql) = 1;
  LOBYTE(NewIrql) = KeAcquireSpinLockRaiseToDpc(LockInformation + 3);
  v19 = (char *)(LockInformation + 3);
  if ( ExclusiveLock )
    v20 = FsRtlPrivateCheckForExclusiveLockAccess(v19, &v35);
  else
    v20 = FsRtlPrivateCheckForSharedLockAccess(v19, &v35);
  HIBYTE(NewIrql) = v20;
  if ( v20 )
  {
    if ( (unsigned __int8)FsRtlPrivateInsertLock(LockInformation, v14, &v35) )
    {
      v21 = Iosb;
      Iosb->Status = 0;
LABEL_10:
      BYTE1(NewIrql) = 1;
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
        BYTE2(NewIrql) = 0;
      }
      v21 = Iosb;
      Iosb->Status = 259;
      LockInformation = v33;
      v16 = v34;
      goto LABEL_10;
    }
  }
LABEL_14:
  BYTE1(NewIrql) = 0;
  v21 = Iosb;
LABEL_29:
  if ( BYTE2(NewIrql) )
  {
    KxReleaseSpinLock(v16);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)NewIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)NewIrql + 1));
          v28 = (v27 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v27;
          if ( v28 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          LockInformation = v33;
        }
      }
    }
    __writecr8((unsigned __int8)NewIrql);
  }
  if ( Irp && v21->Status != 259 )
  {
    v32 = 0;
    ObfReferenceObjectWithTag(v14, 0x746C6644u);
    FsRtlCompleteLockIrpReal(LockInformation[1], Context, Irp, (unsigned int)v21->Status, &v32, v14, NewIrql);
    v30 = v32;
    if ( v32 < 0 && v21->Status >= 0 )
    {
      LOBYTE(v29) = 1;
      FsRtlPrivateRemoveLock(LockInformation, &v35, v29);
    }
    ObfDereferenceObjectWithTag(v14, 0x746C6644u);
    v21->Status = v30;
  }
  return BYTE1(NewIrql);
}
