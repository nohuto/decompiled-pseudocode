/*
 * XREFs of ExpAcquireSharedStarveExclusive @ 0x14032BD70
 * Callers:
 *     ExAcquireSharedStarveExclusive @ 0x1402339A0 (ExAcquireSharedStarveExclusive.c)
 *     CcPinFileData @ 0x14032AD00 (CcPinFileData.c)
 * Callees:
 *     ExpFindEmptyEntry @ 0x14021CA10 (ExpFindEmptyEntry.c)
 *     ExpBoostIoAfterAcquire @ 0x14021CA70 (ExpBoostIoAfterAcquire.c)
 *     ExpFindCurrentThread @ 0x14021CD50 (ExpFindCurrentThread.c)
 *     ExpGetThreadResourceHint @ 0x14022B410 (ExpGetThreadResourceHint.c)
 *     ExpWaitForResource @ 0x140231990 (ExpWaitForResource.c)
 *     ExpTryAcquireResourceSharedStarveExclusive @ 0x1402464C0 (ExpTryAcquireResourceSharedStarveExclusive.c)
 *     ExpPrepareToWaitForResourceShared @ 0x1402597A8 (ExpPrepareToWaitForResourceShared.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140282C20 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x140311C70 (KxWaitForLockOwnerShip.c)
 *     ExpApplyPrewaitBoost @ 0x14033B6F0 (ExpApplyPrewaitBoost.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045A10C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056E6FC (KiReleaseQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x1406325F8 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x140632AC8 (PerfLogExecutiveResourceWait.c)
 */

char __fastcall ExpAcquireSharedStarveExclusive(__int64 a1, char a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 CurrentThread; // r15
  bool v7; // r14
  volatile __int64 *v8; // rbx
  int v9; // esi
  unsigned __int8 CurrentIrql; // r10
  __int64 v11; // r13
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v13; // rdx
  _QWORD *v14; // rdx
  __int64 v15; // r8
  int v16; // eax
  __int64 Next; // rax
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rdx
  unsigned __int64 OldIrql; // rbx
  unsigned int ThreadResourceHint; // eax
  int v23; // r8d
  _QWORD *EmptyEntry; // rax
  unsigned int v25; // ebx
  unsigned int v26; // ebx
  unsigned __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  unsigned __int64 v31; // rbx
  int v32; // eax
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rbx
  unsigned int v35; // ebx
  unsigned int v36; // ebx
  unsigned __int64 v37; // rsi
  int v38; // eax
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r9
  _DWORD *v41; // r8
  int v42; // eax
  bool v43; // zf
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r9
  _DWORD *v46; // r8
  int v47; // eax
  __int64 v48; // rcx
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r9
  _DWORD *v51; // r8
  int v52; // eax
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r9
  _DWORD *v55; // r8
  int v56; // eax
  unsigned __int8 v57; // al
  struct _KPRCB *v58; // r9
  _DWORD *v59; // r8
  int v60; // eax
  int v61; // eax
  unsigned __int8 v62; // al
  struct _KPRCB *v63; // r9
  _DWORD *v64; // r8
  int v65; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v67[3]; // [rsp+48h] [rbp-38h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+28h]

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  memset(v67, 0, sizeof(v67));
  CurrentThread = (__int64)KeGetCurrentThread();
  v7 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x8AA4u);
  v8 = (volatile __int64 *)(a1 + 96);
  v9 = 0;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v11 = LOBYTE(LockHandle.LockQueue.Next) - 1LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a3 = ((_DWORD)v11 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  LockHandle.OldIrql = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = CurrentPrcb->SchedulerAssist;
  if ( v13 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v38 = v13[6];
      v13[6] = v38 + 1;
      if ( v38 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v8);
  }
  else
  {
    v14 = (_QWORD *)_InterlockedExchange64(v8, (__int64)&LockHandle);
    if ( v14 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v14, a3, (__int64)SchedulerAssist);
  }
  do
  {
    v15 = 1LL;
    if ( !*(_DWORD *)(a1 + 64) )
    {
      *(_WORD *)(a1 + 24) = 1;
      *(_DWORD *)(a1 + 64) = 1;
      v16 = *(_DWORD *)(a1 + 56) & 7;
      *(_QWORD *)(a1 + 48) = CurrentThread;
      *(_DWORD *)(a1 + 56) = v16 | 8;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
        v15 = 1LL;
        goto LABEL_10;
      }
      _m_prefetchw(&LockHandle);
      Next = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
        {
LABEL_10:
          v18 = KeGetCurrentPrcb();
          v19 = v18->SchedulerAssist;
          if ( v19 )
          {
            if ( v18->NestingLevel <= 1u )
            {
              v61 = v19[6] - 1;
              v19[6] = v61;
              if ( !v61 )
              {
                KiRemoveSystemWorkPriorityKick(v18);
                v15 = 1LL;
              }
            }
          }
          OldIrql = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v62 = KeGetCurrentIrql();
              if ( v62 <= 0xFu && LockHandle.OldIrql <= 0xFu && v62 >= 2u )
              {
                v63 = KeGetCurrentPrcb();
                v64 = v63->SchedulerAssist;
                v65 = ~(unsigned __int16)(v11 << (LockHandle.OldIrql + 1));
                v43 = (v65 & v64[5]) == 0;
                v64[5] &= v65;
                if ( v43 )
                  KiRemoveSystemWorkPriorityKick(v63);
                v15 = 1LL;
              }
            }
          }
          __writecr8(OldIrql);
          __incgsdword(0x8AACu);
          __incgsdword(0x8A64u);
          if ( !v7 )
            return 1;
          goto LABEL_67;
        }
        Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
        v15 = 1LL;
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
      goto LABEL_10;
    }
    if ( (*(_WORD *)(a1 + 26) & 0x80) != 0 )
    {
      if ( *(_QWORD *)(a1 + 48) == CurrentThread )
      {
        v35 = *(_DWORD *)(a1 + 56) + 8;
        *(_DWORD *)(a1 + 56) = v35;
        v36 = v35 >> 3;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v37 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v39 = KeGetCurrentIrql();
            if ( v39 <= 0xFu && LockHandle.OldIrql <= 0xFu && v39 >= 2u )
            {
              v40 = KeGetCurrentPrcb();
              v41 = v40->SchedulerAssist;
              v42 = ~(unsigned __int16)(v11 << (LockHandle.OldIrql + 1));
              v43 = (v42 & v41[5]) == 0;
              v41[5] &= v42;
              if ( v43 )
                KiRemoveSystemWorkPriorityKick(v40);
            }
          }
        }
        __writecr8(v37);
        __incgsdword(0x8AA8u);
        __incgsdword(0x8A64u);
        if ( v7 )
        {
          v15 = v36;
          v48 = 65585LL;
          goto LABEL_68;
        }
        return 1;
      }
      EmptyEntry = ExpFindEmptyEntry(a1);
    }
    else
    {
      ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread);
      EmptyEntry = ExpFindCurrentThread(
                     a1,
                     CurrentThread,
                     (__int64)&LockHandle,
                     v23,
                     *(_DWORD *)(a1 + 76) != 0,
                     ThreadResourceHint);
    }
  }
  while ( !EmptyEntry );
  if ( *EmptyEntry == CurrentThread )
  {
    v25 = *((_DWORD *)EmptyEntry + 2) + 8;
    *((_DWORD *)EmptyEntry + 2) = v25;
    v26 = v25 >> 3;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v27 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v44 = KeGetCurrentIrql();
        if ( v44 <= 0xFu && LockHandle.OldIrql <= 0xFu && v44 >= 2u )
        {
          v45 = KeGetCurrentPrcb();
          v46 = v45->SchedulerAssist;
          v47 = ~(unsigned __int16)(v11 << (LockHandle.OldIrql + 1));
          v43 = (v47 & v46[5]) == 0;
          v46[5] &= v47;
          if ( v43 )
            KiRemoveSystemWorkPriorityKick(v45);
        }
      }
    }
    __writecr8(v27);
    __incgsdword(0x8AB0u);
    __incgsdword(0x8A64u);
    if ( v7 )
    {
      v15 = v26;
      v48 = 65617LL;
      goto LABEL_68;
    }
    return 1;
  }
  if ( ExpTryAcquireResourceSharedStarveExclusive(a1) )
  {
    v30 = *(_DWORD *)(v28 + 8) & 7;
    *(_QWORD *)v28 = CurrentThread;
    *(_DWORD *)(v28 + 8) = v30 | 8;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v31 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v49 = KeGetCurrentIrql();
        if ( v49 <= 0xFu && LockHandle.OldIrql <= 0xFu && v49 >= 2u )
        {
          v50 = KeGetCurrentPrcb();
          v51 = v50->SchedulerAssist;
          v52 = ~(unsigned __int16)(v11 << (LockHandle.OldIrql + 1));
          v43 = (v52 & v51[5]) == 0;
          v51[5] &= v52;
          if ( v43 )
            KiRemoveSystemWorkPriorityKick(v50);
        }
      }
    }
    __writecr8(v31);
    goto LABEL_29;
  }
  if ( a2 )
  {
    v32 = *(_DWORD *)(v28 + 8) & 7;
    *(_QWORD *)v28 = CurrentThread;
    *(_DWORD *)(v28 + 8) = v32 | 8;
    ExpPrepareToWaitForResourceShared(v29, CurrentThread, (__int64)v67);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v33 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v57 = KeGetCurrentIrql();
        if ( v57 <= 0xFu && LockHandle.OldIrql <= 0xFu && v57 >= 2u )
        {
          v58 = KeGetCurrentPrcb();
          v59 = v58->SchedulerAssist;
          v60 = ~(unsigned __int16)(v11 << (LockHandle.OldIrql + 1));
          v43 = (v60 & v59[5]) == 0;
          v59[5] &= v60;
          if ( v43 )
            KiRemoveSystemWorkPriorityKick(v58);
        }
      }
    }
    __writecr8(v33);
    __incgsdword(0x8AB4u);
    if ( v7 )
      PerfLogExecutiveResourceWait(65604LL, a1, 0LL);
    ExpApplyPrewaitBoost(a1);
    ExpWaitForResource(
      (struct _LIST_ENTRY *)a1,
      (__int64)v67,
      0x10244u,
      (void (__fastcall *)(struct _LIST_ENTRY *))ExpApplyRewaitBoost);
LABEL_29:
    if ( (CurrentThread & 3) == 0 )
      v9 = *(unsigned __int8 *)(CurrentThread + 1120);
    ExpBoostIoAfterAcquire(a1, CurrentThread, v9);
    __incgsdword(0x8AACu);
    __incgsdword(0x8A64u);
    if ( !v7 )
      return 1;
    v15 = 1LL;
LABEL_67:
    v48 = 65601LL;
LABEL_68:
    PerfLogExecutiveResourceAcquire(v48, a1, v15, *(unsigned int *)(a1 + 68));
    return 1;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v34 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v53 = KeGetCurrentIrql();
      if ( v53 <= 0xFu && LockHandle.OldIrql <= 0xFu && v53 >= 2u )
      {
        v54 = KeGetCurrentPrcb();
        v55 = v54->SchedulerAssist;
        v56 = ~(unsigned __int16)(v11 << (LockHandle.OldIrql + 1));
        v43 = (v56 & v55[5]) == 0;
        v55[5] &= v56;
        if ( v43 )
          KiRemoveSystemWorkPriorityKick(v54);
      }
    }
  }
  __writecr8(v34);
  __incgsdword(0x8AB8u);
  return 0;
}
