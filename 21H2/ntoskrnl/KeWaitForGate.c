/*
 * XREFs of KeWaitForGate @ 0x140217454
 * Callers:
 *     MiWaitForVadDeletion @ 0x140202010 (MiWaitForVadDeletion.c)
 *     MmOutSwapProcess @ 0x140211108 (MmOutSwapProcess.c)
 *     MiUnlinkWorkingSet @ 0x1402172E4 (MiUnlinkWorkingSet.c)
 *     MiMarkSessionDeletePending @ 0x140218288 (MiMarkSessionDeletePending.c)
 *     MiLockControlAreaSectionExtend @ 0x14022CA54 (MiLockControlAreaSectionExtend.c)
 *     MiAttemptSectionDelete @ 0x14023EA5C (MiAttemptSectionDelete.c)
 *     MiZeroInParallel @ 0x14026446C (MiZeroInParallel.c)
 *     MiDrainControlAreaWrites @ 0x140270228 (MiDrainControlAreaWrites.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140287450 (MiCheckPurgeAndUpMapCount.c)
 *     MiReferenceControlArea @ 0x140287C84 (MiReferenceControlArea.c)
 *     MiUnlinkNodeLargePages @ 0x1402CA5E0 (MiUnlinkNodeLargePages.c)
 *     MiTryUnlinkNodeLargePages @ 0x1403872A4 (MiTryUnlinkNodeLargePages.c)
 *     MiWaitForPageWriteCompletion @ 0x140389084 (MiWaitForPageWriteCompletion.c)
 *     MiFreeUnusedPfnPages @ 0x1403B7CB0 (MiFreeUnusedPfnPages.c)
 *     MiMappedPageWriter @ 0x1403C5160 (MiMappedPageWriter.c)
 *     KiExecuteDpc @ 0x1403CB9F0 (KiExecuteDpc.c)
 *     MiZeroNodePages @ 0x1403D3960 (MiZeroNodePages.c)
 *     MiZeroPageThread @ 0x1403D9D30 (MiZeroPageThread.c)
 *     MiZeroBootLargePages @ 0x1403D9D88 (MiZeroBootLargePages.c)
 *     KiEpfStart @ 0x14057B194 (KiEpfStart.c)
 *     MiChangingSubsectionProtos @ 0x14059D69C (MiChangingSubsectionProtos.c)
 *     MiIncrementLargeSubsections @ 0x14059F23C (MiIncrementLargeSubsections.c)
 *     MiWaitForExtentDeletions @ 0x1405A1AE8 (MiWaitForExtentDeletions.c)
 *     MiIncrementAweMapCount @ 0x1405AB148 (MiIncrementAweMapCount.c)
 *     MmScrubMemory @ 0x140983C8C (MmScrubMemory.c)
 *     PspQueryWorkingSetWatch @ 0x1409AE584 (PspQueryWorkingSetWatch.c)
 * Callees:
 *     KiBeginThreadWait @ 0x140217CA0 (KiBeginThreadWait.c)
 *     KiFastExitThreadWait @ 0x1402946B8 (KiFastExitThreadWait.c)
 *     KiCommitThreadWait @ 0x1402B5240 (KiCommitThreadWait.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 */

__int64 __fastcall KeWaitForGate(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  $0EA7835A9B05193480487A73CEA01DA9 *v5; // rdi
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
