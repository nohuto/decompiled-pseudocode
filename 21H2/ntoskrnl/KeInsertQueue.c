/*
 * XREFs of KeInsertQueue @ 0x1402CCD30
 * Callers:
 *     FsRtlpPostStackOverflow @ 0x1404F16D4 (FsRtlpPostStackOverflow.c)
 *     IopPassiveInterruptDpc @ 0x14050D590 (IopPassiveInterruptDpc.c)
 *     KiSwapToUmsThreadContinue @ 0x140526520 (KiSwapToUmsThreadContinue.c)
 *     EtwpQueueReply @ 0x1406BB3D0 (EtwpQueueReply.c)
 *     KeSynchronizeUmsThread @ 0x1408BD688 (KeSynchronizeUmsThread.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140243310 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x14024C4A0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x14024C4F0 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x140343AC0 (KiExitDispatcher.c)
 *     KeIsThreadRunning @ 0x140513054 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A77C0 (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeInsertQueue(PRKQUEUE Queue, PLIST_ENTRY Entry)
{
  __int64 v2; // r8
  _DWORD *SchedulerAssist; // r9
  PLIST_ENTRY v4; // rdi
  LIST_ENTRY *p_WaitListHead; // rbp
  char CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  _KTHREAD *CurrentThread; // r14
  __int64 v10; // r9
  LONG v11; // edx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v14; // r8
  LONG SignalState; // [rsp+50h] [rbp+8h]

  v4 = Entry;
  p_WaitListHead = &Queue->Header.WaitListHead;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
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
    LOBYTE(v14) = KeIsThreadRunning(CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, v4, v14);
  }
  KiAcquireKobjectLockSafe(&Queue->Header.Lock, (__int64)Entry, v2, (__int64)SchedulerAssist);
  SignalState = Queue->Header.SignalState;
  if ( p_WaitListHead->Flink == p_WaitListHead
    || Queue->CurrentCount >= Queue->MaximumCount
    || (PRKQUEUE)CurrentThread->Queue == Queue && CurrentThread->WaitReason == 15
    || !KiWakeQueueWaiter((__int64)CurrentPrcb, (__int64)Queue, (__int64)v4, v10) )
  {
    v11 = Queue->Header.SignalState;
    Queue->Header.SignalState = v11 + 1;
    Blink = Queue->EntryListHead.Blink;
    if ( Blink->Flink != &Queue->EntryListHead )
      __fastfail(3u);
    v4->Flink = &Queue->EntryListHead;
    v4->Blink = Blink;
    Blink->Flink = v4;
    Queue->EntryListHead.Blink = v4;
    if ( !v11 && p_WaitListHead->Flink != p_WaitListHead )
      KiWakeOtherQueueWaiters((__int64)CurrentPrcb, (__int64)Queue);
  }
  _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
  return SignalState;
}
