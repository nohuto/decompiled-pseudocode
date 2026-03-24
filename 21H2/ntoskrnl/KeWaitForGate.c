/*
 * XREFs of KeWaitForGate @ 0x140299F74
 * Callers:
 *     MmOutSwapProcess @ 0x14024A494 (MmOutSwapProcess.c)
 *     MiTryUnlinkNodeLargePage @ 0x14029195C (MiTryUnlinkNodeLargePage.c)
 *     MiUnlinkWorkingSet @ 0x14029736C (MiUnlinkWorkingSet.c)
 *     MiWaitForPageWriteCompletion @ 0x140299EBC (MiWaitForPageWriteCompletion.c)
 *     MiLockControlAreaSectionExtend @ 0x1402A12EC (MiLockControlAreaSectionExtend.c)
 *     MiAttemptSectionDelete @ 0x1402B9294 (MiAttemptSectionDelete.c)
 *     MiZeroInParallel @ 0x1402E2D60 (MiZeroInParallel.c)
 *     MiDrainControlAreaWrites @ 0x1402F7DAC (MiDrainControlAreaWrites.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140315FB0 (MiCheckPurgeAndUpMapCount.c)
 *     MiReferenceControlArea @ 0x140356824 (MiReferenceControlArea.c)
 *     MiMarkSessionDeletePending @ 0x140389DB0 (MiMarkSessionDeletePending.c)
 *     MiZeroNodePages @ 0x1403B0220 (MiZeroNodePages.c)
 *     KiExecuteDpc @ 0x1403B5790 (KiExecuteDpc.c)
 *     MiMappedPageWriter @ 0x1403B7730 (MiMappedPageWriter.c)
 *     MiZeroBootLargePages @ 0x1403CABF4 (MiZeroBootLargePages.c)
 *     MiFreeUnusedPfnPages @ 0x1403CE0E0 (MiFreeUnusedPfnPages.c)
 *     MiUnlinkNodeLargePages @ 0x1403F70E8 (MiUnlinkNodeLargePages.c)
 *     KiEpfStart @ 0x140524254 (KiEpfStart.c)
 *     MiChangingSubsectionProtos @ 0x14053F918 (MiChangingSubsectionProtos.c)
 *     MiIncrementLargeSubsections @ 0x140541480 (MiIncrementLargeSubsections.c)
 *     MiWaitForExtentDeletions @ 0x1405426E0 (MiWaitForExtentDeletions.c)
 *     MiIncrementAweMapCount @ 0x14054C674 (MiIncrementAweMapCount.c)
 *     MiWaitForVadDeletion @ 0x14055BE10 (MiWaitForVadDeletion.c)
 *     PspSetContextThreadInternal @ 0x140647C9C (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140647E54 (PspGetContextThreadInternal.c)
 *     MmScrubMemory @ 0x1408DC11C (MmScrubMemory.c)
 *     PspQueryWorkingSetWatch @ 0x140908250 (PspQueryWorkingSetWatch.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14090EBCC (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KiBeginThreadWait @ 0x140242630 (KiBeginThreadWait.c)
 *     KiAcquireKobjectLockSafe @ 0x14024C4A0 (KiAcquireKobjectLockSafe.c)
 *     KiFastExitThreadWait @ 0x140278248 (KiFastExitThreadWait.c)
 *     KiCommitThreadWait @ 0x140345FB0 (KiCommitThreadWait.c)
 */

__int64 __fastcall KeWaitForGate(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  $AC3BF0C7EA58B0FE9399BAAA5443B647 *v5; // rdi
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
    v8 = KiCommitThreadWait((_DWORD)CurrentThread, (int)CurrentThread + 320, 0, 0, 0LL);
  }
  while ( v8 == 256 );
  return v8;
}
