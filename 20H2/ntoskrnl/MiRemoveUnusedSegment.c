/*
 * XREFs of MiRemoveUnusedSegment @ 0x14029F4D4
 * Callers:
 *     MiComputeDataFlushRange @ 0x14022C420 (MiComputeDataFlushRange.c)
 *     MiReferenceActiveControlArea @ 0x14029F474 (MiReferenceActiveControlArea.c)
 *     MiPrepareSegmentForDeletion @ 0x1402D27A4 (MiPrepareSegmentForDeletion.c)
 *     MiCheckForControlAreaDeletion @ 0x140300958 (MiCheckForControlAreaDeletion.c)
 *     MiAttemptSectionDelete @ 0x140315C04 (MiAttemptSectionDelete.c)
 *     MiPreventControlAreaDeletion @ 0x14031F630 (MiPreventControlAreaDeletion.c)
 *     MiReferencePfBackedSection @ 0x14031F7A0 (MiReferencePfBackedSection.c)
 *     MmGetImageFileSignatureInformation @ 0x140354060 (MmGetImageFileSignatureInformation.c)
 *     MiDeleteCachedSubsection @ 0x1405272CC (MiDeleteCachedSubsection.c)
 *     MiSetDeleteOnClose @ 0x140528F14 (MiSetDeleteOnClose.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14022EA40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlinkUnusedControlArea @ 0x14029F210 (MiUnlinkUnusedControlArea.c)
 */

void __fastcall MiRemoveUnusedSegment(__int64 a1)
{
  __int64 v2; // rbx

  if ( (*(_DWORD *)(a1 + 56) & 0x8000000) != 0 )
  {
    v2 = *(_QWORD *)(qword_140C4E4C8 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 1344));
    MiUnlinkUnusedControlArea(a1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1344));
  }
}
