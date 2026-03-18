/*
 * XREFs of KeRegisterObjectNotification @ 0x1402C048C
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140268DF0 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x1402BFBF0 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     ExpWorkerFactoryManagerThread @ 0x1403B27A0 (ExpWorkerFactoryManagerThread.c)
 *     NtCreateWorkerFactory @ 0x1406424A0 (NtCreateWorkerFactory.c)
 *     ExpWorkerFactoryInitialization @ 0x140A6DBC8 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140243980 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x1402462E0 (KiWakeOtherQueueWaiters.c)
 *     KiExitDispatcher @ 0x14024A750 (KiExitDispatcher.c)
 *     KiWaitSatisfyOther @ 0x1402CDA2C (KiWaitSatisfyOther.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x14050D594 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A1C00 (EtwTraceEnqueueWork.c)
 */

char __fastcall KeRegisterObjectNotification(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int64 *v8; // rcx
  __int64 v10; // rdx
  _DWORD *v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // r15
  unsigned __int8 v14; // cl
  struct _KPRCB *CurrentPrcb; // r13
  _KTHREAD *CurrentThread; // r14
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  int v20; // ecx
  __int64 *v21; // rdx
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  int v25; // eax
  bool v26; // zf

  v4 = a3;
  *(_WORD *)(a3 + 16) = 1026;
  v5 = a2;
  *(_QWORD *)(a3 + 24) = a2;
  *(_QWORD *)(a3 + 32) = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, a2, a3, (__int64)SchedulerAssist);
  if ( *(int *)(a1 + 4) > 0 )
  {
    KiWaitSatisfyOther(a1);
    *(_BYTE *)(v4 + 17) = 5;
    v13 = (_QWORD *)(v5 + 8);
    *(_QWORD *)v4 = 0LL;
    v14 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v14 <= 0xFu )
    {
      v11 = KeGetCurrentPrcb()->SchedulerAssist;
      v10 = (-1 << (v14 + 1)) & 4u | v11[5];
      v11[5] = v10;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      LOBYTE(v19) = KeIsThreadRunning(CurrentPrcb->CurrentThread, v10);
      EtwTraceEnqueueWork(CurrentThread, v4, v19);
    }
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v5, v10, (__int64)v11, v12);
    if ( (_QWORD *)*v13 == v13
      || *(_DWORD *)(v5 + 40) >= *(_DWORD *)(v5 + 44)
      || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v5 && CurrentThread->WaitReason == 15
      || !KiWakeQueueWaiter((__int64)CurrentPrcb, v5, v4) )
    {
      v20 = *(_DWORD *)(v5 + 4);
      *(_DWORD *)(v5 + 4) = v20 + 1;
      v21 = *(__int64 **)(v5 + 32);
      if ( *v21 != v5 + 24 )
LABEL_24:
        __fastfail(3u);
      *(_QWORD *)v4 = v5 + 24;
      *(_QWORD *)(v4 + 8) = v21;
      *v21 = v4;
      *(_QWORD *)(v5 + 32) = v4;
      if ( !v20 && (_QWORD *)*v13 != v13 )
        KiWakeOtherQueueWaiters((__int64)CurrentPrcb, v5, v17, v18);
    }
    _InterlockedAnd((volatile signed __int32 *)v5, 0xFFFFFF7F);
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0LL, 1LL, 0LL, CurrentIrql);
    return 1;
  }
  v8 = *(__int64 **)(a1 + 16);
  if ( *v8 != a1 + 8 )
    goto LABEL_24;
  *(_QWORD *)(v4 + 8) = v8;
  *(_QWORD *)v4 = a1 + 8;
  *v8 = v4;
  *(_QWORD *)(a1 + 16) = v4;
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v22 = KeGetCurrentIrql();
      if ( v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        v24 = v23->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v26 = (v25 & v24[5]) == 0;
        v24[5] &= v25;
        if ( v26 )
          KiRemoveSystemWorkPriorityKick(v23);
      }
    }
  }
  __writecr8(CurrentIrql);
  return 0;
}
