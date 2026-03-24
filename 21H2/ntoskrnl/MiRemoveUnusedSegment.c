/*
 * XREFs of MiRemoveUnusedSegment @ 0x1403573A8
 * Callers:
 *     MiCheckForControlAreaDeletion @ 0x140263BF8 (MiCheckForControlAreaDeletion.c)
 *     MmGetImageFileSignatureInformation @ 0x140274340 (MmGetImageFileSignatureInformation.c)
 *     MiAttemptSectionDelete @ 0x1402B9294 (MiAttemptSectionDelete.c)
 *     MiReferencePfBackedSection @ 0x1402C5218 (MiReferencePfBackedSection.c)
 *     MiPreventControlAreaDeletion @ 0x1402EE728 (MiPreventControlAreaDeletion.c)
 *     MiPrepareSegmentForDeletion @ 0x1402F7D04 (MiPrepareSegmentForDeletion.c)
 *     MiComputeDataFlushRange @ 0x1403152C0 (MiComputeDataFlushRange.c)
 *     MiReferenceActiveControlArea @ 0x140357348 (MiReferenceActiveControlArea.c)
 *     MiDeleteCachedSubsection @ 0x140528DAC (MiDeleteCachedSubsection.c)
 *     MiSetDeleteOnClose @ 0x14052AA14 (MiSetDeleteOnClose.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140314D90 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlinkUnusedControlArea @ 0x1403574C8 (MiUnlinkUnusedControlArea.c)
 */

void __fastcall MiRemoveUnusedSegment(__int64 a1)
{
  __int64 v2; // rbx

  if ( (*(_DWORD *)(a1 + 56) & 0x8000000) != 0 )
  {
    v2 = *(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 1344));
    MiUnlinkUnusedControlArea(a1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1344));
  }
}
