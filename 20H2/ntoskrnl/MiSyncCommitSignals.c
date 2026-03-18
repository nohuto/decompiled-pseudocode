/*
 * XREFs of MiSyncCommitSignals @ 0x1403BF0D4
 * Callers:
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14027C2B0 (MiChargeCommit.c)
 *     MiUnlockMdlWritePages @ 0x1402A9130 (MiUnlockMdlWritePages.c)
 *     MiRemoveLockedPageCharge @ 0x1402C96D0 (MiRemoveLockedPageCharge.c)
 *     MiReplenishLocalCommit @ 0x1403176E0 (MiReplenishLocalCommit.c)
 *     MiComputeCommitThresholds @ 0x1403BF06C (MiComputeCommitThresholds.c)
 * Callees:
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

int __fastcall MiSyncCommitSignals(__int64 a1, int a2)
{
  unsigned __int64 v4; // rax
  struct _KEVENT *v5; // rcx
  struct _KEVENT *v6; // rcx
  struct _KEVENT *v7; // rcx
  struct _KEVENT *v8; // rcx
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a2 )
    LockHandle.OldIrql = 17;
  else
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 6248), &LockHandle);
  v4 = *(_QWORD *)(a1 + 7464);
  if ( v4 >= *(_QWORD *)(a1 + 6232) )
  {
    v8 = *(struct _KEVENT **)(a1 + 304);
    if ( v4 < *(_QWORD *)(a1 + 6240) )
    {
      if ( v8->Header.SignalState == 1 )
      {
        KeResetEvent(v8);
        LODWORD(v4) = KeResetEvent(*(PRKEVENT *)(a1 + 312));
      }
    }
    else
    {
      if ( !v8->Header.SignalState )
        KeSetEvent(v8, 0, 0);
      v4 = *(_QWORD *)(a1 + 6216);
      if ( *(_QWORD *)(a1 + 7592) == v4 )
        LODWORD(v4) = KeSetEvent(*(PRKEVENT *)(a1 + 312), 0, 0);
    }
    v7 = *(struct _KEVENT **)(a1 + 296);
    if ( v7->Header.SignalState == 1 )
      goto LABEL_8;
  }
  else
  {
    v5 = *(struct _KEVENT **)(a1 + 296);
    if ( !v5->Header.SignalState )
      LODWORD(v4) = KeSetEvent(v5, 0, 0);
    v6 = *(struct _KEVENT **)(a1 + 304);
    if ( v6->Header.SignalState == 1 )
    {
      KeResetEvent(v6);
      v7 = *(struct _KEVENT **)(a1 + 312);
LABEL_8:
      LODWORD(v4) = KeResetEvent(v7);
    }
  }
  if ( !a2 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    LODWORD(v4) = KiIrqlFlags;
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LODWORD(v4) = KeGetCurrentIrql();
        if ( (unsigned __int8)v4 <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)v4 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          LODWORD(v4) = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v12 = ((unsigned int)v4 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v4;
          if ( v12 )
            LODWORD(v4) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  return v4;
}
