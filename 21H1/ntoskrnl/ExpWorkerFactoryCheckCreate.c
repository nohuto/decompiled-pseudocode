/*
 * XREFs of ExpWorkerFactoryCheckCreate @ 0x140245EC0
 * Callers:
 *     NtReleaseWorkerFactoryWorker @ 0x140245B40 (NtReleaseWorkerFactoryWorker.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140268DF0 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x1402BF210 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryDeferredThreadCreation @ 0x14031C624 (ExpWorkerFactoryDeferredThreadCreation.c)
 *     ExpWorkerFactoryManagerThread @ 0x1403B27A0 (ExpWorkerFactoryManagerThread.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14022E070 (KxWaitForLockOwnerShip.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpWorkerFactoryCreateThread @ 0x1402BFC88 (ExpWorkerFactoryCreateThread.c)
 *     KxWaitForLockChainValid @ 0x1402DAB20 (KxWaitForLockChainValid.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1402E2740 (ExpLeaveWorkerFactoryAwayMode.c)
 *     ExpCheckThreadHistory @ 0x1403086E4 (ExpCheckThreadHistory.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051090C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405109CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x1406E6080 (ExpSetWorkerFactoryDeferredCreateTimer.c)
 */

__int64 __fastcall ExpWorkerFactoryCheckCreate(PSLIST_ENTRY ListEntry, struct _KLOCK_QUEUE_HANDLE *LockHandle, char a3)
{
  struct _KLOCK_QUEUE_HANDLE *v4; // rbx
  unsigned int v6; // r14d
  _SLIST_ENTRY *Next; // rsi
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v10; // rdx
  _SLIST_ENTRY *v11; // rcx
  __int64 v12; // rax
  struct _KPRCB *v13; // rcx
  _DWORD *v14; // rdx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned int *v17; // rsi
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned __int64 v20; // rbp
  int v21; // ebp
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  int v25; // ecx
  char v26; // bp
  unsigned __int64 v27; // rbx
  _DWORD *SchedulerAssist; // r9
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

  v4 = LockHandle;
  v44 = 0LL;
  v45 = 0LL;
  v6 = 2;
  if ( !LockHandle )
  {
    Next = ListEntry[1].Next;
    v4 = (struct _KLOCK_QUEUE_HANDLE *)&v44;
    *((_QWORD *)&v44 + 1) = Next;
    *(_QWORD *)&v44 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    LOBYTE(v45) = CurrentIrql;
    CurrentPrcb = KeGetCurrentPrcb();
    v10 = CurrentPrcb->SchedulerAssist;
    if ( v10 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v29 = v10[6];
        v10[6] = v29 + 1;
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
      LockHandle = (struct _KLOCK_QUEUE_HANDLE *)_InterlockedExchange64((volatile __int64 *)Next, (__int64)&v44);
      if ( LockHandle )
        KxWaitForLockOwnerShip((__int64)&v44, LockHandle);
    }
  }
  if ( a3 )
  {
    v23 = *((_DWORD *)&ListEntry[19].Next + 2);
    if ( (((unsigned __int8)v23 | (unsigned __int8)((v23 | (v23 >> 6)) >> 2)) & 0x30) == 0 && (v23 & 0x100) == 0 )
    {
LABEL_46:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(v4);
      result = (unsigned int)KiIrqlFlags;
      OldIrql = v4->OldIrql;
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
    || (v11 = ListEntry[1].Next, *((_DWORD *)&v11[1].Next + 3))
    || (LockHandle = (struct _KLOCK_QUEUE_HANDLE *)*((_QWORD *)&v11->Next + 1), !HIDWORD(LockHandle->LockQueue.Next))
    && !*((_DWORD *)&v11[1].Next + 2) )
  {
    *((_DWORD *)&ListEntry[19].Next + 2) &= 0xFFFFCE0F;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(v4, retaddr);
      goto LABEL_14;
    }
    _m_prefetchw(v4);
    v12 = (__int64)v4->LockQueue.Next;
    if ( !v4->LockQueue.Next )
    {
      if ( v4 == (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)v4->LockQueue.Lock,
                                                 0LL,
                                                 (signed __int64)v4) )
      {
LABEL_14:
        v13 = KeGetCurrentPrcb();
        v14 = v13->SchedulerAssist;
        if ( v14 )
        {
          if ( v13->NestingLevel <= 1u )
          {
            v42 = v14[6] - 1;
            v14[6] = v42;
            if ( !v42 )
              KiRemoveSystemWorkPriorityKick(v13);
          }
        }
        result = (unsigned int)KiIrqlFlags;
        OldIrql = v4->OldIrql;
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
      v12 = KxWaitForLockChainValid(v4, (_BYTE)LockHandle);
    }
    v4->LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v12 + 8), 1uLL);
    goto LABEL_14;
  }
  v17 = (unsigned int *)(&ListEntry[19].Next + 1);
  if ( (!a3 || (*v17 & 0xC0) != 0x80) && *(_DWORD *)&LockHandle[1].OldIrql >= (unsigned int)KeNumberProcessors_0 )
  {
    v24 = *v17;
    if ( (*v17 & 0xC0) != 0 )
    {
      if ( (v24 & 0xC0) != 0x40 || !a3 )
        goto LABEL_46;
      v22 = v24 & 0xFFFFFF3F | 0x80;
      *v17 = v22;
    }
    else
    {
      v6 = 3;
      v22 = v24 & 0xFFFFFF3F | 0x40;
      *v17 = v22;
    }
    goto LABEL_51;
  }
  if ( (!a3 || (*(_DWORD *)(&ListEntry[19].Next + 1) & 0x30) != 0x20)
    && (unsigned __int8)ExpCheckThreadHistory(ListEntry) )
  {
    v17 = (unsigned int *)(&ListEntry[19].Next + 1);
    v25 = *((_DWORD *)&ListEntry[19].Next + 2);
    if ( (v25 & 0x30) != 0 )
    {
      if ( (v25 & 0x30) != 0x10 || !a3 )
        goto LABEL_46;
      v22 = v25 & 0xFFFFFFCF | 0x20;
      *v17 = v22;
    }
    else
    {
      v6 = 3;
      v22 = v25 & 0xFFFFFFCF | 0x10;
      *v17 = v22;
    }
    goto LABEL_51;
  }
  if ( !a3 || (*(_DWORD *)(&ListEntry[19].Next + 1) & 0x3000) != 0x2000 )
  {
    v18 = *((_DWORD *)&ListEntry[18].Next + 3);
    if ( v18 )
    {
      if ( LODWORD(ListEntry[18].Next) > v18 )
      {
        v17 = (unsigned int *)(&ListEntry[19].Next + 1);
        v33 = *((_DWORD *)&ListEntry[19].Next + 2);
        if ( (v33 & 0x3000) != 0 )
        {
          if ( (*(_DWORD *)(&ListEntry[19].Next + 1) & 0x3000) != 0x1000 || !a3 )
            goto LABEL_46;
          v22 = v33 & 0xFFFFCFFF | 0x2000;
          *v17 = v22;
        }
        else
        {
          v6 = 3;
          v22 = v33 & 0xFFFFCFFF | 0x1000;
          *v17 = v22;
        }
        goto LABEL_51;
      }
    }
  }
  v17 = (unsigned int *)(&ListEntry[19].Next + 1);
  v19 = *((_DWORD *)&ListEntry[19].Next + 2);
  if ( (v19 & 0x200) != 0 )
  {
    ExpLeaveWorkerFactoryAwayMode(ListEntry);
    v19 = *v17;
  }
  ++LODWORD(ListEntry[19].Next);
  *v17 = v19 & 0xFFFFCE0F;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(v4);
  v20 = v4->OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v34 = KeGetCurrentIrql();
      if ( v34 <= 0xFu && (unsigned __int8)v20 <= 0xFu && v34 >= 2u )
      {
        v35 = KeGetCurrentPrcb();
        v36 = v35->SchedulerAssist;
        v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
        v32 = (v37 & v36[5]) == 0;
        v36[5] &= v37;
        if ( v32 )
          KiRemoveSystemWorkPriorityKick(v35);
      }
    }
  }
  __writecr8(v20);
  result = ExpWorkerFactoryCreateThread(ListEntry);
  v21 = result;
  if ( (int)result < 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)ListEntry[1].Next, v4);
    --LODWORD(ListEntry[19].Next);
    if ( v21 == -1073741558 || v21 == -1073741814 || v21 == -1073741582 || v21 == -1073741823 )
      goto LABEL_46;
    *v17 |= 0x100u;
    v6 = 1;
    v22 = *v17;
LABEL_51:
    v26 = 0;
    if ( (v22 & 8) == 0 )
    {
      v26 = 1;
      *v17 = v22 | 8;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(v4);
    v27 = v4->OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v38 = KeGetCurrentIrql();
        if ( v38 <= 0xFu && (unsigned __int8)v27 <= 0xFu && v38 >= 2u )
        {
          v39 = KeGetCurrentPrcb();
          v40 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v27 + 1));
          v41 = v39->SchedulerAssist;
          v32 = (v40 & v41[5]) == 0;
          v41[5] &= v40;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick(v39);
        }
      }
    }
    __writecr8(v27);
    if ( v26 )
    {
      ObfReferenceObjectWithTag(ListEntry, 0x746C6644u);
      RtlpInterlockedPushEntrySList(&ExpWorkerFactoryThreadCreationList, ListEntry);
    }
    return ExpSetWorkerFactoryDeferredCreateTimer(v6);
  }
  return result;
}
