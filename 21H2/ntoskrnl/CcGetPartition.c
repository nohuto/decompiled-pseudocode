/*
 * XREFs of CcGetPartition @ 0x140313800
 * Callers:
 *     CcFlushCachePriv @ 0x14022CBA0 (CcFlushCachePriv.c)
 *     CcNotifyOfMappedWrite @ 0x14022D68C (CcNotifyOfMappedWrite.c)
 *     CcWriteBehindInternal @ 0x14022DA70 (CcWriteBehindInternal.c)
 *     CcSetFileSizesEx @ 0x14022E120 (CcSetFileSizesEx.c)
 *     CcInitializeCacheMapEx @ 0x14022E5C0 (CcInitializeCacheMapEx.c)
 *     CcSetAdditionalCacheAttributesEx @ 0x1402AA2F0 (CcSetAdditionalCacheAttributesEx.c)
 *     CcSetAdditionalCacheAttributes @ 0x1402AA420 (CcSetAdditionalCacheAttributes.c)
 *     CcMapDataForOverwrite @ 0x1402AF3C8 (CcMapDataForOverwrite.c)
 *     CcAmILowPriorityWriter @ 0x1402B0950 (CcAmILowPriorityWriter.c)
 *     CcWaitForUninitializeCacheMap @ 0x1402B87C0 (CcWaitForUninitializeCacheMap.c)
 *     CcGetFlushedValidData @ 0x1402B9D30 (CcGetFlushedValidData.c)
 *     CcSetLogHandleForFileEx @ 0x1402B9FA0 (CcSetLogHandleForFileEx.c)
 *     CcPrepareMdlWrite @ 0x1402CC660 (CcPrepareMdlWrite.c)
 *     CcForceWriteThrough @ 0x1402CC9DC (CcForceWriteThrough.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1402D0220 (CcNotifyOfMappedWriteComplete.c)
 *     CcMdlWriteComplete2 @ 0x1402D05D8 (CcMdlWriteComplete2.c)
 *     CcDeleteBcbs @ 0x1402D2640 (CcDeleteBcbs.c)
 *     CcGetPartitionFromFileObject @ 0x1402E86C4 (CcGetPartitionFromFileObject.c)
 *     CcUpdateSharedCacheMapFlag @ 0x1402EE374 (CcUpdateSharedCacheMapFlag.c)
 *     CcPurgeCacheSection @ 0x1402F0920 (CcPurgeCacheSection.c)
 *     CcDeleteMbcb @ 0x1402F293C (CcDeleteMbcb.c)
 *     CcDeleteSharedCacheMap @ 0x1402F3DDC (CcDeleteSharedCacheMap.c)
 *     CcShouldLazyWriteCacheMap @ 0x1402F6014 (CcShouldLazyWriteCacheMap.c)
 *     CcWriteBehind @ 0x1402F6160 (CcWriteBehind.c)
 *     CcUninitializeCacheMap @ 0x1402F68B0 (CcUninitializeCacheMap.c)
 *     CcAsyncCopyRead @ 0x1402F8440 (CcAsyncCopyRead.c)
 *     CcScheduleReadAheadEx @ 0x1402F8E00 (CcScheduleReadAheadEx.c)
 *     CcPerformReadAhead @ 0x1402F9DF0 (CcPerformReadAhead.c)
 *     CcSetParallelFlushFile @ 0x14030FB70 (CcSetParallelFlushFile.c)
 *     CcAcquireByteRangeForWrite @ 0x14030FF40 (CcAcquireByteRangeForWrite.c)
 *     CcGetVacbMiss @ 0x1403109C0 (CcGetVacbMiss.c)
 *     CcDeductDirtyPages @ 0x140312DEC (CcDeductDirtyPages.c)
 *     CcUnmapVacbArray @ 0x140312E70 (CcUnmapVacbArray.c)
 *     CcDecrementOpenCount @ 0x14031313C (CcDecrementOpenCount.c)
 *     CcCanIWrite @ 0x1403131D0 (CcCanIWrite.c)
 *     CcUnpinRepinnedBcb @ 0x1404EA760 (CcUnpinRepinnedBcb.c)
 *     CcSetLogHandleForFile @ 0x1404EADC0 (CcSetLogHandleForFile.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404EB544 (CcUnmapInactiveViewsInternal.c)
 *     CcMdlWriteAbort @ 0x1404EBB70 (CcMdlWriteAbort.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402315C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5BA8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5D8C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
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
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140C4C980, CurrentIrql);
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
      if ( _interlockedbittestandset(&dword_140C4C980, 0x1Fu) )
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
        v25 = ExpWaitForSpinLockExclusiveAndAcquire(
                (unsigned __int64)&dword_140C4C980,
                CurrentIrql,
                a3,
                SchedulerAssist);
      }
      v9 = (unsigned int)dword_140C4C980;
      if ( (dword_140C4C980 & 0xBFFFFFFF) != 0x80000000 )
      {
        do
        {
          if ( (v9 & 0x40000000) == 0 )
          {
            v18 = _InterlockedCompareExchange(&dword_140C4C980, v9 | 0x40000000, v9);
            v17 = (_DWORD)v9 == v18;
            v9 = v18;
            if ( !v17 )
              continue;
          }
          KeYieldProcessorEx(&v25, v9, a3, (__int64)SchedulerAssist);
          v9 = (unsigned int)dword_140C4C980;
        }
        while ( (v9 & 0xBFFFFFFF) != 0x80000000 );
      }
    }
    if ( *(_QWORD *)v5 )
      v10 = *(ULONG_PTR **)(qword_140C4E648 + 8LL * (*(_WORD *)(*(_QWORD *)v5 + 60LL) & 0x3FF));
    else
      v10 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140C4C980, retaddr);
    else
      dword_140C4C980 = 0;
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
      KeBugCheckEx(0x34u, 0x1314uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  return v4;
}
