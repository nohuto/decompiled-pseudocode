/*
 * XREFs of MiInsertLargePageInNodeList @ 0x1402F1DC0
 * Callers:
 *     MiFreeLargeZeroPages @ 0x14024F714 (MiFreeLargeZeroPages.c)
 *     MiDeleteClusterPage @ 0x1402AEC40 (MiDeleteClusterPage.c)
 *     MiCoalesceFreePages @ 0x1402C44C0 (MiCoalesceFreePages.c)
 *     MiInsertLargePageChain @ 0x1402F1AEC (MiInsertLargePageChain.c)
 *     MiDeleteClusterSection @ 0x14034A680 (MiDeleteClusterSection.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403AA828 (MiTimeSingleLargePageZeroWorker.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403F42B0 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiLargePagePromote @ 0x1403F55FC (MiLargePagePromote.c)
 *     MiFinishLargePageFree @ 0x1403F6268 (MiFinishLargePageFree.c)
 *     MiEnableNewPfns @ 0x14052C560 (MiEnableNewPfns.c)
 *     MiRebuildLargePage @ 0x140550C08 (MiRebuildLargePage.c)
 *     MiFreeLargePageChain @ 0x140554F80 (MiFreeLargePageChain.c)
 *     MiMoveLargeFreePage @ 0x1405550F0 (MiMoveLargeFreePage.c)
 *     MiScrubNodeLargePageList @ 0x140555368 (MiScrubNodeLargePageList.c)
 *     MxCreateFreePfns @ 0x140A443AC (MxCreateFreePfns.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     MiSearchNumaNodeTable @ 0x1402AEBA0 (MiSearchNumaNodeTable.c)
 *     MiIncreaseAvailablePages @ 0x1402F2250 (MiIncreaseAvailablePages.c)
 *     MiUpdateLargePageCandidates @ 0x1402F2370 (MiUpdateLargePageCandidates.c)
 *     MiPageToChannel @ 0x1402F2478 (MiPageToChannel.c)
 *     MiWakePageZeroing @ 0x1402F2498 (MiWakePageZeroing.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F448C (MiConvertEntireLargePageToSmall.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F533C (MiGetPfnPageSizeIndex.c)
 *     MiArePageContentsZero @ 0x14054D0C8 (MiArePageContentsZero.c)
 *     MiAnyPagesRemovalPending @ 0x140554F30 (MiAnyPagesRemovalPending.c)
 *     MiWakeLargePageWaiters @ 0x1405562AC (MiWakeLargePageWaiters.c)
 */

unsigned __int64 __fastcall MiInsertLargePageInNodeList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r15d
  int v6; // ebp
  ULONG_PTR v7; // rsi
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 PfnPageSizeIndex; // r12
  __int64 v12; // r8
  __int64 v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // r11
  unsigned __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // r10
  unsigned __int64 v19; // r9
  __int64 v20; // r13
  __int64 v21; // rsi
  __int64 v22; // r13
  __int64 *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int64 v26; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v30; // eax
  bool v31; // zf
  __int64 v33; // [rsp+30h] [rbp-88h]
  unsigned __int64 v34; // [rsp+38h] [rbp-80h]
  __int64 v35; // [rsp+40h] [rbp-78h]
  unsigned __int64 v36; // [rsp+48h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-68h] BYREF
  char v38; // [rsp+C0h] [rbp+8h]
  int updated; // [rsp+C8h] [rbp+10h]
  unsigned int v40; // [rsp+D0h] [rbp+18h]
  unsigned __int64 v41; // [rsp+D8h] [rbp+20h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v5 = 1;
  v41 = 0LL;
  v6 = *(_DWORD *)(a1 + 8);
  v7 = *(_QWORD *)a1;
  v8 = *(_DWORD *)(a1 + 12);
  if ( v6 == 5 )
    v6 = 1;
  LockHandle.LockQueue = 0LL;
  v38 = v8;
  v9 = 48 * v7 - 0x58000000000LL;
  updated = 0;
  v40 = *(unsigned __int8 *)(v9 + 34) >> 6;
  v10 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v9 + 40) >> 39) & 0x3FFLL));
  v33 = v10;
  PfnPageSizeIndex = (unsigned int)MiGetPfnPageSizeIndex(v9, a2, *(_QWORD *)(v9 + 40), a4);
  *(_QWORD *)(v9 + 40) = v12 & 0x7FFFFFFFFFFFFFFFLL;
  v34 = MiLargePageSizes[PfnPageSizeIndex];
  if ( v6 != 1 && (MiFlags & 0x80u) != 0 && (++dword_140C4E64C & MmPageValidationFrequency) == 0 )
    MiArePageContentsZero(v7);
  v13 = *((unsigned int *)MiSearchNumaNodeTable(v7) + 2);
  v14 = MiPageToChannel(v7);
  v15 = v6;
  v16 = (unsigned int)dword_140C4DE00[PfnPageSizeIndex];
  v17 = *(_QWORD *)(v10 + 16) + 4544 * v13;
  v18 = v17 + 1072 * PfnPageSizeIndex;
  v35 = v18;
  v19 = v40 + 4 * (v14 + 4 * (v6 + (unsigned __int64)(v7 < 0x100000 ? 2 : 0)));
  v36 = v19;
  v20 = *(_QWORD *)(v18 + 8 * v19 + 560) + 24LL * (unsigned int)(v7 / MiLargePageSizes[PfnPageSizeIndex] % v16);
  if ( (v38 & 2) == 0 )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v17 + 4328);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v17 + 4328));
    v18 = v35;
    v19 = v36;
    v15 = v6;
  }
  if ( *(_QWORD *)(v17 + 4352) && (unsigned int)MiAnyPagesRemovalPending(v7, (unsigned int)PfnPageSizeIndex, v16, v19) )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiConvertEntireLargePageToSmall(48 * v7, PfnPageSizeIndex, 1, v6, 0LL, (__int64)&v41);
    if ( (v38 & 4) != 0 )
    {
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v17 + 4328);
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v17 + 4328));
      v21 = *(_QWORD *)(v17 + 4288);
      --*(_DWORD *)(v17 + 4284);
      *(_QWORD *)(v17 + 4288) = 0LL;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
    else
    {
      v21 = 0LL;
    }
    v5 = 0;
    v22 = v33;
  }
  else
  {
    *(_BYTE *)(v9 + 34) ^= (*(_BYTE *)(v9 + 34) ^ v6) & 7;
    v23 = *(__int64 **)(v20 + 8);
    if ( *v23 != v20 )
      __fastfail(3u);
    *(_QWORD *)(v9 + 8) = v23;
    *(_QWORD *)v9 = v20;
    v24 = 2240LL;
    *v23 = v9;
    v25 = 2LL;
    *(_QWORD *)(v20 + 8) = v9;
    ++*(_QWORD *)(v20 + 16);
    ++*(_QWORD *)(v18 + 8 * v19 + 48);
    ++*(_QWORD *)(v18 + 8 * v15);
    v22 = v33;
    if ( v7 < 0x100000 )
      v25 = 4LL;
    ++*(_QWORD *)(v18 + 8 * (v15 + v25));
    if ( v6 )
      v24 = 2304LL;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + v33), v34);
    updated = MiUpdateLargePageCandidates(v7, (unsigned int)PfnPageSizeIndex, 1LL);
    MiIncreaseAvailablePages(v33, v34);
    v41 = v34;
    if ( (v38 & 4) != 0 )
    {
      v21 = *(_QWORD *)(v17 + 4288);
      --*(_DWORD *)(v17 + 4284);
      *(_QWORD *)(v17 + 4288) = 0LL;
    }
    else
    {
      v21 = 0LL;
    }
    if ( (v38 & 2) == 0 )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  if ( v21 )
    MiWakeLargePageWaiters(v21);
  if ( !v5 )
  {
    v26 = *(unsigned __int8 *)(a1 + 16);
    if ( (_BYTE)v26 == 17 )
      return v41;
LABEL_43:
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v26 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v26 + 1));
          v31 = (v30 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v30;
          if ( v31 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v26);
    return v41;
  }
  if ( v6 == 1 )
    MiWakePageZeroing(v22, v17);
  if ( updated
    && (v38 & 1) == 0
    && (MiFlags & 0x30) != 0
    && ((_DWORD)PfnPageSizeIndex != 1 || (KeFeatureBits & 0x2000000000LL) != 0) )
  {
    KeSetEvent((PRKEVENT)(v22 + 5144), 0, 0);
  }
  v26 = *(unsigned __int8 *)(a1 + 16);
  if ( (_BYTE)v26 != 17 )
  {
    if ( *(_BYTE *)(a1 + 17) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return v41;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v38 & 2) != 0 )
      return v41;
    goto LABEL_43;
  }
  return v41;
}
