/*
 * XREFs of KeInsertQueueEx @ 0x140295180
 * Callers:
 *     IopCompleteRequest @ 0x1402186C0 (IopCompleteRequest.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14028C630 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx2 @ 0x14028CF50 (IoSetIoCompletionEx2.c)
 *     IopInsertIrpInCompletionQueue @ 0x140294F40 (IopInsertIrpInCompletionQueue.c)
 *     IoSetIoCompletionEx @ 0x1402F1130 (IoSetIoCompletionEx.c)
 * Callees:
 *     KiExitDispatcher @ 0x1402197A0 (KiExitDispatcher.c)
 *     KiWakeOtherQueueWaiters @ 0x14028CDD0 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1402E0780 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402E07D0 (KiWakeQueueWaiter.c)
 *     KeIsThreadRunning @ 0x140511514 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A5D90 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeInsertQueueEx(__int64 a1, _QWORD *a2, unsigned int a3, char a4)
{
  unsigned int v4; // esi
  _QWORD *v5; // r14
  BOOL v7; // ebp
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r15
  _KTHREAD *CurrentThread; // rdi
  _QWORD *p_Lock; // rcx
  bool v13; // r13
  _QWORD *v14; // rdi
  _DWORD *SchedulerAssist; // r9
  int v17; // edx
  _QWORD *v18; // rcx
  unsigned __int8 IsThreadRunning; // al
  __int64 v20; // rdx
  unsigned __int8 v21; // [rsp+70h] [rbp+8h]
  unsigned int v23; // [rsp+88h] [rbp+20h]

  v4 = 0;
  v5 = (_QWORD *)(a1 + 8);
  v7 = a4 != 0;
  CurrentIrql = KeGetCurrentIrql();
  v21 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1LL << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, v20, IsThreadRunning);
  }
  if ( a3 && (*(_BYTE *)(a1 + 1) & 2) != 0 )
    a3 = 0;
  p_Lock = &CurrentThread->Header.Lock;
  if ( CurrentThread[1].WaitBlock[1].Object )
    p_Lock = CurrentThread[1].WaitBlock[1].Object;
  v13 = v7 && *(_BYTE *)(p_Lock[68] + 1850LL) == 2;
  KiAcquireKobjectLockSafe(a1);
  v23 = *(_DWORD *)(a1 + 4);
  if ( (_QWORD *)*v5 == v5
    || *(_DWORD *)(a1 + 40) >= *(_DWORD *)(a1 + 44) && !v13
    || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a1 && CurrentThread->WaitReason == 15 )
  {
    v14 = a2;
  }
  else
  {
    v14 = a2;
    if ( (unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, a1, a2) )
      goto LABEL_13;
  }
  v17 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = v17 + 1;
  v18 = *(_QWORD **)(a1 + 32);
  if ( *v18 != a1 + 24 )
    __fastfail(3u);
  *v14 = a1 + 24;
  v14[1] = v18;
  *v18 = v14;
  *(_QWORD *)(a1 + 32) = v14;
  if ( !v17 && (_QWORD *)*v5 != v5 )
    KiWakeOtherQueueWaiters((__int64)CurrentPrcb, a1);
LABEL_13:
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( v7 )
    v4 = 3;
  KiExitDispatcher((__int64)CurrentPrcb, v4, 1u, a3, v21);
  return v23;
}
