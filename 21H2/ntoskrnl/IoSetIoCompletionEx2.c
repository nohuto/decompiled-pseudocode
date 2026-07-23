/*
 * XREFs of IoSetIoCompletionEx2 @ 0x1402EAA80
 * Callers:
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140202AA0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140202C40 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     AlpcpQueueIoCompletionPort @ 0x14022AED0 (AlpcpQueueIoCompletionPort.c)
 *     ExpShutdownWorkerFactory @ 0x14026DC18 (ExpShutdownWorkerFactory.c)
 *     AlpcpSignalAndWait @ 0x1402A9AC0 (AlpcpSignalAndWait.c)
 *     NtSetIoCompletion @ 0x1405F46B0 (NtSetIoCompletion.c)
 *     IoSetIoCompletion @ 0x14060F950 (IoSetIoCompletion.c)
 * Callees:
 *     KeInsertQueueEx @ 0x14020E110 (KeInsertQueueEx.c)
 *     KiWakeOtherQueueWaiters @ 0x1402E7B60 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F0D40 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     KeIsThreadRunning @ 0x140513294 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A79F0 (EtwTraceEnqueueWork.c)
 *     IopAllocateMiniCompletionPacket @ 0x1406ABF1C (IopAllocateMiniCompletionPacket.c)
 */

__int64 IoSetIoCompletionEx2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7,
        char a8,
        ...)
{
  unsigned int v9; // r14d
  __int64 v13; // rbx
  _QWORD *v14; // r15
  char CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r13
  _KTHREAD *CurrentThread; // rbp
  _QWORD *p_Lock; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 MiniCompletionPacket; // rax
  int v22; // edx
  _QWORD *v23; // rcx
  unsigned __int8 IsThreadRunning; // al
  bool v25; // [rsp+A0h] [rbp+38h]

  v9 = 0;
  v13 = a1;
  if ( a7 )
  {
    v14 = (_QWORD *)(a1 + 8);
    *(_QWORD *)(a7 + 48) = a5;
    *(_QWORD *)(a7 + 24) = a2;
    *(_QWORD *)(a7 + 32) = a3;
    *(_DWORD *)(a7 + 40) = a4;
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
      IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
      EtwTraceEnqueueWork(CurrentThread, a7, IsThreadRunning);
    }
    p_Lock = &CurrentThread->Header.Lock;
    if ( CurrentThread[1].WaitBlock[1].Object )
      p_Lock = CurrentThread[1].WaitBlock[1].Object;
    v25 = a8 && *(_BYTE *)(p_Lock[68] + 1850LL) == 2;
    KiAcquireKobjectLockSafe(v13);
    if ( (_QWORD *)*v14 == v14
      || *(_DWORD *)(v13 + 40) >= *(_DWORD *)(v13 + 44) && !v25
      || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v13 && CurrentThread->WaitReason == 15
      || !(unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, v13, a7) )
    {
      v22 = *(_DWORD *)(v13 + 4);
      *(_DWORD *)(v13 + 4) = v22 + 1;
      v23 = *(_QWORD **)(v13 + 32);
      if ( *v23 != v13 + 24 )
        __fastfail(3u);
      *(_QWORD *)a7 = v13 + 24;
      *(_QWORD *)(a7 + 8) = v23;
      *v23 = a7;
      *(_QWORD *)(v13 + 32) = a7;
      if ( !v22 && (_QWORD *)*v14 != v14 )
        KiWakeOtherQueueWaiters((__int64)CurrentPrcb, v13);
    }
    _InterlockedAnd((volatile signed __int32 *)v13, 0xFFFFFF7F);
    KiExitDispatcher((_DWORD)CurrentPrcb, a8 != 0 ? 3 : 0, 1, 0, CurrentIrql);
  }
  else
  {
    LOBYTE(a1) = 1;
    MiniCompletionPacket = IopAllocateMiniCompletionPacket(a1, a6);
    if ( MiniCompletionPacket )
    {
      *(_QWORD *)(MiniCompletionPacket + 24) = a2;
      *(_QWORD *)(MiniCompletionPacket + 32) = a3;
      *(_DWORD *)(MiniCompletionPacket + 40) = a4;
      *(_QWORD *)(MiniCompletionPacket + 48) = a5;
      KeInsertQueueEx(v13, (_QWORD *)MiniCompletionPacket, 0, a8);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v9;
}
