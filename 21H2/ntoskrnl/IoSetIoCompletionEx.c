/*
 * XREFs of IoSetIoCompletionEx @ 0x14022A180
 * Callers:
 *     PspNotificationPacketCallback @ 0x1406A1DE0 (PspNotificationPacketCallback.c)
 *     PspSendReliableJobNotification @ 0x1406A2200 (PspSendReliableJobNotification.c)
 *     NtSetIoCompletionEx @ 0x1406A22D0 (NtSetIoCompletionEx.c)
 * Callees:
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F6A70 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14035B550 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x14056B1E4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14062DA60 (EtwTraceEnqueueWork.c)
 *     IopAllocateMiniCompletionPacket @ 0x1407D57AC (IopAllocateMiniCompletionPacket.c)
 */

__int64 __fastcall IoSetIoCompletionEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7)
{
  __int64 MiniCompletionPacket; // rbx
  __int64 v11; // rdi
  _QWORD *v12; // rsi
  char CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbp
  _KTHREAD *CurrentThread; // r13
  unsigned int v16; // r14d
  int v17; // edx
  __int64 *v18; // rcx
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 IsThreadRunning; // al

  MiniCompletionPacket = a7;
  v11 = a1;
  if ( a7 || (LOBYTE(a1) = 1, (MiniCompletionPacket = IopAllocateMiniCompletionPacket(a1, a6)) != 0) )
  {
    *(_DWORD *)(MiniCompletionPacket + 40) = a4;
    v12 = (_QWORD *)(v11 + 8);
    *(_QWORD *)(MiniCompletionPacket + 48) = a5;
    *(_QWORD *)(MiniCompletionPacket + 24) = a2;
    *(_QWORD *)(MiniCompletionPacket + 32) = a3;
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
      EtwTraceEnqueueWork(CurrentThread, MiniCompletionPacket, IsThreadRunning);
    }
    KiAcquireKobjectLockSafe(v11);
    v16 = 0;
    if ( (_QWORD *)*v12 == v12
      || *(_DWORD *)(v11 + 40) >= *(_DWORD *)(v11 + 44)
      || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v11 && CurrentThread->WaitReason == 15
      || !(unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, v11, MiniCompletionPacket) )
    {
      v17 = *(_DWORD *)(v11 + 4);
      *(_DWORD *)(v11 + 4) = v17 + 1;
      v18 = *(__int64 **)(v11 + 32);
      if ( *v18 != v11 + 24 )
        __fastfail(3u);
      *(_QWORD *)MiniCompletionPacket = v11 + 24;
      *(_QWORD *)(MiniCompletionPacket + 8) = v18;
      *v18 = MiniCompletionPacket;
      *(_QWORD *)(v11 + 32) = MiniCompletionPacket;
      if ( !v17 && (_QWORD *)*v12 != v12 )
        KiWakeOtherQueueWaiters(CurrentPrcb, v11);
    }
    else
    {
      *(_QWORD *)MiniCompletionPacket = 0LL;
    }
    _InterlockedAnd((volatile signed __int32 *)v11, 0xFFFFFF7F);
    KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v16;
}
