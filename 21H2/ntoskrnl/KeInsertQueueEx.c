/*
 * XREFs of KeInsertQueueEx @ 0x140311A50
 * Callers:
 *     IoSetIoCompletionEx3 @ 0x140257EE0 (IoSetIoCompletionEx3.c)
 *     IopInsertIrpInCompletionQueue @ 0x140311870 (IopInsertIrpInCompletionQueue.c)
 *     IopCompleteRequest @ 0x140347E10 (IopCompleteRequest.c)
 * Callees:
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F6A70 (KiWakeQueueWaiter.c)
 *     KiIsForegroundThread @ 0x1402F8020 (KiIsForegroundThread.c)
 *     KiWakeOtherQueueWaiters @ 0x14035B550 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x14056B1E4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14062DA60 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeInsertQueueEx(__int64 a1, _QWORD *a2, __int64 a3, _DWORD *SchedulerAssist)
{
  char v4; // r14
  _QWORD *v5; // rsi
  int v6; // r12d
  BOOL v7; // ebp
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rax
  _KTHREAD *CurrentThread; // rdi
  __int64 Object; // rcx
  bool v13; // r13
  __int64 v14; // r9
  unsigned int v15; // r15d
  _QWORD *v16; // rdi
  __int64 v17; // r13
  unsigned int v19; // eax
  int v20; // edx
  _QWORD *v21; // rcx
  unsigned __int8 IsThreadRunning; // al
  __int64 v23; // rdx
  unsigned __int8 v24; // [rsp+30h] [rbp-48h]
  __int64 v25; // [rsp+80h] [rbp+8h]

  v4 = 0;
  v5 = (_QWORD *)(a1 + 8);
  v6 = a3;
  v7 = (_BYTE)SchedulerAssist != 0;
  CurrentIrql = KeGetCurrentIrql();
  v24 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a3 = (unsigned int)(-1LL << (CurrentIrql + 1)) & 4 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v25 = (__int64)CurrentPrcb;
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, v23, IsThreadRunning);
  }
  if ( v6 && (*(_BYTE *)(a1 + 1) & 2) != 0 )
    v6 = 0;
  Object = (__int64)CurrentThread[1].WaitBlock[1].Object;
  if ( !Object )
    Object = (__int64)CurrentThread;
  v13 = v7 && KiIsForegroundThread(Object);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, (__int64)a2, a3, (__int64)SchedulerAssist);
  v15 = *(_DWORD *)(a1 + 4);
  if ( (_QWORD *)*v5 == v5 )
  {
    v16 = a2;
    v19 = v15 + 1;
    v17 = v25;
    v20 = *(_DWORD *)(a1 + 4);
  }
  else
  {
    if ( *(_DWORD *)(a1 + 40) >= *(_DWORD *)(a1 + 44) && !v13
      || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a1 && CurrentThread->WaitReason == 15 )
    {
      v17 = v25;
      v16 = a2;
    }
    else
    {
      v16 = a2;
      v17 = v25;
      if ( KiWakeQueueWaiter(v25, a1, (__int64)a2, v14) )
      {
        *a2 = 0LL;
        goto LABEL_14;
      }
    }
    v20 = *(_DWORD *)(a1 + 4);
    v19 = v20 + 1;
  }
  *(_DWORD *)(a1 + 4) = v19;
  v21 = *(_QWORD **)(a1 + 32);
  if ( *v21 != a1 + 24 )
    __fastfail(3u);
  *v16 = a1 + 24;
  v16[1] = v21;
  *v21 = v16;
  *(_QWORD *)(a1 + 32) = v16;
  if ( !v20 && (_QWORD *)*v5 != v5 )
    KiWakeOtherQueueWaiters(v17, a1);
LABEL_14:
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( v7 )
    v4 = 3;
  KiExitDispatcher(v17, v4, 1, v6, v24);
  return v15;
}
