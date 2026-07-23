/*
 * XREFs of FsRtlUninitializeFileLock @ 0x14032CFE0
 * Callers:
 *     FsRtlFreeFileLock @ 0x14032C220 (FsRtlFreeFileLock.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14021E350 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140269FBC (ExFreeToNPagedLookasideList.c)
 *     KeReleaseQueuedSpinLock @ 0x1402BE540 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402BE5E0 (KeAcquireQueuedSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlDeleteNoSplay @ 0x140330680 (RtlDeleteNoSplay.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     FsRtlCompleteLockIrpReal @ 0x1404EA500 (FsRtlCompleteLockIrpReal.c)
 */

void __stdcall FsRtlUninitializeFileLock(PFILE_LOCK FileLock)
{
  char *LockInformation; // rbx
  KIRQL v3; // bp
  _QWORD *v4; // rsi
  PRTL_SPLAY_LINKS *v5; // rsi
  PRTL_SPLAY_LINKS v6; // rdi
  _QWORD *v7; // rdi
  KSPIN_LOCK *v8; // rcx
  _RTL_SPLAY_LINKS *v9; // rdi
  _RTL_SPLAY_LINKS *Parent; // rdx
  __int64 v11; // rsi
  KIRQL v12; // dl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r8
  _DWORD *SchedulerAssist; // r10
  int v16; // eax
  bool v17; // zf
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // rdx
  _DWORD *v20; // r9
  int v21; // eax
  int v22; // [rsp+60h] [rbp+8h] BYREF

  v22 = 0;
  LockInformation = (char *)FileLock->LockInformation;
  if ( LockInformation )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&FsRtlFileLockCancelCollideLock);
    KxAcquireSpinLock((PKSPIN_LOCK)LockInformation + 3);
    v4 = LockInformation + 32;
    while ( *v4 )
    {
      v9 = (_RTL_SPLAY_LINKS *)(*v4 - 24LL);
      while ( v9->Parent )
      {
        Parent = v9->Parent;
        v9->Parent = v9->Parent->Parent;
        ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, Parent);
      }
      RtlDeleteNoSplay(v9 + 1, (PRTL_SPLAY_LINKS *)LockInformation + 4);
      ExFreeToNPagedLookasideList(&FsRtlLockTreeNodeLookasideList, v9);
    }
    v5 = (PRTL_SPLAY_LINKS *)(LockInformation + 40);
    while ( 1 )
    {
      v6 = *v5;
      if ( !*v5 )
        break;
      RtlDeleteNoSplay(*v5, (PRTL_SPLAY_LINKS *)LockInformation + 5);
      ExFreeToNPagedLookasideList(&FsRtlExclusiveLockLookasideList, v6);
    }
    while ( 1 )
    {
      v7 = (_QWORD *)*((_QWORD *)LockInformation + 6);
      v8 = (KSPIN_LOCK *)(LockInformation + 24);
      if ( !v7 )
        break;
      *((_QWORD *)LockInformation + 6) = *v7;
      v11 = v7[3];
      KxReleaseSpinLock(v8);
      *(_BYTE *)(v11 + 69) = KeAcquireQueuedSpinLock(7uLL);
      _InterlockedExchange64((volatile __int64 *)(v11 + 104), 0LL);
      v12 = *(_BYTE *)(v11 + 69);
      if ( *(_BYTE *)(v11 + 68) )
      {
        KeReleaseQueuedSpinLock(7uLL, v12);
        *v7 = FsRtlFileLockCancelCollideList;
        FsRtlFileLockCancelCollideList = (__int64)v7;
      }
      else
      {
        KeReleaseQueuedSpinLock(7uLL, v12);
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
              v16 = ~(unsigned __int16)(-1LL << (v3 + 1));
              v17 = (v16 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v16;
              if ( v17 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v3);
        *(_QWORD *)(v11 + 56) = 0LL;
        FsRtlCompleteLockIrpReal(*((_QWORD *)LockInformation + 1), v7[2], v11, 3221225598LL, &v22, 0LL);
        ExFreeToNPagedLookasideList(&FsRtlWaitingLockLookasideList, v7);
        v3 = KeAcquireSpinLockRaiseToDpc(&FsRtlFileLockCancelCollideLock);
      }
      KxAcquireSpinLock((PKSPIN_LOCK)LockInformation + 3);
    }
    KxReleaseSpinLock(v8);
    KxReleaseSpinLock(&FsRtlFileLockCancelCollideLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v18 = KeGetCurrentIrql();
        if ( v18 <= 0xFu && v3 <= 0xFu && v18 >= 2u )
        {
          v19 = KeGetCurrentPrcb();
          v20 = v19->SchedulerAssist;
          v21 = ~(unsigned __int16)(-1LL << (v3 + 1));
          v17 = (v21 & v20[5]) == 0;
          v20[5] &= v21;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(v19);
        }
      }
    }
    __writecr8(v3);
    ExFreeToNPagedLookasideList(&FsRtlLockInfoLookasideList, LockInformation);
    FileLock->LockInformation = 0LL;
  }
}
