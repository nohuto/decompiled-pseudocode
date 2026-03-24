/*
 * XREFs of KeTerminateThread @ 0x1402784F0
 * Callers:
 *     PspExitThread @ 0x14064A838 (PspExitThread.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140243310 (KiWakeOtherQueueWaiters.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiProcessThreadWaitList @ 0x14024B2D0 (KiProcessThreadWaitList.c)
 *     KiAcquireKobjectLockSafe @ 0x14024C4A0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x14024C4F0 (KiWakeQueueWaiter.c)
 *     ExQueueWorkItemEx @ 0x14027A208 (ExQueueWorkItemEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiReleaseThreadLockSafe @ 0x14029A860 (KiReleaseThreadLockSafe.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14029F4FC (KiActivateWaiterQueueWithNoLocks.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1402EC1B8 (KiRemoveThreadFromSchedulingGroup.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140314D90 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiTryUnwaitThread @ 0x140342820 (KiTryUnwaitThread.c)
 *     KiSwapThread @ 0x1403466D0 (KiSwapThread.c)
 *     KxAcquireQueuedSpinLock @ 0x140350970 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x140513054 (KeIsThreadRunning.c)
 *     KeDisableProfiling @ 0x14051BB1C (KeDisableProfiling.c)
 *     EtwTraceEnqueueWork @ 0x1405A77C0 (EtwTraceEnqueueWork.c)
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
  __int64 *v10; // rdx
  __int64 **v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *v16; // rdx
  __int64 v17; // r8
  _DWORD *v18; // r9
  _QWORD *v19; // r14
  _QWORD *v20; // r15
  signed __int64 *v21; // r8
  signed __int64 v22; // rax
  signed __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rsi
  char v27; // al
  __int64 v28; // r8
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  __int64 v31; // rbp
  _QWORD *v32; // r12
  unsigned __int8 v33; // cl
  struct _KPRCB *v34; // rax
  _KTHREAD *CurrentThread; // r13
  __int64 v36; // r13
  int v37; // ecx
  __int64 v38; // r8
  struct _KPRCB *v39; // rsi
  _DWORD *v40; // rcx
  _DWORD *v41; // rcx
  int v42; // eax
  int v43; // eax
  _DWORD *SchedulerAssist; // r9
  signed __int32 v45[8]; // [rsp+0h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  int v47; // [rsp+90h] [rbp+8h] BYREF
  struct _KPRCB *v48; // [rsp+98h] [rbp+10h]
  struct _KPRCB *v49; // [rsp+A0h] [rbp+18h]

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
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)&KiProcessListLock;
    KxAcquireQueuedSpinLock(&LockHandle, &KiProcessListLock, v7);
    v29 = *(_QWORD *)(v4 + 848);
    v30 = *(_QWORD **)(v4 + 856);
    if ( *(_QWORD *)(v29 + 8) != v4 + 848 || *v30 != v4 + 848 )
LABEL_44:
      __fastfail(3u);
    *v30 = v29;
    *(_QWORD *)(v29 + 8) = v30;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)v4, v6, v7, v8);
  v10 = (__int64 *)*v9;
  v11 = *(__int64 ***)(BugCheckParameter1 + 768);
  if ( *(__int64 **)(*v9 + 8) != v9 || *v11 != v9 )
    goto LABEL_44;
  *v11 = v10;
  v10[1] = (__int64)v11;
  _InterlockedAnd((volatile signed __int32 *)v4, 0xFFFFFF7F);
  if ( *(_QWORD *)(BugCheckParameter1 + 104) )
    KiRemoveThreadFromSchedulingGroup(BugCheckParameter1);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  v14 = *(_QWORD *)(BugCheckParameter1 + 232);
  if ( v14 )
    KiActivateWaiterQueueWithNoLocks(BugCheckParameter1, v14, BugCheckParameter1 + 520);
  CurrentPrcb = KeGetCurrentPrcb();
  v49 = CurrentPrcb;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)BugCheckParameter1, v14, v12, v13);
  v19 = (_QWORD *)(BugCheckParameter1 + 8);
  *(_DWORD *)(BugCheckParameter1 + 4) = 1;
  v20 = *(_QWORD **)(BugCheckParameter1 + 8);
  while ( v20 != v19 )
  {
    v26 = (__int64)v20;
    v20 = (_QWORD *)*v20;
    v27 = *(_BYTE *)(v26 + 16);
    if ( v27 == 1 )
    {
      v28 = *(unsigned __int16 *)(v26 + 18);
      goto LABEL_28;
    }
    if ( v27 == 2 )
    {
      *(_BYTE *)(v26 + 17) = 5;
      v31 = *(_QWORD *)(v26 + 24);
      *(_QWORD *)v26 = 0LL;
      v32 = (_QWORD *)(v31 + 8);
      v33 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v33 <= 0xFu )
      {
        v18 = KeGetCurrentPrcb()->SchedulerAssist;
        v16 = (_QWORD *)((-1LL << (v33 + 1)) & 4);
        v17 = (unsigned int)v16 | v18[5];
        v18[5] = v17;
      }
      v34 = KeGetCurrentPrcb();
      v48 = v34;
      CurrentThread = v34->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v38) = KeIsThreadRunning(v34->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v26, v38);
      }
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v31, (__int64)v16, v17, (__int64)v18);
      if ( (_QWORD *)*v32 == v32
        || *(_DWORD *)(v31 + 40) >= *(_DWORD *)(v31 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v31 && CurrentThread->WaitReason == 15 )
      {
        v36 = (__int64)v48;
      }
      else
      {
        v36 = (__int64)v48;
        if ( KiWakeQueueWaiter((__int64)v48, v31, v26, (__int64)v18) )
          goto LABEL_48;
      }
      v37 = *(_DWORD *)(v31 + 4);
      *(_DWORD *)(v31 + 4) = v37 + 1;
      v16 = *(_QWORD **)(v31 + 32);
      if ( *v16 != v31 + 24 )
        goto LABEL_44;
      *(_QWORD *)v26 = v31 + 24;
      *(_QWORD *)(v26 + 8) = v16;
      *v16 = v26;
      *(_QWORD *)(v31 + 32) = v26;
      if ( !v37 && (_QWORD *)*v32 != v32 )
        KiWakeOtherQueueWaiters(v36, v31);
LABEL_48:
      _InterlockedAnd((volatile signed __int32 *)v31, 0xFFFFFF7F);
      CurrentPrcb = v49;
    }
    else
    {
      v28 = 256LL;
LABEL_28:
      KiTryUnwaitThread(CurrentPrcb, v26, v28, 0LL);
    }
  }
  *(_QWORD *)(BugCheckParameter1 + 16) = BugCheckParameter1 + 8;
  *v19 = v19;
  _InterlockedAnd((volatile signed __int32 *)BugCheckParameter1, 0xFFFFFF7F);
  *(_BYTE *)(BugCheckParameter1 + 388) = 4;
  if ( CurrentPrcb->DeferredReadyListHead.Next )
    KiProcessThreadWaitList((__int64)CurrentPrcb, 1u, 0, 0);
  v21 = (signed __int64 *)(BugCheckParameter1 + 1112);
  _m_prefetchw(&PsReaperListHead);
  v22 = PsReaperListHead;
  do
  {
    *v21 = v22;
    v23 = v22;
    v22 = _InterlockedCompareExchange64(&PsReaperListHead, (signed __int64)v21, v22);
  }
  while ( v22 != v23 );
  if ( v22 )
  {
    if ( qword_140C1E1F8 && _interlockedbittestandreset((volatile signed __int32 *)&qword_140C1E1F8, 0) )
    {
      v24 = 0xFFFFLL;
      goto LABEL_20;
    }
  }
  else
  {
    v24 = 0xFFFFFFFFLL;
LABEL_20:
    if ( !(unsigned __int8)ExQueueWorkItemEx(&PsReaperWorkItem, 2LL, v24) )
      _interlockedbittestandset((volatile signed __int32 *)&qword_140C1E1F8, 0);
  }
  _InterlockedOr(v45, 0);
  if ( *(_QWORD *)(BugCheckParameter1 + 64) )
  {
    v39 = KeGetCurrentPrcb();
    v47 = 0;
    while ( 1 )
    {
      v40 = v39->SchedulerAssist;
      if ( v40 )
      {
        if ( v39->NestingLevel <= 1u )
        {
          v42 = v40[6];
          v40[6] = v42 + 1;
          if ( v42 == -1 )
            KiRemoveSystemWorkPriorityKick(v39);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
        break;
      v41 = v39->SchedulerAssist;
      if ( v41 )
      {
        if ( v39->NestingLevel <= 1u )
        {
          v43 = v41[6] - 1;
          v41[6] = v43;
          if ( !v43 )
            KiRemoveSystemWorkPriorityKick(v39);
        }
      }
      do
        KeYieldProcessorEx(&v47, (__int64)v16, (__int64)v21, (__int64)v18);
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    KiReleaseThreadLockSafe(BugCheckParameter1);
  }
  return KiSwapThread(BugCheckParameter1, CurrentPrcb, 0LL);
}
