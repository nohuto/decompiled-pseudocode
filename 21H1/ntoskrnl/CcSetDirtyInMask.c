/*
 * XREFs of CcSetDirtyInMask @ 0x14027B2A0
 * Callers:
 *     CcSetDirtyPinnedData @ 0x14022FAB0 (CcSetDirtyPinnedData.c)
 *     CcReleaseByteRangeFromWrite @ 0x140230088 (CcReleaseByteRangeFromWrite.c)
 *     CcMapAndCopyInToCache @ 0x14027BC80 (CcMapAndCopyInToCache.c)
 *     CcPurgeAndClearCacheSection @ 0x1402CDFA8 (CcPurgeAndClearCacheSection.c)
 *     CcPrepareMdlWrite @ 0x14031CA60 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x1403201B4 (CcMdlWriteComplete2.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14022E070 (KxWaitForLockOwnerShip.c)
 *     CcScheduleLazyWriteScan @ 0x14023188C (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140231918 (CcInsertIntoDirtySharedCacheMapList.c)
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     CcChargeDirtyPages @ 0x14027BA20 (CcChargeDirtyPages.c)
 *     MmGetControlAreaPartition @ 0x14027CB20 (MmGetControlAreaPartition.c)
 *     CcFindBitmapRangeToDirty @ 0x14027D22C (CcFindBitmapRangeToDirty.c)
 *     KxWaitForLockChainValid @ 0x1402DAB20 (KxWaitForLockChainValid.c)
 *     CcAllocateInitializeMbcb @ 0x14030ED78 (CcAllocateInitializeMbcb.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x140359D60 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x14035A82C (ExpReleaseFastMutexContended.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F1844 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1403FDD60 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051090C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405109CC (KiReleaseQueuedSpinLockInstrumented.c)
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
  char v36; // dl
  __int64 Next; // rax
  struct _KPRCB *v38; // rcx
  _DWORD *v39; // rdx
  unsigned __int64 v40; // rsi
  __int64 v41; // rcx
  ULONG_PTR v42; // rdi
  unsigned __int64 v43; // rbx
  unsigned __int32 v44; // eax
  struct _KTHREAD *v45; // r9
  unsigned __int64 DeepFreezeStartTime; // rdx
  PSLIST_ENTRY v47; // rbx
  _SLIST_ENTRY *v48; // rax
  __int64 **v49; // rdx
  __int64 *v50; // rcx
  __int64 v51; // rax
  __int64 *v52; // rcx
  __int64 **v53; // rdx
  unsigned __int8 AbOrphanedEntrySummary; // al
  _DWORD *v55; // r9
  int v56; // eax
  int v57; // eax
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // r10
  _DWORD *v60; // r9
  int v61; // eax
  int v62; // eax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v67; // eax
  unsigned __int64 v68; // rbx
  struct _KPRCB *v69; // r10
  _DWORD *v70; // r9
  unsigned __int8 v71; // al
  struct _KPRCB *v72; // r9
  int v73; // eax
  _DWORD *v74; // r8
  unsigned int v76; // [rsp+30h] [rbp-29h]
  int v77; // [rsp+38h] [rbp-21h] BYREF
  __int64 v78; // [rsp+40h] [rbp-19h]
  PSLIST_ENTRY ListEntry; // [rsp+48h] [rbp-11h] BYREF
  __int64 v80; // [rsp+50h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-1h] BYREF
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+5Fh]
  int v85; // [rsp+D0h] [rbp+77h]

  v4 = *a2;
  v5 = a1;
  ListEntry = 0LL;
  v85 = 0;
  v80 = a3;
  v6 = v4 + a3;
  v76 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  InitializeMbcb = v4 ^ (v6 - 1);
  if ( (InitializeMbcb & 0xFFFFFFFFFE000000uLL) != 0 )
    KeBugCheckEx(0x34u, 0xC4CuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( (*(_DWORD *)(v5 + 152) & 0x40000000) != 0 && v6 <= *(_QWORD *)(v5 + 48) )
    return InitializeMbcb;
  v8 = v4 >> 12;
  v9 = (v6 - 1) >> 12;
  if ( *(_QWORD *)(v5 + 32) / 4096LL <= v9 )
    KeBugCheckEx(0x34u, 0xC6CuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v10 = *(_QWORD *)(v5 + 528);
  v78 = v10;
  if ( *(_QWORD *)(v5 + 168)
    && v10 != *(_QWORD *)(MmGetControlAreaPartition(*(_QWORD *)((*(_QWORD *)(v5 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28))
                        + 8) )
  {
    KeBugCheckEx(0x34u, 0x1311uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  if ( (*(_DWORD *)(v5 + 152) & 0x40000000) != 0 )
  {
    ExAcquireFastMutex((PFAST_MUTEX)(v5 + 280));
LABEL_58:
    v41 = *a2 + v80;
    if ( v41 > *(_QWORD *)(v5 + 48) )
    {
      v19 = (*(_DWORD *)(v5 + 152) & 0x40000000) == 0;
      *(_QWORD *)(v5 + 48) = v41;
      if ( !v19 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v10 + 128), &LockHandle);
        v62 = *(_DWORD *)(v5 + 152);
        if ( (v62 & 0x400) == 0 )
          *(_DWORD *)(v5 + 152) = v62 | 0x400;
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
              v67 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v19 = (v67 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v67;
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
        ++unk_140CDB5D4;
        InitializeMbcb = (__int64)RtlpInterlockedPopEntrySList(&CcBitmapLookasideList);
        if ( !InitializeMbcb )
        {
          ++unk_140CDB5D8;
          InitializeMbcb = unk_140CDB5F0(unk_140CDB5E4, unk_140CDB5EC, unk_140CDB5E8);
          if ( !InitializeMbcb )
          {
            ++CcDbgNumberOfFailedBitmapAllocations;
            goto LABEL_133;
          }
        }
        ListEntry = (PSLIST_ENTRY)InitializeMbcb;
      }
      v77 = 0;
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
      v17 = (unsigned int)MiGetSystemRegionType(v5 + 280) == 1
          ? MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process)
          : -1;
      *(_DWORD *)(v16 + 40) = v17;
      *(_QWORD *)(v16 + 32) = (unsigned __int64)v12 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_17:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v5 + 280, &v77);
      v19 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v19
        && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v18);
      }
      v20 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset(v12, 0) )
        ExpAcquireFastMutexContended(v5 + 280);
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
      *(_QWORD *)(v5 + 288) = KeGetCurrentThread();
      *(_DWORD *)(v5 + 328) = v20;
      v21 = *(_QWORD *)(v5 + 160);
      if ( !v21 )
      {
        InitializeMbcb = CcAllocateInitializeMbcb();
        v21 = InitializeMbcb;
        if ( !InitializeMbcb )
          goto LABEL_132;
        *(_QWORD *)(v5 + 160) = InitializeMbcb;
      }
      if ( v8 == v9 && v8 == *(_QWORD *)(v21 + 40) )
        goto LABEL_57;
      if ( (unsigned __int64)v9 < 0x300 || *(_WORD *)v21 == 761 )
        break;
      v47 = ListEntry;
      memset(ListEntry, 0, 0x400uLL);
      if ( *(_DWORD *)(v21 + 80) )
      {
        v48 = *(_SLIST_ENTRY **)(v21 + 88);
        *v47 = *v48;
        v47[1] = v48[1];
        v47[2] = v48[2];
        v47[3] = v48[3];
        v47[4] = v48[4];
        v47[5] = v48[5];
        memset(*(void **)(v21 + 88), 0, 0x60uLL);
      }
      *(_QWORD *)(v21 + 88) = v47;
      v49 = *(__int64 ***)(v21 + 24);
      v50 = (__int64 *)(v21 + 96);
      ListEntry = 0LL;
      v51 = v21 + 16;
      if ( *v49 != (__int64 *)(v21 + 16) )
        goto LABEL_93;
      *v50 = v51;
      *(_QWORD *)(v21 + 104) = v49;
      *v49 = v50;
      *(_QWORD *)(v21 + 24) = v50;
      v52 = (__int64 *)(v21 + 144);
      *(_QWORD *)(v21 + 112) = 0x7FFFFFFFFFFFFFFFLL;
      *(_DWORD *)(v21 + 120) = -1;
      v53 = *(__int64 ***)(v21 + 24);
      if ( *v53 != (__int64 *)v51 )
LABEL_93:
        __fastfail(3u);
      *v52 = v51;
      *(_QWORD *)(v21 + 152) = v53;
      *v53 = v52;
      *(_QWORD *)(v21 + 24) = v52;
      *(_QWORD *)(v21 + 160) = 0x7FFFFFFFFFFFFFFFLL;
      *(_DWORD *)(v21 + 168) = -1;
      *(_WORD *)v21 = 761;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 280));
    }
    InitializeMbcb = CcFindBitmapRangeToDirty(v21, v8, &ListEntry);
    v22 = InitializeMbcb;
    if ( InitializeMbcb )
    {
      v23 = *(_QWORD *)(InitializeMbcb + 16);
      if ( v8 < v23 + *(unsigned int *)(InitializeMbcb + 24) )
        *(_DWORD *)(InitializeMbcb + 24) = v8 - v23;
      if ( v9 > v23 + *(unsigned int *)(InitializeMbcb + 28) )
        *(_DWORD *)(InitializeMbcb + 28) = v9 - v23;
      v24 = v78;
      LockHandle.LockQueue.Next = 0LL;
      v25 = (volatile __int64 *)(v78 + 128);
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v78 + 128);
      v26 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v26 <= 0xFu )
      {
        v55 = KeGetCurrentPrcb()->SchedulerAssist;
        v55[5] |= (-1 << (v26 + 1)) & 4;
        v24 = v78;
      }
      LockHandle.OldIrql = v26;
      v27 = KeGetCurrentPrcb();
      v28 = v27->SchedulerAssist;
      if ( v28 )
      {
        if ( v27->NestingLevel <= 1u )
        {
          v56 = v28[6];
          v28[6] = v56 + 1;
          if ( v56 == -1 )
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
            v32 = v76;
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
            v76 = v32;
            v5 = a1;
          }
          CcChargeDirtyPages(v5, v21, v22, v76);
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
              v38 = KeGetCurrentPrcb();
              v39 = v38->SchedulerAssist;
              if ( v39 )
              {
                if ( v38->NestingLevel <= 1u )
                {
                  v57 = v39[6] - 1;
                  v39[6] = v57;
                  if ( !v57 )
                    KiRemoveSystemWorkPriorityKick(v38);
                }
              }
              v40 = LockHandle.OldIrql;
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v58 = KeGetCurrentIrql();
                  if ( v58 <= 0xFu && LockHandle.OldIrql <= 0xFu && v58 >= 2u )
                  {
                    v59 = KeGetCurrentPrcb();
                    v60 = v59->SchedulerAssist;
                    v61 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                    v19 = (v61 & v60[5]) == 0;
                    v60[5] &= v61;
                    if ( v19 )
                      KiRemoveSystemWorkPriorityKick(v59);
                  }
                }
              }
              __writecr8(v40);
              if ( (*(_DWORD *)(v5 + 152) & 0x10000000) != 0 && v76 )
              {
                v45 = a4;
                if ( !a4 )
                {
                  v45 = KeGetCurrentThread();
                  a4 = v45;
                }
                DeepFreezeStartTime = v45->Process[2].DeepFreezeStartTime;
                if ( DeepFreezeStartTime )
                {
                  if ( v76 << 12 )
                    _InterlockedExchangeAdd64((volatile signed __int64 *)(DeepFreezeStartTime + 8), v76 << 12);
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
            Next = KxWaitForLockChainValid(&LockHandle, v36);
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
    LOBYTE(InitializeMbcb) = KiIrqlFlags;
    v68 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(InitializeMbcb) = KeGetCurrentIrql();
        if ( (unsigned __int8)InitializeMbcb <= 0xFu
          && LockHandle.OldIrql <= 0xFu
          && (unsigned __int8)InitializeMbcb >= 2u )
        {
          v69 = KeGetCurrentPrcb();
          v70 = v69->SchedulerAssist;
          LODWORD(InitializeMbcb) = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v19 = ((unsigned int)InitializeMbcb & v70[5]) == 0;
          v70[5] &= InitializeMbcb;
          if ( v19 )
            LOBYTE(InitializeMbcb) = KiRemoveSystemWorkPriorityKick(v69);
        }
      }
    }
    __writecr8(v68);
  }
  if ( i )
  {
LABEL_60:
    v42 = v5 + 280;
    v43 = *(unsigned __int8 *)(v42 + 48);
    *(_QWORD *)(v42 + 8) = 0LL;
    v44 = _InterlockedCompareExchange((volatile signed __int32 *)v42, 1, 0);
    if ( v44 )
      ExpReleaseFastMutexContended(v42, v44);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v71 = KeGetCurrentIrql();
        if ( v71 <= 0xFu && (unsigned __int8)v43 <= 0xFu && v71 >= 2u )
        {
          v72 = KeGetCurrentPrcb();
          v73 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v43 + 1));
          v74 = v72->SchedulerAssist;
          v19 = (v73 & v74[5]) == 0;
          v74[5] &= v73;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(v72);
        }
      }
    }
    __writecr8(v43);
    LOBYTE(InitializeMbcb) = KeAbPostRelease(v42);
  }
  if ( ListEntry )
  {
    ++unk_140CDB5DC;
    if ( LOWORD(CcBitmapLookasideList.Alignment) >= unk_140CDB5D0 )
    {
      ++unk_140CDB5E0;
      LOBYTE(InitializeMbcb) = unk_140CDB5F8();
    }
    else
    {
      LOBYTE(InitializeMbcb) = (unsigned __int8)RtlpInterlockedPushEntrySList(&CcBitmapLookasideList, ListEntry);
    }
  }
  return InitializeMbcb;
}
