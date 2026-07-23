/*
 * XREFs of CcSetDirtyInMask @ 0x1403411C0
 * Callers:
 *     CcPrepareMdlWrite @ 0x14024ACC0 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x14024E958 (CcMdlWriteComplete2.c)
 *     CcPurgeAndClearCacheSection @ 0x1402F9EE4 (CcPurgeAndClearCacheSection.c)
 *     CcReleaseByteRangeFromWrite @ 0x1402FEE3C (CcReleaseByteRangeFromWrite.c)
 *     CcSetDirtyPinnedData @ 0x140304060 (CcSetDirtyPinnedData.c)
 *     CcMapAndCopyInToCache @ 0x14033C9C0 (CcMapAndCopyInToCache.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140204330 (KxWaitForLockChainValid.c)
 *     CcAllocateInitializeMbcb @ 0x14023D008 (CcAllocateInitializeMbcb.c)
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402D36F0 (KxWaitForLockOwnerShip.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExpReleaseFastMutexContended @ 0x1402FC46C (ExpReleaseFastMutexContended.c)
 *     ExpAcquireFastMutexContended @ 0x1402FD910 (ExpAcquireFastMutexContended.c)
 *     CcScheduleLazyWriteScan @ 0x140301AAC (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140301B38 (CcInsertIntoDirtySharedCacheMapList.c)
 *     MmGetControlAreaPartition @ 0x14033D860 (MmGetControlAreaPartition.c)
 *     CcChargeDirtyPages @ 0x140340F60 (CcChargeDirtyPages.c)
 *     CcFindBitmapRangeToDirty @ 0x140341938 (CcFindBitmapRangeToDirty.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F9348 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140407B10 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051660C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405166CC (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall CcSetDirtyInMask(__int64 a1, __int64 *a2, __int64 a3, struct _KTHREAD *a4)
{
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // r14
  signed __int64 v9; // r15
  __int64 v10; // rbx
  int i; // esi
  volatile signed __int32 *v12; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v14; // rcx
  char v15; // dl
  __int64 v16; // r13
  int v17; // eax
  bool v18; // zf
  unsigned __int8 v19; // bl
  __int64 v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // r9
  volatile __int64 *v24; // rbx
  unsigned __int8 v25; // r10
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  _QWORD *v28; // rdx
  _DWORD *v29; // rdx
  int v30; // ebx
  unsigned int v31; // edi
  __int64 v32; // rcx
  _DWORD *v33; // r8
  int v34; // eax
  __int64 Next; // rax
  struct _KPRCB *v36; // rcx
  _DWORD *v37; // rdx
  unsigned __int64 v38; // rsi
  __int64 v39; // rcx
  ULONG_PTR v40; // rdi
  unsigned __int64 v41; // rbx
  signed __int32 v42; // eax
  struct _KTHREAD *v43; // r9
  unsigned __int64 DeepFreezeStartTime; // rdx
  PSLIST_ENTRY v45; // rbx
  _SLIST_ENTRY *v46; // rax
  __int64 **v47; // rdx
  __int64 *v48; // rcx
  __int64 v49; // rax
  __int64 *v50; // rcx
  __int64 **v51; // rdx
  unsigned __int8 AbOrphanedEntrySummary; // al
  _DWORD *v53; // r9
  int v54; // eax
  int v55; // eax
  unsigned __int8 v56; // al
  struct _KPRCB *v57; // r10
  _DWORD *v58; // r9
  int v59; // eax
  int v60; // eax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v65; // eax
  unsigned __int64 v66; // rbx
  struct _KPRCB *v67; // r10
  _DWORD *v68; // r9
  unsigned __int8 v69; // al
  struct _KPRCB *v70; // r9
  int v71; // eax
  _DWORD *v72; // r8
  unsigned int v73; // [rsp+30h] [rbp-29h]
  __int64 v74; // [rsp+40h] [rbp-19h]
  PSLIST_ENTRY ListEntry; // [rsp+48h] [rbp-11h] BYREF
  __int64 v76; // [rsp+50h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-1h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+5Fh]
  int v81; // [rsp+D0h] [rbp+77h]
  struct _KTHREAD *v82; // [rsp+D8h] [rbp+7Fh]

  v82 = a4;
  v4 = *a2;
  v5 = a1;
  ListEntry = 0LL;
  v81 = 0;
  v76 = (unsigned int)a3;
  v6 = v4 + (unsigned int)a3;
  v73 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  result = v4 ^ (v6 - 1);
  if ( (result & 0xFFFFFFFFFE000000uLL) != 0 )
    KeBugCheckEx(0x34u, 0xC53uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( (*(_DWORD *)(v5 + 152) & 0x40000000) != 0 && v6 <= *(_QWORD *)(v5 + 48) )
    return result;
  v8 = v4 >> 12;
  v9 = (v6 - 1) >> 12;
  if ( *(_QWORD *)(v5 + 32) / 4096LL <= v9 )
    KeBugCheckEx(0x34u, 0xC73uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v10 = *(_QWORD *)(v5 + 528);
  v74 = v10;
  if ( *(_QWORD *)(v5 + 168)
    && v10 != *(_QWORD *)(MmGetControlAreaPartition(
                            *(_QWORD *)((*(_QWORD *)(v5 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28),
                            (*(__int64 *)(v5 + 32) >> 63) & 0xFFF,
                            a3,
                            a4)
                        + 8) )
  {
    KeBugCheckEx(0x34u, 0x1314uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  if ( (*(_DWORD *)(v5 + 152) & 0x40000000) != 0 )
  {
    ExAcquireFastMutex((PFAST_MUTEX)(v5 + 280));
LABEL_58:
    v39 = *a2 + v76;
    if ( v39 > *(_QWORD *)(v5 + 48) )
    {
      v18 = (*(_DWORD *)(v5 + 152) & 0x40000000) == 0;
      *(_QWORD *)(v5 + 48) = v39;
      if ( !v18 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v10 + 128), &LockHandle);
        v60 = *(_DWORD *)(v5 + 152);
        if ( (v60 & 0x400) == 0 )
          *(_DWORD *)(v5 + 152) = v60 | 0x400;
        CcInsertIntoDirtySharedCacheMapList(v5);
        CcScheduleLazyWriteScan(v10, 0, 0);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v65 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v18 = (v65 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v65;
              if ( v18 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(OldIrql);
      }
    }
    goto LABEL_60;
  }
  while ( 2 )
  {
    for ( i = v81; ; i = 0 )
    {
      if ( *(_QWORD *)(v5 + 32) > 0x300000uLL )
      {
        ++unk_140CDB894;
        result = (__int64)RtlpInterlockedPopEntrySList(&CcBitmapLookasideList);
        if ( !result )
        {
          ++unk_140CDB898;
          result = unk_140CDB8B0(unk_140CDB8A4, unk_140CDB8AC, unk_140CDB8A8);
          if ( !result )
          {
            ++CcDbgNumberOfFailedBitmapAllocations;
            goto LABEL_133;
          }
        }
        ListEntry = (PSLIST_ENTRY)result;
      }
      v12 = (volatile signed __int32 *)(v5 + 280);
      CurrentThread = KeGetCurrentThread();
      v81 = 1;
      --CurrentThread->SpecialApcDisable;
      if ( ++CurrentThread->AbAllocationRegionCount != 1 )
        KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v5 + 280, KeGetCurrentIrql(), 0LL);
      LOBYTE(v14) = CurrentThread->AbEntrySummary;
      if ( !(_BYTE)v14 )
      {
        if ( !CurrentThread->AbOrphanedEntrySummary )
        {
          v16 = 0LL;
          if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
            EtwTraceAutoBoostEntryExhaustion(CurrentThread, v5 + 280);
LABEL_102:
          _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
          goto LABEL_17;
        }
        AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
        CurrentThread->AbOrphanedEntrySummary = 0;
        LOBYTE(v14) = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
      }
      v15 = v14;
      _BitScanForward((unsigned int *)&v14, (unsigned __int8)v14);
      CurrentThread->AbEntrySummary = v15 & ~(1 << v14);
      v16 = (__int64)&CurrentThread->LockEntries[v14];
      if ( !v16 )
        goto LABEL_102;
      v17 = (unsigned int)MiGetSystemRegionType(v5 + 280) == 1 ? MmGetSessionIdEx(CurrentThread->ApcState.Process) : -1;
      *(_DWORD *)(v16 + 40) = v17;
      *(_QWORD *)(v16 + 32) = (unsigned __int64)v12 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_17:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
      v18 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v18
        && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      v19 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset(v12, 0) )
        ExpAcquireFastMutexContended(v5 + 280, (PRTL_BALANCED_NODE)v16);
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
      *(_QWORD *)(v5 + 288) = KeGetCurrentThread();
      *(_DWORD *)(v5 + 328) = v19;
      v20 = *(_QWORD *)(v5 + 160);
      if ( !v20 )
      {
        result = (__int64)CcAllocateInitializeMbcb();
        v20 = result;
        if ( !result )
          goto LABEL_132;
        *(_QWORD *)(v5 + 160) = result;
      }
      if ( v8 == v9 && v8 == *(_QWORD *)(v20 + 40) )
        goto LABEL_57;
      if ( (unsigned __int64)v9 < 0x300 || *(_WORD *)v20 == 761 )
        break;
      v45 = ListEntry;
      memset(ListEntry, 0, 0x400uLL);
      if ( *(_DWORD *)(v20 + 80) )
      {
        v46 = *(_SLIST_ENTRY **)(v20 + 88);
        *v45 = *v46;
        v45[1] = v46[1];
        v45[2] = v46[2];
        v45[3] = v46[3];
        v45[4] = v46[4];
        v45[5] = v46[5];
        memset(*(void **)(v20 + 88), 0, 0x60uLL);
      }
      *(_QWORD *)(v20 + 88) = v45;
      v47 = *(__int64 ***)(v20 + 24);
      v48 = (__int64 *)(v20 + 96);
      ListEntry = 0LL;
      v49 = v20 + 16;
      if ( *v47 != (__int64 *)(v20 + 16) )
        goto LABEL_93;
      *v48 = v49;
      *(_QWORD *)(v20 + 104) = v47;
      *v47 = v48;
      *(_QWORD *)(v20 + 24) = v48;
      v50 = (__int64 *)(v20 + 144);
      *(_QWORD *)(v20 + 112) = 0x7FFFFFFFFFFFFFFFLL;
      *(_DWORD *)(v20 + 120) = -1;
      v51 = *(__int64 ***)(v20 + 24);
      if ( *v51 != (__int64 *)v49 )
LABEL_93:
        __fastfail(3u);
      *v50 = v49;
      *(_QWORD *)(v20 + 152) = v51;
      *v51 = v50;
      *(_QWORD *)(v20 + 24) = v50;
      *(_QWORD *)(v20 + 160) = 0x7FFFFFFFFFFFFFFFLL;
      *(_DWORD *)(v20 + 168) = -1;
      *(_WORD *)v20 = 761;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 280));
    }
    result = CcFindBitmapRangeToDirty(v20, v8, &ListEntry);
    v21 = result;
    if ( result )
    {
      v22 = *(_QWORD *)(result + 16);
      if ( v8 < v22 + *(unsigned int *)(result + 24) )
        *(_DWORD *)(result + 24) = v8 - v22;
      if ( v9 > v22 + *(unsigned int *)(result + 28) )
        *(_DWORD *)(result + 28) = v9 - v22;
      v23 = v74;
      LockHandle.LockQueue.Next = 0LL;
      v24 = (volatile __int64 *)(v74 + 128);
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v74 + 128);
      v25 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v25 <= 0xFu )
      {
        v53 = KeGetCurrentPrcb()->SchedulerAssist;
        v53[5] |= (-1 << (v25 + 1)) & 4;
        v23 = v74;
      }
      LockHandle.OldIrql = v25;
      v26 = KeGetCurrentPrcb();
      v27 = v26->SchedulerAssist;
      if ( v27 )
      {
        if ( v26->NestingLevel <= 1u )
        {
          v54 = v27[6];
          v27[6] = v54 + 1;
          if ( v54 == -1 )
          {
            KiRemoveSystemWorkPriorityKick(v26);
            v23 = v74;
          }
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, v24);
      }
      else
      {
        v28 = (_QWORD *)_InterlockedExchange64(v24, (__int64)&LockHandle);
        if ( !v28 )
        {
LABEL_38:
          if ( !*(_DWORD *)(v5 + 112) && (*(_DWORD *)(v5 + 152) & 2) == 0 )
          {
            CcScheduleLazyWriteScan(v23, 0, 0);
            CcInsertIntoDirtySharedCacheMapList(v5);
            *(_QWORD *)(v20 + 32) = v8;
          }
          v29 = (_DWORD *)(*(_QWORD *)(v21 + 40)
                         + 4 * ((unsigned __int64)(unsigned int)(v8 - *(_DWORD *)(v21 + 16)) >> 5));
          v30 = 1 << (v8 & 0x1F);
          if ( v8 <= v9 )
          {
            v31 = v73;
            v32 = v9 - v8 + 1;
            v8 = v9 + 1;
            do
            {
              v33 = v29;
              if ( (*v29 & v30) == 0 )
              {
                *v29 |= v30;
                ++v31;
              }
              v34 = 2 * v30;
              v30 = 1;
              if ( v34 )
                v30 = v34;
              ++v29;
              if ( v34 )
                v29 = v33;
              --v32;
            }
            while ( v32 );
            v73 = v31;
            v5 = a1;
          }
          CcChargeDirtyPages(v5, v20, v21, (_DWORD *)v73);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
            goto LABEL_52;
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
LABEL_52:
              v36 = KeGetCurrentPrcb();
              v37 = v36->SchedulerAssist;
              if ( v37 )
              {
                if ( v36->NestingLevel <= 1u )
                {
                  v55 = v37[6] - 1;
                  v37[6] = v55;
                  if ( !v55 )
                    KiRemoveSystemWorkPriorityKick(v36);
                }
              }
              v38 = LockHandle.OldIrql;
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v56 = KeGetCurrentIrql();
                  if ( v56 <= 0xFu && LockHandle.OldIrql <= 0xFu && v56 >= 2u )
                  {
                    v57 = KeGetCurrentPrcb();
                    v58 = v57->SchedulerAssist;
                    v59 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                    v18 = (v59 & v58[5]) == 0;
                    v58[5] &= v59;
                    if ( v18 )
                      KiRemoveSystemWorkPriorityKick(v57);
                  }
                }
              }
              __writecr8(v38);
              if ( (*(_DWORD *)(v5 + 152) & 0x10000000) != 0 && v73 )
              {
                v43 = v82;
                if ( !v82 )
                {
                  v43 = KeGetCurrentThread();
                  v82 = v43;
                }
                DeepFreezeStartTime = v43->Process[2].DeepFreezeStartTime;
                if ( DeepFreezeStartTime )
                {
                  if ( v73 << 12 )
                    _InterlockedExchangeAdd64((volatile signed __int64 *)(DeepFreezeStartTime + 8), v73 << 12);
                  _InterlockedExchangeAdd64((volatile signed __int64 *)(DeepFreezeStartTime + 24), 1uLL);
                }
              }
              if ( v30 )
              {
                *(_QWORD *)(v20 + 40) = v9;
LABEL_57:
                v10 = v74;
                goto LABEL_58;
              }
              continue;
            }
            Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
          }
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
          goto LABEL_52;
        }
        KxWaitForLockOwnerShip((__int64)&LockHandle, v28);
      }
      v23 = v74;
      goto LABEL_38;
    }
    break;
  }
LABEL_132:
  i = 1;
LABEL_133:
  if ( (*(_DWORD *)(v5 + 152) & 0x20000) == 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v74 + 128), &LockHandle);
    *(_DWORD *)(v5 + 152) |= 0x20000u;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = (unsigned int)KiIrqlFlags;
    v66 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
        {
          v67 = KeGetCurrentPrcb();
          v68 = v67->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v18 = ((unsigned int)result & v68[5]) == 0;
          v68[5] &= result;
          if ( v18 )
            result = KiRemoveSystemWorkPriorityKick(v67);
        }
      }
    }
    __writecr8(v66);
  }
  if ( i )
  {
LABEL_60:
    v40 = v5 + 280;
    v41 = *(unsigned __int8 *)(v40 + 48);
    *(_QWORD *)(v40 + 8) = 0LL;
    v42 = _InterlockedCompareExchange((volatile signed __int32 *)v40, 1, 0);
    if ( v42 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v40, v42);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v69 = KeGetCurrentIrql();
        if ( v69 <= 0xFu && (unsigned __int8)v41 <= 0xFu && v69 >= 2u )
        {
          v70 = KeGetCurrentPrcb();
          v71 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v41 + 1));
          v72 = v70->SchedulerAssist;
          v18 = (v71 & v72[5]) == 0;
          v72[5] &= v71;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(v70);
        }
      }
    }
    __writecr8(v41);
    result = KeAbPostRelease(v40);
  }
  if ( ListEntry )
  {
    ++unk_140CDB89C;
    if ( LOWORD(CcBitmapLookasideList.Alignment) >= unk_140CDB890 )
    {
      ++unk_140CDB8A0;
      return unk_140CDB8B8();
    }
    else
    {
      return (__int64)RtlpInterlockedPushEntrySList(&CcBitmapLookasideList, ListEntry);
    }
  }
  return result;
}
