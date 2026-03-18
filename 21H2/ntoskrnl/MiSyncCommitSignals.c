/*
 * XREFs of MiSyncCommitSignals @ 0x1403CF698
 * Callers:
 *     MiReplenishLocalCommit @ 0x140240348 (MiReplenishLocalCommit.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiFreeMdlPageRun @ 0x1402C3410 (MiFreeMdlPageRun.c)
 *     MiChargeCommit @ 0x14032A4B0 (MiChargeCommit.c)
 *     MiFinishHardFault @ 0x140334C40 (MiFinishHardFault.c)
 *     MiRemoveLockedPageCharge @ 0x1403377E0 (MiRemoveLockedPageCharge.c)
 *     MiComputeCommitThresholds @ 0x1403CF630 (MiComputeCommitThresholds.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
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
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 16040), &LockHandle);
  v4 = *(_QWORD *)(a1 + 17256);
  if ( v4 >= *(_QWORD *)(a1 + 16024) )
  {
    v8 = *(struct _KEVENT **)(a1 + 304);
    if ( v4 < *(_QWORD *)(a1 + 16032) )
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
      v4 = *(_QWORD *)(a1 + 16008);
      if ( *(_QWORD *)(a1 + 17496) == v4 )
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
