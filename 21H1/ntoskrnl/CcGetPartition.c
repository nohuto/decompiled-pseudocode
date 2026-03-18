/*
 * XREFs of CcGetPartition @ 0x14022E770
 * Callers:
 *     CcGetVacbMiss @ 0x14022B6B0 (CcGetVacbMiss.c)
 *     CcDeductDirtyPages @ 0x14022BD4C (CcDeductDirtyPages.c)
 *     CcUnmapVacbArray @ 0x14022BDD0 (CcUnmapVacbArray.c)
 *     CcFlushCachePriv @ 0x14022C120 (CcFlushCachePriv.c)
 *     CcNotifyOfMappedWrite @ 0x14022CA64 (CcNotifyOfMappedWrite.c)
 *     CcWriteBehindInternal @ 0x14022CE40 (CcWriteBehindInternal.c)
 *     CcSetFileSizesEx @ 0x14022D450 (CcSetFileSizesEx.c)
 *     CcInitializeCacheMapEx @ 0x14022D790 (CcInitializeCacheMapEx.c)
 *     CcDecrementOpenCount @ 0x14022E0B4 (CcDecrementOpenCount.c)
 *     CcCanIWrite @ 0x14022E140 (CcCanIWrite.c)
 *     CcAcquireByteRangeForWrite @ 0x14022E960 (CcAcquireByteRangeForWrite.c)
 *     CcUninitializeCacheMap @ 0x140231350 (CcUninitializeCacheMap.c)
 *     CcSetParallelFlushFile @ 0x140231800 (CcSetParallelFlushFile.c)
 *     CcSetAdditionalCacheAttributes @ 0x1402319B0 (CcSetAdditionalCacheAttributes.c)
 *     CcSetAdditionalCacheAttributesEx @ 0x140231A60 (CcSetAdditionalCacheAttributesEx.c)
 *     CcAmILowPriorityWriter @ 0x140231E08 (CcAmILowPriorityWriter.c)
 *     CcWriteBehind @ 0x1402326E4 (CcWriteBehind.c)
 *     CcShouldLazyWriteCacheMap @ 0x1402335AC (CcShouldLazyWriteCacheMap.c)
 *     CcDeleteSharedCacheMap @ 0x14023372C (CcDeleteSharedCacheMap.c)
 *     CcAsyncCopyRead @ 0x140235100 (CcAsyncCopyRead.c)
 *     CcScheduleReadAheadEx @ 0x1402357D0 (CcScheduleReadAheadEx.c)
 *     CcDeleteMbcb @ 0x140235CE0 (CcDeleteMbcb.c)
 *     CcPerformReadAhead @ 0x1402BDB04 (CcPerformReadAhead.c)
 *     CcGetPartitionFromFileObject @ 0x1402C1144 (CcGetPartitionFromFileObject.c)
 *     CcPurgeCacheSection @ 0x1402CF540 (CcPurgeCacheSection.c)
 *     CcUpdateSharedCacheMapFlag @ 0x1402D036C (CcUpdateSharedCacheMapFlag.c)
 *     CcMapDataForOverwrite @ 0x1402FFAB8 (CcMapDataForOverwrite.c)
 *     CcWaitForUninitializeCacheMap @ 0x1403065D4 (CcWaitForUninitializeCacheMap.c)
 *     CcGetFlushedValidData @ 0x140307F80 (CcGetFlushedValidData.c)
 *     CcSetLogHandleForFileEx @ 0x140308280 (CcSetLogHandleForFileEx.c)
 *     CcPrepareMdlWrite @ 0x14031CA60 (CcPrepareMdlWrite.c)
 *     CcForceWriteThrough @ 0x14031CDDC (CcForceWriteThrough.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14031FED0 (CcNotifyOfMappedWriteComplete.c)
 *     CcMdlWriteComplete2 @ 0x1403201B4 (CcMdlWriteComplete2.c)
 *     CcDeleteBcbs @ 0x140321E20 (CcDeleteBcbs.c)
 *     CcUnpinRepinnedBcb @ 0x1404E5090 (CcUnpinRepinnedBcb.c)
 *     CcSetLogHandleForFile @ 0x1404E56F0 (CcSetLogHandleForFile.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404E5E74 (CcUnmapInactiveViewsInternal.c)
 *     CcMdlWriteAbort @ 0x1404E64A0 (CcMdlWriteAbort.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14023C7F0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405AFF18 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B00F4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall CcGetPartition(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v5; // rcx
  signed __int32 v6; // edx
  ULONG_PTR *v7; // rdi
  struct _KPRCB *v8; // rcx
  _DWORD *v9; // rdx
  _DWORD *v11; // rcx
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  int v14; // eax
  bool v15; // zf
  signed __int32 v16; // eax
  int v17; // eax
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  _DWORD *v20; // r8
  int v21; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]
  int v23; // [rsp+50h] [rbp+8h] BYREF

  v1 = a1[66];
  if ( a1[21] )
  {
    v2 = *(_QWORD *)((a1[12] & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140C4C8C0, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v23 = 0;
      v5 = CurrentPrcb->SchedulerAssist;
      if ( v5 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v13 = v5[6];
          v5[6] = v13 + 1;
          if ( v13 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset(&dword_140C4C8C0, 0x1Fu) )
      {
        v11 = CurrentPrcb->SchedulerAssist;
        if ( v11 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v14 = v11[6] - 1;
            v11[6] = v14;
            if ( !v14 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        v23 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140C4C8C0, CurrentIrql);
      }
      v6 = dword_140C4C8C0;
      while ( (v6 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v6 & 0x40000000) == 0 )
        {
          v16 = _InterlockedCompareExchange(&dword_140C4C8C0, v6 | 0x40000000, v6);
          v15 = v6 == v16;
          v6 = v16;
          if ( !v15 )
            continue;
        }
        KeYieldProcessorEx(&v23);
        v6 = dword_140C4C8C0;
      }
    }
    if ( *(_QWORD *)v2 )
      v7 = *(ULONG_PTR **)(qword_140C4E588 + 8LL * (*(_WORD *)(*(_QWORD *)v2 + 60LL) & 0x3FF));
    else
      v7 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140C4C8C0, retaddr);
    else
      dword_140C4C8C0 = 0;
    v8 = KeGetCurrentPrcb();
    v9 = v8->SchedulerAssist;
    if ( v9 )
    {
      if ( v8->NestingLevel <= 1u )
      {
        v17 = v9[6] - 1;
        v9[6] = v17;
        if ( !v17 )
          KiRemoveSystemWorkPriorityKick(v8);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v18 = KeGetCurrentIrql();
        if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
        {
          v19 = KeGetCurrentPrcb();
          v20 = v19->SchedulerAssist;
          v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v15 = (v21 & v20[5]) == 0;
          v20[5] &= v21;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(v19);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( v1 != *(_QWORD *)(v7[22] + 8) )
      KeBugCheckEx(0x34u, 0x1311uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  return v1;
}
