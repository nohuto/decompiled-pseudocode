/*
 * XREFs of KeTerminateThread @ 0x140266490
 * Callers:
 *     PspExitThread @ 0x14063F658 (PspExitThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14021CA5C (KiActivateWaiterQueueWithNoLocks.c)
 *     ExQueueWorkItemEx @ 0x1402681A8 (ExQueueWorkItemEx.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x14029D508 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiWakeOtherQueueWaiters @ 0x1402E7B60 (KiWakeOtherQueueWaiters.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiProcessThreadWaitList @ 0x1402EFB20 (KiProcessThreadWaitList.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F0D40 (KiWakeQueueWaiter.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiTryUnwaitThread @ 0x14034D570 (KiTryUnwaitThread.c)
 *     KiSwapThread @ 0x140351420 (KiSwapThread.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x140513294 (KeIsThreadRunning.c)
 *     KeDisableProfiling @ 0x14051BD5C (KeDisableProfiling.c)
 *     EtwTraceEnqueueWork @ 0x1405A79F0 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeTerminateThread(ULONG_PTR BugCheckParameter1)
{
  bool v1; // zf
  __int64 v3; // rdx
  __int64 v4; // rbp
  unsigned __int8 CurrentIrql; // cl
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // rsi
  __int64 *v9; // rdx
  __int64 **v10; // rax
  unsigned __int64 v11; // rdx
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *v13; // r14
  _QWORD *v14; // r15
  signed __int64 *v15; // r8
  signed __int64 v16; // rax
  signed __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v20; // rsi
  char v21; // al
  __int64 v22; // r8
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  __int64 v25; // rbp
  _QWORD *v26; // r12
  unsigned __int8 v27; // cl
  struct _KPRCB *v28; // rax
  _KTHREAD *CurrentThread; // r13
  struct _KPRCB *v30; // r13
  int v31; // ecx
  _QWORD *v32; // rdx
  __int64 v33; // r8
  _DWORD *v34; // r9
  struct _KPRCB *v35; // rsi
  _DWORD *v36; // rcx
  _DWORD *v37; // rcx
  int v38; // eax
  int v39; // eax
  _DWORD *SchedulerAssist; // r9
  signed __int32 v41[8]; // [rsp+0h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  int v43; // [rsp+90h] [rbp+8h] BYREF
  struct _KPRCB *v44; // [rsp+98h] [rbp+10h]
  struct _KPRCB *v45; // [rsp+A0h] [rbp+18h]

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
  v8 = (__int64 *)(BugCheckParameter1 + 760);
  if ( *(_QWORD *)(BugCheckParameter1 + 760) == *(_QWORD *)(BugCheckParameter1 + 768) )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)&KiProcessListLock;
    KxAcquireQueuedSpinLock(&LockHandle, &KiProcessListLock, v6, v7);
    v23 = *(_QWORD *)(v4 + 848);
    v24 = *(_QWORD **)(v4 + 856);
    if ( *(_QWORD *)(v23 + 8) != v4 + 848 || *v24 != v4 + 848 )
LABEL_44:
      __fastfail(3u);
    *v24 = v23;
    *(_QWORD *)(v23 + 8) = v24;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  KiAcquireKobjectLockSafe(v4);
  v9 = (__int64 *)*v8;
  v10 = *(__int64 ***)(BugCheckParameter1 + 768);
  if ( *(__int64 **)(*v8 + 8) != v8 || *v10 != v8 )
    goto LABEL_44;
  *v10 = v9;
  v9[1] = (__int64)v10;
  _InterlockedAnd((volatile signed __int32 *)v4, 0xFFFFFF7F);
  if ( *(_QWORD *)(BugCheckParameter1 + 104) )
    KiRemoveThreadFromSchedulingGroup(BugCheckParameter1);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 64));
  v11 = *(_QWORD *)(BugCheckParameter1 + 232);
  if ( v11 )
    KiActivateWaiterQueueWithNoLocks(BugCheckParameter1, v11, (_QWORD *)(BugCheckParameter1 + 520));
  CurrentPrcb = KeGetCurrentPrcb();
  v45 = CurrentPrcb;
  KiAcquireKobjectLockSafe(BugCheckParameter1);
  v13 = (_QWORD *)(BugCheckParameter1 + 8);
  *(_DWORD *)(BugCheckParameter1 + 4) = 1;
  v14 = *(_QWORD **)(BugCheckParameter1 + 8);
  while ( v14 != v13 )
  {
    v20 = v14;
    v14 = (_QWORD *)*v14;
    v21 = *((_BYTE *)v20 + 16);
    if ( v21 == 1 )
    {
      v22 = *((unsigned __int16 *)v20 + 9);
      goto LABEL_28;
    }
    if ( v21 == 2 )
    {
      *((_BYTE *)v20 + 17) = 5;
      v25 = v20[3];
      *v20 = 0LL;
      v26 = (_QWORD *)(v25 + 8);
      v27 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v27 <= 0xFu )
      {
        v34 = KeGetCurrentPrcb()->SchedulerAssist;
        v34[5] |= (-1 << (v27 + 1)) & 4;
      }
      v28 = KeGetCurrentPrcb();
      v44 = v28;
      CurrentThread = v28->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v33) = KeIsThreadRunning(v28->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v20, v33);
      }
      KiAcquireKobjectLockSafe(v25);
      if ( (_QWORD *)*v26 == v26
        || *(_DWORD *)(v25 + 40) >= *(_DWORD *)(v25 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v25 && CurrentThread->WaitReason == 15 )
      {
        v30 = v44;
      }
      else
      {
        v30 = v44;
        if ( (unsigned __int8)KiWakeQueueWaiter(v44, v25, v20) )
          goto LABEL_48;
      }
      v31 = *(_DWORD *)(v25 + 4);
      *(_DWORD *)(v25 + 4) = v31 + 1;
      v32 = *(_QWORD **)(v25 + 32);
      if ( *v32 != v25 + 24 )
        goto LABEL_44;
      *v20 = v25 + 24;
      v20[1] = v32;
      *v32 = v20;
      *(_QWORD *)(v25 + 32) = v20;
      if ( !v31 && (_QWORD *)*v26 != v26 )
        KiWakeOtherQueueWaiters(v30, v25);
LABEL_48:
      _InterlockedAnd((volatile signed __int32 *)v25, 0xFFFFFF7F);
      CurrentPrcb = v45;
    }
    else
    {
      v22 = 256LL;
LABEL_28:
      KiTryUnwaitThread(CurrentPrcb, v20, v22, 0LL);
    }
  }
  *(_QWORD *)(BugCheckParameter1 + 16) = BugCheckParameter1 + 8;
  *v13 = v13;
  _InterlockedAnd((volatile signed __int32 *)BugCheckParameter1, 0xFFFFFF7F);
  *(_BYTE *)(BugCheckParameter1 + 388) = 4;
  if ( CurrentPrcb->DeferredReadyListHead.Next )
    KiProcessThreadWaitList(CurrentPrcb, 1LL, 0LL, 0LL);
  v15 = (signed __int64 *)(BugCheckParameter1 + 1112);
  _m_prefetchw(&PsReaperListHead);
  v16 = PsReaperListHead;
  do
  {
    *v15 = v16;
    v17 = v16;
    v16 = _InterlockedCompareExchange64(&PsReaperListHead, (signed __int64)v15, v16);
  }
  while ( v16 != v17 );
  if ( v16 )
  {
    if ( qword_140C1E1D8 && _interlockedbittestandreset((volatile signed __int32 *)&qword_140C1E1D8, 0) )
    {
      v18 = 0xFFFFLL;
      goto LABEL_20;
    }
  }
  else
  {
    v18 = 0xFFFFFFFFLL;
LABEL_20:
    if ( !(unsigned __int8)ExQueueWorkItemEx(&PsReaperWorkItem, 2LL, v18) )
      _interlockedbittestandset((volatile signed __int32 *)&qword_140C1E1D8, 0);
  }
  _InterlockedOr(v41, 0);
  if ( *(_QWORD *)(BugCheckParameter1 + 64) )
  {
    v35 = KeGetCurrentPrcb();
    v43 = 0;
    while ( 1 )
    {
      v36 = v35->SchedulerAssist;
      if ( v36 )
      {
        if ( v35->NestingLevel <= 1u )
        {
          v38 = v36[6];
          v36[6] = v38 + 1;
          if ( v38 == -1 )
            KiRemoveSystemWorkPriorityKick(v35);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
        break;
      v37 = v35->SchedulerAssist;
      if ( v37 )
      {
        if ( v35->NestingLevel <= 1u )
        {
          v39 = v37[6] - 1;
          v37[6] = v39;
          if ( !v39 )
            KiRemoveSystemWorkPriorityKick(v35);
        }
      }
      do
        KeYieldProcessorEx(&v43);
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    KiReleaseThreadLockSafe(BugCheckParameter1);
  }
  return KiSwapThread(BugCheckParameter1, CurrentPrcb, 0LL);
}
