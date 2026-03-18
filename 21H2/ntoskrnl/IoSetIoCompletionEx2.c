/*
 * XREFs of IoSetIoCompletionEx2 @ 0x14035A850
 * Callers:
 *     IoSetIoCompletion @ 0x1407D55B0 (IoSetIoCompletion.c)
 *     NtSetIoCompletion @ 0x1407D5700 (NtSetIoCompletion.c)
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

__int64 __fastcall IoSetIoCompletionEx2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *SchedulerAssist,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7,
        char a8)
{
  __int64 MiniCompletionPacket; // rbx
  int v9; // esi
  __int64 v10; // rbp
  __int64 v11; // r14
  __int64 v12; // rdi
  unsigned int v13; // esi
  _QWORD *v14; // rbp
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r13
  _KTHREAD *CurrentThread; // r14
  __int64 Object; // rcx
  bool v19; // r12
  __int64 v20; // r9
  char v21; // dl
  int v23; // edx
  __int64 *v24; // rcx
  unsigned __int8 IsThreadRunning; // al
  unsigned __int8 v26; // [rsp+90h] [rbp+38h]

  MiniCompletionPacket = a7;
  v9 = (int)SchedulerAssist;
  v10 = a3;
  v11 = a2;
  v12 = a1;
  if ( a7 || (LOBYTE(a1) = 1, (MiniCompletionPacket = IopAllocateMiniCompletionPacket(a1, a6)) != 0) )
  {
    *(_DWORD *)(MiniCompletionPacket + 40) = v9;
    v13 = 0;
    *(_QWORD *)(MiniCompletionPacket + 48) = a5;
    *(_QWORD *)(MiniCompletionPacket + 32) = v10;
    *(_QWORD *)(MiniCompletionPacket + 24) = v11;
    v14 = (_QWORD *)(v12 + 8);
    CurrentIrql = KeGetCurrentIrql();
    v26 = CurrentIrql;
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
    Object = (__int64)CurrentThread;
    if ( CurrentThread[1].WaitBlock[1].Object )
      Object = (__int64)CurrentThread[1].WaitBlock[1].Object;
    v19 = a8 && KiIsForegroundThread(Object);
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v12, a2, a3, (__int64)SchedulerAssist);
    if ( (_QWORD *)*v14 == v14
      || *(_DWORD *)(v12 + 40) >= *(_DWORD *)(v12 + 44) && !v19
      || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v12 && CurrentThread->WaitReason == 15
      || !KiWakeQueueWaiter((__int64)CurrentPrcb, v12, MiniCompletionPacket, v20) )
    {
      v23 = *(_DWORD *)(v12 + 4);
      *(_DWORD *)(v12 + 4) = v23 + 1;
      v24 = *(__int64 **)(v12 + 32);
      if ( *v24 != v12 + 24 )
        __fastfail(3u);
      *(_QWORD *)MiniCompletionPacket = v12 + 24;
      *(_QWORD *)(MiniCompletionPacket + 8) = v24;
      *v24 = MiniCompletionPacket;
      *(_QWORD *)(v12 + 32) = MiniCompletionPacket;
      if ( !v23 && (_QWORD *)*v14 != v14 )
        KiWakeOtherQueueWaiters(CurrentPrcb, v12);
    }
    else
    {
      *(_QWORD *)MiniCompletionPacket = 0LL;
    }
    _InterlockedAnd((volatile signed __int32 *)v12, 0xFFFFFF7F);
    v21 = 0;
    if ( a8 )
      v21 = 3;
    KiExitDispatcher((__int64)CurrentPrcb, v21, 1, 0, v26);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v13;
}
