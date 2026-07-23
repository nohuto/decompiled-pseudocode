/*
 * XREFs of ExpWorkerFactoryCheckCreate @ 0x1402E7740
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x140202E10 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryDeferredThreadCreation @ 0x14024A624 (ExpWorkerFactoryDeferredThreadCreation.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A7A90 (NtWaitForWorkViaWorkerFactory.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402E73C0 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryManagerThread @ 0x1403B7710 (ExpWorkerFactoryManagerThread.c)
 * Callees:
 *     ExpWorkerFactoryCreateThread @ 0x140203BC8 (ExpWorkerFactoryCreateThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140204330 (KxWaitForLockChainValid.c)
 *     ExpCheckThreadHistory @ 0x1402386B0 (ExpCheckThreadHistory.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1402A7748 (ExpLeaveWorkerFactoryAwayMode.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402D36F0 (KxWaitForLockOwnerShip.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051660C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405166CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x14061B0E4 (ExpSetWorkerFactoryDeferredCreateTimer.c)
 */

__int64 __fastcall ExpWorkerFactoryCheckCreate(char *Object, PKLOCK_QUEUE_HANDLE LockHandle, char a3)
{
  PKLOCK_QUEUE_HANDLE v4; // rbx
  unsigned int v6; // r14d
  volatile __int64 *v7; // rsi
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v10; // rdx
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  __int64 Next; // rax
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  __int64 v18; // rdx
  unsigned int *v19; // rsi
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned __int64 v22; // rbp
  int v23; // ebp
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  int v27; // ecx
  char v28; // bp
  unsigned __int64 v29; // rbx
  _DWORD *SchedulerAssist; // r9
  int v31; // eax
  struct _KPRCB *v32; // r9
  _DWORD *v33; // r8
  bool v34; // zf
  int v35; // ecx
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r10
  _DWORD *v38; // r9
  int v39; // eax
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r9
  int v42; // eax
  _DWORD *v43; // r8
  int v44; // eax
  _DWORD *v45; // r8
  __int128 v46; // [rsp+20h] [rbp-38h] BYREF
  __int64 v47; // [rsp+30h] [rbp-28h]
  void *retaddr; // [rsp+58h] [rbp+0h]

  v4 = LockHandle;
  v46 = 0LL;
  v47 = 0LL;
  v6 = 2;
  if ( !LockHandle )
  {
    v7 = (volatile __int64 *)*((_QWORD *)Object + 2);
    v4 = (PKLOCK_QUEUE_HANDLE)&v46;
    *((_QWORD *)&v46 + 1) = v7;
    *(_QWORD *)&v46 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    LOBYTE(v47) = CurrentIrql;
    CurrentPrcb = KeGetCurrentPrcb();
    v10 = CurrentPrcb->SchedulerAssist;
    if ( v10 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v31 = v10[6];
        v10[6] = v31 + 1;
        if ( v31 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v46, v7);
    }
    else
    {
      v11 = (_QWORD *)_InterlockedExchange64(v7, (__int64)&v46);
      if ( v11 )
        KxWaitForLockOwnerShip((__int64)&v46, v11);
    }
  }
  if ( a3 )
  {
    v25 = *((_DWORD *)Object + 78);
    if ( (((unsigned __int8)v25 | (unsigned __int8)((v25 | (v25 >> 6)) >> 2)) & 0x30) == 0 && (v25 & 0x100) == 0 )
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
      v32 = KeGetCurrentPrcb();
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql + 1));
      v33 = v32->SchedulerAssist;
      v34 = ((unsigned int)result & v33[5]) == 0;
      v33[5] &= result;
      if ( !v34 )
        goto LABEL_16;
      goto LABEL_106;
    }
  }
  if ( *((_DWORD *)Object + 76)
    || *((_DWORD *)Object + 72) >= *((_DWORD *)Object + 71)
    || (v12 = *((_QWORD *)Object + 2), *(_DWORD *)(v12 + 28))
    || (v18 = *(_QWORD *)(v12 + 8), !*(_DWORD *)(v18 + 4)) && !*(_DWORD *)(v12 + 24) )
  {
    *((_DWORD *)Object + 78) &= 0xFFFFCE0F;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(v4, retaddr);
      goto LABEL_14;
    }
    _m_prefetchw(v4);
    Next = (__int64)v4->LockQueue.Next;
    if ( !v4->LockQueue.Next )
    {
      if ( v4 == (PKLOCK_QUEUE_HANDLE)_InterlockedCompareExchange64(
                                        (volatile signed __int64 *)v4->LockQueue.Lock,
                                        0LL,
                                        (signed __int64)v4) )
      {
LABEL_14:
        v14 = KeGetCurrentPrcb();
        v15 = v14->SchedulerAssist;
        if ( v15 )
        {
          if ( v14->NestingLevel <= 1u )
          {
            v44 = v15[6] - 1;
            v15[6] = v44;
            if ( !v44 )
              KiRemoveSystemWorkPriorityKick(v14);
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
        v32 = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql + 1));
        v45 = v32->SchedulerAssist;
        v34 = ((unsigned int)result & v45[5]) == 0;
        v45[5] &= result;
        if ( !v34 )
          goto LABEL_16;
LABEL_106:
        result = KiRemoveSystemWorkPriorityKick(v32);
LABEL_16:
        __writecr8(OldIrql);
        return result;
      }
      Next = KxWaitForLockChainValid((__int64 *)v4);
    }
    v4->LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    goto LABEL_14;
  }
  v19 = (unsigned int *)(Object + 312);
  if ( (!a3 || (*v19 & 0xC0) != 0x80) && *(_DWORD *)(v18 + 40) >= (unsigned int)KeNumberProcessors_0 )
  {
    v26 = *v19;
    if ( (*v19 & 0xC0) != 0 )
    {
      if ( (v26 & 0xC0) != 0x40 || !a3 )
        goto LABEL_46;
      v24 = v26 & 0xFFFFFF3F | 0x80;
      *v19 = v24;
    }
    else
    {
      v6 = 3;
      v24 = v26 & 0xFFFFFF3F | 0x40;
      *v19 = v24;
    }
    goto LABEL_51;
  }
  if ( (!a3 || (*((_DWORD *)Object + 78) & 0x30) != 0x20) && ExpCheckThreadHistory((__int64)Object) )
  {
    v19 = (unsigned int *)(Object + 312);
    v27 = *((_DWORD *)Object + 78);
    if ( (v27 & 0x30) != 0 )
    {
      if ( (v27 & 0x30) != 0x10 || !a3 )
        goto LABEL_46;
      v24 = v27 & 0xFFFFFFCF | 0x20;
      *v19 = v24;
    }
    else
    {
      v6 = 3;
      v24 = v27 & 0xFFFFFFCF | 0x10;
      *v19 = v24;
    }
    goto LABEL_51;
  }
  if ( !a3 || (*((_DWORD *)Object + 78) & 0x3000) != 0x2000 )
  {
    v20 = *((_DWORD *)Object + 75);
    if ( v20 )
    {
      if ( *((_DWORD *)Object + 72) > v20 )
      {
        v19 = (unsigned int *)(Object + 312);
        v35 = *((_DWORD *)Object + 78);
        if ( (v35 & 0x3000) != 0 )
        {
          if ( (*((_DWORD *)Object + 78) & 0x3000) != 0x1000 || !a3 )
            goto LABEL_46;
          v24 = v35 & 0xFFFFCFFF | 0x2000;
          *v19 = v24;
        }
        else
        {
          v6 = 3;
          v24 = v35 & 0xFFFFCFFF | 0x1000;
          *v19 = v24;
        }
        goto LABEL_51;
      }
    }
  }
  v19 = (unsigned int *)(Object + 312);
  v21 = *((_DWORD *)Object + 78);
  if ( (v21 & 0x200) != 0 )
  {
    ExpLeaveWorkerFactoryAwayMode(Object);
    v21 = *v19;
  }
  ++*((_DWORD *)Object + 76);
  *v19 = v21 & 0xFFFFCE0F;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(v4);
  v22 = v4->OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v36 = KeGetCurrentIrql();
      if ( v36 <= 0xFu && (unsigned __int8)v22 <= 0xFu && v36 >= 2u )
      {
        v37 = KeGetCurrentPrcb();
        v38 = v37->SchedulerAssist;
        v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v22 + 1));
        v34 = (v39 & v38[5]) == 0;
        v38[5] &= v39;
        if ( v34 )
          KiRemoveSystemWorkPriorityKick(v37);
      }
    }
  }
  __writecr8(v22);
  result = ExpWorkerFactoryCreateThread((__int64)Object);
  v23 = result;
  if ( (int)result < 0 )
  {
    KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)Object + 2), v4);
    --*((_DWORD *)Object + 76);
    if ( v23 == -1073741558 || v23 == -1073741814 || v23 == -1073741582 || v23 == -1073741823 )
      goto LABEL_46;
    *v19 |= 0x100u;
    v6 = 1;
    v24 = *v19;
LABEL_51:
    v28 = 0;
    if ( (v24 & 8) == 0 )
    {
      v28 = 1;
      *v19 = v24 | 8;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(v4);
    v29 = v4->OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v40 = KeGetCurrentIrql();
        if ( v40 <= 0xFu && (unsigned __int8)v29 <= 0xFu && v40 >= 2u )
        {
          v41 = KeGetCurrentPrcb();
          v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v29 + 1));
          v43 = v41->SchedulerAssist;
          v34 = (v42 & v43[5]) == 0;
          v43[5] &= v42;
          if ( v34 )
            KiRemoveSystemWorkPriorityKick(v41);
        }
      }
    }
    __writecr8(v29);
    if ( v28 )
    {
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      RtlpInterlockedPushEntrySList(&ExpWorkerFactoryThreadCreationList, (PSLIST_ENTRY)Object);
    }
    return ExpSetWorkerFactoryDeferredCreateTimer(v6);
  }
  return result;
}
