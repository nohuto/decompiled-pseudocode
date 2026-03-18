/*
 * XREFs of KeInsertQueue @ 0x1402624D0
 * Callers:
 *     IopPassiveInterruptDpc @ 0x140459F80 (IopPassiveInterruptDpc.c)
 *     FsRtlpPostStackOverflow @ 0x140542FC4 (FsRtlpPostStackOverflow.c)
 *     EtwpQueueReply @ 0x1406F20E8 (EtwpQueueReply.c)
 * Callees:
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F6A70 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14035B550 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x14056B1E4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14062DA60 (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeInsertQueue(PRKQUEUE Queue, PLIST_ENTRY Entry)
{
  LIST_ENTRY *p_WaitListHead; // rbp
  char CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  _KTHREAD *CurrentThread; // r14
  LONG SignalState; // r12d
  _DWORD *SchedulerAssist; // r9
  LONG v11; // edx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v13; // r8

  p_WaitListHead = &Queue->Header.WaitListHead;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    LOBYTE(v13) = KeIsThreadRunning(CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, Entry, v13);
  }
  KiAcquireKobjectLockSafe(Queue);
  SignalState = Queue->Header.SignalState;
  if ( p_WaitListHead->Flink == p_WaitListHead
    || Queue->CurrentCount >= Queue->MaximumCount
    || (PRKQUEUE)CurrentThread->Queue == Queue && CurrentThread->WaitReason == 15
    || !(unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, Queue, Entry) )
  {
    v11 = Queue->Header.SignalState;
    Queue->Header.SignalState = v11 + 1;
    Blink = Queue->EntryListHead.Blink;
    if ( Blink->Flink != &Queue->EntryListHead )
      __fastfail(3u);
    Entry->Flink = &Queue->EntryListHead;
    Entry->Blink = Blink;
    Blink->Flink = Entry;
    Queue->EntryListHead.Blink = Entry;
    if ( !v11 && p_WaitListHead->Flink != p_WaitListHead )
      KiWakeOtherQueueWaiters(CurrentPrcb, Queue);
  }
  else
  {
    Entry->Flink = 0LL;
  }
  _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
  return SignalState;
}
