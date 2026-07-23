/*
 * XREFs of ExInterlockedRemoveHeadList @ 0x140330BC0
 * Callers:
 *     PopFxProcessWorkPool @ 0x1402E3688 (PopFxProcessWorkPool.c)
 *     WheapWorkQueueWorkerRoutine @ 0x1405B8280 (WheapWorkQueueWorkerRoutine.c)
 *     WmipEventNotification @ 0x140740B60 (WmipEventNotification.c)
 * Callees:
 *     ExpAcquireSpinLockDisabled @ 0x140330C54 (ExpAcquireSpinLockDisabled.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

PLIST_ENTRY __stdcall ExInterlockedRemoveHeadList(PLIST_ENTRY ListHead, PKSPIN_LOCK Lock)
{
  _LIST_ENTRY *Flink; // rbx
  char v5; // bp
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  struct _LIST_ENTRY *v9; // rax
  int v10; // edx

  Flink = 0LL;
  v5 = ExpAcquireSpinLockDisabled(Lock);
  if ( ListHead->Flink != ListHead )
  {
    Flink = ListHead->Flink;
    v9 = ListHead->Flink->Flink;
    if ( ListHead->Flink->Blink != ListHead || v9->Blink != Flink )
      __fastfail(3u);
    ListHead->Flink = v9;
    v9->Blink = ListHead;
  }
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v10 = SchedulerAssist[6] - 1;
      SchedulerAssist[6] = v10;
      if ( !v10 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( v5 )
    _enable();
  return Flink;
}
