/*
 * XREFs of FsRtlUninitializeFileLock @ 0x140259FA0
 * Callers:
 *     FsRtlFreeFileLock @ 0x140259F70 (FsRtlFreeFileLock.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140203D88 (ExFreeToNPagedLookasideList.c)
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     RtlDeleteNoSplay @ 0x14021D900 (RtlDeleteNoSplay.c)
 *     FsRtlCompleteLockIrpReal @ 0x14021F5E4 (FsRtlCompleteLockIrpReal.c)
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void __stdcall FsRtlUninitializeFileLock(PFILE_LOCK FileLock)
{
  char *LockInformation; // rbx
  KIRQL v3; // bp
  RTL_SPLAY_LINKS **v4; // r14
  RTL_SPLAY_LINKS *v5; // rdi
  PRTL_SPLAY_LINKS *v6; // rsi
  PRTL_SPLAY_LINKS v7; // rdi
  _QWORD *v8; // rdi
  KSPIN_LOCK *v9; // rcx
  RTL_SPLAY_LINKS *v10; // rsi
  _RTL_SPLAY_LINKS *Parent; // rdx
  __int64 v12; // rsi
  KIRQL v13; // dl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r8
  _DWORD *SchedulerAssist; // r10
  int v17; // eax
  bool v18; // zf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // rdx
  _DWORD *v21; // r9
  int v22; // eax
  NTSTATUS v23; // [rsp+60h] [rbp+8h] BYREF

  v23 = 0;
  LockInformation = (char *)FileLock->LockInformation;
  if ( LockInformation )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&FsRtlFileLockCancelCollideLock);
    KxAcquireSpinLock((PKSPIN_LOCK)LockInformation + 3);
    v4 = (RTL_SPLAY_LINKS **)(LockInformation + 32);
    while ( 1 )
    {
      v5 = *v4;
      if ( !*v4 )
        break;
      v10 = v5 - 1;
      while ( 1 )
      {
        Parent = v10->Parent;
        if ( !v10->Parent )
          break;
        v10->Parent = Parent->Parent;
        ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, Parent);
      }
      RtlDeleteNoSplay(v5, (PRTL_SPLAY_LINKS *)LockInformation + 4);
      ExFreeToNPagedLookasideList(&FsRtlLockTreeNodeLookasideList, &v5[-1]);
    }
    v6 = (PRTL_SPLAY_LINKS *)(LockInformation + 40);
    while ( 1 )
    {
      v7 = *v6;
      if ( !*v6 )
        break;
      RtlDeleteNoSplay(*v6, (PRTL_SPLAY_LINKS *)LockInformation + 5);
      ExFreeToNPagedLookasideList(&FsRtlExclusiveLockLookasideList, v7);
    }
    while ( 1 )
    {
      v8 = (_QWORD *)*((_QWORD *)LockInformation + 6);
      v9 = (KSPIN_LOCK *)(LockInformation + 24);
      if ( !v8 )
        break;
      *((_QWORD *)LockInformation + 6) = *v8;
      v12 = v8[3];
      KxReleaseSpinLock(v9);
      *(_BYTE *)(v12 + 69) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)(v12 + 104), 0LL);
      v13 = *(_BYTE *)(v12 + 69);
      if ( *(_BYTE *)(v12 + 68) )
      {
        KeReleaseQueuedSpinLock(7uLL, v13);
        *v8 = FsRtlFileLockCancelCollideList;
        FsRtlFileLockCancelCollideList = (__int64)v8;
      }
      else
      {
        KeReleaseQueuedSpinLock(7uLL, v13);
        KxReleaseSpinLock(&FsRtlFileLockCancelCollideLock);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v3 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v17 = ~(unsigned __int16)(-1LL << (v3 + 1));
              v18 = (v17 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v17;
              if ( v18 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v3);
        *(_QWORD *)(v12 + 56) = 0LL;
        FsRtlCompleteLockIrpReal(
          *((__int64 (__fastcall **)(__int64, IRP *))LockInformation + 1),
          v8[2],
          (IRP *)v12,
          -1073741698,
          &v23,
          0LL);
        ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, v8);
        v3 = KeAcquireSpinLockRaiseToDpc(&FsRtlFileLockCancelCollideLock);
      }
      KxAcquireSpinLock((PKSPIN_LOCK)LockInformation + 3);
    }
    KxReleaseSpinLock(v9);
    KxReleaseSpinLock(&FsRtlFileLockCancelCollideLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v19 = KeGetCurrentIrql();
        if ( v19 <= 0xFu && v3 <= 0xFu && v19 >= 2u )
        {
          v20 = KeGetCurrentPrcb();
          v21 = v20->SchedulerAssist;
          v22 = ~(unsigned __int16)(-1LL << (v3 + 1));
          v18 = (v22 & v21[5]) == 0;
          v21[5] &= v22;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(v20);
        }
      }
    }
    __writecr8(v3);
    ExFreeToNPagedLookasideList(&FsRtlLockInfoLookasideList, LockInformation);
    FileLock->LockInformation = 0LL;
  }
}
