/*
 * XREFs of ExpWorkerFactoryCheckCreate @ 0x1402826A0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14020FDA0 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x1402661E0 (NtSetInformationWorkerFactory.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140282320 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryDeferredThreadCreation @ 0x14035A1F4 (ExpWorkerFactoryDeferredThreadCreation.c)
 *     ExpWorkerFactoryManagerThread @ 0x1403B45A0 (ExpWorkerFactoryManagerThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpWorkerFactoryCreateThread @ 0x140266C58 (ExpWorkerFactoryCreateThread.c)
 *     KxWaitForLockChainValid @ 0x140279BD0 (KxWaitForLockChainValid.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402C0EA0 (KxWaitForLockOwnerShip.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1402D59F0 (ExpLeaveWorkerFactoryAwayMode.c)
 *     ExpCheckThreadHistory @ 0x1403464E4 (ExpCheckThreadHistory.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051101C (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x140709E00 (ExpSetWorkerFactoryDeferredCreateTimer.c)
 */

__int64 __fastcall ExpWorkerFactoryCheckCreate(
        PSLIST_ENTRY ListEntry,
        __int64 LockHandle,
        __int64 a3,
        _DWORD *SchedulerAssist)
{
  char v4; // bp
  struct _KLOCK_QUEUE_HANDLE *v5; // rbx
  unsigned int v7; // r14d
  _SLIST_ENTRY *Next; // rsi
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v11; // rdx
  _SLIST_ENTRY *v12; // rcx
  __int64 v13; // rax
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned int *v18; // rsi
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned __int64 v21; // rbp
  int v22; // ebp
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  int v26; // ecx
  char v27; // bp
  unsigned __int64 v28; // rbx
  int v29; // eax
  struct _KPRCB *v30; // r9
  _DWORD *v31; // r8
  bool v32; // zf
  int v33; // ecx
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r10
  _DWORD *v36; // r9
  int v37; // eax
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r9
  int v40; // eax
  _DWORD *v41; // r8
  int v42; // eax
  _DWORD *v43; // r8
  __int128 v44; // [rsp+20h] [rbp-38h] BYREF
  __int64 v45; // [rsp+30h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v4 = a3;
  v5 = (struct _KLOCK_QUEUE_HANDLE *)LockHandle;
  v44 = 0LL;
  v45 = 0LL;
  v7 = 2;
  if ( !LockHandle )
  {
    Next = ListEntry[1].Next;
    v5 = (struct _KLOCK_QUEUE_HANDLE *)&v44;
    *((_QWORD *)&v44 + 1) = Next;
    *(_QWORD *)&v44 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a3 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    LOBYTE(v45) = CurrentIrql;
    CurrentPrcb = KeGetCurrentPrcb();
    v11 = CurrentPrcb->SchedulerAssist;
    if ( v11 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v29 = v11[6];
        v11[6] = v29 + 1;
        if ( v29 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v44, Next);
    }
    else
    {
      LockHandle = _InterlockedExchange64((volatile __int64 *)Next, (__int64)&v44);
      if ( LockHandle )
        KxWaitForLockOwnerShip(&v44);
    }
  }
  if ( v4 )
  {
    v24 = *((_DWORD *)&ListEntry[19].Next + 2);
    if ( (((unsigned __int8)v24 | (unsigned __int8)((v24 | (v24 >> 6)) >> 2)) & 0x30) == 0 && (v24 & 0x100) == 0 )
    {
LABEL_46:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(v5);
      result = (unsigned int)KiIrqlFlags;
      OldIrql = v5->OldIrql;
      if ( !KiIrqlFlags )
        goto LABEL_16;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_16;
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result > 0xFu )
        goto LABEL_16;
      if ( (unsigned __int8)OldIrql > 0xFu )
        goto LABEL_16;
      if ( (unsigned __int8)result < 2u )
        goto LABEL_16;
      v30 = KeGetCurrentPrcb();
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql + 1));
      v31 = v30->SchedulerAssist;
      v32 = ((unsigned int)result & v31[5]) == 0;
      v31[5] &= result;
      if ( !v32 )
        goto LABEL_16;
      goto LABEL_106;
    }
  }
  if ( LODWORD(ListEntry[19].Next)
    || LODWORD(ListEntry[18].Next) >= *((_DWORD *)&ListEntry[17].Next + 3)
    || (v12 = ListEntry[1].Next, *((_DWORD *)&v12[1].Next + 3))
    || (LockHandle = *((_QWORD *)&v12->Next + 1), !*(_DWORD *)(LockHandle + 4)) && !*((_DWORD *)&v12[1].Next + 2) )
  {
    *((_DWORD *)&ListEntry[19].Next + 2) &= 0xFFFFCE0F;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(v5, retaddr);
      goto LABEL_14;
    }
    _m_prefetchw(v5);
    v13 = (__int64)v5->LockQueue.Next;
    if ( !v5->LockQueue.Next )
    {
      if ( v5 == (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)v5->LockQueue.Lock,
                                                 0LL,
                                                 (signed __int64)v5) )
      {
LABEL_14:
        v14 = KeGetCurrentPrcb();
        v15 = v14->SchedulerAssist;
        if ( v15 )
        {
          if ( v14->NestingLevel <= 1u )
          {
            v42 = v15[6] - 1;
            v15[6] = v42;
            if ( !v42 )
              KiRemoveSystemWorkPriorityKick(v14);
          }
        }
        result = (unsigned int)KiIrqlFlags;
        OldIrql = v5->OldIrql;
        if ( !KiIrqlFlags )
          goto LABEL_16;
        if ( (KiIrqlFlags & 1) == 0 )
          goto LABEL_16;
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result > 0xFu )
          goto LABEL_16;
        if ( (unsigned __int8)OldIrql > 0xFu )
          goto LABEL_16;
        if ( (unsigned __int8)result < 2u )
          goto LABEL_16;
        v30 = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql + 1));
        v43 = v30->SchedulerAssist;
        v32 = ((unsigned int)result & v43[5]) == 0;
        v43[5] &= result;
        if ( !v32 )
          goto LABEL_16;
LABEL_106:
        result = KiRemoveSystemWorkPriorityKick(v30);
LABEL_16:
        __writecr8(OldIrql);
        return result;
      }
      v13 = KxWaitForLockChainValid((__int64 *)v5, LockHandle, a3, (__int64)SchedulerAssist);
    }
    v5->LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v13 + 8), 1uLL);
    goto LABEL_14;
  }
  v18 = (unsigned int *)(&ListEntry[19].Next + 1);
  if ( (!v4 || (*v18 & 0xC0) != 0x80) && *(_DWORD *)(LockHandle + 40) >= (unsigned int)KeNumberProcessors_0 )
  {
    v25 = *v18;
    if ( (*v18 & 0xC0) != 0 )
    {
      if ( (v25 & 0xC0) != 0x40 || !v4 )
        goto LABEL_46;
      v23 = v25 & 0xFFFFFF3F | 0x80;
      *v18 = v23;
    }
    else
    {
      v7 = 3;
      v23 = v25 & 0xFFFFFF3F | 0x40;
      *v18 = v23;
    }
    goto LABEL_51;
  }
  if ( (!v4 || (*(_DWORD *)(&ListEntry[19].Next + 1) & 0x30) != 0x20)
    && (unsigned __int8)ExpCheckThreadHistory(ListEntry) )
  {
    v18 = (unsigned int *)(&ListEntry[19].Next + 1);
    v26 = *((_DWORD *)&ListEntry[19].Next + 2);
    if ( (v26 & 0x30) != 0 )
    {
      if ( (v26 & 0x30) != 0x10 || !v4 )
        goto LABEL_46;
      v23 = v26 & 0xFFFFFFCF | 0x20;
      *v18 = v23;
    }
    else
    {
      v7 = 3;
      v23 = v26 & 0xFFFFFFCF | 0x10;
      *v18 = v23;
    }
    goto LABEL_51;
  }
  if ( !v4 || (*(_DWORD *)(&ListEntry[19].Next + 1) & 0x3000) != 0x2000 )
  {
    v19 = *((_DWORD *)&ListEntry[18].Next + 3);
    if ( v19 )
    {
      if ( LODWORD(ListEntry[18].Next) > v19 )
      {
        v18 = (unsigned int *)(&ListEntry[19].Next + 1);
        v33 = *((_DWORD *)&ListEntry[19].Next + 2);
        if ( (v33 & 0x3000) != 0 )
        {
          if ( (*(_DWORD *)(&ListEntry[19].Next + 1) & 0x3000) != 0x1000 || !v4 )
            goto LABEL_46;
          v23 = v33 & 0xFFFFCFFF | 0x2000;
          *v18 = v23;
        }
        else
        {
          v7 = 3;
          v23 = v33 & 0xFFFFCFFF | 0x1000;
          *v18 = v23;
        }
        goto LABEL_51;
      }
    }
  }
  v18 = (unsigned int *)(&ListEntry[19].Next + 1);
  v20 = *((_DWORD *)&ListEntry[19].Next + 2);
  if ( (v20 & 0x200) != 0 )
  {
    ExpLeaveWorkerFactoryAwayMode(ListEntry);
    v20 = *v18;
  }
  ++LODWORD(ListEntry[19].Next);
  *v18 = v20 & 0xFFFFCE0F;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(v5);
  v21 = v5->OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v34 = KeGetCurrentIrql();
      if ( v34 <= 0xFu && (unsigned __int8)v21 <= 0xFu && v34 >= 2u )
      {
        v35 = KeGetCurrentPrcb();
        v36 = v35->SchedulerAssist;
        v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
        v32 = (v37 & v36[5]) == 0;
        v36[5] &= v37;
        if ( v32 )
          KiRemoveSystemWorkPriorityKick(v35);
      }
    }
  }
  __writecr8(v21);
  result = ExpWorkerFactoryCreateThread((__int64)ListEntry);
  v22 = result;
  if ( (int)result < 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)ListEntry[1].Next, v5);
    --LODWORD(ListEntry[19].Next);
    if ( v22 == -1073741558 || v22 == -1073741814 || v22 == -1073741582 || v22 == -1073741823 )
      goto LABEL_46;
    *v18 |= 0x100u;
    v7 = 1;
    v23 = *v18;
LABEL_51:
    v27 = 0;
    if ( (v23 & 8) == 0 )
    {
      v27 = 1;
      *v18 = v23 | 8;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(v5);
    v28 = v5->OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v38 = KeGetCurrentIrql();
        if ( v38 <= 0xFu && (unsigned __int8)v28 <= 0xFu && v38 >= 2u )
        {
          v39 = KeGetCurrentPrcb();
          v40 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v28 + 1));
          v41 = v39->SchedulerAssist;
          v32 = (v40 & v41[5]) == 0;
          v41[5] &= v40;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick(v39);
        }
      }
    }
    __writecr8(v28);
    if ( v27 )
    {
      ObfReferenceObjectWithTag(ListEntry, 0x746C6644u);
      RtlpInterlockedPushEntrySList(&ExpWorkerFactoryThreadCreationList, ListEntry);
    }
    return ExpSetWorkerFactoryDeferredCreateTimer(v7);
  }
  return result;
}
