/*
 * XREFs of KeRegisterObjectNotification @ 0x1402A7858
 * Callers:
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x140203B30 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A7A90 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpWorkerFactoryManagerThread @ 0x1403B7710 (ExpWorkerFactoryManagerThread.c)
 *     NtCreateWorkerFactory @ 0x1406AB120 (NtCreateWorkerFactory.c)
 *     ExpWorkerFactoryInitialization @ 0x140A72A20 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     KiWaitSatisfyOther @ 0x14022AA88 (KiWaitSatisfyOther.c)
 *     KiWakeOtherQueueWaiters @ 0x1402E7B60 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F0D40 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x140513294 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A79F0 (EtwTraceEnqueueWork.c)
 */

char __fastcall KeRegisterObjectNotification(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bp
  _QWORD *v7; // rcx
  _QWORD *v9; // r15
  unsigned __int8 v10; // cl
  struct _KPRCB *CurrentPrcb; // r13
  _KTHREAD *CurrentThread; // r14
  _DWORD *v13; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v15; // r8
  int v16; // ecx
  _QWORD *v17; // rdx
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  _DWORD *v20; // r8
  int v21; // eax
  bool v22; // zf

  *(_WORD *)(a3 + 16) = 1026;
  *(_QWORD *)(a3 + 24) = a2;
  *(_QWORD *)(a3 + 32) = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  KiAcquireKobjectLockSafe(a1);
  if ( *(int *)(a1 + 4) > 0 )
  {
    KiWaitSatisfyOther(a1);
    *(_BYTE *)(a3 + 17) = 5;
    v9 = (_QWORD *)(a2 + 8);
    *(_QWORD *)a3 = 0LL;
    v10 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v10 <= 0xFu )
    {
      v13 = KeGetCurrentPrcb()->SchedulerAssist;
      v13[5] |= (-1 << (v10 + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      LOBYTE(v15) = KeIsThreadRunning(CurrentPrcb->CurrentThread);
      EtwTraceEnqueueWork(CurrentThread, a3, v15);
    }
    KiAcquireKobjectLockSafe(a2);
    if ( (_QWORD *)*v9 == v9
      || *(_DWORD *)(a2 + 40) >= *(_DWORD *)(a2 + 44)
      || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a2 && CurrentThread->WaitReason == 15
      || !(unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, a2, a3) )
    {
      v16 = *(_DWORD *)(a2 + 4);
      *(_DWORD *)(a2 + 4) = v16 + 1;
      v17 = *(_QWORD **)(a2 + 32);
      if ( *v17 != a2 + 24 )
LABEL_24:
        __fastfail(3u);
      *(_QWORD *)a3 = a2 + 24;
      *(_QWORD *)(a3 + 8) = v17;
      *v17 = a3;
      *(_QWORD *)(a2 + 32) = a3;
      if ( !v16 && (_QWORD *)*v9 != v9 )
        KiWakeOtherQueueWaiters(CurrentPrcb, a2);
    }
    _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    KiExitDispatcher((unsigned int)KeGetCurrentPrcb(), 0, 1, 0, CurrentIrql);
    return 1;
  }
  v7 = *(_QWORD **)(a1 + 16);
  if ( *v7 != a1 + 8 )
    goto LABEL_24;
  *(_QWORD *)(a3 + 8) = v7;
  *(_QWORD *)a3 = a1 + 8;
  *v7 = a3;
  *(_QWORD *)(a1 + 16) = a3;
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v18 = KeGetCurrentIrql();
      if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
      {
        v19 = KeGetCurrentPrcb();
        v20 = v19->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v22 = (v21 & v20[5]) == 0;
        v20[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(v19);
      }
    }
  }
  __writecr8(CurrentIrql);
  return 0;
}
