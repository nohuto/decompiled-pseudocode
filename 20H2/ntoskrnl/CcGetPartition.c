/*
 * XREFs of CcGetPartition @ 0x14029ADE0
 * Callers:
 *     CcGetPartitionFromFileObject @ 0x140240E64 (CcGetPartitionFromFileObject.c)
 *     CcMapDataForOverwrite @ 0x14024106C (CcMapDataForOverwrite.c)
 *     CcDeleteSharedCacheMap @ 0x140247C98 (CcDeleteSharedCacheMap.c)
 *     CcDeleteMbcb @ 0x1402482E0 (CcDeleteMbcb.c)
 *     CcScheduleReadAheadEx @ 0x140248720 (CcScheduleReadAheadEx.c)
 *     CcAsyncCopyRead @ 0x140248D20 (CcAsyncCopyRead.c)
 *     CcShouldLazyWriteCacheMap @ 0x14024A7C4 (CcShouldLazyWriteCacheMap.c)
 *     CcWriteBehind @ 0x14024A910 (CcWriteBehind.c)
 *     CcPerformReadAhead @ 0x14024B924 (CcPerformReadAhead.c)
 *     CcInitializeCacheMapEx @ 0x140291D10 (CcInitializeCacheMapEx.c)
 *     CcSetFileSizesEx @ 0x1402955E0 (CcSetFileSizesEx.c)
 *     CcWriteBehindInternal @ 0x140295920 (CcWriteBehindInternal.c)
 *     CcNotifyOfMappedWrite @ 0x140295F24 (CcNotifyOfMappedWrite.c)
 *     CcFlushCachePriv @ 0x140296300 (CcFlushCachePriv.c)
 *     CcAcquireByteRangeForWrite @ 0x140297520 (CcAcquireByteRangeForWrite.c)
 *     CcGetVacbMiss @ 0x140297FA0 (CcGetVacbMiss.c)
 *     CcDeductDirtyPages @ 0x14029A3CC (CcDeductDirtyPages.c)
 *     CcUnmapVacbArray @ 0x14029A450 (CcUnmapVacbArray.c)
 *     CcDecrementOpenCount @ 0x14029A71C (CcDecrementOpenCount.c)
 *     CcCanIWrite @ 0x14029A7B0 (CcCanIWrite.c)
 *     CcUninitializeCacheMap @ 0x14029E760 (CcUninitializeCacheMap.c)
 *     CcSetAdditionalCacheAttributesEx @ 0x14030B750 (CcSetAdditionalCacheAttributesEx.c)
 *     CcSetAdditionalCacheAttributes @ 0x14030B880 (CcSetAdditionalCacheAttributes.c)
 *     CcSetParallelFlushFile @ 0x14030F630 (CcSetParallelFlushFile.c)
 *     CcAmILowPriorityWriter @ 0x14030FF54 (CcAmILowPriorityWriter.c)
 *     CcWaitForUninitializeCacheMap @ 0x1403154B0 (CcWaitForUninitializeCacheMap.c)
 *     CcUpdateSharedCacheMapFlag @ 0x1403168D4 (CcUpdateSharedCacheMapFlag.c)
 *     CcGetFlushedValidData @ 0x1403170D0 (CcGetFlushedValidData.c)
 *     CcSetLogHandleForFileEx @ 0x140317370 (CcSetLogHandleForFileEx.c)
 *     CcPrepareMdlWrite @ 0x14032B1B0 (CcPrepareMdlWrite.c)
 *     CcForceWriteThrough @ 0x14032B52C (CcForceWriteThrough.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14032E540 (CcNotifyOfMappedWriteComplete.c)
 *     CcMdlWriteComplete2 @ 0x14032E894 (CcMdlWriteComplete2.c)
 *     CcDeleteBcbs @ 0x140330540 (CcDeleteBcbs.c)
 *     CcPurgeCacheSection @ 0x1403557F0 (CcPurgeCacheSection.c)
 *     CcUnpinRepinnedBcb @ 0x1404E8BD0 (CcUnpinRepinnedBcb.c)
 *     CcSetLogHandleForFile @ 0x1404E9230 (CcSetLogHandleForFile.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404E99B4 (CcUnmapInactiveViewsInternal.c)
 *     CcMdlWriteAbort @ 0x1404E9FE0 (CcMdlWriteAbort.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402BF7C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B4198 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B4374 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
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
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140C4C800, CurrentIrql);
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
      if ( _interlockedbittestandset(&dword_140C4C800, 0x1Fu) )
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
        v23 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140C4C800, CurrentIrql);
      }
      v6 = dword_140C4C800;
      while ( (v6 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v6 & 0x40000000) == 0 )
        {
          v16 = _InterlockedCompareExchange(&dword_140C4C800, v6 | 0x40000000, v6);
          v15 = v6 == v16;
          v6 = v16;
          if ( !v15 )
            continue;
        }
        KeYieldProcessorEx(&v23);
        v6 = dword_140C4C800;
      }
    }
    if ( *(_QWORD *)v2 )
      v7 = *(ULONG_PTR **)(qword_140C4E4C8 + 8LL * (*(_WORD *)(*(_QWORD *)v2 + 60LL) & 0x3FF));
    else
      v7 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140C4C800, retaddr);
    else
      dword_140C4C800 = 0;
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
      KeBugCheckEx(0x34u, 0x1313uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  return v1;
}
