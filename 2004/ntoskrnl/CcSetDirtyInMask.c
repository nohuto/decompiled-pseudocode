/*
 * XREFs of CcSetDirtyInMask @ 0x140222250
 * Callers:
 *     CcMapAndCopyInToCache @ 0x140222C30 (CcMapAndCopyInToCache.c)
 *     CcSetDirtyPinnedData @ 0x1402C28E0 (CcSetDirtyPinnedData.c)
 *     CcReleaseByteRangeFromWrite @ 0x1402C2EB8 (CcReleaseByteRangeFromWrite.c)
 *     CcPurgeAndClearCacheSection @ 0x1403203EC (CcPurgeAndClearCacheSection.c)
 *     CcPrepareMdlWrite @ 0x14035A640 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x14035DDD8 (CcMdlWriteComplete2.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     CcChargeDirtyPages @ 0x1402229D0 (CcChargeDirtyPages.c)
 *     MmGetControlAreaPartition @ 0x140223AD0 (MmGetControlAreaPartition.c)
 *     CcFindBitmapRangeToDirty @ 0x1402241DC (CcFindBitmapRangeToDirty.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1402740C0 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x140274B8C (ExpReleaseFastMutexContended.c)
 *     KxWaitForLockChainValid @ 0x140279BD0 (KxWaitForLockChainValid.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402C0EA0 (KxWaitForLockOwnerShip.c)
 *     CcScheduleLazyWriteScan @ 0x1402C46BC (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x1402C4748 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcAllocateInitializeMbcb @ 0x14034C444 (CcAllocateInitializeMbcb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F2AD4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1403FEFF0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14040A280 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051101C (KiReleaseQueuedSpinLockInstrumented.c)
 */

char __fastcall CcSetDirtyInMask(__int64 a1, __int64 *a2, unsigned int a3, struct _KTHREAD *a4)
{
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 InitializeMbcb; // rax
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
  _DWORD *v28; // rdx
  int v29; // ebx
  unsigned int v30; // edi
  __int64 v31; // rcx
  _DWORD *v32; // r8
  int v33; // eax
  __int64 Next; // rax
  struct _KPRCB *v35; // rcx
  _DWORD *v36; // rdx
  unsigned __int64 v37; // rsi
  __int64 v38; // rcx
  ULONG_PTR v39; // rdi
  unsigned __int64 v40; // rbx
  unsigned __int32 v41; // eax
  struct _KTHREAD *v42; // r9
  unsigned __int64 DeepFreezeStartTime; // rdx
  PSLIST_ENTRY v44; // rbx
  _SLIST_ENTRY *v45; // rax
  __int64 **v46; // rdx
  __int64 *v47; // rcx
  __int64 v48; // rax
  __int64 *v49; // rcx
  __int64 **v50; // rdx
  unsigned __int8 AbOrphanedEntrySummary; // al
  _DWORD *v52; // r9
  int v53; // eax
  int v54; // eax
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r10
  _DWORD *v57; // r9
  int v58; // eax
  int v59; // eax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v64; // eax
  unsigned __int64 v65; // rbx
  struct _KPRCB *v66; // r10
  _DWORD *v67; // r9
  unsigned __int8 v68; // al
  struct _KPRCB *v69; // r9
  int v70; // eax
  _DWORD *v71; // r8
  unsigned int v73; // [rsp+30h] [rbp-29h]
  int v74; // [rsp+38h] [rbp-21h] BYREF
  __int64 v75; // [rsp+40h] [rbp-19h]
  PSLIST_ENTRY ListEntry; // [rsp+48h] [rbp-11h] BYREF
  __int64 v77; // [rsp+50h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-1h] BYREF
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+5Fh]
  int v82; // [rsp+D0h] [rbp+77h]

  v4 = *a2;
  v5 = a1;
  ListEntry = 0LL;
  v82 = 0;
  v77 = a3;
  v6 = v4 + a3;
  v73 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  InitializeMbcb = v4 ^ (v6 - 1);
  if ( (InitializeMbcb & 0xFFFFFFFFFE000000uLL) != 0 )
    KeBugCheckEx(0x34u, 0xC52uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( (*(_DWORD *)(v5 + 152) & 0x40000000) != 0 && v6 <= *(_QWORD *)(v5 + 48) )
    return InitializeMbcb;
  v8 = v4 >> 12;
  v9 = (v6 - 1) >> 12;
  if ( *(_QWORD *)(v5 + 32) / 4096LL <= v9 )
    KeBugCheckEx(0x34u, 0xC72uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v10 = *(_QWORD *)(v5 + 528);
  v75 = v10;
  if ( *(_QWORD *)(v5 + 168)
    && v10 != *(_QWORD *)(MmGetControlAreaPartition(*(_QWORD *)((*(_QWORD *)(v5 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28))
                        + 8) )
  {
    KeBugCheckEx(0x34u, 0x1313uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  if ( (*(_DWORD *)(v5 + 152) & 0x40000000) != 0 )
  {
    ExAcquireFastMutex((PFAST_MUTEX)(v5 + 280));
LABEL_58:
    v38 = *a2 + v77;
    if ( v38 > *(_QWORD *)(v5 + 48) )
    {
      v18 = (*(_DWORD *)(v5 + 152) & 0x40000000) == 0;
      *(_QWORD *)(v5 + 48) = v38;
      if ( !v18 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v10 + 128), &LockHandle);
        v59 = *(_DWORD *)(v5 + 152);
        if ( (v59 & 0x400) == 0 )
          *(_DWORD *)(v5 + 152) = v59 | 0x400;
        CcInsertIntoDirtySharedCacheMapList(v5);
        CcScheduleLazyWriteScan(v10, 0LL, 0LL);
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
              v64 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v18 = (v64 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v64;
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
    for ( i = v82; ; i = 0 )
    {
      if ( *(_QWORD *)(v5 + 32) > 0x300000uLL )
      {
        ++dword_140CDB494;
        InitializeMbcb = (__int64)RtlpInterlockedPopEntrySList(&CcBitmapLookasideList);
        if ( !InitializeMbcb )
        {
          ++dword_140CDB498;
          InitializeMbcb = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140CDB4B0)(
                             (unsigned int)dword_140CDB4A4,
                             (unsigned int)dword_140CDB4AC,
                             (unsigned int)dword_140CDB4A8);
          if ( !InitializeMbcb )
          {
            ++CcDbgNumberOfFailedBitmapAllocations;
            goto LABEL_133;
          }
        }
        ListEntry = (PSLIST_ENTRY)InitializeMbcb;
      }
      v74 = 0;
      v12 = (volatile signed __int32 *)(v5 + 280);
      CurrentThread = KeGetCurrentThread();
      v82 = 1;
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
      v17 = (unsigned int)MiGetSystemRegionType(v5 + 280) == 1
          ? MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process)
          : -1;
      *(_DWORD *)(v16 + 40) = v17;
      *(_QWORD *)(v16 + 32) = (unsigned __int64)v12 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_17:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v5 + 280, &v74);
      v18 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v18
        && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      v19 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset(v12, 0) )
        ExpAcquireFastMutexContended(v5 + 280);
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
      *(_QWORD *)(v5 + 288) = KeGetCurrentThread();
      *(_DWORD *)(v5 + 328) = v19;
      v20 = *(_QWORD *)(v5 + 160);
      if ( !v20 )
      {
        InitializeMbcb = CcAllocateInitializeMbcb();
        v20 = InitializeMbcb;
        if ( !InitializeMbcb )
          goto LABEL_132;
        *(_QWORD *)(v5 + 160) = InitializeMbcb;
      }
      if ( v8 == v9 && v8 == *(_QWORD *)(v20 + 40) )
        goto LABEL_57;
      if ( (unsigned __int64)v9 < 0x300 || *(_WORD *)v20 == 761 )
        break;
      v44 = ListEntry;
      memset(ListEntry, 0, 0x400uLL);
      if ( *(_DWORD *)(v20 + 80) )
      {
        v45 = *(_SLIST_ENTRY **)(v20 + 88);
        *v44 = *v45;
        v44[1] = v45[1];
        v44[2] = v45[2];
        v44[3] = v45[3];
        v44[4] = v45[4];
        v44[5] = v45[5];
        memset(*(void **)(v20 + 88), 0, 0x60uLL);
      }
      *(_QWORD *)(v20 + 88) = v44;
      v46 = *(__int64 ***)(v20 + 24);
      v47 = (__int64 *)(v20 + 96);
      ListEntry = 0LL;
      v48 = v20 + 16;
      if ( *v46 != (__int64 *)(v20 + 16) )
        goto LABEL_93;
      *v47 = v48;
      *(_QWORD *)(v20 + 104) = v46;
      *v46 = v47;
      *(_QWORD *)(v20 + 24) = v47;
      v49 = (__int64 *)(v20 + 144);
      *(_QWORD *)(v20 + 112) = 0x7FFFFFFFFFFFFFFFLL;
      *(_DWORD *)(v20 + 120) = -1;
      v50 = *(__int64 ***)(v20 + 24);
      if ( *v50 != (__int64 *)v48 )
LABEL_93:
        __fastfail(3u);
      *v49 = v48;
      *(_QWORD *)(v20 + 152) = v50;
      *v50 = v49;
      *(_QWORD *)(v20 + 24) = v49;
      *(_QWORD *)(v20 + 160) = 0x7FFFFFFFFFFFFFFFLL;
      *(_DWORD *)(v20 + 168) = -1;
      *(_WORD *)v20 = 761;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 280));
    }
    InitializeMbcb = CcFindBitmapRangeToDirty(v20, v8, &ListEntry);
    v21 = InitializeMbcb;
    if ( InitializeMbcb )
    {
      v22 = *(_QWORD *)(InitializeMbcb + 16);
      if ( v8 < v22 + *(unsigned int *)(InitializeMbcb + 24) )
        *(_DWORD *)(InitializeMbcb + 24) = v8 - v22;
      if ( v9 > v22 + *(unsigned int *)(InitializeMbcb + 28) )
        *(_DWORD *)(InitializeMbcb + 28) = v9 - v22;
      v23 = v75;
      LockHandle.LockQueue.Next = 0LL;
      v24 = (volatile __int64 *)(v75 + 128);
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v75 + 128);
      v25 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v25 <= 0xFu )
      {
        v52 = KeGetCurrentPrcb()->SchedulerAssist;
        v52[5] |= (-1 << (v25 + 1)) & 4;
        v23 = v75;
      }
      LockHandle.OldIrql = v25;
      v26 = KeGetCurrentPrcb();
      v27 = v26->SchedulerAssist;
      if ( v27 )
      {
        if ( v26->NestingLevel <= 1u )
        {
          v53 = v27[6];
          v27[6] = v53 + 1;
          if ( v53 == -1 )
          {
            KiRemoveSystemWorkPriorityKick(v26);
            v23 = v75;
          }
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, v24);
      }
      else
      {
        if ( !_InterlockedExchange64(v24, (__int64)&LockHandle) )
        {
LABEL_38:
          if ( !*(_DWORD *)(v5 + 112) && (*(_DWORD *)(v5 + 152) & 2) == 0 )
          {
            CcScheduleLazyWriteScan(v23, 0LL, 0LL);
            CcInsertIntoDirtySharedCacheMapList(v5);
            *(_QWORD *)(v20 + 32) = v8;
          }
          v28 = (_DWORD *)(*(_QWORD *)(v21 + 40)
                         + 4 * ((unsigned __int64)(unsigned int)(v8 - *(_DWORD *)(v21 + 16)) >> 5));
          v29 = 1 << (v8 & 0x1F);
          if ( v8 <= v9 )
          {
            v30 = v73;
            v31 = v9 - v8 + 1;
            v8 = v9 + 1;
            do
            {
              v32 = v28;
              if ( (*v28 & v29) == 0 )
              {
                *v28 |= v29;
                ++v30;
              }
              v33 = 2 * v29;
              v29 = 1;
              if ( v33 )
                v29 = v33;
              ++v28;
              if ( v33 )
                v28 = v32;
              --v31;
            }
            while ( v31 );
            v73 = v30;
            v5 = a1;
          }
          CcChargeDirtyPages(v5, v20, v21, v73);
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
              v35 = KeGetCurrentPrcb();
              v36 = v35->SchedulerAssist;
              if ( v36 )
              {
                if ( v35->NestingLevel <= 1u )
                {
                  v54 = v36[6] - 1;
                  v36[6] = v54;
                  if ( !v54 )
                    KiRemoveSystemWorkPriorityKick(v35);
                }
              }
              v37 = LockHandle.OldIrql;
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v55 = KeGetCurrentIrql();
                  if ( v55 <= 0xFu && LockHandle.OldIrql <= 0xFu && v55 >= 2u )
                  {
                    v56 = KeGetCurrentPrcb();
                    v57 = v56->SchedulerAssist;
                    v58 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                    v18 = (v58 & v57[5]) == 0;
                    v57[5] &= v58;
                    if ( v18 )
                      KiRemoveSystemWorkPriorityKick(v56);
                  }
                }
              }
              __writecr8(v37);
              if ( (*(_DWORD *)(v5 + 152) & 0x10000000) != 0 && v73 )
              {
                v42 = a4;
                if ( !a4 )
                {
                  v42 = KeGetCurrentThread();
                  a4 = v42;
                }
                DeepFreezeStartTime = v42->Process[2].DeepFreezeStartTime;
                if ( DeepFreezeStartTime )
                {
                  if ( v73 << 12 )
                    _InterlockedExchangeAdd64((volatile signed __int64 *)(DeepFreezeStartTime + 8), v73 << 12);
                  _InterlockedExchangeAdd64((volatile signed __int64 *)(DeepFreezeStartTime + 24), 1uLL);
                }
              }
              if ( v29 )
              {
                *(_QWORD *)(v20 + 40) = v9;
LABEL_57:
                v10 = v75;
                goto LABEL_58;
              }
              continue;
            }
            Next = KxWaitForLockChainValid(&LockHandle);
          }
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
          goto LABEL_52;
        }
        KxWaitForLockOwnerShip(&LockHandle);
      }
      v23 = v75;
      goto LABEL_38;
    }
    break;
  }
LABEL_132:
  i = 1;
LABEL_133:
  if ( (*(_DWORD *)(v5 + 152) & 0x20000) == 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v75 + 128), &LockHandle);
    *(_DWORD *)(v5 + 152) |= 0x20000u;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    LOBYTE(InitializeMbcb) = KiIrqlFlags;
    v65 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(InitializeMbcb) = KeGetCurrentIrql();
        if ( (unsigned __int8)InitializeMbcb <= 0xFu
          && LockHandle.OldIrql <= 0xFu
          && (unsigned __int8)InitializeMbcb >= 2u )
        {
          v66 = KeGetCurrentPrcb();
          v67 = v66->SchedulerAssist;
          LODWORD(InitializeMbcb) = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v18 = ((unsigned int)InitializeMbcb & v67[5]) == 0;
          v67[5] &= InitializeMbcb;
          if ( v18 )
            LOBYTE(InitializeMbcb) = KiRemoveSystemWorkPriorityKick(v66);
        }
      }
    }
    __writecr8(v65);
  }
  if ( i )
  {
LABEL_60:
    v39 = v5 + 280;
    v40 = *(unsigned __int8 *)(v39 + 48);
    *(_QWORD *)(v39 + 8) = 0LL;
    v41 = _InterlockedCompareExchange((volatile signed __int32 *)v39, 1, 0);
    if ( v41 )
      ExpReleaseFastMutexContended(v39, v41);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v68 = KeGetCurrentIrql();
        if ( v68 <= 0xFu && (unsigned __int8)v40 <= 0xFu && v68 >= 2u )
        {
          v69 = KeGetCurrentPrcb();
          v70 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v40 + 1));
          v71 = v69->SchedulerAssist;
          v18 = (v70 & v71[5]) == 0;
          v71[5] &= v70;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(v69);
        }
      }
    }
    __writecr8(v40);
    LOBYTE(InitializeMbcb) = KeAbPostRelease(v39);
  }
  if ( ListEntry )
  {
    ++dword_140CDB49C;
    if ( LOWORD(CcBitmapLookasideList.Alignment) >= (unsigned __int16)word_140CDB490 )
    {
      ++dword_140CDB4A0;
      LOBYTE(InitializeMbcb) = ((__int64 (*)(void))qword_140CDB4B8)();
    }
    else
    {
      LOBYTE(InitializeMbcb) = (unsigned __int8)RtlpInterlockedPushEntrySList(&CcBitmapLookasideList, ListEntry);
    }
  }
  return InitializeMbcb;
}
