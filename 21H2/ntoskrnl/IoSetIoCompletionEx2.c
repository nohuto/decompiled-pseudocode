/*
 * XREFs of IoSetIoCompletionEx2 @ 0x140246230
 * Callers:
 *     AlpcpSignalAndWait @ 0x140205180 (AlpcpSignalAndWait.c)
 *     ExpShutdownWorkerFactory @ 0x14027F9D8 (ExpShutdownWorkerFactory.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140285900 (AlpcpLookasidePacketCallbackRoutine.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140285AA0 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     AlpcpQueueIoCompletionPort @ 0x1402ACB74 (AlpcpQueueIoCompletionPort.c)
 *     NtSetIoCompletion @ 0x140695160 (NtSetIoCompletion.c)
 *     IoSetIoCompletion @ 0x1406B09A0 (IoSetIoCompletion.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140243310 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x14024C4A0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x14024C4F0 (KiWakeQueueWaiter.c)
 *     KeInsertQueueEx @ 0x1402901A0 (KeInsertQueueEx.c)
 *     KiExitDispatcher @ 0x140343AC0 (KiExitDispatcher.c)
 *     KeIsThreadRunning @ 0x140513054 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A77C0 (EtwTraceEnqueueWork.c)
 *     IopAllocateMiniCompletionPacket @ 0x1406D4C3C (IopAllocateMiniCompletionPacket.c)
 */

__int64 __fastcall IoSetIoCompletionEx2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7,
        unsigned __int8 a8)
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
      KeInsertQueueEx(v13, MiniCompletionPacket, 0LL, a8);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v9;
}
