/*
 * XREFs of KeWaitForGate @ 0x14030E9A4
 * Callers:
 *     MiReferenceControlArea @ 0x140228B04 (MiReferenceControlArea.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140249650 (MiCheckPurgeAndUpMapCount.c)
 *     MiDrainControlAreaWrites @ 0x140260810 (MiDrainControlAreaWrites.c)
 *     MiLockControlAreaSectionExtend @ 0x140265EC4 (MiLockControlAreaSectionExtend.c)
 *     MiUnlinkWorkingSet @ 0x14026BA3C (MiUnlinkWorkingSet.c)
 *     MmOutSwapProcess @ 0x140280DDC (MmOutSwapProcess.c)
 *     MiZeroInParallel @ 0x14030B714 (MiZeroInParallel.c)
 *     MiWaitForPageWriteCompletion @ 0x14030F4FC (MiWaitForPageWriteCompletion.c)
 *     MiAttemptSectionDelete @ 0x140344EA4 (MiAttemptSectionDelete.c)
 *     MiTryUnlinkNodeLargePage @ 0x140353DE8 (MiTryUnlinkNodeLargePage.c)
 *     MiMarkSessionDeletePending @ 0x140387498 (MiMarkSessionDeletePending.c)
 *     MiZeroNodePages @ 0x1403A7930 (MiZeroNodePages.c)
 *     KiExecuteDpc @ 0x1403B17A0 (KiExecuteDpc.c)
 *     MiMappedPageWriter @ 0x1403B4730 (MiMappedPageWriter.c)
 *     MiZeroBootLargePages @ 0x1403C7614 (MiZeroBootLargePages.c)
 *     MiFreeUnusedPfnPages @ 0x1403CAAC0 (MiFreeUnusedPfnPages.c)
 *     MiUnlinkNodeLargePages @ 0x1403F1438 (MiUnlinkNodeLargePages.c)
 *     KiEpfStart @ 0x14051EDA4 (KiEpfStart.c)
 *     MiChangingSubsectionProtos @ 0x14053A448 (MiChangingSubsectionProtos.c)
 *     MiIncrementLargeSubsections @ 0x14053BFB0 (MiIncrementLargeSubsections.c)
 *     MiWaitForExtentDeletions @ 0x14053D210 (MiWaitForExtentDeletions.c)
 *     MiIncrementAweMapCount @ 0x1405471A4 (MiIncrementAweMapCount.c)
 *     MiWaitForVadDeletion @ 0x140556970 (MiWaitForVadDeletion.c)
 *     PspGetContextThreadInternal @ 0x1406AD5A8 (PspGetContextThreadInternal.c)
 *     PspSetContextThreadInternal @ 0x1406ADEB0 (PspSetContextThreadInternal.c)
 *     MmScrubMemory @ 0x1408D8B1C (MmScrubMemory.c)
 *     PspQueryWorkingSetWatch @ 0x140904E80 (PspQueryWorkingSetWatch.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14090B7EC (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KiCommitThreadWait @ 0x14020BBE0 (KiCommitThreadWait.c)
 *     KiAcquireKobjectLockSafe @ 0x140280030 (KiAcquireKobjectLockSafe.c)
 *     KiBeginThreadWait @ 0x1402B8CA0 (KiBeginThreadWait.c)
 *     KiFastExitThreadWait @ 0x1402E493C (KiFastExitThreadWait.c)
 */

__int64 __fastcall KeWaitForGate(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  $58B70396B7C968FDBCA820C1D7C540BB *v5; // rdi
  unsigned __int8 CurrentIrql; // r10
  __int64 v7; // rdx
  unsigned int v8; // ebp
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r9
  struct _LIST_ENTRY *v12; // rcx
  _DWORD *SchedulerAssist; // r9

  CurrentThread = KeGetCurrentThread();
  v5 = &CurrentThread->320;
  do
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    CurrentThread->WaitIrql = CurrentIrql;
    v8 = KiBeginThreadWait((__int64)CurrentThread, 0LL, a2, 0LL);
    if ( v8 )
      break;
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 0;
    CurrentThread->WaitBlock[0].Object = (PVOID)a1;
    KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, v7, v9, v10);
    if ( *(_DWORD *)(a1 + 4) )
    {
      *(_DWORD *)(a1 + 4) = 0;
      _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
      KiFastExitThreadWait((__int64)KeGetCurrentPrcb(), (__int64)CurrentThread, 0LL, v11);
      return v8;
    }
    v12 = *(struct _LIST_ENTRY **)(a1 + 16);
    if ( v12->Flink != (struct _LIST_ENTRY *)(a1 + 8) )
      __fastfail(3u);
    v5->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)(a1 + 8);
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = v12;
    v12->Flink = (struct _LIST_ENTRY *)v5;
    *(_QWORD *)(a1 + 16) = v5;
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    v8 = KiCommitThreadWait((__int64)CurrentThread, (__int64 *)&CurrentThread->320, 0, 0LL, 0LL);
  }
  while ( v8 == 256 );
  return v8;
}
