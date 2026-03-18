/*
 * XREFs of KeWaitForGate @ 0x1402CCFD8
 * Callers:
 *     MmOutSwapProcess @ 0x1402446DC (MmOutSwapProcess.c)
 *     MiReferenceControlArea @ 0x140281B54 (MiReferenceControlArea.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1402A2680 (MiCheckPurgeAndUpMapCount.c)
 *     MiDrainControlAreaWrites @ 0x1402B9840 (MiDrainControlAreaWrites.c)
 *     MiLockControlAreaSectionExtend @ 0x1402BEEF4 (MiLockControlAreaSectionExtend.c)
 *     MiZeroInParallel @ 0x1402C9D34 (MiZeroInParallel.c)
 *     MiWaitForPageWriteCompletion @ 0x1402CDB2C (MiWaitForPageWriteCompletion.c)
 *     MiUnlinkWorkingSet @ 0x1402D53DC (MiUnlinkWorkingSet.c)
 *     MiAttemptSectionDelete @ 0x1403070A4 (MiAttemptSectionDelete.c)
 *     MiTryUnlinkNodeLargePage @ 0x140316270 (MiTryUnlinkNodeLargePage.c)
 *     MiMarkSessionDeletePending @ 0x140386528 (MiMarkSessionDeletePending.c)
 *     KiExecuteDpc @ 0x1403ABB20 (KiExecuteDpc.c)
 *     MiZeroNodePages @ 0x1403ADD50 (MiZeroNodePages.c)
 *     MiMappedPageWriter @ 0x1403B2930 (MiMappedPageWriter.c)
 *     MiZeroBootLargePages @ 0x1403C6804 (MiZeroBootLargePages.c)
 *     MiFreeUnusedPfnPages @ 0x1403C9CE0 (MiFreeUnusedPfnPages.c)
 *     MiUnlinkNodeLargePages @ 0x1403F00D8 (MiUnlinkNodeLargePages.c)
 *     KiEpfStart @ 0x14051E754 (KiEpfStart.c)
 *     MiChangingSubsectionProtos @ 0x140539DF8 (MiChangingSubsectionProtos.c)
 *     MiIncrementLargeSubsections @ 0x14053B960 (MiIncrementLargeSubsections.c)
 *     MiWaitForExtentDeletions @ 0x14053CBC0 (MiWaitForExtentDeletions.c)
 *     MiIncrementAweMapCount @ 0x140546B54 (MiIncrementAweMapCount.c)
 *     MiWaitForVadDeletion @ 0x140556320 (MiWaitForVadDeletion.c)
 *     PspGetContextThreadInternal @ 0x1406F2448 (PspGetContextThreadInternal.c)
 *     PspSetContextThreadInternal @ 0x1406F2D50 (PspSetContextThreadInternal.c)
 *     MmScrubMemory @ 0x1408D77CC (MmScrubMemory.c)
 *     PspQueryWorkingSetWatch @ 0x140903BA0 (PspQueryWorkingSetWatch.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14090A53C (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KiBeginThreadWait @ 0x140226020 (KiBeginThreadWait.c)
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KiCommitThreadWait @ 0x140264C30 (KiCommitThreadWait.c)
 *     KiFastExitThreadWait @ 0x140329A64 (KiFastExitThreadWait.c)
 */

__int64 __fastcall KeWaitForGate(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  $A4B5D2C1751CB7039976B0B68C9462E1 *v5; // rdi
  unsigned __int8 CurrentIrql; // r10
  __int64 v7; // rdx
  unsigned int v8; // ebp
  __int64 v9; // r8
  __int64 v10; // r9
  struct _LIST_ENTRY *v11; // rcx
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
    v8 = KiBeginThreadWait((__int64)CurrentThread, 0, a2, 0);
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
      KiFastExitThreadWait(KeGetCurrentPrcb(), CurrentThread, 0LL);
      return v8;
    }
    v11 = *(struct _LIST_ENTRY **)(a1 + 16);
    if ( v11->Flink != (struct _LIST_ENTRY *)(a1 + 8) )
      __fastfail(3u);
    v5->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)(a1 + 8);
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = v11;
    v11->Flink = (struct _LIST_ENTRY *)v5;
    *(_QWORD *)(a1 + 16) = v5;
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    v8 = KiCommitThreadWait((__int64)CurrentThread, (__int64)&CurrentThread->320, 0, 0LL, 0LL);
  }
  while ( v8 == 256 );
  return v8;
}
