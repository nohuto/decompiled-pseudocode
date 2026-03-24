/*
 * XREFs of MiInsertLargePageInNodeList @ 0x1402FEA50
 * Callers:
 *     MiCoalesceFreePages @ 0x140235CA0 (MiCoalesceFreePages.c)
 *     MiFreeLargeZeroPages @ 0x1402FD354 (MiFreeLargeZeroPages.c)
 *     MiInsertLargePageChain @ 0x1402FE784 (MiInsertLargePageChain.c)
 *     MiDeleteClusterSection @ 0x1403003E0 (MiDeleteClusterSection.c)
 *     MiDeleteClusterPage @ 0x14032B830 (MiDeleteClusterPage.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403B0728 (MiTimeSingleLargePageZeroWorker.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403F5A4C (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiLargePagePromote @ 0x1403F6D98 (MiLargePagePromote.c)
 *     MiFinishLargePageFree @ 0x1403F7A04 (MiFinishLargePageFree.c)
 *     MiEnableNewPfns @ 0x14052E060 (MiEnableNewPfns.c)
 *     MiRebuildLargePage @ 0x1405526D8 (MiRebuildLargePage.c)
 *     MiFreeLargePageChain @ 0x140556A50 (MiFreeLargePageChain.c)
 *     MiMoveLargeFreePage @ 0x140556BC0 (MiMoveLargeFreePage.c)
 *     MiScrubNodeLargePageList @ 0x140556E38 (MiScrubNodeLargePageList.c)
 *     MxCreateFreePfns @ 0x140A43ECC (MxCreateFreePfns.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiIncreaseAvailablePages @ 0x1402FEEE0 (MiIncreaseAvailablePages.c)
 *     MiUpdateLargePageCandidates @ 0x1402FF000 (MiUpdateLargePageCandidates.c)
 *     MiPageToChannel @ 0x1402FF108 (MiPageToChannel.c)
 *     MiWakePageZeroing @ 0x1402FF128 (MiWakePageZeroing.c)
 *     MiSearchNumaNodeTable @ 0x14032B790 (MiSearchNumaNodeTable.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     KxAcquireQueuedSpinLock @ 0x140350970 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F5C28 (MiConvertEntireLargePageToSmall.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F6AD8 (MiGetPfnPageSizeIndex.c)
 *     MiArePageContentsZero @ 0x14054EBC8 (MiArePageContentsZero.c)
 *     MiAnyPagesRemovalPending @ 0x140556A00 (MiAnyPagesRemovalPending.c)
 *     MiWakeLargePageWaiters @ 0x140557D7C (MiWakeLargePageWaiters.c)
 */

unsigned __int64 __fastcall MiInsertLargePageInNodeList(__int64 a1)
{
  int v2; // r15d
  int v3; // ebp
  ULONG_PTR v4; // rsi
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 PfnPageSizeIndex; // r12
  __int64 v9; // r8
  __int64 v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // r11
  unsigned __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // r10
  unsigned __int64 v16; // r9
  __int64 v17; // r13
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // r13
  __int64 *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v28; // eax
  bool v29; // zf
  __int64 v31; // [rsp+30h] [rbp-88h]
  unsigned __int64 v32; // [rsp+38h] [rbp-80h]
  __int64 v33; // [rsp+40h] [rbp-78h]
  unsigned __int64 v34; // [rsp+48h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-68h] BYREF
  char v36; // [rsp+C0h] [rbp+8h]
  int updated; // [rsp+C8h] [rbp+10h]
  unsigned int v38; // [rsp+D0h] [rbp+18h]
  unsigned __int64 v39; // [rsp+D8h] [rbp+20h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v2 = 1;
  v39 = 0LL;
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_QWORD *)a1;
  v5 = *(_DWORD *)(a1 + 12);
  if ( v3 == 5 )
    v3 = 1;
  LockHandle.LockQueue = 0LL;
  v36 = v5;
  v6 = 48 * v4 - 0x58000000000LL;
  updated = 0;
  v38 = *(unsigned __int8 *)(v6 + 34) >> 6;
  v7 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v6 + 40) >> 39) & 0x3FFLL));
  v31 = v7;
  PfnPageSizeIndex = (unsigned int)MiGetPfnPageSizeIndex(v6);
  *(_QWORD *)(v6 + 40) = v9 & 0x7FFFFFFFFFFFFFFFLL;
  v32 = MiLargePageSizes[PfnPageSizeIndex];
  if ( v3 != 1 && (MiFlags & 0x80u) != 0 && (++dword_140C4E7CC & MmPageValidationFrequency) == 0 )
    MiArePageContentsZero(v4);
  v10 = *(unsigned int *)(MiSearchNumaNodeTable(v4) + 8);
  v11 = MiPageToChannel(v4);
  v12 = v3;
  v13 = (unsigned int)dword_140C4DF80[PfnPageSizeIndex];
  v14 = *(_QWORD *)(v7 + 16) + 4544 * v10;
  v15 = v14 + 1072 * PfnPageSizeIndex;
  v33 = v15;
  v16 = v38 + 4 * (v11 + 4 * (v3 + (unsigned __int64)(v4 < 0x100000 ? 2 : 0)));
  v34 = v16;
  v17 = *(_QWORD *)(v15 + 8 * v16 + 560) + 24LL * (unsigned int)(v4 / MiLargePageSizes[PfnPageSizeIndex] % v13);
  if ( (v36 & 2) == 0 )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v14 + 4328);
    KxAcquireQueuedSpinLock(&LockHandle, v14 + 4328, v13);
    v15 = v33;
    v16 = v34;
    v12 = v3;
  }
  if ( *(_QWORD *)(v14 + 4352) && (unsigned int)MiAnyPagesRemovalPending(v4, (unsigned int)PfnPageSizeIndex, v13, v16) )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiConvertEntireLargePageToSmall(48 * v4, PfnPageSizeIndex, 1, v3, 0LL, (__int64)&v39);
    if ( (v36 & 4) != 0 )
    {
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v14 + 4328);
      KxAcquireQueuedSpinLock(&LockHandle, v14 + 4328, v18);
      v19 = *(_QWORD *)(v14 + 4288);
      --*(_DWORD *)(v14 + 4284);
      *(_QWORD *)(v14 + 4288) = 0LL;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
    else
    {
      v19 = 0LL;
    }
    v2 = 0;
    v20 = v31;
  }
  else
  {
    *(_BYTE *)(v6 + 34) ^= (*(_BYTE *)(v6 + 34) ^ v3) & 7;
    v21 = *(__int64 **)(v17 + 8);
    if ( *v21 != v17 )
      __fastfail(3u);
    *(_QWORD *)(v6 + 8) = v21;
    *(_QWORD *)v6 = v17;
    v22 = 2240LL;
    *v21 = v6;
    v23 = 2LL;
    *(_QWORD *)(v17 + 8) = v6;
    ++*(_QWORD *)(v17 + 16);
    ++*(_QWORD *)(v15 + 8 * v16 + 48);
    ++*(_QWORD *)(v15 + 8 * v12);
    v20 = v31;
    if ( v4 < 0x100000 )
      v23 = 4LL;
    ++*(_QWORD *)(v15 + 8 * (v12 + v23));
    if ( v3 )
      v22 = 2304LL;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + v31), v32);
    updated = MiUpdateLargePageCandidates(v4, (unsigned int)PfnPageSizeIndex, 1LL);
    MiIncreaseAvailablePages(v31, v32);
    v39 = v32;
    if ( (v36 & 4) != 0 )
    {
      v19 = *(_QWORD *)(v14 + 4288);
      --*(_DWORD *)(v14 + 4284);
      *(_QWORD *)(v14 + 4288) = 0LL;
    }
    else
    {
      v19 = 0LL;
    }
    if ( (v36 & 2) == 0 )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  if ( v19 )
    MiWakeLargePageWaiters(v19);
  if ( !v2 )
  {
    v24 = *(unsigned __int8 *)(a1 + 16);
    if ( (_BYTE)v24 == 17 )
      return v39;
LABEL_43:
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v24 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
          v29 = (v28 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v28;
          if ( v29 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v24);
    return v39;
  }
  if ( v3 == 1 )
    MiWakePageZeroing(v20, v14);
  if ( updated
    && (v36 & 1) == 0
    && (MiFlags & 0x30) != 0
    && ((_DWORD)PfnPageSizeIndex != 1 || (KeFeatureBits & 0x2000000000LL) != 0) )
  {
    KeSetEvent((PRKEVENT)(v20 + 5144), 0, 0);
  }
  v24 = *(unsigned __int8 *)(a1 + 16);
  if ( (_BYTE)v24 != 17 )
  {
    if ( *(_BYTE *)(a1 + 17) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return v39;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v36 & 2) != 0 )
      return v39;
    goto LABEL_43;
  }
  return v39;
}
