/*
 * XREFs of KeInsertQueueEx @ 0x140339334
 * Callers:
 *     NtReleaseWorkerFactoryWorker @ 0x140282320 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx2 @ 0x140282C40 (IoSetIoCompletionEx2.c)
 *     IoSetIoCompletionEx @ 0x1402837B0 (IoSetIoCompletionEx.c)
 *     IopCompleteRequest @ 0x140285F60 (IopCompleteRequest.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140280030 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140280080 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x140282AC0 (KiWakeOtherQueueWaiters.c)
 *     KiExitDispatcher @ 0x140286FF0 (KiExitDispatcher.c)
 *     KeIsThreadRunning @ 0x14050DBE4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A22F0 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeInsertQueueEx(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  char v4; // r13
  _QWORD *v5; // r12
  unsigned int v6; // r15d
  _QWORD *v7; // rsi
  unsigned __int8 CurrentIrql; // cl
  char v10; // bp
  struct _KPRCB *CurrentPrcb; // r14
  _KTHREAD *CurrentThread; // rdi
  _QWORD *p_Lock; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v17; // edx
  _QWORD *v18; // rcx
  __int64 v19; // r8
  unsigned __int8 v20; // [rsp+70h] [rbp+8h]
  unsigned int v21; // [rsp+88h] [rbp+20h]

  v4 = (char)SchedulerAssist;
  v5 = (_QWORD *)(a1 + 8);
  v6 = a3;
  v7 = (_QWORD *)a2;
  CurrentIrql = KeGetCurrentIrql();
  v20 = CurrentIrql;
  __writecr8(2uLL);
  v10 = 0;
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
    LOBYTE(v19) = KeIsThreadRunning(CurrentPrcb->CurrentThread, a2);
    EtwTraceEnqueueWork(CurrentThread, v7, v19);
  }
  if ( v6 && (*(_BYTE *)(a1 + 1) & 2) != 0 )
    v6 = 0;
  p_Lock = &CurrentThread->Header.Lock;
  if ( CurrentThread[1].WaitBlock[1].Object )
    p_Lock = CurrentThread[1].WaitBlock[1].Object;
  if ( v4 && *(_BYTE *)(p_Lock[68] + 1850LL) == 2 )
    v10 = 1;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, a2, a3, (__int64)SchedulerAssist);
  v21 = *(_DWORD *)(a1 + 4);
  if ( (_QWORD *)*v5 == v5
    || *(_DWORD *)(a1 + 40) >= *(_DWORD *)(a1 + 44) && !v10
    || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a1 && CurrentThread->WaitReason == 15
    || !KiWakeQueueWaiter((__int64)CurrentPrcb, a1, (__int64)v7) )
  {
    v17 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v17 + 1;
    v18 = *(_QWORD **)(a1 + 32);
    if ( *v18 != a1 + 24 )
      __fastfail(3u);
    *v7 = a1 + 24;
    v7[1] = v18;
    *v18 = v7;
    *(_QWORD *)(a1 + 32) = v7;
    if ( !v17 && (_QWORD *)*v5 != v5 )
      KiWakeOtherQueueWaiters((__int64)CurrentPrcb, a1, v14, v15);
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, v4 != 0 ? 3 : 0, 1LL, v6, v20);
  return v21;
}
