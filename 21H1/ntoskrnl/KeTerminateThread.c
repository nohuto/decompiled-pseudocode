/*
 * XREFs of KeTerminateThread @ 0x140355A18
 * Callers:
 *     PspExitThread @ 0x1407064A0 (PspExitThread.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x140208000 (KxAcquireQueuedSpinLock.c)
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140243980 (KiWakeQueueWaiter.c)
 *     KiProcessThreadWaitList @ 0x1402443B0 (KiProcessThreadWaitList.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiWakeOtherQueueWaiters @ 0x1402462E0 (KiWakeOtherQueueWaiters.c)
 *     KiTryUnwaitThread @ 0x14024C350 (KiTryUnwaitThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiSwapThread @ 0x140265350 (KiSwapThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402A37D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x140311544 (KiRemoveThreadFromSchedulingGroup.c)
 *     ExQueueWorkItemEx @ 0x140356CA0 (ExQueueWorkItemEx.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1403573EC (KiActivateWaiterQueueWithNoLocks.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x14050D594 (KeIsThreadRunning.c)
 *     KeDisableProfiling @ 0x140516024 (KeDisableProfiling.c)
 *     EtwTraceEnqueueWork @ 0x1405A1C00 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeTerminateThread(ULONG_PTR BugCheckParameter1)
{
  bool v1; // zf
  __int64 v3; // rdx
  __int64 v4; // rbp
  unsigned __int8 CurrentIrql; // cl
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *v18; // rdx
  __int64 v19; // r8
  _DWORD *v20; // r9
  _QWORD *v21; // r14
  _QWORD *v22; // r15
  signed __int64 *v23; // r8
  signed __int64 v24; // rax
  signed __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v28; // rsi
  char v29; // al
  __int64 v30; // r8
  __int64 v31; // rdx
  _QWORD *v32; // rcx
  __int64 v33; // rbp
  _QWORD *v34; // r12
  unsigned __int8 v35; // cl
  struct _KPRCB *v36; // rax
  _KTHREAD *CurrentThread; // r13
  __int64 v38; // r13
  int v39; // ecx
  __int64 v40; // r8
  struct _KPRCB *v41; // rsi
  _DWORD *v42; // rcx
  _DWORD *v43; // rcx
  int v44; // eax
  int v45; // eax
  _DWORD *SchedulerAssist; // r9
  signed __int32 v47[8]; // [rsp+0h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  int v49; // [rsp+90h] [rbp+8h] BYREF
  struct _KPRCB *v50; // [rsp+98h] [rbp+10h]
  struct _KPRCB *v51; // [rsp+A0h] [rbp+18h]

  v1 = (*(_DWORD *)(BugCheckParameter1 + 116) & 0x1000) == 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !v1 )
    KeBugCheckEx(0x107u, BugCheckParameter1, 0LL, 0LL, 0LL);
  v3 = *(_QWORD *)(BugCheckParameter1 + 360);
  if ( v3 )
    KeDisableProfiling(BugCheckParameter1, *(_QWORD *)(v3 + 8));
  v4 = *(_QWORD *)(BugCheckParameter1 + 544);
  *(_BYTE *)(BugCheckParameter1 + 643) = 22;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  v9 = (__int64 *)(BugCheckParameter1 + 760);
  if ( *(_QWORD *)(BugCheckParameter1 + 760) == *(_QWORD *)(BugCheckParameter1 + 768) )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)KiProcessListLock;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, KiProcessListLock);
    v31 = *(_QWORD *)(v4 + 848);
    v32 = *(_QWORD **)(v4 + 856);
    if ( *(_QWORD *)(v31 + 8) != v4 + 848 || *v32 != v4 + 848 )
LABEL_44:
      __fastfail(3u);
    *v32 = v31;
    *(_QWORD *)(v31 + 8) = v32;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)v4, v6, v7, v8);
  v12 = *v9;
  v13 = *(__int64 **)(BugCheckParameter1 + 768);
  if ( *(__int64 **)(*v9 + 8) != v9 || (__int64 *)*v13 != v9 )
    goto LABEL_44;
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
  _InterlockedAnd((volatile signed __int32 *)v4, 0xFFFFFF7F);
  if ( *(_QWORD *)(BugCheckParameter1 + 104) )
    KiRemoveThreadFromSchedulingGroup(BugCheckParameter1, v12, v10, v11);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  v16 = *(_QWORD *)(BugCheckParameter1 + 232);
  if ( v16 )
    KiActivateWaiterQueueWithNoLocks(BugCheckParameter1, v16, BugCheckParameter1 + 520);
  CurrentPrcb = KeGetCurrentPrcb();
  v51 = CurrentPrcb;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)BugCheckParameter1, v16, v14, v15);
  v21 = (_QWORD *)(BugCheckParameter1 + 8);
  *(_DWORD *)(BugCheckParameter1 + 4) = 1;
  v22 = *(_QWORD **)(BugCheckParameter1 + 8);
  while ( v22 != v21 )
  {
    v28 = (__int64)v22;
    v22 = (_QWORD *)*v22;
    v29 = *(_BYTE *)(v28 + 16);
    if ( v29 == 1 )
    {
      v30 = *(unsigned __int16 *)(v28 + 18);
      goto LABEL_28;
    }
    if ( v29 == 2 )
    {
      *(_BYTE *)(v28 + 17) = 5;
      v33 = *(_QWORD *)(v28 + 24);
      *(_QWORD *)v28 = 0LL;
      v34 = (_QWORD *)(v33 + 8);
      v35 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v35 <= 0xFu )
      {
        v20 = KeGetCurrentPrcb()->SchedulerAssist;
        v18 = (_QWORD *)((-1LL << (v35 + 1)) & 4);
        v19 = (unsigned int)v18 | v20[5];
        v20[5] = v19;
      }
      v36 = KeGetCurrentPrcb();
      v50 = v36;
      CurrentThread = v36->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v40) = KeIsThreadRunning(v36->CurrentThread, v18);
        EtwTraceEnqueueWork(CurrentThread, v28, v40);
      }
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v33, (__int64)v18, v19, (__int64)v20);
      if ( (_QWORD *)*v34 == v34
        || *(_DWORD *)(v33 + 40) >= *(_DWORD *)(v33 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v33 && CurrentThread->WaitReason == 15 )
      {
        v38 = (__int64)v50;
      }
      else
      {
        v38 = (__int64)v50;
        if ( KiWakeQueueWaiter((__int64)v50, v33, v28) )
          goto LABEL_48;
      }
      v39 = *(_DWORD *)(v33 + 4);
      *(_DWORD *)(v33 + 4) = v39 + 1;
      v18 = *(_QWORD **)(v33 + 32);
      if ( *v18 != v33 + 24 )
        goto LABEL_44;
      *(_QWORD *)v28 = v33 + 24;
      *(_QWORD *)(v28 + 8) = v18;
      *v18 = v28;
      *(_QWORD *)(v33 + 32) = v28;
      if ( !v39 && (_QWORD *)*v34 != v34 )
        KiWakeOtherQueueWaiters(v38, v33, v19, (__int64)v20);
LABEL_48:
      _InterlockedAnd((volatile signed __int32 *)v33, 0xFFFFFF7F);
      CurrentPrcb = v51;
    }
    else
    {
      v30 = 256LL;
LABEL_28:
      KiTryUnwaitThread((__int64)CurrentPrcb, v28, v30, 0LL);
    }
  }
  *(_QWORD *)(BugCheckParameter1 + 16) = BugCheckParameter1 + 8;
  *v21 = v21;
  _InterlockedAnd((volatile signed __int32 *)BugCheckParameter1, 0xFFFFFF7F);
  *(_BYTE *)(BugCheckParameter1 + 388) = 4;
  if ( CurrentPrcb->DeferredReadyListHead.Next )
    KiProcessThreadWaitList((__int64)CurrentPrcb, 1LL, 0LL, 0LL);
  v23 = (signed __int64 *)(BugCheckParameter1 + 1112);
  _m_prefetchw(&PsReaperListHead);
  v24 = PsReaperListHead;
  do
  {
    *v23 = v24;
    v25 = v24;
    v24 = _InterlockedCompareExchange64(&PsReaperListHead, (signed __int64)v23, v24);
  }
  while ( v24 != v25 );
  if ( v24 )
  {
    if ( qword_140C1E198 && _interlockedbittestandreset((volatile signed __int32 *)&qword_140C1E198, 0) )
    {
      v26 = 0xFFFFLL;
      goto LABEL_20;
    }
  }
  else
  {
    v26 = 0xFFFFFFFFLL;
LABEL_20:
    if ( !(unsigned __int8)ExQueueWorkItemEx(&PsReaperWorkItem, 2LL, v26) )
      _interlockedbittestandset((volatile signed __int32 *)&qword_140C1E198, 0);
  }
  _InterlockedOr(v47, 0);
  if ( *(_QWORD *)(BugCheckParameter1 + 64) )
  {
    v41 = KeGetCurrentPrcb();
    v49 = 0;
    while ( 1 )
    {
      v42 = v41->SchedulerAssist;
      if ( v42 )
      {
        if ( v41->NestingLevel <= 1u )
        {
          v44 = v42[6];
          v42[6] = v44 + 1;
          if ( v44 == -1 )
            KiRemoveSystemWorkPriorityKick(v41);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
        break;
      v43 = v41->SchedulerAssist;
      if ( v43 )
      {
        if ( v41->NestingLevel <= 1u )
        {
          v45 = v43[6] - 1;
          v43[6] = v45;
          if ( !v45 )
            KiRemoveSystemWorkPriorityKick(v41);
        }
      }
      do
        KeYieldProcessorEx(&v49, (__int64)v18, (__int64)v23, (__int64)v20);
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    KiReleaseThreadLockSafe(BugCheckParameter1);
  }
  return KiSwapThread(BugCheckParameter1, (__int64)CurrentPrcb, 0LL);
}
