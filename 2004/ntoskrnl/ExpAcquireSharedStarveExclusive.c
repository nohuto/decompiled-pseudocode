/*
 * XREFs of ExpAcquireSharedStarveExclusive @ 0x14022CBA0
 * Callers:
 *     ExAcquireSharedStarveExclusive @ 0x14022A8A0 (ExAcquireSharedStarveExclusive.c)
 *     CcPinFileData @ 0x14022DAD0 (CcPinFileData.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpWaitForResource @ 0x14020E440 (ExpWaitForResource.c)
 *     ExpGetThreadResourceHint @ 0x14022A080 (ExpGetThreadResourceHint.c)
 *     ExpFindCurrentThread @ 0x14022A0A0 (ExpFindCurrentThread.c)
 *     KxWaitForLockChainValid @ 0x140279BD0 (KxWaitForLockChainValid.c)
 *     ExpBoostIoAfterAcquire @ 0x140279C0C (ExpBoostIoAfterAcquire.c)
 *     KxWaitForLockOwnerShip @ 0x1402C0EA0 (KxWaitForLockOwnerShip.c)
 *     ExpApplyPrewaitBoost @ 0x1403431A0 (ExpApplyPrewaitBoost.c)
 *     ExpFindEmptyEntry @ 0x14034411C (ExpFindEmptyEntry.c)
 *     ExpTryAcquireResourceSharedStarveExclusive @ 0x1403500F0 (ExpTryAcquireResourceSharedStarveExclusive.c)
 *     ExpPrepareToWaitForResourceShared @ 0x14035E3FC (ExpPrepareToWaitForResourceShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051101C (KiReleaseQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x1405A58E0 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1405A5DAC (PerfLogExecutiveResourceWait.c)
 */

char __fastcall ExpAcquireSharedStarveExclusive(__int64 a1, char a2)
{
  __int64 CurrentThread; // r15
  bool v5; // r14
  volatile __int64 *v6; // rdi
  unsigned int v7; // esi
  unsigned __int8 CurrentIrql; // r10
  __int64 v9; // r13
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  __int64 Next; // rax
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  unsigned __int64 OldIrql; // rdi
  __int16 v19; // ax
  unsigned int ThreadResourceHint; // eax
  int v21; // r8d
  _QWORD *EmptyEntry; // rax
  unsigned int v23; // edi
  unsigned int v24; // edi
  unsigned __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  unsigned __int64 v29; // rdi
  int v30; // eax
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // rbx
  _DWORD *SchedulerAssist; // r9
  int v34; // eax
  unsigned int v35; // edi
  unsigned int v36; // edi
  unsigned __int64 v37; // rsi
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r9
  _DWORD *v40; // r8
  int v41; // eax
  bool v42; // zf
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r9
  _DWORD *v45; // r8
  int v46; // eax
  __int64 v47; // rcx
  unsigned __int8 v48; // al
  struct _KPRCB *v49; // r9
  _DWORD *v50; // r8
  int v51; // eax
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // r9
  _DWORD *v54; // r8
  int v55; // eax
  unsigned __int8 v56; // al
  struct _KPRCB *v57; // r9
  _DWORD *v58; // r8
  int v59; // eax
  int v60; // eax
  unsigned __int8 v61; // al
  struct _KPRCB *v62; // r9
  _DWORD *v63; // r8
  int v64; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v66[3]; // [rsp+48h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+28h]

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  memset(v66, 0, sizeof(v66));
  CurrentThread = (__int64)KeGetCurrentThread();
  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x86A4u);
  v6 = (volatile __int64 *)(a1 + 96);
  v7 = 0;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v9 = LOBYTE(LockHandle.LockQueue.Next) - 1LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ((_DWORD)v9 << (CurrentIrql + 1)) & 4;
  }
  LockHandle.OldIrql = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = CurrentPrcb->SchedulerAssist;
  if ( v11 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v34 = v11[6];
      v11[6] = v34 + 1;
      if ( v34 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v6);
  }
  else if ( _InterlockedExchange64(v6, (__int64)&LockHandle) )
  {
    KxWaitForLockOwnerShip(&LockHandle);
  }
  do
  {
    v12 = 1LL;
    if ( !*(_DWORD *)(a1 + 64) )
    {
      *(_WORD *)(a1 + 24) = 1;
      *(_DWORD *)(a1 + 64) = 1;
      v13 = *(_DWORD *)(a1 + 56) & 7;
      *(_QWORD *)(a1 + 48) = CurrentThread;
      *(_DWORD *)(a1 + 56) = v13 | 8;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
        v12 = 1LL;
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
          v15 = KeGetCurrentPrcb();
          v16 = v15->SchedulerAssist;
          if ( v16 )
          {
            if ( v15->NestingLevel <= 1u )
            {
              v60 = v16[6] - 1;
              v16[6] = v60;
              if ( !v60 )
              {
                KiRemoveSystemWorkPriorityKick(v15);
                v12 = 1LL;
              }
            }
          }
          OldIrql = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v61 = KeGetCurrentIrql();
              if ( v61 <= 0xFu && LockHandle.OldIrql <= 0xFu && v61 >= 2u )
              {
                v62 = KeGetCurrentPrcb();
                v63 = v62->SchedulerAssist;
                v64 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
                v42 = (v64 & v63[5]) == 0;
                v63[5] &= v64;
                if ( v42 )
                  KiRemoveSystemWorkPriorityKick(v62);
                v12 = 1LL;
              }
            }
          }
          __writecr8(OldIrql);
          __incgsdword(0x86ACu);
          __incgsdword(0x8664u);
          if ( !v5 )
            return 1;
          goto LABEL_69;
        }
        Next = KxWaitForLockChainValid(&LockHandle);
        v12 = 1LL;
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
      goto LABEL_10;
    }
    v19 = *(_WORD *)(a1 + 26) & 0x80;
    if ( v19 && *(_QWORD *)(a1 + 48) == CurrentThread )
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
          v38 = KeGetCurrentIrql();
          if ( v38 <= 0xFu && LockHandle.OldIrql <= 0xFu && v38 >= 2u )
          {
            v39 = KeGetCurrentPrcb();
            v40 = v39->SchedulerAssist;
            v41 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
            v42 = (v41 & v40[5]) == 0;
            v40[5] &= v41;
            if ( v42 )
              KiRemoveSystemWorkPriorityKick(v39);
          }
        }
      }
      __writecr8(v37);
      __incgsdword(0x86A8u);
      __incgsdword(0x8664u);
      if ( !v5 )
        return 1;
      v12 = v36;
      v47 = 65585LL;
      goto LABEL_70;
    }
    if ( v19 )
    {
      EmptyEntry = (_QWORD *)ExpFindEmptyEntry(a1, &LockHandle, 1LL);
    }
    else
    {
      ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread);
      EmptyEntry = ExpFindCurrentThread(
                     a1,
                     CurrentThread,
                     (__int64)&LockHandle,
                     v21,
                     *(_DWORD *)(a1 + 76) != 0,
                     ThreadResourceHint);
    }
  }
  while ( !EmptyEntry );
  if ( *EmptyEntry == CurrentThread )
  {
    v23 = *((_DWORD *)EmptyEntry + 2) + 8;
    *((_DWORD *)EmptyEntry + 2) = v23;
    v24 = v23 >> 3;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v25 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v43 = KeGetCurrentIrql();
        if ( v43 <= 0xFu && LockHandle.OldIrql <= 0xFu && v43 >= 2u )
        {
          v44 = KeGetCurrentPrcb();
          v45 = v44->SchedulerAssist;
          v46 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
          v42 = (v46 & v45[5]) == 0;
          v45[5] &= v46;
          if ( v42 )
            KiRemoveSystemWorkPriorityKick(v44);
        }
      }
    }
    __writecr8(v25);
    __incgsdword(0x86B0u);
    __incgsdword(0x8664u);
    if ( v5 )
    {
      v12 = v24;
      v47 = 65617LL;
      goto LABEL_70;
    }
    return 1;
  }
  if ( (unsigned __int8)ExpTryAcquireResourceSharedStarveExclusive(a1, EmptyEntry) )
  {
    v28 = *(_DWORD *)(v26 + 8) & 7;
    *(_QWORD *)v26 = CurrentThread;
    *(_DWORD *)(v26 + 8) = v28 | 8;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v29 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v48 = KeGetCurrentIrql();
        if ( v48 <= 0xFu && LockHandle.OldIrql <= 0xFu && v48 >= 2u )
        {
          v49 = KeGetCurrentPrcb();
          v50 = v49->SchedulerAssist;
          v51 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
          v42 = (v51 & v50[5]) == 0;
          v50[5] &= v51;
          if ( v42 )
            KiRemoveSystemWorkPriorityKick(v49);
        }
      }
    }
    __writecr8(v29);
    goto LABEL_25;
  }
  if ( a2 )
  {
    v30 = *(_DWORD *)(v26 + 8) & 7;
    *(_QWORD *)v26 = CurrentThread;
    *(_DWORD *)(v26 + 8) = v30 | 8;
    ExpPrepareToWaitForResourceShared(v27, CurrentThread, v66);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v31 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v56 = KeGetCurrentIrql();
        if ( v56 <= 0xFu && LockHandle.OldIrql <= 0xFu && v56 >= 2u )
        {
          v57 = KeGetCurrentPrcb();
          v58 = v57->SchedulerAssist;
          v59 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
          v42 = (v59 & v58[5]) == 0;
          v58[5] &= v59;
          if ( v42 )
            KiRemoveSystemWorkPriorityKick(v57);
        }
      }
    }
    __writecr8(v31);
    __incgsdword(0x86B4u);
    if ( v5 )
      PerfLogExecutiveResourceWait(65604LL, a1, 0LL);
    ExpApplyPrewaitBoost(a1);
    ExpWaitForResource(
      (struct _LIST_ENTRY *)a1,
      (__int64)v66,
      0x10244u,
      (void (__fastcall *)(struct _LIST_ENTRY *))ExpApplyRewaitBoost);
LABEL_25:
    if ( (CurrentThread & 3) == 0 )
      v7 = *(unsigned __int8 *)(CurrentThread + 649);
    ExpBoostIoAfterAcquire(a1, CurrentThread, v7);
    __incgsdword(0x86ACu);
    __incgsdword(0x8664u);
    if ( !v5 )
      return 1;
    v12 = 1LL;
LABEL_69:
    v47 = 65601LL;
LABEL_70:
    PerfLogExecutiveResourceAcquire(v47, a1, v12, *(unsigned int *)(a1 + 68));
    return 1;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v32 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v52 = KeGetCurrentIrql();
      if ( v52 <= 0xFu && LockHandle.OldIrql <= 0xFu && v52 >= 2u )
      {
        v53 = KeGetCurrentPrcb();
        v54 = v53->SchedulerAssist;
        v55 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
        v42 = (v55 & v54[5]) == 0;
        v54[5] &= v55;
        if ( v42 )
          KiRemoveSystemWorkPriorityKick(v53);
      }
    }
  }
  __writecr8(v32);
  __incgsdword(0x86B8u);
  return 0;
}
