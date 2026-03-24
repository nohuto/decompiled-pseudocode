/*
 * XREFs of CcSetDirtyInMask @ 0x140336470
 * Callers:
 *     CcPrepareMdlWrite @ 0x1402CC660 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x1402D05D8 (CcMdlWriteComplete2.c)
 *     CcPurgeAndClearCacheSection @ 0x1402EF194 (CcPurgeAndClearCacheSection.c)
 *     CcReleaseByteRangeFromWrite @ 0x1402F40EC (CcReleaseByteRangeFromWrite.c)
 *     CcSetDirtyPinnedData @ 0x1402F9310 (CcSetDirtyPinnedData.c)
 *     CcMapAndCopyInToCache @ 0x140331C70 (CcMapAndCopyInToCache.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14022EEA0 (KxWaitForLockOwnerShip.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KeReleaseGuardedMutex @ 0x140265CD0 (KeReleaseGuardedMutex.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140287190 (KxWaitForLockChainValid.c)
 *     CcAllocateInitializeMbcb @ 0x1402BEBB4 (CcAllocateInitializeMbcb.c)
 *     ExpReleaseFastMutexContended @ 0x1402F171C (ExpReleaseFastMutexContended.c)
 *     ExpAcquireFastMutexContended @ 0x1402F2BC0 (ExpAcquireFastMutexContended.c)
 *     CcScheduleLazyWriteScan @ 0x1402F6D5C (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x1402F6DE8 (CcInsertIntoDirtySharedCacheMapList.c)
 *     MmGetControlAreaPartition @ 0x140332B10 (MmGetControlAreaPartition.c)
 *     CcChargeDirtyPages @ 0x140336210 (CcChargeDirtyPages.c)
 *     CcFindBitmapRangeToDirty @ 0x140336BE8 (CcFindBitmapRangeToDirty.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquireFastMutex @ 0x14034A080 (ExAcquireFastMutex.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F921C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140407930 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407970 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     memset @ 0x140414200 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1405163CC (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051648C (KiReleaseQueuedSpinLockInstrumented.c)
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
  __int64 v18; // rcx
  bool v19; // zf
  unsigned __int8 v20; // bl
  __int64 v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // r9
  volatile __int64 *v25; // rbx
  unsigned __int8 v26; // r10
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // rdx
  _QWORD *v29; // rdx
  _DWORD *v30; // rdx
  int v31; // ebx
  unsigned int v32; // edi
  __int64 v33; // rcx
  _DWORD *v34; // r8
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 Next; // rax
  struct _KPRCB *v40; // rcx
  _DWORD *v41; // rdx
  unsigned __int64 v42; // rsi
  __int64 v43; // rcx
  ULONG_PTR v44; // rdi
  unsigned __int64 v45; // rbx
  signed __int32 v46; // eax
  struct _KTHREAD *v47; // r9
  unsigned __int64 DeepFreezeStartTime; // rdx
  PSLIST_ENTRY v49; // rbx
  struct _SLIST_ENTRY *v50; // rax
  __int64 **v51; // rdx
  __int64 *v52; // rcx
  __int64 v53; // rax
  __int64 *v54; // rcx
  __int64 **v55; // rdx
  unsigned __int8 AbOrphanedEntrySummary; // al
  _DWORD *v57; // r9
  int v58; // eax
  int v59; // eax
  unsigned __int8 v60; // al
  struct _KPRCB *v61; // r10
  _DWORD *v62; // r9
  int v63; // eax
  int v64; // eax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v69; // eax
  unsigned __int64 v70; // rbx
  struct _KPRCB *v71; // r10
  _DWORD *v72; // r9
  unsigned __int8 v73; // al
  struct _KPRCB *v74; // r9
  int v75; // eax
  _DWORD *v76; // r8
  unsigned int v77; // [rsp+30h] [rbp-29h]
  __int64 v78; // [rsp+40h] [rbp-19h]
  PSLIST_ENTRY ListEntry; // [rsp+48h] [rbp-11h] BYREF
  __int64 v80; // [rsp+50h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-1h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+5Fh]
  int v85; // [rsp+D0h] [rbp+77h]
  struct _KTHREAD *v86; // [rsp+D8h] [rbp+7Fh]

  v86 = a4;
  v4 = *a2;
  v5 = a1;
  ListEntry = 0LL;
  v85 = 0;
  v80 = (unsigned int)a3;
  v6 = v4 + (unsigned int)a3;
  v77 = 0;
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
  v78 = v10;
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
    v43 = *a2 + v80;
    if ( v43 > *(_QWORD *)(v5 + 48) )
    {
      v19 = (*(_DWORD *)(v5 + 152) & 0x40000000) == 0;
      *(_QWORD *)(v5 + 48) = v43;
      if ( !v19 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v10 + 128), &LockHandle);
        v64 = *(_DWORD *)(v5 + 152);
        if ( (v64 & 0x400) == 0 )
          *(_DWORD *)(v5 + 152) = v64 | 0x400;
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
              v69 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v19 = (v69 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v69;
              if ( v19 )
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
    for ( i = v85; ; i = 0 )
    {
      if ( *(_QWORD *)(v5 + 32) > 0x300000uLL )
      {
        ++CcBitmapLookasideList.L.TotalAllocates;
        result = (__int64)RtlpInterlockedPopEntrySList(&CcBitmapLookasideList.L.ListHead);
        if ( !result )
        {
          ++CcBitmapLookasideList.L.AllocateMisses;
          result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CcBitmapLookasideList.L.AllocateEx)(
                     (unsigned int)CcBitmapLookasideList.L.Type,
                     CcBitmapLookasideList.L.Size,
                     CcBitmapLookasideList.L.Tag);
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
      v85 = 1;
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
      v19 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v19
        && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v18);
      }
      v20 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset(v12, 0) )
        ExpAcquireFastMutexContended(v5 + 280, v16);
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
      *(_QWORD *)(v5 + 288) = KeGetCurrentThread();
      *(_DWORD *)(v5 + 328) = v20;
      v21 = *(_QWORD *)(v5 + 160);
      if ( !v21 )
      {
        result = (__int64)CcAllocateInitializeMbcb();
        v21 = result;
        if ( !result )
          goto LABEL_132;
        *(_QWORD *)(v5 + 160) = result;
      }
      if ( v8 == v9 && v8 == *(_QWORD *)(v21 + 40) )
        goto LABEL_57;
      if ( (unsigned __int64)v9 < 0x300 || *(_WORD *)v21 == 761 )
        break;
      v49 = ListEntry;
      memset(ListEntry, 0, 0x400uLL);
      if ( *(_DWORD *)(v21 + 80) )
      {
        v50 = *(struct _SLIST_ENTRY **)(v21 + 88);
        *v49 = *v50;
        v49[1] = v50[1];
        v49[2] = v50[2];
        v49[3] = v50[3];
        v49[4] = v50[4];
        v49[5] = v50[5];
        memset(*(void **)(v21 + 88), 0, 0x60uLL);
      }
      *(_QWORD *)(v21 + 88) = v49;
      v51 = *(__int64 ***)(v21 + 24);
      v52 = (__int64 *)(v21 + 96);
      ListEntry = 0LL;
      v53 = v21 + 16;
      if ( *v51 != (__int64 *)(v21 + 16) )
        goto LABEL_93;
      *v52 = v53;
      *(_QWORD *)(v21 + 104) = v51;
      *v51 = v52;
      *(_QWORD *)(v21 + 24) = v52;
      v54 = (__int64 *)(v21 + 144);
      *(_QWORD *)(v21 + 112) = 0x7FFFFFFFFFFFFFFFLL;
      *(_DWORD *)(v21 + 120) = -1;
      v55 = *(__int64 ***)(v21 + 24);
      if ( *v55 != (__int64 *)v53 )
LABEL_93:
        __fastfail(3u);
      *v54 = v53;
      *(_QWORD *)(v21 + 152) = v55;
      *v55 = v54;
      *(_QWORD *)(v21 + 24) = v54;
      *(_QWORD *)(v21 + 160) = 0x7FFFFFFFFFFFFFFFLL;
      *(_DWORD *)(v21 + 168) = -1;
      *(_WORD *)v21 = 761;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 280));
    }
    result = CcFindBitmapRangeToDirty(v21, v8, &ListEntry);
    v22 = result;
    if ( result )
    {
      v23 = *(_QWORD *)(result + 16);
      if ( v8 < v23 + *(unsigned int *)(result + 24) )
        *(_DWORD *)(result + 24) = v8 - v23;
      if ( v9 > v23 + *(unsigned int *)(result + 28) )
        *(_DWORD *)(result + 28) = v9 - v23;
      v24 = v78;
      LockHandle.LockQueue.Next = 0LL;
      v25 = (volatile __int64 *)(v78 + 128);
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v78 + 128);
      v26 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v26 <= 0xFu )
      {
        v57 = KeGetCurrentPrcb()->SchedulerAssist;
        v57[5] |= (-1 << (v26 + 1)) & 4;
        v24 = v78;
      }
      LockHandle.OldIrql = v26;
      v27 = KeGetCurrentPrcb();
      v28 = v27->SchedulerAssist;
      if ( v28 )
      {
        if ( v27->NestingLevel <= 1u )
        {
          v58 = v28[6];
          v28[6] = v58 + 1;
          if ( v58 == -1 )
          {
            KiRemoveSystemWorkPriorityKick(v27);
            v24 = v78;
          }
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, v25);
      }
      else
      {
        v29 = (_QWORD *)_InterlockedExchange64(v25, (__int64)&LockHandle);
        if ( !v29 )
        {
LABEL_38:
          if ( !*(_DWORD *)(v5 + 112) && (*(_DWORD *)(v5 + 152) & 2) == 0 )
          {
            CcScheduleLazyWriteScan(v24, 0, 0);
            CcInsertIntoDirtySharedCacheMapList(v5);
            *(_QWORD *)(v21 + 32) = v8;
          }
          v30 = (_DWORD *)(*(_QWORD *)(v22 + 40)
                         + 4 * ((unsigned __int64)(unsigned int)(v8 - *(_DWORD *)(v22 + 16)) >> 5));
          v31 = 1 << (v8 & 0x1F);
          if ( v8 <= v9 )
          {
            v32 = v77;
            v33 = v9 - v8 + 1;
            v8 = v9 + 1;
            do
            {
              v34 = v30;
              if ( (*v30 & v31) == 0 )
              {
                *v30 |= v31;
                ++v32;
              }
              v35 = 2 * v31;
              v31 = 1;
              if ( v35 )
                v31 = v35;
              ++v30;
              if ( v35 )
                v30 = v34;
              --v33;
            }
            while ( v33 );
            v77 = v32;
            v5 = a1;
          }
          CcChargeDirtyPages(v5, v21, v22, (_DWORD *)v77);
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
              v40 = KeGetCurrentPrcb();
              v41 = v40->SchedulerAssist;
              if ( v41 )
              {
                if ( v40->NestingLevel <= 1u )
                {
                  v59 = v41[6] - 1;
                  v41[6] = v59;
                  if ( !v59 )
                    KiRemoveSystemWorkPriorityKick(v40);
                }
              }
              v42 = LockHandle.OldIrql;
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v60 = KeGetCurrentIrql();
                  if ( v60 <= 0xFu && LockHandle.OldIrql <= 0xFu && v60 >= 2u )
                  {
                    v61 = KeGetCurrentPrcb();
                    v62 = v61->SchedulerAssist;
                    v63 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                    v19 = (v63 & v62[5]) == 0;
                    v62[5] &= v63;
                    if ( v19 )
                      KiRemoveSystemWorkPriorityKick(v61);
                  }
                }
              }
              __writecr8(v42);
              if ( (*(_DWORD *)(v5 + 152) & 0x10000000) != 0 && v77 )
              {
                v47 = v86;
                if ( !v86 )
                {
                  v47 = KeGetCurrentThread();
                  v86 = v47;
                }
                DeepFreezeStartTime = v47->Process[2].DeepFreezeStartTime;
                if ( DeepFreezeStartTime )
                {
                  if ( v77 << 12 )
                    _InterlockedExchangeAdd64((volatile signed __int64 *)(DeepFreezeStartTime + 8), v77 << 12);
                  _InterlockedExchangeAdd64((volatile signed __int64 *)(DeepFreezeStartTime + 24), 1uLL);
                }
              }
              if ( v31 )
              {
                *(_QWORD *)(v21 + 40) = v9;
LABEL_57:
                v10 = v78;
                goto LABEL_58;
              }
              continue;
            }
            Next = KxWaitForLockChainValid((__int64 *)&LockHandle, v36, v37, v38);
          }
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
          goto LABEL_52;
        }
        KxWaitForLockOwnerShip((__int64)&LockHandle, v29);
      }
      v24 = v78;
      goto LABEL_38;
    }
    break;
  }
LABEL_132:
  i = 1;
LABEL_133:
  if ( (*(_DWORD *)(v5 + 152) & 0x20000) == 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v78 + 128), &LockHandle);
    *(_DWORD *)(v5 + 152) |= 0x20000u;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = (unsigned int)KiIrqlFlags;
    v70 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
        {
          v71 = KeGetCurrentPrcb();
          v72 = v71->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v19 = ((unsigned int)result & v72[5]) == 0;
          v72[5] &= result;
          if ( v19 )
            result = KiRemoveSystemWorkPriorityKick(v71);
        }
      }
    }
    __writecr8(v70);
  }
  if ( i )
  {
LABEL_60:
    v44 = v5 + 280;
    v45 = *(unsigned __int8 *)(v44 + 48);
    *(_QWORD *)(v44 + 8) = 0LL;
    v46 = _InterlockedCompareExchange((volatile signed __int32 *)v44, 1, 0);
    if ( v46 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v44, v46);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v73 = KeGetCurrentIrql();
        if ( v73 <= 0xFu && (unsigned __int8)v45 <= 0xFu && v73 >= 2u )
        {
          v74 = KeGetCurrentPrcb();
          v75 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v45 + 1));
          v76 = v74->SchedulerAssist;
          v19 = (v75 & v76[5]) == 0;
          v76[5] &= v75;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(v74);
        }
      }
    }
    __writecr8(v45);
    result = KeAbPostRelease(v44);
  }
  if ( ListEntry )
  {
    ++CcBitmapLookasideList.L.TotalFrees;
    if ( LOWORD(CcBitmapLookasideList.L.ListHead.Alignment) >= CcBitmapLookasideList.L.Depth )
    {
      ++CcBitmapLookasideList.L.FreeMisses;
      return ((__int64 (*)(void))CcBitmapLookasideList.L.FreeEx)();
    }
    else
    {
      return (__int64)RtlpInterlockedPushEntrySList(&CcBitmapLookasideList.L.ListHead, ListEntry);
    }
  }
  return result;
}
