/*
 * XREFs of CcGetPartition @ 0x1402C15A0
 * Callers:
 *     CcPerformReadAhead @ 0x140264AD4 (CcPerformReadAhead.c)
 *     CcGetPartitionFromFileObject @ 0x140268114 (CcGetPartitionFromFileObject.c)
 *     CcGetVacbMiss @ 0x1402BE330 (CcGetVacbMiss.c)
 *     CcDeductDirtyPages @ 0x1402BE9CC (CcDeductDirtyPages.c)
 *     CcUnmapVacbArray @ 0x1402BEA50 (CcUnmapVacbArray.c)
 *     CcFlushCachePriv @ 0x1402BEDA0 (CcFlushCachePriv.c)
 *     CcNotifyOfMappedWrite @ 0x1402BF88C (CcNotifyOfMappedWrite.c)
 *     CcWriteBehindInternal @ 0x1402BFC70 (CcWriteBehindInternal.c)
 *     CcSetFileSizesEx @ 0x1402C0280 (CcSetFileSizesEx.c)
 *     CcInitializeCacheMapEx @ 0x1402C05C0 (CcInitializeCacheMapEx.c)
 *     CcDecrementOpenCount @ 0x1402C0EE4 (CcDecrementOpenCount.c)
 *     CcCanIWrite @ 0x1402C0F70 (CcCanIWrite.c)
 *     CcAcquireByteRangeForWrite @ 0x1402C1790 (CcAcquireByteRangeForWrite.c)
 *     CcUninitializeCacheMap @ 0x1402C4180 (CcUninitializeCacheMap.c)
 *     CcSetParallelFlushFile @ 0x1402C4630 (CcSetParallelFlushFile.c)
 *     CcSetAdditionalCacheAttributes @ 0x1402C47E0 (CcSetAdditionalCacheAttributes.c)
 *     CcSetAdditionalCacheAttributesEx @ 0x1402C4890 (CcSetAdditionalCacheAttributesEx.c)
 *     CcAmILowPriorityWriter @ 0x1402C4C38 (CcAmILowPriorityWriter.c)
 *     CcWriteBehind @ 0x1402C5514 (CcWriteBehind.c)
 *     CcShouldLazyWriteCacheMap @ 0x1402C63DC (CcShouldLazyWriteCacheMap.c)
 *     CcDeleteSharedCacheMap @ 0x1402C655C (CcDeleteSharedCacheMap.c)
 *     CcAsyncCopyRead @ 0x1402C7F30 (CcAsyncCopyRead.c)
 *     CcScheduleReadAheadEx @ 0x1402C8600 (CcScheduleReadAheadEx.c)
 *     CcDeleteMbcb @ 0x1402C8B10 (CcDeleteMbcb.c)
 *     CcPurgeCacheSection @ 0x14031F970 (CcPurgeCacheSection.c)
 *     CcUpdateSharedCacheMapFlag @ 0x140320EF0 (CcUpdateSharedCacheMapFlag.c)
 *     CcMapDataForOverwrite @ 0x14033C3B8 (CcMapDataForOverwrite.c)
 *     CcWaitForUninitializeCacheMap @ 0x1403443D8 (CcWaitForUninitializeCacheMap.c)
 *     CcGetFlushedValidData @ 0x140345D80 (CcGetFlushedValidData.c)
 *     CcSetLogHandleForFileEx @ 0x140346080 (CcSetLogHandleForFileEx.c)
 *     CcPrepareMdlWrite @ 0x14035A640 (CcPrepareMdlWrite.c)
 *     CcForceWriteThrough @ 0x14035A9BC (CcForceWriteThrough.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14035D980 (CcNotifyOfMappedWriteComplete.c)
 *     CcMdlWriteComplete2 @ 0x14035DDD8 (CcMdlWriteComplete2.c)
 *     CcDeleteBcbs @ 0x14035F7D0 (CcDeleteBcbs.c)
 *     CcUnpinRepinnedBcb @ 0x1404E5640 (CcUnpinRepinnedBcb.c)
 *     CcSetLogHandleForFile @ 0x1404E5CA0 (CcSetLogHandleForFile.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404E6424 (CcUnmapInactiveViewsInternal.c)
 *     CcMdlWriteAbort @ 0x1404E6A50 (CcMdlWriteAbort.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402CF620 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B0638 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B0814 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall CcGetPartition(_QWORD *a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v8; // rcx
  __int64 v9; // rdx
  ULONG_PTR *v10; // rdi
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  _DWORD *v14; // rcx
  int v15; // eax
  int v16; // eax
  bool v17; // zf
  unsigned __int32 v18; // eax
  int v19; // eax
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  _DWORD *v22; // r8
  int v23; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]
  int v25; // [rsp+50h] [rbp+8h] BYREF

  v4 = a1[66];
  if ( a1[21] )
  {
    v5 = *(_QWORD *)((a1[12] & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a3 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140C4C780, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v25 = 0;
      v8 = CurrentPrcb->SchedulerAssist;
      if ( v8 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v15 = v8[6];
          v8[6] = v15 + 1;
          if ( v15 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset(&dword_140C4C780, 0x1Fu) )
      {
        v14 = CurrentPrcb->SchedulerAssist;
        if ( v14 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v16 = v14[6] - 1;
            v14[6] = v16;
            if ( !v16 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        v25 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140C4C780, CurrentIrql);
      }
      v9 = (unsigned int)dword_140C4C780;
      if ( (dword_140C4C780 & 0xBFFFFFFF) != 0x80000000 )
      {
        do
        {
          if ( (v9 & 0x40000000) == 0 )
          {
            v18 = _InterlockedCompareExchange(&dword_140C4C780, v9 | 0x40000000, v9);
            v17 = (_DWORD)v9 == v18;
            v9 = v18;
            if ( !v17 )
              continue;
          }
          KeYieldProcessorEx(&v25, v9, a3, (__int64)SchedulerAssist);
          v9 = (unsigned int)dword_140C4C780;
        }
        while ( (v9 & 0xBFFFFFFF) != 0x80000000 );
      }
    }
    if ( *(_QWORD *)v5 )
      v10 = *(ULONG_PTR **)(qword_140C4E448 + 8LL * (*(_WORD *)(*(_QWORD *)v5 + 60LL) & 0x3FF));
    else
      v10 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140C4C780, retaddr);
    else
      dword_140C4C780 = 0;
    v11 = KeGetCurrentPrcb();
    v12 = v11->SchedulerAssist;
    if ( v12 )
    {
      if ( v11->NestingLevel <= 1u )
      {
        v19 = v12[6] - 1;
        v12[6] = v19;
        if ( !v19 )
          KiRemoveSystemWorkPriorityKick(v11);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v20 = KeGetCurrentIrql();
        if ( v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
        {
          v21 = KeGetCurrentPrcb();
          v22 = v21->SchedulerAssist;
          v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v17 = (v23 & v22[5]) == 0;
          v22[5] &= v23;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( v4 != *(_QWORD *)(v10[22] + 8) )
      KeBugCheckEx(0x34u, 0x1313uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  return v4;
}
