/*
 * XREFs of KiInsertQueueInternal @ 0x14030BF98
 * Callers:
 *     KiWakeOtherQueueWaiters @ 0x1402462E0 (KiWakeOtherQueueWaiters.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140243980 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x1402462E0 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x14050D594 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A1C00 (EtwTraceEnqueueWork.c)
 */

char __fastcall KiInsertQueueInternal(__int64 a1, __int64 *a2, __int64 a3, _DWORD *SchedulerAssist)
{
  _QWORD *v4; // rsi
  __int64 *v5; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r14
  _KTHREAD *CurrentThread; // rbp
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  int v13; // edx
  __int64 **v14; // rcx
  __int64 v15; // r8

  *a2 = 0LL;
  v4 = (_QWORD *)(a1 + 8);
  v5 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (__int64 *)((-1LL << (CurrentIrql + 1)) & 4);
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    LOBYTE(v15) = KeIsThreadRunning(CurrentPrcb->CurrentThread, a2);
    EtwTraceEnqueueWork(CurrentThread, v5, v15);
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, (__int64)a2, a3, (__int64)SchedulerAssist);
  if ( (_QWORD *)*v4 == v4
    || *(_DWORD *)(a1 + 40) >= *(_DWORD *)(a1 + 44)
    || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a1 && CurrentThread->WaitReason == 15
    || (LOBYTE(v12) = KiWakeQueueWaiter((__int64)CurrentPrcb, a1, (__int64)v5), !(_BYTE)v12) )
  {
    v13 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v13 + 1;
    v12 = a1 + 24;
    v14 = *(__int64 ***)(a1 + 32);
    if ( *v14 != (__int64 *)(a1 + 24) )
      __fastfail(3u);
    *v5 = v12;
    v5[1] = (__int64)v14;
    *v14 = v5;
    *(_QWORD *)(a1 + 32) = v5;
    if ( !v13 && (_QWORD *)*v4 != v4 )
      LOBYTE(v12) = KiWakeOtherQueueWaiters((__int64)CurrentPrcb, a1, v10, v11);
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return v12;
}
