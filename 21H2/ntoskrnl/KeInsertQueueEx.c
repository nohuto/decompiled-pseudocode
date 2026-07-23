/*
 * XREFs of KeInsertQueueEx @ 0x14020E110
 * Callers:
 *     IoSetIoCompletionEx @ 0x14020DF30 (IoSetIoCompletionEx.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402E73C0 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx2 @ 0x1402EAA80 (IoSetIoCompletionEx2.c)
 *     IopCompleteRequest @ 0x14034D870 (IopCompleteRequest.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x1402E7B60 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F0D40 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     KeIsThreadRunning @ 0x140513294 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A79F0 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeInsertQueueEx(__int64 a1, _QWORD *a2, int a3, char a4)
{
  _QWORD *v5; // r12
  unsigned __int8 CurrentIrql; // cl
  char v10; // bp
  struct _KPRCB *CurrentPrcb; // r14
  _KTHREAD *CurrentThread; // rdi
  _QWORD *p_Lock; // rcx
  _DWORD *SchedulerAssist; // r9
  int v16; // edx
  _QWORD *v17; // rcx
  __int64 v18; // r8
  char v19; // [rsp+70h] [rbp+8h]
  unsigned int v20; // [rsp+88h] [rbp+20h]

  v5 = (_QWORD *)(a1 + 8);
  CurrentIrql = KeGetCurrentIrql();
  v19 = CurrentIrql;
  __writecr8(2uLL);
  v10 = 0;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    LOBYTE(v18) = KeIsThreadRunning(CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, a2, v18);
  }
  if ( a3 && (*(_BYTE *)(a1 + 1) & 2) != 0 )
    a3 = 0;
  p_Lock = &CurrentThread->Header.Lock;
  if ( CurrentThread[1].WaitBlock[1].Object )
    p_Lock = CurrentThread[1].WaitBlock[1].Object;
  if ( a4 && *(_BYTE *)(p_Lock[68] + 1850LL) == 2 )
    v10 = 1;
  KiAcquireKobjectLockSafe(a1);
  v20 = *(_DWORD *)(a1 + 4);
  if ( (_QWORD *)*v5 == v5
    || *(_DWORD *)(a1 + 40) >= *(_DWORD *)(a1 + 44) && !v10
    || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a1 && CurrentThread->WaitReason == 15
    || !(unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, a1, a2) )
  {
    v16 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v16 + 1;
    v17 = *(_QWORD **)(a1 + 32);
    if ( *v17 != a1 + 24 )
      __fastfail(3u);
    *a2 = a1 + 24;
    a2[1] = v17;
    *v17 = a2;
    *(_QWORD *)(a1 + 32) = a2;
    if ( !v16 && (_QWORD *)*v5 != v5 )
      KiWakeOtherQueueWaiters(CurrentPrcb, a1);
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiExitDispatcher((_DWORD)CurrentPrcb, a4 != 0 ? 3 : 0, 1, a3, v19);
  return v20;
}
