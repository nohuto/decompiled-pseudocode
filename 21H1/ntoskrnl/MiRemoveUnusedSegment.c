/*
 * XREFs of MiRemoveUnusedSegment @ 0x1402816AC
 * Callers:
 *     MiReferenceActiveControlArea @ 0x14028164C (MiReferenceActiveControlArea.c)
 *     MiComputeDataFlushRange @ 0x1402A1990 (MiComputeDataFlushRange.c)
 *     MiPrepareSegmentForDeletion @ 0x1402B9798 (MiPrepareSegmentForDeletion.c)
 *     MiPreventControlAreaDeletion @ 0x1402D01FC (MiPreventControlAreaDeletion.c)
 *     MiReferencePfBackedSection @ 0x1402D03FC (MiReferencePfBackedSection.c)
 *     MiCheckForControlAreaDeletion @ 0x1402F1478 (MiCheckForControlAreaDeletion.c)
 *     MiAttemptSectionDelete @ 0x1403070A4 (MiAttemptSectionDelete.c)
 *     MmGetImageFileSignatureInformation @ 0x14030D420 (MmGetImageFileSignatureInformation.c)
 *     MiDeleteCachedSubsection @ 0x1405232AC (MiDeleteCachedSubsection.c)
 *     MiSetDeleteOnClose @ 0x140524EF4 (MiSetDeleteOnClose.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402A37D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkUnusedControlArea @ 0x1402A5500 (MiUnlinkUnusedControlArea.c)
 */

void __fastcall MiRemoveUnusedSegment(__int64 a1)
{
  __int64 v2; // rbx

  if ( (*(_DWORD *)(a1 + 56) & 0x8000000) != 0 )
  {
    v2 = *(_QWORD *)(qword_140C4E588 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 1344));
    MiUnlinkUnusedControlArea(a1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1344));
  }
}
