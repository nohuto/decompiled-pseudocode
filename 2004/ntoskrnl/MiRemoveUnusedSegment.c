/*
 * XREFs of MiRemoveUnusedSegment @ 0x14022865C
 * Callers:
 *     MiReferenceActiveControlArea @ 0x1402285FC (MiReferenceActiveControlArea.c)
 *     MiComputeDataFlushRange @ 0x140248960 (MiComputeDataFlushRange.c)
 *     MiPrepareSegmentForDeletion @ 0x140260768 (MiPrepareSegmentForDeletion.c)
 *     MiPreventControlAreaDeletion @ 0x1403209B8 (MiPreventControlAreaDeletion.c)
 *     MiReferencePfBackedSection @ 0x14032106C (MiReferencePfBackedSection.c)
 *     MiCheckForControlAreaDeletion @ 0x14032D218 (MiCheckForControlAreaDeletion.c)
 *     MiAttemptSectionDelete @ 0x140344EA4 (MiAttemptSectionDelete.c)
 *     MmGetImageFileSignatureInformation @ 0x14034A900 (MmGetImageFileSignatureInformation.c)
 *     MiDeleteCachedSubsection @ 0x1405238FC (MiDeleteCachedSubsection.c)
 *     MiSetDeleteOnClose @ 0x140525544 (MiSetDeleteOnClose.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14024A7A0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkUnusedControlArea @ 0x14024C4D0 (MiUnlinkUnusedControlArea.c)
 */

void __fastcall MiRemoveUnusedSegment(__int64 a1)
{
  __int64 v2; // rbx

  if ( (*(_DWORD *)(a1 + 56) & 0x8000000) != 0 )
  {
    v2 = *(_QWORD *)(qword_140C4E448 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 1344));
    MiUnlinkUnusedControlArea(a1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1344));
  }
}
