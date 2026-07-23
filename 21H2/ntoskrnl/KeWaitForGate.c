/*
 * XREFs of KeWaitForGate @ 0x14022A4E4
 * Callers:
 *     MiTryUnlinkNodeLargePage @ 0x14020F8CC (MiTryUnlinkNodeLargePage.c)
 *     MiLockControlAreaSectionExtend @ 0x14021E86C (MiLockControlAreaSectionExtend.c)
 *     MiWaitForPageWriteCompletion @ 0x14022A42C (MiWaitForPageWriteCompletion.c)
 *     MiAttemptSectionDelete @ 0x1402374A4 (MiAttemptSectionDelete.c)
 *     MiUnlinkWorkingSet @ 0x14027444C (MiUnlinkWorkingSet.c)
 *     MiZeroInParallel @ 0x1402940B0 (MiZeroInParallel.c)
 *     MmOutSwapProcess @ 0x1402EECE4 (MmOutSwapProcess.c)
 *     MiDrainControlAreaWrites @ 0x140302AFC (MiDrainControlAreaWrites.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140320D00 (MiCheckPurgeAndUpMapCount.c)
 *     MiReferenceControlArea @ 0x140361574 (MiReferenceControlArea.c)
 *     MiMarkSessionDeletePending @ 0x140389F00 (MiMarkSessionDeletePending.c)
 *     MiZeroNodePages @ 0x1403B0390 (MiZeroNodePages.c)
 *     KiExecuteDpc @ 0x1403B5900 (KiExecuteDpc.c)
 *     MiMappedPageWriter @ 0x1403B78A0 (MiMappedPageWriter.c)
 *     MiZeroBootLargePages @ 0x1403CAD94 (MiZeroBootLargePages.c)
 *     MiFreeUnusedPfnPages @ 0x1403CE250 (MiFreeUnusedPfnPages.c)
 *     MiUnlinkNodeLargePages @ 0x1403F70E8 (MiUnlinkNodeLargePages.c)
 *     KiEpfStart @ 0x140524494 (KiEpfStart.c)
 *     MiChangingSubsectionProtos @ 0x14053FB58 (MiChangingSubsectionProtos.c)
 *     MiIncrementLargeSubsections @ 0x1405416C0 (MiIncrementLargeSubsections.c)
 *     MiWaitForExtentDeletions @ 0x140542920 (MiWaitForExtentDeletions.c)
 *     MiIncrementAweMapCount @ 0x14054C8B4 (MiIncrementAweMapCount.c)
 *     MiWaitForVadDeletion @ 0x14055C050 (MiWaitForVadDeletion.c)
 *     PspSetContextThreadInternal @ 0x14063CA8C (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x14063CC44 (PspGetContextThreadInternal.c)
 *     MmScrubMemory @ 0x1408DC27C (MmScrubMemory.c)
 *     PspQueryWorkingSetWatch @ 0x1409083B0 (PspQueryWorkingSetWatch.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14090ED2C (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KiFastExitThreadWait @ 0x1402661E8 (KiFastExitThreadWait.c)
 *     KiBeginThreadWait @ 0x1402E6E80 (KiBeginThreadWait.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiCommitThreadWait @ 0x140350D00 (KiCommitThreadWait.c)
 */

__int64 __fastcall KeWaitForGate(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  $97202178496CA35ABF26341004BDBFC1 *v5; // rdi
  unsigned __int8 CurrentIrql; // r10
  unsigned int v7; // ebp
  struct _LIST_ENTRY *v8; // rcx
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
    v7 = KiBeginThreadWait(CurrentThread, 0LL, a2, 0LL);
    if ( v7 )
      break;
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 0;
    CurrentThread->WaitBlock[0].Object = (PVOID)a1;
    KiAcquireKobjectLockSafe(a1);
    if ( *(_DWORD *)(a1 + 4) )
    {
      *(_DWORD *)(a1 + 4) = 0;
      _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
      KiFastExitThreadWait(KeGetCurrentPrcb(), CurrentThread, 0LL);
      return v7;
    }
    v8 = *(struct _LIST_ENTRY **)(a1 + 16);
    if ( v8->Flink != (struct _LIST_ENTRY *)(a1 + 8) )
      __fastfail(3u);
    v5->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)(a1 + 8);
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = v8;
    v8->Flink = (struct _LIST_ENTRY *)v5;
    *(_QWORD *)(a1 + 16) = v5;
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    v7 = KiCommitThreadWait((_DWORD)CurrentThread, (int)CurrentThread + 320, 0, 0, 0LL);
  }
  while ( v7 == 256 );
  return v7;
}
