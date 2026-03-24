/*
 * XREFs of ExpAcquireSharedStarveExclusive @ 0x14031E750
 * Callers:
 *     ExAcquireSharedStarveExclusive @ 0x14031E520 (ExAcquireSharedStarveExclusive.c)
 *     CcPinFileData @ 0x14031F630 (CcPinFileData.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14022EEA0 (KxWaitForLockOwnerShip.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140287190 (KxWaitForLockChainValid.c)
 *     ExpBoostIoAfterAcquire @ 0x1402872F0 (ExpBoostIoAfterAcquire.c)
 *     ExpApplyPrewaitBoost @ 0x1402B73B0 (ExpApplyPrewaitBoost.c)
 *     ExpFindEmptyEntry @ 0x1402B85BC (ExpFindEmptyEntry.c)
 *     ExpTryAcquireResourceSharedStarveExclusive @ 0x1402C1FFC (ExpTryAcquireResourceSharedStarveExclusive.c)
 *     ExpPrepareToWaitForResourceShared @ 0x1402D0DCC (ExpPrepareToWaitForResourceShared.c)
 *     ExpGetThreadResourceHint @ 0x14031E500 (ExpGetThreadResourceHint.c)
 *     ExpWaitForResource @ 0x1403423D0 (ExpWaitForResource.c)
 *     ExpFindCurrentThread @ 0x14034DA50 (ExpFindCurrentThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1405163CC (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051648C (KiReleaseQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x1405AAD8C (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1405AB258 (PerfLogExecutiveResourceWait.c)
 */

char __fastcall ExpAcquireSharedStarveExclusive(__int64 a1, char a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 CurrentThread; // r15
  bool v7; // r14
  volatile __int64 *v8; // rdi
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
  unsigned __int64 OldIrql; // rdi
  __int16 v22; // ax
  int ThreadResourceHint; // eax
  int v24; // r8d
  _QWORD *EmptyEntry; // rax
  unsigned int v26; // edi
  unsigned int v27; // edi
  unsigned __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // eax
  unsigned __int64 v32; // rdi
  int v33; // eax
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // rbx
  int v36; // eax
  unsigned int v37; // edi
  unsigned int v38; // edi
  unsigned __int64 v39; // rsi
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r9
  _DWORD *v42; // r8
  int v43; // eax
  bool v44; // zf
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r9
  _DWORD *v47; // r8
  int v48; // eax
  __int64 v49; // rcx
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r9
  _DWORD *v52; // r8
  int v53; // eax
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r9
  _DWORD *v56; // r8
  int v57; // eax
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // r9
  _DWORD *v60; // r8
  int v61; // eax
  int v62; // eax
  unsigned __int8 v63; // al
  struct _KPRCB *v64; // r9
  _DWORD *v65; // r8
  int v66; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v68[3]; // [rsp+48h] [rbp-38h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+28h]

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  memset(v68, 0, sizeof(v68));
  CurrentThread = (__int64)KeGetCurrentThread();
  v7 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x86A4u);
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
    SchedulerAssist[5] |= ((_DWORD)v11 << (CurrentIrql + 1)) & 4;
  }
  LockHandle.OldIrql = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = CurrentPrcb->SchedulerAssist;
  if ( v13 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v36 = v13[6];
      v13[6] = v36 + 1;
      if ( v36 == -1 )
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
      KxWaitForLockOwnerShip((__int64)&LockHandle, v14);
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
              v62 = v19[6] - 1;
              v19[6] = v62;
              if ( !v62 )
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
              v63 = KeGetCurrentIrql();
              if ( v63 <= 0xFu && LockHandle.OldIrql <= 0xFu && v63 >= 2u )
              {
                v64 = KeGetCurrentPrcb();
                v65 = v64->SchedulerAssist;
                v66 = ~(unsigned __int16)(v11 << (LockHandle.OldIrql + 1));
                v44 = (v66 & v65[5]) == 0;
                v65[5] &= v66;
                if ( v44 )
                  KiRemoveSystemWorkPriorityKick(v64);
                v15 = 1LL;
              }
            }
          }
          __writecr8(OldIrql);
          __incgsdword(0x86ACu);
          __incgsdword(0x8664u);
          if ( !v7 )
            return 1;
          goto LABEL_69;
        }
        Next = KxWaitForLockChainValid((__int64 *)&LockHandle, (__int64)v14, 1LL, (__int64)SchedulerAssist);
        v15 = 1LL;
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
      goto LABEL_10;
    }
    v22 = *(_WORD *)(a1 + 26) & 0x80;
    if ( v22 && *(_QWORD *)(a1 + 48) == CurrentThread )
    {
      v37 = *(_DWORD *)(a1 + 56) + 8;
      *(_DWORD *)(a1 + 56) = v37;
      v38 = v37 >> 3;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v39 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v40 = KeGetCurrentIrql();
          if ( v40 <= 0xFu && LockHandle.OldIrql <= 0xFu && v40 >= 2u )
          {
            v41 = KeGetCurrentPrcb();
            v42 = v41->SchedulerAssist;
            v43 = ~(unsigned __int16)(v11 << (LockHandle.OldIrql + 1));
            v44 = (v43 & v42[5]) == 0;
            v42[5] &= v43;
            if ( v44 )
              KiRemoveSystemWorkPriorityKick(v41);
          }
        }
      }
      __writecr8(v39);
      __incgsdword(0x86A8u);
      __incgsdword(0x8664u);
      if ( !v7 )
        return 1;
      v15 = v38;
      v49 = 65585LL;
      goto LABEL_70;
    }
    if ( v22 )
    {
      EmptyEntry = ExpFindEmptyEntry(a1);
    }
    else
    {
      ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread);
      EmptyEntry = (_QWORD *)ExpFindCurrentThread(
                               a1,
                               CurrentThread,
                               (unsigned int)&LockHandle,
                               v24,
                               *(_DWORD *)(a1 + 76) != 0,
                               ThreadResourceHint);
    }
    v14 = EmptyEntry;
  }
  while ( !EmptyEntry );
  if ( *EmptyEntry == CurrentThread )
  {
    v26 = *((_DWORD *)EmptyEntry + 2) + 8;
    *((_DWORD *)EmptyEntry + 2) = v26;
    v27 = v26 >> 3;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v28 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v45 = KeGetCurrentIrql();
        if ( v45 <= 0xFu && LockHandle.OldIrql <= 0xFu && v45 >= 2u )
        {
          v46 = KeGetCurrentPrcb();
          v47 = v46->SchedulerAssist;
          v48 = ~(unsigned __int16)(v11 << (LockHandle.OldIrql + 1));
          v44 = (v48 & v47[5]) == 0;
          v47[5] &= v48;
          if ( v44 )
            KiRemoveSystemWorkPriorityKick(v46);
        }
      }
    }
    __writecr8(v28);
    __incgsdword(0x86B0u);
    __incgsdword(0x8664u);
    if ( v7 )
    {
      v15 = v27;
      v49 = 65617LL;
      goto LABEL_70;
    }
    return 1;
  }
  if ( ExpTryAcquireResourceSharedStarveExclusive(a1) )
  {
    v31 = *(_DWORD *)(v29 + 8) & 7;
    *(_QWORD *)v29 = CurrentThread;
    *(_DWORD *)(v29 + 8) = v31 | 8;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v32 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v50 = KeGetCurrentIrql();
        if ( v50 <= 0xFu && LockHandle.OldIrql <= 0xFu && v50 >= 2u )
        {
          v51 = KeGetCurrentPrcb();
          v52 = v51->SchedulerAssist;
          v53 = ~(unsigned __int16)(v11 << (LockHandle.OldIrql + 1));
          v44 = (v53 & v52[5]) == 0;
          v52[5] &= v53;
          if ( v44 )
            KiRemoveSystemWorkPriorityKick(v51);
        }
      }
    }
    __writecr8(v32);
    goto LABEL_25;
  }
  if ( a2 )
  {
    v33 = *(_DWORD *)(v29 + 8) & 7;
    *(_QWORD *)v29 = CurrentThread;
    *(_DWORD *)(v29 + 8) = v33 | 8;
    ExpPrepareToWaitForResourceShared(v30, CurrentThread, (__int64)v68);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v34 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v58 = KeGetCurrentIrql();
        if ( v58 <= 0xFu && LockHandle.OldIrql <= 0xFu && v58 >= 2u )
        {
          v59 = KeGetCurrentPrcb();
          v60 = v59->SchedulerAssist;
          v61 = ~(unsigned __int16)(v11 << (LockHandle.OldIrql + 1));
          v44 = (v61 & v60[5]) == 0;
          v60[5] &= v61;
          if ( v44 )
            KiRemoveSystemWorkPriorityKick(v59);
        }
      }
    }
    __writecr8(v34);
    __incgsdword(0x86B4u);
    if ( v7 )
      PerfLogExecutiveResourceWait(65604LL, a1, 0LL);
    ExpApplyPrewaitBoost();
    ExpWaitForResource(a1, v68, 66116LL, ExpApplyRewaitBoost);
LABEL_25:
    if ( (CurrentThread & 3) == 0 )
      v9 = *(unsigned __int8 *)(CurrentThread + 1032);
    ExpBoostIoAfterAcquire(a1, CurrentThread, v9);
    __incgsdword(0x86ACu);
    __incgsdword(0x8664u);
    if ( !v7 )
      return 1;
    v15 = 1LL;
LABEL_69:
    v49 = 65601LL;
LABEL_70:
    PerfLogExecutiveResourceAcquire(v49, a1, v15, *(unsigned int *)(a1 + 68));
    return 1;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v35 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v54 = KeGetCurrentIrql();
      if ( v54 <= 0xFu && LockHandle.OldIrql <= 0xFu && v54 >= 2u )
      {
        v55 = KeGetCurrentPrcb();
        v56 = v55->SchedulerAssist;
        v57 = ~(unsigned __int16)(v11 << (LockHandle.OldIrql + 1));
        v44 = (v57 & v56[5]) == 0;
        v56[5] &= v57;
        if ( v44 )
          KiRemoveSystemWorkPriorityKick(v55);
      }
    }
  }
  __writecr8(v35);
  __incgsdword(0x86B8u);
  return 0;
}
