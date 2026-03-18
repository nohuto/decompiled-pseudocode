/*
 * XREFs of AlpcpQueueIoCompletion @ 0x1402F6750
 * Callers:
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1402234C0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     AlpcpSignalAndWait @ 0x1402F63D0 (AlpcpSignalAndWait.c)
 *     AlpcpQueueIoCompletionPort @ 0x14035AB2C (AlpcpQueueIoCompletionPort.c)
 * Callees:
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F6A70 (KiWakeQueueWaiter.c)
 *     KiIsForegroundThread @ 0x1402F8020 (KiIsForegroundThread.c)
 *     KiWakeOtherQueueWaiters @ 0x14035B550 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x14056B1E4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14062DA60 (EtwTraceEnqueueWork.c)
 *     IopAllocateMiniCompletionPacket @ 0x1407D57AC (IopAllocateMiniCompletionPacket.c)
 */

__int64 __fastcall AlpcpQueueIoCompletion(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist, char a5)
{
  __int64 MiniCompletionPacket; // rdi
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rbx
  _QWORD *v9; // r15
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r13
  _KTHREAD *CurrentThread; // r14
  void *Object; // rcx
  int v16; // edx
  __int64 *v17; // rcx
  unsigned __int8 IsThreadRunning; // al
  bool v19; // [rsp+78h] [rbp+20h]

  MiniCompletionPacket = (__int64)SchedulerAssist;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  if ( SchedulerAssist || (LOBYTE(a1) = 1, (MiniCompletionPacket = IopAllocateMiniCompletionPacket(a1, 0LL)) != 0) )
  {
    *(_QWORD *)(MiniCompletionPacket + 32) = v6;
    v9 = (_QWORD *)(v8 + 8);
    *(_QWORD *)(MiniCompletionPacket + 24) = v7;
    *(_DWORD *)(MiniCompletionPacket + 40) = 0;
    *(_QWORD *)(MiniCompletionPacket + 48) = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a2 = (-1LL << (CurrentIrql + 1)) & 4;
      a3 = (unsigned int)a2 | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
      EtwTraceEnqueueWork(CurrentThread, MiniCompletionPacket, IsThreadRunning);
    }
    Object = CurrentThread[1].WaitBlock[1].Object;
    if ( !Object )
      Object = CurrentThread;
    v19 = a5 && (unsigned __int8)KiIsForegroundThread(Object);
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v8, a2, a3, (__int64)SchedulerAssist);
    if ( (_QWORD *)*v9 == v9
      || *(_DWORD *)(v8 + 40) >= *(_DWORD *)(v8 + 44) && !v19
      || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v8 && CurrentThread->WaitReason == 15
      || !(unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, v8, MiniCompletionPacket) )
    {
      v16 = *(_DWORD *)(v8 + 4);
      *(_DWORD *)(v8 + 4) = v16 + 1;
      v17 = *(__int64 **)(v8 + 32);
      if ( *v17 != v8 + 24 )
        __fastfail(3u);
      *(_QWORD *)MiniCompletionPacket = v8 + 24;
      *(_QWORD *)(MiniCompletionPacket + 8) = v17;
      *v17 = MiniCompletionPacket;
      *(_QWORD *)(v8 + 32) = MiniCompletionPacket;
      if ( !v16 && (_QWORD *)*v9 != v9 )
        KiWakeOtherQueueWaiters(CurrentPrcb, v8);
    }
    else
    {
      *(_QWORD *)MiniCompletionPacket = 0LL;
    }
    _InterlockedAnd((volatile signed __int32 *)v8, 0xFFFFFF7F);
    KiExitDispatcher((__int64)CurrentPrcb, a5 != 0 ? 3 : 0, 1, 0, CurrentIrql);
    return 1;
  }
  else
  {
    return 0;
  }
}
