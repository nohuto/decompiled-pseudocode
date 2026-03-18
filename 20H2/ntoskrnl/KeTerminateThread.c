/*
 * XREFs of KeTerminateThread @ 0x1402D602C
 * Callers:
 *     PspExitThread @ 0x14068390C (PspExitThread.c)
 * Callees:
 *     KiTryUnwaitThread @ 0x1402183C0 (KiTryUnwaitThread.c)
 *     KiSwapThread @ 0x14021C4C0 (KiSwapThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14022EA40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiWakeOtherQueueWaiters @ 0x14028CDD0 (KiWakeOtherQueueWaiters.c)
 *     ExQueueWorkItemEx @ 0x1402D5148 (ExQueueWorkItemEx.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402E0780 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402E07D0 (KiWakeQueueWaiter.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x140303618 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiProcessThreadWaitList @ 0x1403055C0 (KiProcessThreadWaitList.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x14035F0EC (KiRemoveThreadFromSchedulingGroup.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x140511514 (KeIsThreadRunning.c)
 *     KeDisableProfiling @ 0x14051A048 (KeDisableProfiling.c)
 *     EtwTraceEnqueueWork @ 0x1405A5D90 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeTerminateThread(ULONG_PTR BugCheckParameter1)
{
  bool v1; // zf
  __int64 v3; // rdx
  __int64 v4; // rbp
  unsigned __int8 CurrentIrql; // cl
  __int64 *v6; // rsi
  __int64 *v7; // rdx
  __int64 **v8; // rax
  __int64 v9; // rdx
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *v11; // r14
  _QWORD *v12; // r15
  signed __int64 *v13; // r8
  signed __int64 v14; // rax
  signed __int64 v15; // rcx
  unsigned int v16; // r8d
  __int64 v18; // rsi
  char v19; // al
  __int64 v20; // r8
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  __int64 v23; // rbp
  _QWORD *v24; // r12
  unsigned __int8 v25; // cl
  struct _KPRCB *v26; // rax
  _KTHREAD *CurrentThread; // r13
  __int64 v28; // r13
  int v29; // ecx
  __int64 *v30; // rdx
  __int64 v31; // r8
  _DWORD *v32; // r9
  struct _KPRCB *v33; // rsi
  _DWORD *v34; // rcx
  _DWORD *v35; // rcx
  int v36; // eax
  int v37; // eax
  _DWORD *SchedulerAssist; // r9
  signed __int32 v39[8]; // [rsp+0h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  int v41; // [rsp+90h] [rbp+8h] BYREF
  struct _KPRCB *v42; // [rsp+98h] [rbp+10h]
  struct _KPRCB *v43; // [rsp+A0h] [rbp+18h]

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
  v6 = (__int64 *)(BugCheckParameter1 + 760);
  if ( *(_QWORD *)(BugCheckParameter1 + 760) == *(_QWORD *)(BugCheckParameter1 + 768) )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)KiProcessListLock;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, KiProcessListLock);
    v21 = *(_QWORD *)(v4 + 848);
    v22 = *(_QWORD **)(v4 + 856);
    if ( *(_QWORD *)(v21 + 8) != v4 + 848 || *v22 != v4 + 848 )
LABEL_44:
      __fastfail(3u);
    *v22 = v21;
    *(_QWORD *)(v21 + 8) = v22;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  KiAcquireKobjectLockSafe(v4);
  v7 = (__int64 *)*v6;
  v8 = *(__int64 ***)(BugCheckParameter1 + 768);
  if ( *(__int64 **)(*v6 + 8) != v6 || *v8 != v6 )
    goto LABEL_44;
  *v8 = v7;
  v7[1] = (__int64)v8;
  _InterlockedAnd((volatile signed __int32 *)v4, 0xFFFFFF7F);
  if ( *(_QWORD *)(BugCheckParameter1 + 104) )
    KiRemoveThreadFromSchedulingGroup(BugCheckParameter1);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  v9 = *(_QWORD *)(BugCheckParameter1 + 232);
  if ( v9 )
    KiActivateWaiterQueueWithNoLocks(BugCheckParameter1, v9, BugCheckParameter1 + 520);
  CurrentPrcb = KeGetCurrentPrcb();
  v43 = CurrentPrcb;
  KiAcquireKobjectLockSafe(BugCheckParameter1);
  v11 = (_QWORD *)(BugCheckParameter1 + 8);
  *(_DWORD *)(BugCheckParameter1 + 4) = 1;
  v12 = *(_QWORD **)(BugCheckParameter1 + 8);
  while ( v12 != v11 )
  {
    v18 = (__int64)v12;
    v12 = (_QWORD *)*v12;
    v19 = *(_BYTE *)(v18 + 16);
    if ( v19 == 1 )
    {
      v20 = *(unsigned __int16 *)(v18 + 18);
      goto LABEL_28;
    }
    if ( v19 == 2 )
    {
      *(_BYTE *)(v18 + 17) = 5;
      v23 = *(_QWORD *)(v18 + 24);
      *(_QWORD *)v18 = 0LL;
      v24 = (_QWORD *)(v23 + 8);
      v25 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v25 <= 0xFu )
      {
        v32 = KeGetCurrentPrcb()->SchedulerAssist;
        v32[5] |= (-1 << (v25 + 1)) & 4;
      }
      v26 = KeGetCurrentPrcb();
      v42 = v26;
      CurrentThread = v26->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v31) = KeIsThreadRunning(v26->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v18, v31);
      }
      KiAcquireKobjectLockSafe(v23);
      if ( (_QWORD *)*v24 == v24
        || *(_DWORD *)(v23 + 40) >= *(_DWORD *)(v23 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v23 && CurrentThread->WaitReason == 15 )
      {
        v28 = (__int64)v42;
      }
      else
      {
        v28 = (__int64)v42;
        if ( (unsigned __int8)KiWakeQueueWaiter(v42, v23, v18) )
          goto LABEL_48;
      }
      v29 = *(_DWORD *)(v23 + 4);
      *(_DWORD *)(v23 + 4) = v29 + 1;
      v30 = *(__int64 **)(v23 + 32);
      if ( *v30 != v23 + 24 )
        goto LABEL_44;
      *(_QWORD *)v18 = v23 + 24;
      *(_QWORD *)(v18 + 8) = v30;
      *v30 = v18;
      *(_QWORD *)(v23 + 32) = v18;
      if ( !v29 && (_QWORD *)*v24 != v24 )
        KiWakeOtherQueueWaiters(v28, v23);
LABEL_48:
      _InterlockedAnd((volatile signed __int32 *)v23, 0xFFFFFF7F);
      CurrentPrcb = v43;
    }
    else
    {
      v20 = 256LL;
LABEL_28:
      KiTryUnwaitThread((__int64)CurrentPrcb, v18, v20, 0LL);
    }
  }
  *(_QWORD *)(BugCheckParameter1 + 16) = BugCheckParameter1 + 8;
  *v11 = v11;
  _InterlockedAnd((volatile signed __int32 *)BugCheckParameter1, 0xFFFFFF7F);
  *(_BYTE *)(BugCheckParameter1 + 388) = 4;
  if ( CurrentPrcb->DeferredReadyListHead.Next )
    KiProcessThreadWaitList(CurrentPrcb, 1LL, 0LL, 0LL);
  v13 = (signed __int64 *)(BugCheckParameter1 + 1112);
  _m_prefetchw(&PsReaperListHead);
  v14 = PsReaperListHead;
  do
  {
    *v13 = v14;
    v15 = v14;
    v14 = _InterlockedCompareExchange64(&PsReaperListHead, (signed __int64)v13, v14);
  }
  while ( v14 != v15 );
  if ( v14 )
  {
    if ( qword_140C1E0D8 && _interlockedbittestandreset((volatile signed __int32 *)&qword_140C1E0D8, 0) )
    {
      v16 = 0xFFFF;
      goto LABEL_20;
    }
  }
  else
  {
    v16 = -1;
LABEL_20:
    if ( !(unsigned __int8)ExQueueWorkItemEx(&PsReaperWorkItem, 2u, v16) )
      _interlockedbittestandset((volatile signed __int32 *)&qword_140C1E0D8, 0);
  }
  _InterlockedOr(v39, 0);
  if ( *(_QWORD *)(BugCheckParameter1 + 64) )
  {
    v33 = KeGetCurrentPrcb();
    v41 = 0;
    while ( 1 )
    {
      v34 = v33->SchedulerAssist;
      if ( v34 )
      {
        if ( v33->NestingLevel <= 1u )
        {
          v36 = v34[6];
          v34[6] = v36 + 1;
          if ( v36 == -1 )
            KiRemoveSystemWorkPriorityKick(v33);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
        break;
      v35 = v33->SchedulerAssist;
      if ( v35 )
      {
        if ( v33->NestingLevel <= 1u )
        {
          v37 = v35[6] - 1;
          v35[6] = v37;
          if ( !v37 )
            KiRemoveSystemWorkPriorityKick(v33);
        }
      }
      do
        KeYieldProcessorEx(&v41);
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    KiReleaseThreadLockSafe(BugCheckParameter1);
  }
  return KiSwapThread(BugCheckParameter1, (__int64)CurrentPrcb, 0LL);
}
