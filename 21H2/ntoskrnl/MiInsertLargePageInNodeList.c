/*
 * XREFs of MiInsertLargePageInNodeList @ 0x1403097A0
 * Callers:
 *     MiCoalesceFreePages @ 0x1402DA4F0 (MiCoalesceFreePages.c)
 *     MiFreeLargeZeroPages @ 0x1403080A4 (MiFreeLargeZeroPages.c)
 *     MiInsertLargePageChain @ 0x1403094D4 (MiInsertLargePageChain.c)
 *     MiDeleteClusterSection @ 0x14030B130 (MiDeleteClusterSection.c)
 *     MiDeleteClusterPage @ 0x140336580 (MiDeleteClusterPage.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403B0898 (MiTimeSingleLargePageZeroWorker.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403F5A4C (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiLargePagePromote @ 0x1403F6D98 (MiLargePagePromote.c)
 *     MiFinishLargePageFree @ 0x1403F7A04 (MiFinishLargePageFree.c)
 *     MiEnableNewPfns @ 0x14052E2A0 (MiEnableNewPfns.c)
 *     MiRebuildLargePage @ 0x140552918 (MiRebuildLargePage.c)
 *     MiFreeLargePageChain @ 0x140556C90 (MiFreeLargePageChain.c)
 *     MiMoveLargeFreePage @ 0x140556E00 (MiMoveLargeFreePage.c)
 *     MiScrubNodeLargePageList @ 0x140557078 (MiScrubNodeLargePageList.c)
 *     MxCreateFreePfns @ 0x140A44ECC (MxCreateFreePfns.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiIncreaseAvailablePages @ 0x140309C30 (MiIncreaseAvailablePages.c)
 *     MiUpdateLargePageCandidates @ 0x140309D50 (MiUpdateLargePageCandidates.c)
 *     MiPageToChannel @ 0x140309E58 (MiPageToChannel.c)
 *     MiWakePageZeroing @ 0x140309E78 (MiWakePageZeroing.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F5C28 (MiConvertEntireLargePageToSmall.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F6AD8 (MiGetPfnPageSizeIndex.c)
 *     MiArePageContentsZero @ 0x14054EE08 (MiArePageContentsZero.c)
 *     MiAnyPagesRemovalPending @ 0x140556C40 (MiAnyPagesRemovalPending.c)
 *     MiWakeLargePageWaiters @ 0x140557FBC (MiWakeLargePageWaiters.c)
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
  __int64 v19; // r9
  __int64 v20; // rsi
  __int64 v21; // r13
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int64 v25; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v29; // eax
  bool v30; // zf
  __int64 v32; // [rsp+30h] [rbp-88h]
  unsigned __int64 v33; // [rsp+38h] [rbp-80h]
  __int64 v34; // [rsp+40h] [rbp-78h]
  unsigned __int64 v35; // [rsp+48h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-68h] BYREF
  char v37; // [rsp+C0h] [rbp+8h]
  int updated; // [rsp+C8h] [rbp+10h]
  unsigned int v39; // [rsp+D0h] [rbp+18h]
  unsigned __int64 v40; // [rsp+D8h] [rbp+20h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v2 = 1;
  v40 = 0LL;
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_QWORD *)a1;
  v5 = *(_DWORD *)(a1 + 12);
  if ( v3 == 5 )
    v3 = 1;
  LockHandle.LockQueue = 0LL;
  v37 = v5;
  v6 = 48 * v4 - 0x58000000000LL;
  updated = 0;
  v39 = *(unsigned __int8 *)(v6 + 34) >> 6;
  v7 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v6 + 40) >> 39) & 0x3FFLL));
  v32 = v7;
  PfnPageSizeIndex = (unsigned int)MiGetPfnPageSizeIndex(v6);
  *(_QWORD *)(v6 + 40) = v9 & 0x7FFFFFFFFFFFFFFFLL;
  v33 = MiLargePageSizes[PfnPageSizeIndex];
  if ( v3 != 1 && (MiFlags & 0x80u) != 0 && (++dword_140C4E80C & MmPageValidationFrequency) == 0 )
    MiArePageContentsZero(v4);
  v10 = *(unsigned int *)(MiSearchNumaNodeTable(v4) + 8);
  v11 = MiPageToChannel(v4);
  v12 = v3;
  v13 = (unsigned int)dword_140C4DFC0[PfnPageSizeIndex];
  v14 = *(_QWORD *)(v7 + 16) + 4544 * v10;
  v15 = v14 + 1072 * PfnPageSizeIndex;
  v34 = v15;
  v16 = v39 + 4 * (v11 + 4 * (v3 + (unsigned __int64)(v4 < 0x100000 ? 2 : 0)));
  v35 = v16;
  v17 = *(_QWORD *)(v15 + 8 * v16 + 560) + 24LL * (unsigned int)(v4 / MiLargePageSizes[PfnPageSizeIndex] % v13);
  if ( (v37 & 2) == 0 )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v14 + 4328);
    KxAcquireQueuedSpinLock(&LockHandle, v14 + 4328, v13, v16);
    v15 = v34;
    v16 = v35;
    v12 = v3;
  }
  if ( *(_QWORD *)(v14 + 4352) && (unsigned int)MiAnyPagesRemovalPending(v4, (unsigned int)PfnPageSizeIndex, v13, v16) )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiConvertEntireLargePageToSmall(48 * v4, PfnPageSizeIndex, 1, v3, 0LL, (__int64)&v40);
    if ( (v37 & 4) != 0 )
    {
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v14 + 4328);
      KxAcquireQueuedSpinLock(&LockHandle, v14 + 4328, v18, v19);
      v20 = *(_QWORD *)(v14 + 4288);
      --*(_DWORD *)(v14 + 4284);
      *(_QWORD *)(v14 + 4288) = 0LL;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
    else
    {
      v20 = 0LL;
    }
    v2 = 0;
    v21 = v32;
  }
  else
  {
    *(_BYTE *)(v6 + 34) ^= (*(_BYTE *)(v6 + 34) ^ v3) & 7;
    v22 = *(__int64 **)(v17 + 8);
    if ( *v22 != v17 )
      __fastfail(3u);
    *(_QWORD *)(v6 + 8) = v22;
    *(_QWORD *)v6 = v17;
    v23 = 2240LL;
    *v22 = v6;
    v24 = 2LL;
    *(_QWORD *)(v17 + 8) = v6;
    ++*(_QWORD *)(v17 + 16);
    ++*(_QWORD *)(v15 + 8 * v16 + 48);
    ++*(_QWORD *)(v15 + 8 * v12);
    v21 = v32;
    if ( v4 < 0x100000 )
      v24 = 4LL;
    ++*(_QWORD *)(v15 + 8 * (v12 + v24));
    if ( v3 )
      v23 = 2304LL;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + v32), v33);
    updated = MiUpdateLargePageCandidates(v4, (unsigned int)PfnPageSizeIndex, 1LL);
    MiIncreaseAvailablePages(v32, v33);
    v40 = v33;
    if ( (v37 & 4) != 0 )
    {
      v20 = *(_QWORD *)(v14 + 4288);
      --*(_DWORD *)(v14 + 4284);
      *(_QWORD *)(v14 + 4288) = 0LL;
    }
    else
    {
      v20 = 0LL;
    }
    if ( (v37 & 2) == 0 )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  if ( v20 )
    MiWakeLargePageWaiters(v20);
  if ( !v2 )
  {
    v25 = *(unsigned __int8 *)(a1 + 16);
    if ( (_BYTE)v25 == 17 )
      return v40;
LABEL_43:
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v25 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v25 + 1));
          v30 = (v29 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v29;
          if ( v30 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v25);
    return v40;
  }
  if ( v3 == 1 )
    MiWakePageZeroing(v21, v14);
  if ( updated
    && (v37 & 1) == 0
    && (MiFlags & 0x30) != 0
    && ((_DWORD)PfnPageSizeIndex != 1 || (KeFeatureBits & 0x2000000000LL) != 0) )
  {
    KeSetEvent((PRKEVENT)(v21 + 5144), 0, 0);
  }
  v25 = *(unsigned __int8 *)(a1 + 16);
  if ( (_BYTE)v25 != 17 )
  {
    if ( *(_BYTE *)(a1 + 17) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return v40;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v37 & 2) != 0 )
      return v40;
    goto LABEL_43;
  }
  return v40;
}
