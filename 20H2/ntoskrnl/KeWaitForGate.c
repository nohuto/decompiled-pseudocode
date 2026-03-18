/*
 * XREFs of KeWaitForGate @ 0x1402F5308
 * Callers:
 *     MiCheckPurgeAndUpMapCount @ 0x14022D110 (MiCheckPurgeAndUpMapCount.c)
 *     MiUnlinkWorkingSet @ 0x14026354C (MiUnlinkWorkingSet.c)
 *     MiReferenceControlArea @ 0x14029FAA4 (MiReferenceControlArea.c)
 *     MiDrainControlAreaWrites @ 0x1402D284C (MiDrainControlAreaWrites.c)
 *     MmOutSwapProcess @ 0x1402DD934 (MmOutSwapProcess.c)
 *     MiTryUnlinkNodeLargePage @ 0x1402F27F8 (MiTryUnlinkNodeLargePage.c)
 *     MiWaitForPageWriteCompletion @ 0x1402F5250 (MiWaitForPageWriteCompletion.c)
 *     MiAttemptSectionDelete @ 0x140315C04 (MiAttemptSectionDelete.c)
 *     MiZeroInParallel @ 0x1403377F0 (MiZeroInParallel.c)
 *     MiLockControlAreaSectionExtend @ 0x140355EBC (MiLockControlAreaSectionExtend.c)
 *     MiMarkSessionDeletePending @ 0x140389658 (MiMarkSessionDeletePending.c)
 *     MiZeroNodePages @ 0x1403AA320 (MiZeroNodePages.c)
 *     KiExecuteDpc @ 0x1403B4110 (KiExecuteDpc.c)
 *     MiMappedPageWriter @ 0x1403B60F0 (MiMappedPageWriter.c)
 *     MiZeroBootLargePages @ 0x1403CA254 (MiZeroBootLargePages.c)
 *     MiFreeUnusedPfnPages @ 0x1403CD700 (MiFreeUnusedPfnPages.c)
 *     MiUnlinkNodeLargePages @ 0x1403F594C (MiUnlinkNodeLargePages.c)
 *     KiEpfStart @ 0x140522774 (KiEpfStart.c)
 *     MiChangingSubsectionProtos @ 0x14053DE18 (MiChangingSubsectionProtos.c)
 *     MiIncrementLargeSubsections @ 0x14053F980 (MiIncrementLargeSubsections.c)
 *     MiWaitForExtentDeletions @ 0x140540BE0 (MiWaitForExtentDeletions.c)
 *     MiIncrementAweMapCount @ 0x14054AB74 (MiIncrementAweMapCount.c)
 *     MiWaitForVadDeletion @ 0x14055A340 (MiWaitForVadDeletion.c)
 *     PspSetContextThreadInternal @ 0x140693770 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140693928 (PspGetContextThreadInternal.c)
 *     MmScrubMemory @ 0x1408DE95C (MmScrubMemory.c)
 *     PspQueryWorkingSetWatch @ 0x14090AAA0 (PspQueryWorkingSetWatch.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14091141C (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KiCommitThreadWait @ 0x14021BDA0 (KiCommitThreadWait.c)
 *     KiBeginThreadWait @ 0x14028EC70 (KiBeginThreadWait.c)
 *     KiFastExitThreadWait @ 0x1402D8158 (KiFastExitThreadWait.c)
 *     KiAcquireKobjectLockSafe @ 0x1402E0780 (KiAcquireKobjectLockSafe.c)
 */

__int64 __fastcall KeWaitForGate(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  $FA66ECE7F681727997618FC8DC30F69A *v5; // rdi
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
      KiFastExitThreadWait((__int64)KeGetCurrentPrcb(), (__int64)CurrentThread, 0LL);
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
    v8 = KiCommitThreadWait((__int64)CurrentThread, (__int64 *)&CurrentThread->320, 0, 0LL, 0LL);
  }
  while ( v8 == 256 );
  return v8;
}
