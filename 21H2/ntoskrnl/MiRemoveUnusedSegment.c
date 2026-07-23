/*
 * XREFs of MiRemoveUnusedSegment @ 0x1403620F8
 * Callers:
 *     MiAttemptSectionDelete @ 0x1402374A4 (MiAttemptSectionDelete.c)
 *     MiReferencePfBackedSection @ 0x140243798 (MiReferencePfBackedSection.c)
 *     MmGetImageFileSignatureInformation @ 0x1402622E0 (MmGetImageFileSignatureInformation.c)
 *     MiCheckForControlAreaDeletion @ 0x1402850C8 (MiCheckForControlAreaDeletion.c)
 *     MiPreventControlAreaDeletion @ 0x1402F9478 (MiPreventControlAreaDeletion.c)
 *     MiPrepareSegmentForDeletion @ 0x140302A54 (MiPrepareSegmentForDeletion.c)
 *     MiComputeDataFlushRange @ 0x140320010 (MiComputeDataFlushRange.c)
 *     MiReferenceActiveControlArea @ 0x140362098 (MiReferenceActiveControlArea.c)
 *     MiDeleteCachedSubsection @ 0x140528FEC (MiDeleteCachedSubsection.c)
 *     MiSetDeleteOnClose @ 0x14052AC54 (MiSetDeleteOnClose.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlinkUnusedControlArea @ 0x140362218 (MiUnlinkUnusedControlArea.c)
 */

void __fastcall MiRemoveUnusedSegment(__int64 a1)
{
  __int64 v2; // rbx

  if ( (*(_DWORD *)(a1 + 56) & 0x8000000) != 0 )
  {
    v2 = *(_QWORD *)(qword_140C4E688 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 1344));
    MiUnlinkUnusedControlArea(a1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1344));
  }
}
