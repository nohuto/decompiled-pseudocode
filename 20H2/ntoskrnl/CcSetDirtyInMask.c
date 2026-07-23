/*
 * XREFs of CcSetDirtyInMask @ 0x1402B96C0
 * Callers:
 *     CcSetDirtyPinnedData @ 0x140241270 (CcSetDirtyPinnedData.c)
 *     CcReleaseByteRangeFromWrite @ 0x14029CB20 (CcReleaseByteRangeFromWrite.c)
 *     CcMapAndCopyInToCache @ 0x1402B4EC0 (CcMapAndCopyInToCache.c)
 *     CcPurgeAndClearCacheSection @ 0x140316714 (CcPurgeAndClearCacheSection.c)
 *     CcPrepareMdlWrite @ 0x14032B1B0 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x14032E894 (CcMdlWriteComplete2.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140241848 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcScheduleLazyWriteScan @ 0x1402418E0 (CcScheduleLazyWriteScan.c)
 *     ExpAcquireFastMutexContended @ 0x140241B40 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x140242CEC (ExpReleaseFastMutexContended.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402950A0 (KxWaitForLockOwnerShip.c)
 *     MmGetControlAreaPartition @ 0x1402B5D60 (MmGetControlAreaPartition.c)
 *     CcChargeDirtyPages @ 0x1402B9460 (CcChargeDirtyPages.c)
 *     CcFindBitmapRangeToDirty @ 0x1402B9E38 (CcFindBitmapRangeToDirty.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     CcAllocateInitializeMbcb @ 0x14031D178 (CcAllocateInitializeMbcb.c)
 *     KxWaitForLockChainValid @ 0x14035D0F0 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F74E8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1404052C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140405300 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051488C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051494C (KiReleaseQueuedSpinLockInstrumented.c)
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
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  bool v22; // zf
  unsigned __int8 v23; // bl
  __int64 v24; // r12
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // r9
  volatile __int64 *v28; // rbx
  unsigned __int8 v29; // r10
  struct _KPRCB *v30; // rcx
  _DWORD *v31; // rdx
  _QWORD *v32; // rdx
  _DWORD *v33; // rdx
  int v34; // ebx
  unsigned int v35; // edi
  __int64 v36; // rcx
  _DWORD *v37; // r8
  int v38; // eax
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
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
  _SLIST_ENTRY *v50; // rax
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
  unsigned int v78; // [rsp+30h] [rbp-29h]
  int v79; // [rsp+38h] [rbp-21h] BYREF
  __int64 v80; // [rsp+40h] [rbp-19h]
  PSLIST_ENTRY ListEntry; // [rsp+48h] [rbp-11h] BYREF
  __int64 v82; // [rsp+50h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-1h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+5Fh]
  int v87; // [rsp+D0h] [rbp+77h]

  v4 = *a2;
  v5 = a1;
  ListEntry = 0LL;
  v87 = 0;
  v82 = a3;
  v6 = v4 + a3;
  v78 = 0;
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
  v80 = v10;
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
    v43 = *a2 + v82;
    if ( v43 > *(_QWORD *)(v5 + 48) )
    {
      v22 = (*(_DWORD *)(v5 + 152) & 0x40000000) == 0;
      *(_QWORD *)(v5 + 48) = v43;
      if ( !v22 )
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
              v22 = (v69 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v69;
              if ( v22 )
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
    for ( i = v87; ; i = 0 )
    {
      if ( *(_QWORD *)(v5 + 32) > 0x300000uLL )
      {
        ++unk_140CDB554;
        InitializeMbcb = (__int64)RtlpInterlockedPopEntrySList(&CcBitmapLookasideList);
        if ( !InitializeMbcb )
        {
          ++unk_140CDB558;
          InitializeMbcb = unk_140CDB570(unk_140CDB564, unk_140CDB56C, unk_140CDB568);
          if ( !InitializeMbcb )
          {
            ++CcDbgNumberOfFailedBitmapAllocations;
            goto LABEL_133;
          }
        }
        ListEntry = (PSLIST_ENTRY)InitializeMbcb;
      }
      v79 = 0;
      v12 = (volatile signed __int32 *)(v5 + 280);
      CurrentThread = KeGetCurrentThread();
      v87 = 1;
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
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v5 + 280, &v79);
      v22 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v22
        && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v19, v18, v20, v21);
      }
      v23 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset(v12, 0) )
        ExpAcquireFastMutexContended(v5 + 280, v16);
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
      *(_QWORD *)(v5 + 288) = KeGetCurrentThread();
      *(_DWORD *)(v5 + 328) = v23;
      v24 = *(_QWORD *)(v5 + 160);
      if ( !v24 )
      {
        InitializeMbcb = CcAllocateInitializeMbcb();
        v24 = InitializeMbcb;
        if ( !InitializeMbcb )
          goto LABEL_132;
        *(_QWORD *)(v5 + 160) = InitializeMbcb;
      }
      if ( v8 == v9 && v8 == *(_QWORD *)(v24 + 40) )
        goto LABEL_57;
      if ( (unsigned __int64)v9 < 0x300 || *(_WORD *)v24 == 761 )
        break;
      v49 = ListEntry;
      memset(ListEntry, 0, 0x400uLL);
      if ( *(_DWORD *)(v24 + 80) )
      {
        v50 = *(_SLIST_ENTRY **)(v24 + 88);
        *v49 = *v50;
        v49[1] = v50[1];
        v49[2] = v50[2];
        v49[3] = v50[3];
        v49[4] = v50[4];
        v49[5] = v50[5];
        memset(*(void **)(v24 + 88), 0, 0x60uLL);
      }
      *(_QWORD *)(v24 + 88) = v49;
      v51 = *(__int64 ***)(v24 + 24);
      v52 = (__int64 *)(v24 + 96);
      ListEntry = 0LL;
      v53 = v24 + 16;
      if ( *v51 != (__int64 *)(v24 + 16) )
        goto LABEL_93;
      *v52 = v53;
      *(_QWORD *)(v24 + 104) = v51;
      *v51 = v52;
      *(_QWORD *)(v24 + 24) = v52;
      v54 = (__int64 *)(v24 + 144);
      *(_QWORD *)(v24 + 112) = 0x7FFFFFFFFFFFFFFFLL;
      *(_DWORD *)(v24 + 120) = -1;
      v55 = *(__int64 ***)(v24 + 24);
      if ( *v55 != (__int64 *)v53 )
LABEL_93:
        __fastfail(3u);
      *v54 = v53;
      *(_QWORD *)(v24 + 152) = v55;
      *v55 = v54;
      *(_QWORD *)(v24 + 24) = v54;
      *(_QWORD *)(v24 + 160) = 0x7FFFFFFFFFFFFFFFLL;
      *(_DWORD *)(v24 + 168) = -1;
      *(_WORD *)v24 = 761;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 280));
    }
    InitializeMbcb = CcFindBitmapRangeToDirty(v24, v8, &ListEntry);
    v25 = InitializeMbcb;
    if ( InitializeMbcb )
    {
      v26 = *(_QWORD *)(InitializeMbcb + 16);
      if ( v8 < v26 + *(unsigned int *)(InitializeMbcb + 24) )
        *(_DWORD *)(InitializeMbcb + 24) = v8 - v26;
      if ( v9 > v26 + *(unsigned int *)(InitializeMbcb + 28) )
        *(_DWORD *)(InitializeMbcb + 28) = v9 - v26;
      v27 = v80;
      LockHandle.LockQueue.Next = 0LL;
      v28 = (volatile __int64 *)(v80 + 128);
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v80 + 128);
      v29 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v29 <= 0xFu )
      {
        v57 = KeGetCurrentPrcb()->SchedulerAssist;
        v57[5] |= (-1 << (v29 + 1)) & 4;
        v27 = v80;
      }
      LockHandle.OldIrql = v29;
      v30 = KeGetCurrentPrcb();
      v31 = v30->SchedulerAssist;
      if ( v31 )
      {
        if ( v30->NestingLevel <= 1u )
        {
          v58 = v31[6];
          v31[6] = v58 + 1;
          if ( v58 == -1 )
          {
            KiRemoveSystemWorkPriorityKick(v30);
            v27 = v80;
          }
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, v28);
      }
      else
      {
        v32 = (_QWORD *)_InterlockedExchange64(v28, (__int64)&LockHandle);
        if ( !v32 )
        {
LABEL_38:
          if ( !*(_DWORD *)(v5 + 112) && (*(_DWORD *)(v5 + 152) & 2) == 0 )
          {
            CcScheduleLazyWriteScan(v27, 0, 0);
            CcInsertIntoDirtySharedCacheMapList(v5);
            *(_QWORD *)(v24 + 32) = v8;
          }
          v33 = (_DWORD *)(*(_QWORD *)(v25 + 40)
                         + 4 * ((unsigned __int64)(unsigned int)(v8 - *(_DWORD *)(v25 + 16)) >> 5));
          v34 = 1 << (v8 & 0x1F);
          if ( v8 <= v9 )
          {
            v35 = v78;
            v36 = v9 - v8 + 1;
            v8 = v9 + 1;
            do
            {
              v37 = v33;
              if ( (*v33 & v34) == 0 )
              {
                *v33 |= v34;
                ++v35;
              }
              v38 = 2 * v34;
              v34 = 1;
              if ( v38 )
                v34 = v38;
              ++v33;
              if ( v38 )
                v33 = v37;
              --v36;
            }
            while ( v36 );
            v78 = v35;
            v5 = a1;
          }
          CcChargeDirtyPages(v5, v24, v25, v78);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
            goto LABEL_52;
          }
          _m_prefetchw(&LockHandle);
          Next = LockHandle.LockQueue.Next;
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
                    v22 = (v63 & v62[5]) == 0;
                    v62[5] &= v63;
                    if ( v22 )
                      KiRemoveSystemWorkPriorityKick(v61);
                  }
                }
              }
              __writecr8(v42);
              if ( (*(_DWORD *)(v5 + 152) & 0x10000000) != 0 && v78 )
              {
                v47 = a4;
                if ( !a4 )
                {
                  v47 = KeGetCurrentThread();
                  a4 = v47;
                }
                DeepFreezeStartTime = v47->Process[2].DeepFreezeStartTime;
                if ( DeepFreezeStartTime )
                {
                  if ( v78 << 12 )
                    _InterlockedExchangeAdd64((volatile signed __int64 *)(DeepFreezeStartTime + 8), v78 << 12);
                  _InterlockedExchangeAdd64((volatile signed __int64 *)(DeepFreezeStartTime + 24), 1uLL);
                }
              }
              if ( v34 )
              {
                *(_QWORD *)(v24 + 40) = v9;
LABEL_57:
                v10 = v80;
                goto LABEL_58;
              }
              continue;
            }
            Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
          }
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
          goto LABEL_52;
        }
        KxWaitForLockOwnerShip((__int64)&LockHandle, v32);
      }
      v27 = v80;
      goto LABEL_38;
    }
    break;
  }
LABEL_132:
  i = 1;
LABEL_133:
  if ( (*(_DWORD *)(v5 + 152) & 0x20000) == 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v80 + 128), &LockHandle);
    *(_DWORD *)(v5 + 152) |= 0x20000u;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    LOBYTE(InitializeMbcb) = KiIrqlFlags;
    v70 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(InitializeMbcb) = KeGetCurrentIrql();
        if ( (unsigned __int8)InitializeMbcb <= 0xFu
          && LockHandle.OldIrql <= 0xFu
          && (unsigned __int8)InitializeMbcb >= 2u )
        {
          v71 = KeGetCurrentPrcb();
          v72 = v71->SchedulerAssist;
          LODWORD(InitializeMbcb) = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v22 = ((unsigned int)InitializeMbcb & v72[5]) == 0;
          v72[5] &= InitializeMbcb;
          if ( v22 )
            LOBYTE(InitializeMbcb) = KiRemoveSystemWorkPriorityKick(v71);
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
          v22 = (v75 & v76[5]) == 0;
          v76[5] &= v75;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(v74);
        }
      }
    }
    __writecr8(v45);
    LOBYTE(InitializeMbcb) = KeAbPostRelease(v44);
  }
  if ( ListEntry )
  {
    ++unk_140CDB55C;
    if ( LOWORD(CcBitmapLookasideList.Alignment) >= unk_140CDB550 )
    {
      ++unk_140CDB560;
      LOBYTE(InitializeMbcb) = unk_140CDB578();
    }
    else
    {
      LOBYTE(InitializeMbcb) = (unsigned __int8)RtlpInterlockedPushEntrySList(&CcBitmapLookasideList, ListEntry);
    }
  }
  return InitializeMbcb;
}
