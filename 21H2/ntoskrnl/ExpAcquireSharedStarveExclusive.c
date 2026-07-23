/*
 * XREFs of ExpAcquireSharedStarveExclusive @ 0x1403294A0
 * Callers:
 *     ExAcquireSharedStarveExclusive @ 0x140329270 (ExAcquireSharedStarveExclusive.c)
 *     CcPinFileData @ 0x14032A380 (CcPinFileData.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140204330 (KxWaitForLockChainValid.c)
 *     ExpBoostIoAfterAcquire @ 0x140204490 (ExpBoostIoAfterAcquire.c)
 *     ExpApplyPrewaitBoost @ 0x140235590 (ExpApplyPrewaitBoost.c)
 *     ExpFindEmptyEntry @ 0x1402367CC (ExpFindEmptyEntry.c)
 *     ExpTryAcquireResourceSharedStarveExclusive @ 0x14024049C (ExpTryAcquireResourceSharedStarveExclusive.c)
 *     ExpPrepareToWaitForResourceShared @ 0x14024F25C (ExpPrepareToWaitForResourceShared.c)
 *     KxWaitForLockOwnerShip @ 0x1402D36F0 (KxWaitForLockOwnerShip.c)
 *     ExpGetThreadResourceHint @ 0x140329250 (ExpGetThreadResourceHint.c)
 *     ExpWaitForResource @ 0x14034D120 (ExpWaitForResource.c)
 *     ExpFindCurrentThread @ 0x1403587A0 (ExpFindCurrentThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051660C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405166CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x1405AAFBC (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x1405AB488 (PerfLogExecutiveResourceWait.c)
 */

char __fastcall ExpAcquireSharedStarveExclusive(__int64 a1, char a2)
{
  __int64 CurrentThread; // r15
  bool v5; // r14
  volatile __int64 *v6; // rdi
  int v7; // esi
  unsigned __int8 CurrentIrql; // r10
  __int64 v9; // r13
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v11; // rdx
  _QWORD *v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  __int64 Next; // rax
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  unsigned __int64 OldIrql; // rdi
  __int16 v20; // ax
  int ThreadResourceHint; // eax
  int v22; // r8d
  _QWORD *EmptyEntry; // rax
  unsigned int v24; // edi
  unsigned int v25; // edi
  unsigned __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  unsigned __int64 v30; // rdi
  int v31; // eax
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // rbx
  _DWORD *SchedulerAssist; // r9
  int v35; // eax
  unsigned int v36; // edi
  unsigned int v37; // edi
  unsigned __int64 v38; // rsi
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
      v35 = v11[6];
      v11[6] = v35 + 1;
      if ( v35 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v6);
  }
  else
  {
    v12 = (_QWORD *)_InterlockedExchange64(v6, (__int64)&LockHandle);
    if ( v12 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v12);
  }
  do
  {
    v13 = 1LL;
    if ( !*(_DWORD *)(a1 + 64) )
    {
      *(_WORD *)(a1 + 24) = 1;
      *(_DWORD *)(a1 + 64) = 1;
      v14 = *(_DWORD *)(a1 + 56) & 7;
      *(_QWORD *)(a1 + 48) = CurrentThread;
      *(_DWORD *)(a1 + 56) = v14 | 8;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
        v13 = 1LL;
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
          v16 = KeGetCurrentPrcb();
          v17 = v16->SchedulerAssist;
          if ( v17 )
          {
            if ( v16->NestingLevel <= 1u )
            {
              v61 = v17[6] - 1;
              v17[6] = v61;
              if ( !v61 )
              {
                KiRemoveSystemWorkPriorityKick(v16);
                v13 = 1LL;
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
                v65 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
                v43 = (v65 & v64[5]) == 0;
                v64[5] &= v65;
                if ( v43 )
                  KiRemoveSystemWorkPriorityKick(v63);
                v13 = 1LL;
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
        Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
        v13 = 1LL;
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
      goto LABEL_10;
    }
    v20 = *(_WORD *)(a1 + 26) & 0x80;
    if ( v20 && *(_QWORD *)(a1 + 48) == CurrentThread )
    {
      v36 = *(_DWORD *)(a1 + 56) + 8;
      *(_DWORD *)(a1 + 56) = v36;
      v37 = v36 >> 3;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v38 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v39 = KeGetCurrentIrql();
          if ( v39 <= 0xFu && LockHandle.OldIrql <= 0xFu && v39 >= 2u )
          {
            v40 = KeGetCurrentPrcb();
            v41 = v40->SchedulerAssist;
            v42 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
            v43 = (v42 & v41[5]) == 0;
            v41[5] &= v42;
            if ( v43 )
              KiRemoveSystemWorkPriorityKick(v40);
          }
        }
      }
      __writecr8(v38);
      __incgsdword(0x86A8u);
      __incgsdword(0x8664u);
      if ( !v5 )
        return 1;
      v13 = v37;
      v48 = 65585LL;
      goto LABEL_70;
    }
    if ( v20 )
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
                               v22,
                               *(_DWORD *)(a1 + 76) != 0,
                               ThreadResourceHint);
    }
  }
  while ( !EmptyEntry );
  if ( *EmptyEntry == CurrentThread )
  {
    v24 = *((_DWORD *)EmptyEntry + 2) + 8;
    *((_DWORD *)EmptyEntry + 2) = v24;
    v25 = v24 >> 3;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v26 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v44 = KeGetCurrentIrql();
        if ( v44 <= 0xFu && LockHandle.OldIrql <= 0xFu && v44 >= 2u )
        {
          v45 = KeGetCurrentPrcb();
          v46 = v45->SchedulerAssist;
          v47 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
          v43 = (v47 & v46[5]) == 0;
          v46[5] &= v47;
          if ( v43 )
            KiRemoveSystemWorkPriorityKick(v45);
        }
      }
    }
    __writecr8(v26);
    __incgsdword(0x86B0u);
    __incgsdword(0x8664u);
    if ( v5 )
    {
      v13 = v25;
      v48 = 65617LL;
      goto LABEL_70;
    }
    return 1;
  }
  if ( ExpTryAcquireResourceSharedStarveExclusive(a1) )
  {
    v29 = *(_DWORD *)(v27 + 8) & 7;
    *(_QWORD *)v27 = CurrentThread;
    *(_DWORD *)(v27 + 8) = v29 | 8;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v30 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v49 = KeGetCurrentIrql();
        if ( v49 <= 0xFu && LockHandle.OldIrql <= 0xFu && v49 >= 2u )
        {
          v50 = KeGetCurrentPrcb();
          v51 = v50->SchedulerAssist;
          v52 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
          v43 = (v52 & v51[5]) == 0;
          v51[5] &= v52;
          if ( v43 )
            KiRemoveSystemWorkPriorityKick(v50);
        }
      }
    }
    __writecr8(v30);
    goto LABEL_25;
  }
  if ( a2 )
  {
    v31 = *(_DWORD *)(v27 + 8) & 7;
    *(_QWORD *)v27 = CurrentThread;
    *(_DWORD *)(v27 + 8) = v31 | 8;
    ExpPrepareToWaitForResourceShared(v28, CurrentThread, (__int64)v67);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v32 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v57 = KeGetCurrentIrql();
        if ( v57 <= 0xFu && LockHandle.OldIrql <= 0xFu && v57 >= 2u )
        {
          v58 = KeGetCurrentPrcb();
          v59 = v58->SchedulerAssist;
          v60 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
          v43 = (v60 & v59[5]) == 0;
          v59[5] &= v60;
          if ( v43 )
            KiRemoveSystemWorkPriorityKick(v58);
        }
      }
    }
    __writecr8(v32);
    __incgsdword(0x86B4u);
    if ( v5 )
      PerfLogExecutiveResourceWait(65604LL, a1, 0LL);
    ExpApplyPrewaitBoost();
    ExpWaitForResource(a1, v67, 66116LL, ExpApplyRewaitBoost);
LABEL_25:
    if ( (CurrentThread & 3) == 0 )
      v7 = *(unsigned __int8 *)(CurrentThread + 1032);
    ExpBoostIoAfterAcquire(a1, CurrentThread, v7);
    __incgsdword(0x86ACu);
    __incgsdword(0x8664u);
    if ( !v5 )
      return 1;
    v13 = 1LL;
LABEL_69:
    v48 = 65601LL;
LABEL_70:
    PerfLogExecutiveResourceAcquire(v48, a1, v13, *(unsigned int *)(a1 + 68));
    return 1;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v33 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v53 = KeGetCurrentIrql();
      if ( v53 <= 0xFu && LockHandle.OldIrql <= 0xFu && v53 >= 2u )
      {
        v54 = KeGetCurrentPrcb();
        v55 = v54->SchedulerAssist;
        v56 = ~(unsigned __int16)(v9 << (LockHandle.OldIrql + 1));
        v43 = (v56 & v55[5]) == 0;
        v55[5] &= v56;
        if ( v43 )
          KiRemoveSystemWorkPriorityKick(v54);
      }
    }
  }
  __writecr8(v33);
  __incgsdword(0x86B8u);
  return 0;
}
