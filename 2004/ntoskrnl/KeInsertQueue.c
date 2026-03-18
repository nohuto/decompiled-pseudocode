/*
 * XREFs of KeInsertQueue @ 0x14035ACC0
 * Callers:
 *     FsRtlpPostStackOverflow @ 0x1404EC2A4 (FsRtlpPostStackOverflow.c)
 *     IopPassiveInterruptDpc @ 0x140508130 (IopPassiveInterruptDpc.c)
 *     KiSwapToUmsThreadContinue @ 0x140521070 (KiSwapToUmsThreadContinue.c)
 *     EtwpQueueReply @ 0x140709430 (EtwpQueueReply.c)
 *     KeSynchronizeUmsThread @ 0x1408BA168 (KeSynchronizeUmsThread.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140280030 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140280080 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x140282AC0 (KiWakeOtherQueueWaiters.c)
 *     KiExitDispatcher @ 0x140286FF0 (KiExitDispatcher.c)
 *     KeIsThreadRunning @ 0x14050DBE4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A22F0 (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeInsertQueue(PRKQUEUE Queue, PLIST_ENTRY Entry)
{
  __int64 v2; // r8
  _DWORD *SchedulerAssist; // r9
  PLIST_ENTRY v4; // rdi
  LIST_ENTRY *p_WaitListHead; // rbp
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  _KTHREAD *CurrentThread; // r14
  __int64 v10; // r8
  __int64 v11; // r9
  LONG v12; // edx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v15; // r8
  LONG SignalState; // [rsp+50h] [rbp+8h]

  v4 = Entry;
  p_WaitListHead = &Queue->Header.WaitListHead;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    Entry = (PLIST_ENTRY)((-1LL << (CurrentIrql + 1)) & 4);
    v2 = (unsigned int)Entry | SchedulerAssist[5];
    SchedulerAssist[5] = v2;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    LOBYTE(v15) = KeIsThreadRunning(CurrentPrcb->CurrentThread, Entry);
    EtwTraceEnqueueWork(CurrentThread, v4, v15);
  }
  KiAcquireKobjectLockSafe(&Queue->Header.Lock, (__int64)Entry, v2, (__int64)SchedulerAssist);
  SignalState = Queue->Header.SignalState;
  if ( p_WaitListHead->Flink == p_WaitListHead
    || Queue->CurrentCount >= Queue->MaximumCount
    || (PRKQUEUE)CurrentThread->Queue == Queue && CurrentThread->WaitReason == 15
    || !KiWakeQueueWaiter((__int64)CurrentPrcb, (__int64)Queue, (__int64)v4) )
  {
    v12 = Queue->Header.SignalState;
    Queue->Header.SignalState = v12 + 1;
    Blink = Queue->EntryListHead.Blink;
    if ( Blink->Flink != &Queue->EntryListHead )
      __fastfail(3u);
    v4->Flink = &Queue->EntryListHead;
    v4->Blink = Blink;
    Blink->Flink = v4;
    Queue->EntryListHead.Blink = v4;
    if ( !v12 && p_WaitListHead->Flink != p_WaitListHead )
      KiWakeOtherQueueWaiters((__int64)CurrentPrcb, (__int64)Queue, v10, v11);
  }
  _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0LL, CurrentIrql);
  return SignalState;
}
