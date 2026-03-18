/*
 * XREFs of IoSetIoCompletionEx2 @ 0x140246460
 * Callers:
 *     AlpcpSignalAndWait @ 0x140259F40 (AlpcpSignalAndWait.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1402D9B50 (AlpcpLookasidePacketCallbackRoutine.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x1402DA270 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     AlpcpQueueIoCompletionPort @ 0x140334A14 (AlpcpQueueIoCompletionPort.c)
 *     ExpShutdownWorkerFactory @ 0x14035B4F8 (ExpShutdownWorkerFactory.c)
 *     NtSetIoCompletion @ 0x1406C52E0 (NtSetIoCompletion.c)
 *     IoSetIoCompletion @ 0x1406DD050 (IoSetIoCompletion.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140243980 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x1402462E0 (KiWakeOtherQueueWaiters.c)
 *     KiExitDispatcher @ 0x14024A750 (KiExitDispatcher.c)
 *     KeInsertQueueEx @ 0x1402FBFF8 (KeInsertQueueEx.c)
 *     KeIsThreadRunning @ 0x14050D594 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A1C00 (EtwTraceEnqueueWork.c)
 *     IopAllocateMiniCompletionPacket @ 0x14064406C (IopAllocateMiniCompletionPacket.c)
 */

__int64 __fastcall IoSetIoCompletionEx2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *SchedulerAssist,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7,
        unsigned __int8 a8)
{
  unsigned int v9; // r14d
  int v10; // ebp
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // rbx
  _QWORD *v14; // r15
  char CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r13
  _KTHREAD *CurrentThread; // rbp
  _QWORD *p_Lock; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 MiniCompletionPacket; // rax
  int v23; // edx
  _QWORD *v24; // rcx
  unsigned __int8 IsThreadRunning; // al
  bool v26; // [rsp+A0h] [rbp+38h]

  v9 = 0;
  v10 = (int)SchedulerAssist;
  v11 = a3;
  v12 = a2;
  v13 = a1;
  if ( a7 )
  {
    v14 = (_QWORD *)(a1 + 8);
    *(_QWORD *)(a7 + 48) = a5;
    *(_QWORD *)(a7 + 24) = a2;
    *(_QWORD *)(a7 + 32) = a3;
    *(_DWORD *)(a7 + 40) = (_DWORD)SchedulerAssist;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
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
      IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread, a2);
      EtwTraceEnqueueWork(CurrentThread, a7, IsThreadRunning);
    }
    p_Lock = &CurrentThread->Header.Lock;
    if ( CurrentThread[1].WaitBlock[1].Object )
      p_Lock = CurrentThread[1].WaitBlock[1].Object;
    v26 = a8 && *(_BYTE *)(p_Lock[68] + 1850LL) == 2;
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v13, a2, a3, (__int64)SchedulerAssist);
    if ( (_QWORD *)*v14 == v14
      || *(_DWORD *)(v13 + 40) >= *(_DWORD *)(v13 + 44) && !v26
      || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v13 && CurrentThread->WaitReason == 15
      || !KiWakeQueueWaiter((__int64)CurrentPrcb, v13, a7) )
    {
      v23 = *(_DWORD *)(v13 + 4);
      *(_DWORD *)(v13 + 4) = v23 + 1;
      v24 = *(_QWORD **)(v13 + 32);
      if ( *v24 != v13 + 24 )
        __fastfail(3u);
      *(_QWORD *)a7 = v13 + 24;
      *(_QWORD *)(a7 + 8) = v24;
      *v24 = a7;
      *(_QWORD *)(v13 + 32) = a7;
      if ( !v23 && (_QWORD *)*v14 != v14 )
        KiWakeOtherQueueWaiters((__int64)CurrentPrcb, v13, v19, v20);
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
      *(_QWORD *)(MiniCompletionPacket + 24) = v12;
      *(_QWORD *)(MiniCompletionPacket + 32) = v11;
      *(_DWORD *)(MiniCompletionPacket + 40) = v10;
      *(_QWORD *)(MiniCompletionPacket + 48) = a5;
      KeInsertQueueEx(v13, MiniCompletionPacket, 0LL, a8);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v9;
}
