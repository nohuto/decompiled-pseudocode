/*
 * XREFs of ExAcquireSharedWaitForExclusive @ 0x14039B280
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x14028B12C (FsRtlAcquireFileForModWriteEx.c)
 *     ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x140461910 (ExEnterCriticalRegionAndAcquireSharedWaitForExclusive.c)
 *     DifExAcquireSharedWaitForExclusiveWrapper @ 0x140606E00 (DifExAcquireSharedWaitForExclusiveWrapper.c)
 * Callees:
 *     ExpFindEmptyEntry @ 0x14021CA10 (ExpFindEmptyEntry.c)
 *     ExpBoostIoAfterAcquire @ 0x14021CA70 (ExpBoostIoAfterAcquire.c)
 *     ExpFindCurrentThread @ 0x14021CD50 (ExpFindCurrentThread.c)
 *     ExpExpandResourceOwnerTable @ 0x14021CE94 (ExpExpandResourceOwnerTable.c)
 *     ExpGetThreadResourceHint @ 0x14022B410 (ExpGetThreadResourceHint.c)
 *     ExpWaitForResource @ 0x140231990 (ExpWaitForResource.c)
 *     ExpPrepareToWaitForResourceShared @ 0x1402597A8 (ExpPrepareToWaitForResourceShared.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140282C20 (KxWaitForLockChainValid.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140311C70 (KxWaitForLockOwnerShip.c)
 *     ExpApplyPrewaitBoost @ 0x14033B6F0 (ExpApplyPrewaitBoost.c)
 *     ExpTryAcquireResourceShared @ 0x14039BA04 (ExpTryAcquireResourceShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045A10C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056E6FC (KiReleaseQueuedSpinLockInstrumented.c)
 *     PerfLogExecutiveResourceAcquire @ 0x1406325F8 (PerfLogExecutiveResourceAcquire.c)
 *     PerfLogExecutiveResourceWait @ 0x140632AC8 (PerfLogExecutiveResourceWait.c)
 */

BOOLEAN __stdcall ExAcquireSharedWaitForExclusive(PERESOURCE Resource, BOOLEAN Wait)
{
  __int64 v2; // r8
  _DWORD *SchedulerAssist; // r9
  bool v4; // zf
  ERESOURCE_THREAD CurrentThread; // rsi
  bool v8; // r13
  KSPIN_LOCK *p_SpinLock; // rdi
  int v10; // r15d
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v13; // rdx
  _QWORD *v14; // rdx
  BOOLEAN v15; // di
  ULONG v16; // ecx
  unsigned __int64 OldIrql; // rsi
  __int16 v18; // ax
  ULONG ThreadResourceHint; // eax
  __int64 v20; // r9
  OWNER_ENTRY *p_OwnerEntry; // rcx
  ULONG v22; // r8d
  OWNER_ENTRY *v23; // rdx
  unsigned __int64 v24; // r10
  POWNER_ENTRY v25; // rax
  unsigned __int64 v26; // r8
  POWNER_ENTRY OwnerTable; // r9
  OWNER_ENTRY *v28; // rax
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 TableSize; // edi
  unsigned int v30; // edi
  ULONG ActiveEntries; // ecx
  unsigned int v32; // edi
  __int64 Next; // rax
  struct _KPRCB *v34; // rcx
  _DWORD *v35; // rdx
  unsigned __int64 v36; // rsi
  __int64 v37; // rcx
  unsigned int v38; // eax
  unsigned __int64 v40; // rbx
  int v41; // eax
  _QWORD *EmptyEntry; // rax
  _QWORD *v43; // r12
  ULONG v44; // edi
  ULONG v45; // edi
  unsigned __int64 v46; // rsi
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r9
  _DWORD *v49; // r8
  int v50; // eax
  int v51; // eax
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // r9
  _DWORD *v54; // r8
  int v55; // eax
  unsigned __int64 v56; // r14
  unsigned __int8 v57; // al
  struct _KPRCB *v58; // r10
  _DWORD *v59; // r9
  int v60; // eax
  _QWORD *v61; // rax
  int v62; // ecx
  unsigned __int64 v63; // rdi
  unsigned __int8 v64; // al
  struct _KPRCB *v65; // r9
  _DWORD *v66; // r8
  int v67; // eax
  unsigned __int8 v68; // al
  struct _KPRCB *v69; // r9
  _DWORD *v70; // r8
  int v71; // eax
  unsigned __int8 v72; // al
  struct _KPRCB *v73; // r9
  _DWORD *v74; // r8
  int v75; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-19h] BYREF
  _OWORD v77[3]; // [rsp+50h] [rbp-1h] BYREF
  void *retaddr; // [rsp+B0h] [rbp+5Fh]

  v4 = (Resource->ReservedLowFlags & 1) == 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v77, 0, sizeof(v77));
  if ( !v4 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  CurrentThread = (ERESOURCE_THREAD)KeGetCurrentThread();
  v8 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  __incgsdword(0x8ABCu);
  p_SpinLock = &Resource->SpinLock;
  v10 = 0;
  LockHandle.LockQueue.Lock = &Resource->SpinLock;
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v2 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
    SchedulerAssist[5] = v2;
  }
  LockHandle.OldIrql = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = CurrentPrcb->SchedulerAssist;
  if ( v13 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v41 = v13[6];
      v13[6] = v41 + 1;
      if ( v41 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, p_SpinLock);
  }
  else
  {
    v14 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)p_SpinLock, (__int64)&LockHandle);
    if ( v14 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v14, v2, (__int64)SchedulerAssist);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !Resource->ActiveEntries )
      {
        v15 = ExpTryAcquireResourceShared(Resource);
        v16 = Resource->OwnerEntry.TableSize & 7;
        Resource->OwnerEntry.OwnerThread = CurrentThread;
        Resource->OwnerEntry.TableSize = v16 | 8;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v72 = KeGetCurrentIrql();
            if ( v72 <= 0xFu && LockHandle.OldIrql <= 0xFu && v72 >= 2u )
            {
              v73 = KeGetCurrentPrcb();
              v74 = v73->SchedulerAssist;
              v75 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v4 = (v75 & v74[5]) == 0;
              v74[5] &= v75;
              if ( v4 )
                KiRemoveSystemWorkPriorityKick(v73);
            }
          }
        }
        __writecr8(OldIrql);
        __incgsdword(0x8AC4u);
        __incgsdword(0x8A64u);
        if ( v8 )
          PerfLogExecutiveResourceAcquire(65601LL, Resource, 1LL, Resource->ContentionCount);
        return v15;
      }
      v18 = Resource->Flag & 0x80;
      if ( v18 )
        break;
      if ( Resource->NumberOfExclusiveWaiters )
        goto LABEL_43;
      ThreadResourceHint = ExpGetThreadResourceHint(CurrentThread);
      p_OwnerEntry = &Resource->OwnerEntry;
      v22 = ThreadResourceHint;
      if ( Resource->OwnerEntry.OwnerThread == CurrentThread
        || (v23 = 0LL, v24 = Resource->OwnerEntry.OwnerThread != 0, ThreadResourceHint)
        && (v25 = Resource->OwnerTable) != 0LL
        && v22 < v25->TableSize
        && (p_OwnerEntry = &v25[v22], p_OwnerEntry->OwnerThread == CurrentThread) )
      {
LABEL_59:
        v23 = p_OwnerEntry;
        if ( p_OwnerEntry )
          goto LABEL_26;
      }
      else
      {
        v26 = v20 + Resource->NumberOfSharedWaiters;
        OwnerTable = Resource->OwnerTable;
        if ( OwnerTable )
        {
          v28 = &OwnerTable[OwnerTable->TableSize];
          p_OwnerEntry = OwnerTable + 1;
          if ( v24 < v26 )
          {
            while ( 1 )
            {
              if ( p_OwnerEntry->OwnerThread == CurrentThread )
              {
                KeGetCurrentThread()->ResourceIndex = p_OwnerEntry - OwnerTable;
                goto LABEL_59;
              }
              if ( p_OwnerEntry->OwnerThread )
              {
                if ( ++v24 == v26 )
                {
                  ++p_OwnerEntry;
LABEL_54:
                  if ( !v23 )
                    break;
LABEL_25:
                  KeGetCurrentThread()->ResourceIndex = v23 - OwnerTable;
                  p_OwnerEntry = v23;
LABEL_26:
                  TableSize = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)v23->TableSize;
                  if ( p_OwnerEntry->OwnerThread )
                  {
                    v30 = *(_DWORD *)&TableSize + 8;
                    v23->TableSize = v30;
                  }
                  else
                  {
                    p_OwnerEntry->OwnerThread = CurrentThread;
                    v30 = *(_BYTE *)&TableSize & 7 | 8;
                    v23->TableSize = v30;
                    ActiveEntries = Resource->ActiveEntries;
                    if ( !ActiveEntries
                      || (Resource->ReservedLowFlags & 0x80u) == 0 && !Resource->NumberOfExclusiveWaiters )
                    {
                      Resource->ActiveCount = 1;
                      Resource->ActiveEntries = ActiveEntries + 1;
                      v30 = v23->TableSize;
                    }
                  }
                  v32 = v30 >> 3;
                  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                  {
                    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
                    goto LABEL_34;
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
LABEL_34:
                      v34 = KeGetCurrentPrcb();
                      v35 = v34->SchedulerAssist;
                      if ( v35 )
                      {
                        if ( v34->NestingLevel <= 1u )
                        {
                          v51 = v35[6] - 1;
                          v35[6] = v51;
                          if ( !v51 )
                            KiRemoveSystemWorkPriorityKick(v34);
                        }
                      }
                      v36 = LockHandle.OldIrql;
                      if ( KiIrqlFlags )
                      {
                        if ( (KiIrqlFlags & 1) != 0 )
                        {
                          v52 = KeGetCurrentIrql();
                          if ( v52 <= 0xFu && LockHandle.OldIrql <= 0xFu && v52 >= 2u )
                          {
                            v53 = KeGetCurrentPrcb();
                            v54 = v53->SchedulerAssist;
                            v55 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                            v4 = (v55 & v54[5]) == 0;
                            v54[5] &= v55;
                            if ( v4 )
                              KiRemoveSystemWorkPriorityKick(v53);
                          }
                        }
                      }
                      __writecr8(v36);
                      if ( v32 == 1 )
                      {
                        v37 = 65601LL;
                        v38 = 35524;
                      }
                      else
                      {
                        v37 = 65617LL;
                        v38 = 35528;
                      }
                      __incgsdword(v38);
                      __incgsdword(0x8AC8u);
                      if ( v8 )
                        PerfLogExecutiveResourceAcquire(v37, Resource, 1LL, Resource->ContentionCount);
                      return 1;
                    }
                    Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
                  }
                  LockHandle.LockQueue.Next = 0LL;
                  _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
                  goto LABEL_34;
                }
              }
              else if ( !v23 )
              {
                v23 = p_OwnerEntry;
              }
              if ( ++p_OwnerEntry == v28 )
                goto LABEL_54;
            }
          }
          if ( p_OwnerEntry < v28 )
          {
            v23 = p_OwnerEntry;
            if ( p_OwnerEntry )
              goto LABEL_25;
          }
        }
        ExpExpandResourceOwnerTable((__int64)Resource, &LockHandle);
      }
    }
    if ( Resource->OwnerEntry.OwnerThread == CurrentThread )
    {
      v44 = Resource->OwnerEntry.TableSize + 8;
      Resource->OwnerEntry.TableSize = v44;
      v45 = v44 >> 3;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v46 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v47 = KeGetCurrentIrql();
          if ( v47 <= 0xFu && LockHandle.OldIrql <= 0xFu && v47 >= 2u )
          {
            v48 = KeGetCurrentPrcb();
            v49 = v48->SchedulerAssist;
            v50 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v4 = (v50 & v49[5]) == 0;
            v49[5] &= v50;
            if ( v4 )
              KiRemoveSystemWorkPriorityKick(v48);
          }
        }
      }
      __writecr8(v46);
      __incgsdword(0x8AC0u);
      __incgsdword(0x8A64u);
      if ( v8 )
        PerfLogExecutiveResourceAcquire(65585LL, Resource, v45, Resource->ContentionCount);
      return 1;
    }
LABEL_43:
    if ( !Wait )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v40 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v68 = KeGetCurrentIrql();
          if ( v68 <= 0xFu && LockHandle.OldIrql <= 0xFu && v68 >= 2u )
          {
            v69 = KeGetCurrentPrcb();
            v70 = v69->SchedulerAssist;
            v71 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v4 = (v71 & v70[5]) == 0;
            v70[5] &= v71;
            if ( v4 )
              KiRemoveSystemWorkPriorityKick(v69);
          }
        }
      }
      __writecr8(v40);
      __incgsdword(0x8AD0u);
      return 0;
    }
    if ( !v18 )
      break;
    EmptyEntry = ExpFindEmptyEntry((__int64)Resource);
    v43 = EmptyEntry;
    if ( EmptyEntry )
    {
      *EmptyEntry = CurrentThread;
      *((_DWORD *)EmptyEntry + 2) = EmptyEntry[1] & 7 | 8;
      goto LABEL_93;
    }
  }
  v43 = 0LL;
LABEL_93:
  ExpPrepareToWaitForResourceShared((__int64)Resource, CurrentThread, (__int64)v77);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v56 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v57 = KeGetCurrentIrql();
      if ( v57 <= 0xFu && LockHandle.OldIrql <= 0xFu && v57 >= 2u )
      {
        v58 = KeGetCurrentPrcb();
        v59 = v58->SchedulerAssist;
        v60 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v4 = (v60 & v59[5]) == 0;
        v59[5] &= v60;
        if ( v4 )
          KiRemoveSystemWorkPriorityKick(v58);
      }
    }
  }
  __writecr8(v56);
  __incgsdword(0x8ACCu);
  if ( v8 )
    PerfLogExecutiveResourceWait(65604LL, Resource, 0LL);
  ExpApplyPrewaitBoost();
  ExpWaitForResource(
    &Resource->SystemResourcesList,
    (__int64)v77,
    0x10244u,
    (void (__fastcall *)(struct _LIST_ENTRY *))ExpApplyRewaitBoost);
  if ( !v43 )
  {
    KeAcquireInStackQueuedSpinLock(p_SpinLock, &LockHandle);
    do
      v61 = ExpFindCurrentThread((__int64)Resource, CurrentThread, (__int64)&LockHandle, 1, 1, 0);
    while ( !v61 );
    v62 = v61[1] & 7;
    *v61 = CurrentThread;
    *((_DWORD *)v61 + 2) = v62 | 8;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v63 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v64 = KeGetCurrentIrql();
        if ( v64 <= 0xFu && LockHandle.OldIrql <= 0xFu && v64 >= 2u )
        {
          v65 = KeGetCurrentPrcb();
          v66 = v65->SchedulerAssist;
          v67 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v4 = (v67 & v66[5]) == 0;
          v66[5] &= v67;
          if ( v4 )
            KiRemoveSystemWorkPriorityKick(v65);
        }
      }
    }
    __writecr8(v63);
  }
  if ( (CurrentThread & 3) == 0 )
    v10 = *(unsigned __int8 *)(CurrentThread + 1120);
  ExpBoostIoAfterAcquire((__int64)Resource, CurrentThread, v10);
  __incgsdword(0x8AC4u);
  __incgsdword(0x8A64u);
  if ( !v8 )
    return 1;
  PerfLogExecutiveResourceAcquire(65601LL, Resource, 1LL, Resource->ContentionCount);
  return 1;
}
