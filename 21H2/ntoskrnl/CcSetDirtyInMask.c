/*
 * XREFs of CcSetDirtyInMask @ 0x14029D860
 * Callers:
 *     CcPurgeAndClearCacheSection @ 0x14023C1EC (CcPurgeAndClearCacheSection.c)
 *     CcPrepareMdlWrite @ 0x140253190 (CcPrepareMdlWrite.c)
 *     CcMdlWriteComplete2 @ 0x1402581E0 (CcMdlWriteComplete2.c)
 *     CcReleaseByteRangeFromWrite @ 0x14028A258 (CcReleaseByteRangeFromWrite.c)
 *     CcSetDirtyPinnedData @ 0x14029D3D0 (CcSetDirtyPinnedData.c)
 *     CcMapAndCopyInToCache @ 0x1402BD970 (CcMapAndCopyInToCache.c)
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x140276758 (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x1402767FC (CcInsertIntoDirtySharedCacheMapList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140282C20 (KxWaitForLockChainValid.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     CcFindBitmapRangeToDirty @ 0x14029DFF0 (CcFindBitmapRangeToDirty.c)
 *     CcChargeDirtyPagesInternal @ 0x14029E120 (CcChargeDirtyPagesInternal.c)
 *     CcAllocateInitializeMbcb @ 0x14029E3DC (CcAllocateInitializeMbcb.c)
 *     ExpAcquireFastMutexContended @ 0x14029EF4C (ExpAcquireFastMutexContended.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140311C70 (KxWaitForLockOwnerShip.c)
 *     ExpReleaseFastMutexContended @ 0x140359548 (ExpReleaseFastMutexContended.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045A10C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056E6FC (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall CcSetDirtyInMask(__int64 a1, __int64 *a2, unsigned int a3, struct _KTHREAD *a4)
{
  __int64 v4; // r9
  __int64 v5; // rax
  int v7; // r13d
  int v8; // r8d
  __int64 result; // rax
  int v10; // r8d
  __int64 v11; // r12
  signed __int64 v12; // r15
  __int64 v13; // rdi
  __int64 v14; // rsi
  int i; // esi
  struct _KTHREAD *CurrentThread; // r14
  volatile signed __int32 *v17; // rsi
  __int64 v18; // rdi
  unsigned int AbEntrySummary; // eax
  __int64 v20; // rdx
  int SessionId; // eax
  unsigned __int8 v22; // r14
  __int64 v23; // r14
  __int64 v24; // rsi
  __int64 v25; // rdx
  _BYTE *v26; // r11
  volatile __int64 *v27; // rdi
  unsigned __int8 v28; // r10
  struct _KPRCB *v29; // rcx
  _DWORD *v30; // rdx
  _DWORD *v31; // rdx
  int v32; // edi
  __int64 v33; // rcx
  _DWORD *v34; // r8
  int v35; // eax
  __int64 v36; // rax
  __int64 Next; // rax
  struct _KPRCB *v38; // rcx
  _DWORD *v39; // rdx
  unsigned __int64 v40; // rsi
  __int64 v41; // rcx
  bool v42; // zf
  ULONG_PTR v43; // rbx
  unsigned __int64 v44; // rdi
  unsigned __int32 v45; // eax
  _DWORD *v46; // r9
  struct _KTHREAD *v47; // r10
  unsigned __int64 DeepFreezeStartTime; // rcx
  PSLIST_ENTRY v49; // rdi
  struct _SLIST_ENTRY *v50; // rax
  __int64 **v51; // rdx
  __int64 *v52; // rcx
  __int64 v53; // rax
  __int64 *v54; // rcx
  __int64 **v55; // rdx
  int v56; // eax
  int v57; // eax
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // r10
  _DWORD *v60; // r9
  int v61; // eax
  int v62; // eax
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v67; // eax
  unsigned __int64 v68; // rdi
  struct _KPRCB *v69; // r10
  _DWORD *v70; // r9
  unsigned __int8 v71; // al
  struct _KPRCB *v72; // r9
  int v73; // eax
  _DWORD *v74; // r8
  __int64 v75; // [rsp+38h] [rbp-11h]
  PSLIST_ENTRY ListEntry; // [rsp+40h] [rbp-9h] BYREF
  __int64 v77; // [rsp+48h] [rbp-1h]
  __int64 v78; // [rsp+50h] [rbp+7h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp+Fh] BYREF
  void *retaddr; // [rsp+A8h] [rbp+5Fh]

  v4 = a3;
  v5 = *a2;
  ListEntry = 0LL;
  v78 = a3;
  v7 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( ((v5 ^ (v5 + a3 - 1LL)) & 0xFFFFFFFFFE000000uLL) != 0 )
    KeBugCheckEx(0x34u, 0xCDCuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v8 = *(_DWORD *)(a1 + 152);
  result = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  *(_DWORD *)(a1 + 548) = result;
  v10 = v8 & 0x40000000;
  if ( v10 && v4 + *a2 <= *(_QWORD *)(a1 + 48) )
    return result;
  v11 = *a2 >> 12;
  v12 = (v4 + *a2 - 1) >> 12;
  if ( *(_QWORD *)(a1 + 32) / 4096LL <= v12 )
    KeBugCheckEx(0x34u, 0xD05uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v13 = *(_QWORD *)(a1 + 528);
  v75 = v13;
  if ( CcEnablePerVolumeLazyWriter == 1 )
    v14 = *(_QWORD *)(a1 + 592);
  else
    v14 = 0LL;
  v77 = v14;
  if ( v10 )
  {
    ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
LABEL_54:
    v41 = *a2 + v78;
    if ( v41 > *(_QWORD *)(a1 + 48) )
    {
      v42 = (*(_DWORD *)(a1 + 152) & 0x40000000) == 0;
      *(_QWORD *)(a1 + 48) = v41;
      if ( !v42 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v13 + 704), &LockHandle);
        v62 = *(_DWORD *)(a1 + 152);
        if ( (v62 & 0x400) == 0 )
          *(_DWORD *)(a1 + 152) = v62 | 0x400;
        CcInsertIntoDirtySharedCacheMapList(a1);
        CcScheduleLazyWriteScan((_BYTE *)v13, v14, 0LL, 0);
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
              v42 = (v67 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v67;
              if ( v42 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(OldIrql);
      }
    }
    goto LABEL_56;
  }
LABEL_7:
  for ( i = 0; ; i = 1 )
  {
    if ( *(_QWORD *)(a1 + 32) > 0x300000uLL )
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
          goto LABEL_125;
        }
      }
      ListEntry = (PSLIST_ENTRY)result;
    }
    CurrentThread = KeGetCurrentThread();
    v17 = (volatile signed __int32 *)(a1 + 280);
    v18 = 0LL;
    _disable();
    AbEntrySummary = CurrentThread->AbEntrySummary;
    if ( CurrentThread->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(a1 + 280, CurrentThread)) != 0 )
    {
      _BitScanForward((unsigned int *)&v20, AbEntrySummary);
      CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v20);
      _enable();
      v18 = (__int64)(&CurrentThread[1].Process + 12 * v20);
      if ( (unsigned __int64)v17 - qword_140C50630 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v18 + 8) = SessionId;
      *(_QWORD *)v18 = (unsigned __int64)v17 & 0x7FFFFFFFFFFFFFFCLL;
    }
    v22 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset(v17, 0) )
      ExpAcquireFastMutexContended(a1 + 280, v18);
    if ( v18 )
      *(_BYTE *)(v18 + 18) = 1;
    *(_QWORD *)(a1 + 288) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 328) = v22;
    v23 = *(_QWORD *)(a1 + 160);
    if ( !v23 )
      break;
LABEL_20:
    if ( v11 == v12 && v11 == *(_QWORD *)(v23 + 40) )
      goto LABEL_53;
    if ( (unsigned __int64)v12 >= 0x300 && *(_WORD *)v23 != 761 )
    {
      v49 = ListEntry;
      memset(ListEntry, 0, 0x400uLL);
      if ( *(_DWORD *)(v23 + 80) )
      {
        v50 = *(struct _SLIST_ENTRY **)(v23 + 88);
        *v49 = *v50;
        v49[1] = v50[1];
        v49[2] = v50[2];
        v49[3] = v50[3];
        v49[4] = v50[4];
        v49[5] = v50[5];
        memset(*(void **)(v23 + 88), 0, 0x60uLL);
      }
      *(_QWORD *)(v23 + 88) = v49;
      v51 = *(__int64 ***)(v23 + 24);
      v52 = (__int64 *)(v23 + 96);
      ListEntry = 0LL;
      v53 = v23 + 16;
      if ( *v51 != (__int64 *)(v23 + 16) )
        goto LABEL_90;
      *v52 = v53;
      *(_QWORD *)(v23 + 104) = v51;
      *v51 = v52;
      *(_QWORD *)(v23 + 24) = v52;
      v54 = (__int64 *)(v23 + 144);
      *(_QWORD *)(v23 + 112) = 0x7FFFFFFFFFFFFFFFLL;
      *(_DWORD *)(v23 + 120) = -1;
      v55 = *(__int64 ***)(v23 + 24);
      if ( *v55 != (__int64 *)v53 )
LABEL_90:
        __fastfail(3u);
      *v54 = v53;
      *(_QWORD *)(v23 + 152) = v55;
      *v55 = v54;
      *(_QWORD *)(v23 + 24) = v54;
      *(_WORD *)v23 = 761;
      *(_QWORD *)(v23 + 160) = 0x7FFFFFFFFFFFFFFFLL;
      *(_DWORD *)(v23 + 168) = -1;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
      goto LABEL_7;
    }
    result = CcFindBitmapRangeToDirty(v23, v11, &ListEntry);
    v24 = result;
    if ( !result )
      goto LABEL_124;
    v25 = *(_QWORD *)(result + 16);
    if ( v11 < v25 + *(unsigned int *)(result + 24) )
      *(_DWORD *)(result + 24) = v11 - v25;
    if ( v12 > v25 + *(unsigned int *)(result + 28) )
      *(_DWORD *)(result + 28) = v12 - v25;
    v26 = (_BYTE *)v75;
    LockHandle.LockQueue.Next = 0LL;
    v27 = (volatile __int64 *)(v75 + 704);
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v75 + 704);
    v28 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v28 <= 0xFu )
    {
      v46 = KeGetCurrentPrcb()->SchedulerAssist;
      v46[5] |= (-1 << (v28 + 1)) & 4;
    }
    LockHandle.OldIrql = v28;
    v29 = KeGetCurrentPrcb();
    v30 = v29->SchedulerAssist;
    if ( v30 )
    {
      if ( v29->NestingLevel <= 1u )
      {
        v56 = v30[6];
        v30[6] = v56 + 1;
        if ( v56 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(v29);
          v26 = (_BYTE *)v75;
        }
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v27);
      goto LABEL_81;
    }
    if ( _InterlockedExchange64(v27, (__int64)&LockHandle) )
    {
      KxWaitForLockOwnerShip(&LockHandle);
LABEL_81:
      v26 = (_BYTE *)v75;
    }
    if ( !*(_DWORD *)(a1 + 112) && (*(_DWORD *)(a1 + 152) & 2) == 0 )
    {
      CcScheduleLazyWriteScan(v26, v77, 0LL, 0);
      CcInsertIntoDirtySharedCacheMapList(a1);
      *(_QWORD *)(v23 + 32) = v11;
    }
    v31 = (_DWORD *)(*(_QWORD *)(v24 + 40) + 4 * ((unsigned __int64)(unsigned int)(v11 - *(_DWORD *)(v24 + 16)) >> 5));
    v32 = 1 << (v11 & 0x1F);
    if ( v11 <= v12 )
    {
      v33 = v12 - v11 + 1;
      v11 = v12 + 1;
      do
      {
        v34 = v31;
        if ( (*v31 & v32) == 0 )
        {
          *v31 |= v32;
          ++v7;
        }
        v35 = 2 * v32;
        v32 = 1;
        if ( v35 )
          v32 = v35;
        ++v31;
        if ( v35 )
          v31 = v34;
        --v33;
      }
      while ( v33 );
    }
    if ( CcEnablePerVolumeLazyWriter == 1 )
      v36 = *(_QWORD *)(a1 + 592);
    else
      v36 = 0LL;
    CcChargeDirtyPagesInternal(a1, v23, v24, v7, *(_QWORD *)(a1 + 528), v36);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      goto LABEL_48;
    }
    _m_prefetchw(&LockHandle);
    Next = (__int64)LockHandle.LockQueue.Next;
    if ( LockHandle.LockQueue.Next )
      goto LABEL_79;
    if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                         0LL,
                                         (signed __int64)&LockHandle) != &LockHandle )
    {
      Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
LABEL_79:
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    }
LABEL_48:
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
          v42 = (v61 & v60[5]) == 0;
          v60[5] &= v61;
          if ( v42 )
            KiRemoveSystemWorkPriorityKick(v59);
        }
      }
    }
    __writecr8(v40);
    if ( (*(_DWORD *)(a1 + 152) & 0x10000000) != 0 && v7 )
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
        if ( v7 << 12 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(DeepFreezeStartTime + 8), (unsigned int)(v7 << 12));
        _InterlockedExchangeAdd64((volatile signed __int64 *)(DeepFreezeStartTime + 24), 1uLL);
      }
    }
    if ( v32 )
    {
      *(_QWORD *)(v23 + 40) = v12;
LABEL_53:
      v14 = v77;
      v13 = v75;
      goto LABEL_54;
    }
  }
  result = CcAllocateInitializeMbcb();
  v23 = result;
  if ( result )
  {
    *(_QWORD *)(a1 + 160) = result;
    goto LABEL_20;
  }
LABEL_124:
  i = 1;
LABEL_125:
  if ( (*(_DWORD *)(a1 + 152) & 0x20000) == 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v75 + 704), &LockHandle);
    *(_DWORD *)(a1 + 152) |= 0x20000u;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = (unsigned int)KiIrqlFlags;
    v68 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
        {
          v69 = KeGetCurrentPrcb();
          v70 = v69->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v42 = ((unsigned int)result & v70[5]) == 0;
          v70[5] &= result;
          if ( v42 )
            result = KiRemoveSystemWorkPriorityKick(v69);
        }
      }
    }
    __writecr8(v68);
  }
  if ( i )
  {
LABEL_56:
    v43 = a1 + 280;
    v44 = *(unsigned __int8 *)(v43 + 48);
    *(_QWORD *)(v43 + 8) = 0LL;
    v45 = _InterlockedCompareExchange((volatile signed __int32 *)v43, 1, 0);
    if ( v45 )
      ExpReleaseFastMutexContended(v43, v45);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v71 = KeGetCurrentIrql();
        if ( v71 <= 0xFu && (unsigned __int8)v44 <= 0xFu && v71 >= 2u )
        {
          v72 = KeGetCurrentPrcb();
          v73 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v44 + 1));
          v74 = v72->SchedulerAssist;
          v42 = (v73 & v74[5]) == 0;
          v74[5] &= v73;
          if ( v42 )
            KiRemoveSystemWorkPriorityKick(v72);
        }
      }
    }
    __writecr8(v44);
    result = KeAbPostRelease(v43);
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
