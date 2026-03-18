/*
 * XREFs of ExpWorkerFactoryCheckCreate @ 0x14028C9B0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140206490 (NtWaitForWorkViaWorkerFactory.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14028C630 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryDeferredThreadCreation @ 0x14032AAF4 (ExpWorkerFactoryDeferredThreadCreation.c)
 *     NtSetInformationWorkerFactory @ 0x14035BF90 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryManagerThread @ 0x1403B5F60 (ExpWorkerFactoryManagerThread.c)
 * Callees:
 *     ExpLeaveWorkerFactoryAwayMode @ 0x140206148 (ExpLeaveWorkerFactoryAwayMode.c)
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402950A0 (KxWaitForLockOwnerShip.c)
 *     ExpCheckThreadHistory @ 0x140317A64 (ExpCheckThreadHistory.c)
 *     ExpWorkerFactoryCreateThread @ 0x14035CA08 (ExpWorkerFactoryCreateThread.c)
 *     KxWaitForLockChainValid @ 0x14035D0F0 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPushEntrySList @ 0x140405300 (RtlpInterlockedPushEntrySList.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051488C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051494C (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x1406DC350 (ExpSetWorkerFactoryDeferredCreateTimer.c)
 */

__int64 __fastcall ExpWorkerFactoryCheckCreate(char *Object, PKLOCK_QUEUE_HANDLE LockHandle, char a3)
{
  PKLOCK_QUEUE_HANDLE v4; // rbx
  unsigned int v6; // r14d
  volatile __int64 *v7; // rsi
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v10; // rdx
  __int64 v11; // rcx
  __int64 Next; // rax
  struct _KPRCB *v13; // rcx
  _DWORD *v14; // rdx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  __int64 v17; // rdx
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
  _DWORD *SchedulerAssist; // r9
  int v30; // eax
  struct _KPRCB *v31; // r9
  _DWORD *v32; // r8
  bool v33; // zf
  int v34; // ecx
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  _DWORD *v37; // r9
  int v38; // eax
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r9
  int v41; // eax
  _DWORD *v42; // r8
  int v43; // eax
  _DWORD *v44; // r8
  __int128 v45; // [rsp+20h] [rbp-38h] BYREF
  __int64 v46; // [rsp+30h] [rbp-28h]
  void *retaddr; // [rsp+58h] [rbp+0h]

  v4 = LockHandle;
  v45 = 0LL;
  v46 = 0LL;
  v6 = 2;
  if ( !LockHandle )
  {
    v7 = (volatile __int64 *)*((_QWORD *)Object + 2);
    v4 = (PKLOCK_QUEUE_HANDLE)&v45;
    *((_QWORD *)&v45 + 1) = v7;
    *(_QWORD *)&v45 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    LOBYTE(v46) = CurrentIrql;
    CurrentPrcb = KeGetCurrentPrcb();
    v10 = CurrentPrcb->SchedulerAssist;
    if ( v10 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v30 = v10[6];
        v10[6] = v30 + 1;
        if ( v30 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v45, v7);
    }
    else if ( _InterlockedExchange64(v7, (__int64)&v45) )
    {
      KxWaitForLockOwnerShip(&v45);
    }
  }
  if ( a3 )
  {
    v24 = *((_DWORD *)Object + 78);
    if ( (((unsigned __int8)v24 | (unsigned __int8)((v24 | (v24 >> 6)) >> 2)) & 0x30) == 0 && (v24 & 0x100) == 0 )
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
      v31 = KeGetCurrentPrcb();
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql + 1));
      v32 = v31->SchedulerAssist;
      v33 = ((unsigned int)result & v32[5]) == 0;
      v32[5] &= result;
      if ( !v33 )
        goto LABEL_16;
      goto LABEL_106;
    }
  }
  if ( *((_DWORD *)Object + 76)
    || *((_DWORD *)Object + 72) >= *((_DWORD *)Object + 71)
    || (v11 = *((_QWORD *)Object + 2), *(_DWORD *)(v11 + 28))
    || (v17 = *(_QWORD *)(v11 + 8), !*(_DWORD *)(v17 + 4)) && !*(_DWORD *)(v11 + 24) )
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
        v13 = KeGetCurrentPrcb();
        v14 = v13->SchedulerAssist;
        if ( v14 )
        {
          if ( v13->NestingLevel <= 1u )
          {
            v43 = v14[6] - 1;
            v14[6] = v43;
            if ( !v43 )
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
        v31 = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql + 1));
        v44 = v31->SchedulerAssist;
        v33 = ((unsigned int)result & v44[5]) == 0;
        v44[5] &= result;
        if ( !v33 )
          goto LABEL_16;
LABEL_106:
        result = KiRemoveSystemWorkPriorityKick(v31);
LABEL_16:
        __writecr8(OldIrql);
        return result;
      }
      Next = KxWaitForLockChainValid(v4);
    }
    v4->LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    goto LABEL_14;
  }
  v18 = (unsigned int *)(Object + 312);
  if ( (!a3 || (*v18 & 0xC0) != 0x80) && *(_DWORD *)(v17 + 40) >= (unsigned int)KeNumberProcessors_0 )
  {
    v25 = *v18;
    if ( (*v18 & 0xC0) != 0 )
    {
      if ( (v25 & 0xC0) != 0x40 || !a3 )
        goto LABEL_46;
      v23 = v25 & 0xFFFFFF3F | 0x80;
      *v18 = v23;
    }
    else
    {
      v6 = 3;
      v23 = v25 & 0xFFFFFF3F | 0x40;
      *v18 = v23;
    }
    goto LABEL_51;
  }
  if ( (!a3 || (*((_DWORD *)Object + 78) & 0x30) != 0x20) && (unsigned __int8)ExpCheckThreadHistory(Object) )
  {
    v18 = (unsigned int *)(Object + 312);
    v26 = *((_DWORD *)Object + 78);
    if ( (v26 & 0x30) != 0 )
    {
      if ( (v26 & 0x30) != 0x10 || !a3 )
        goto LABEL_46;
      v23 = v26 & 0xFFFFFFCF | 0x20;
      *v18 = v23;
    }
    else
    {
      v6 = 3;
      v23 = v26 & 0xFFFFFFCF | 0x10;
      *v18 = v23;
    }
    goto LABEL_51;
  }
  if ( !a3 || (*((_DWORD *)Object + 78) & 0x3000) != 0x2000 )
  {
    v19 = *((_DWORD *)Object + 75);
    if ( v19 )
    {
      if ( *((_DWORD *)Object + 72) > v19 )
      {
        v18 = (unsigned int *)(Object + 312);
        v34 = *((_DWORD *)Object + 78);
        if ( (v34 & 0x3000) != 0 )
        {
          if ( (*((_DWORD *)Object + 78) & 0x3000) != 0x1000 || !a3 )
            goto LABEL_46;
          v23 = v34 & 0xFFFFCFFF | 0x2000;
          *v18 = v23;
        }
        else
        {
          v6 = 3;
          v23 = v34 & 0xFFFFCFFF | 0x1000;
          *v18 = v23;
        }
        goto LABEL_51;
      }
    }
  }
  v18 = (unsigned int *)(Object + 312);
  v20 = *((_DWORD *)Object + 78);
  if ( (v20 & 0x200) != 0 )
  {
    ExpLeaveWorkerFactoryAwayMode(Object);
    v20 = *v18;
  }
  ++*((_DWORD *)Object + 76);
  *v18 = v20 & 0xFFFFCE0F;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(v4);
  v21 = v4->OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v35 = KeGetCurrentIrql();
      if ( v35 <= 0xFu && (unsigned __int8)v21 <= 0xFu && v35 >= 2u )
      {
        v36 = KeGetCurrentPrcb();
        v37 = v36->SchedulerAssist;
        v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
        v33 = (v38 & v37[5]) == 0;
        v37[5] &= v38;
        if ( v33 )
          KiRemoveSystemWorkPriorityKick(v36);
      }
    }
  }
  __writecr8(v21);
  result = ExpWorkerFactoryCreateThread(Object);
  v22 = result;
  if ( (int)result < 0 )
  {
    KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)Object + 2), v4);
    --*((_DWORD *)Object + 76);
    if ( v22 == -1073741558 || v22 == -1073741814 || v22 == -1073741582 || v22 == -1073741823 )
      goto LABEL_46;
    *v18 |= 0x100u;
    v6 = 1;
    v23 = *v18;
LABEL_51:
    v27 = 0;
    if ( (v23 & 8) == 0 )
    {
      v27 = 1;
      *v18 = v23 | 8;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(v4);
    v28 = v4->OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v39 = KeGetCurrentIrql();
        if ( v39 <= 0xFu && (unsigned __int8)v28 <= 0xFu && v39 >= 2u )
        {
          v40 = KeGetCurrentPrcb();
          v41 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v28 + 1));
          v42 = v40->SchedulerAssist;
          v33 = (v41 & v42[5]) == 0;
          v42[5] &= v41;
          if ( v33 )
            KiRemoveSystemWorkPriorityKick(v40);
        }
      }
    }
    __writecr8(v28);
    if ( v27 )
    {
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      RtlpInterlockedPushEntrySList(&ExpWorkerFactoryThreadCreationList, (PSLIST_ENTRY)Object);
    }
    return ExpSetWorkerFactoryDeferredCreateTimer(v6);
  }
  return result;
}
