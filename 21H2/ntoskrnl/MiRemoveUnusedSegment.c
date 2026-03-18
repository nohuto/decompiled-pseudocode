/*
 * XREFs of MiRemoveUnusedSegment @ 0x140287A2C
 * Callers:
 *     MiCheckForControlAreaDeletion @ 0x140220944 (MiCheckForControlAreaDeletion.c)
 *     MiAttemptSectionDelete @ 0x14023EA5C (MiAttemptSectionDelete.c)
 *     MiPreventControlAreaDeletion @ 0x14023F8E8 (MiPreventControlAreaDeletion.c)
 *     MiReferencePfBackedSection @ 0x14023FA50 (MiReferencePfBackedSection.c)
 *     MmGetImageFileSignatureInformation @ 0x140246FD0 (MmGetImageFileSignatureInformation.c)
 *     MiPrepareSegmentForDeletion @ 0x140270274 (MiPrepareSegmentForDeletion.c)
 *     MiComputeDataFlushRange @ 0x140286AB0 (MiComputeDataFlushRange.c)
 *     MiReferenceActiveControlArea @ 0x140287F58 (MiReferenceActiveControlArea.c)
 *     MiDeleteCachedSubsection @ 0x14058A6D4 (MiDeleteCachedSubsection.c)
 *     MiSetDeleteOnClose @ 0x14058C1D4 (MiSetDeleteOnClose.c)
 * Callees:
 *     MiUnlinkUnusedControlArea @ 0x14028AF80 (MiUnlinkUnusedControlArea.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiRemoveUnusedSegment(__int64 a1)
{
  __int64 v2; // rbx

  if ( (*(_DWORD *)(a1 + 56) & 0x10000000) != 0 )
  {
    v2 = *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 1344));
    MiUnlinkUnusedControlArea(a1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1344));
  }
}
