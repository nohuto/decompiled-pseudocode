/*
 * XREFs of KeRegisterObjectNotification @ 0x14026745C
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14020FDA0 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x140266BC0 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     ExpWorkerFactoryManagerThread @ 0x1403B45A0 (ExpWorkerFactoryManagerThread.c)
 *     NtCreateWorkerFactory @ 0x14060D350 (NtCreateWorkerFactory.c)
 *     ExpWorkerFactoryInitialization @ 0x140A6E2C0 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140280030 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140280080 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x140282AC0 (KiWakeOtherQueueWaiters.c)
 *     KiExitDispatcher @ 0x140286FF0 (KiExitDispatcher.c)
 *     KiWaitSatisfyOther @ 0x14030F3FC (KiWaitSatisfyOther.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x14050DBE4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A22F0 (EtwTraceEnqueueWork.c)
 */

char __fastcall KeRegisterObjectNotification(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bp
  _QWORD *v7; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // r15
  unsigned __int8 v11; // cl
  struct _KPRCB *CurrentPrcb; // r13
  _KTHREAD *CurrentThread; // r14
  _DWORD *v14; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v16; // r8
  int v17; // ecx
  _QWORD *v18; // rdx
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  _DWORD *v21; // r8
  int v22; // eax
  bool v23; // zf

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
    v10 = (_QWORD *)(a2 + 8);
    *(_QWORD *)a3 = 0LL;
    v11 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v11 <= 0xFu )
    {
      v14 = KeGetCurrentPrcb()->SchedulerAssist;
      v9 = (-1 << (v11 + 1)) & 4u | v14[5];
      v14[5] = v9;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      LOBYTE(v16) = KeIsThreadRunning(CurrentPrcb->CurrentThread, v9);
      EtwTraceEnqueueWork(CurrentThread, a3, v16);
    }
    KiAcquireKobjectLockSafe(a2);
    if ( (_QWORD *)*v10 == v10
      || *(_DWORD *)(a2 + 40) >= *(_DWORD *)(a2 + 44)
      || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a2 && CurrentThread->WaitReason == 15
      || !(unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, a2, a3) )
    {
      v17 = *(_DWORD *)(a2 + 4);
      *(_DWORD *)(a2 + 4) = v17 + 1;
      v18 = *(_QWORD **)(a2 + 32);
      if ( *v18 != a2 + 24 )
LABEL_24:
        __fastfail(3u);
      *(_QWORD *)a3 = a2 + 24;
      *(_QWORD *)(a3 + 8) = v18;
      *v18 = a3;
      *(_QWORD *)(a2 + 32) = a3;
      if ( !v17 && (_QWORD *)*v10 != v10 )
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
      v19 = KeGetCurrentIrql();
      if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v21 = v20->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v23 = (v22 & v21[5]) == 0;
        v21[5] &= v22;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
  }
  __writecr8(CurrentIrql);
  return 0;
}
