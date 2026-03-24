/*
 * XREFs of MiGetCommittedPages @ 0x140316CD0
 * Callers:
 *     MiDeleteSegmentPages @ 0x1402F7C0C (MiDeleteSegmentPages.c)
 *     MiCreatePrototypePtes @ 0x1402F7DF8 (MiCreatePrototypePtes.c)
 *     MiReferenceActiveSubsection @ 0x140315D00 (MiReferenceActiveSubsection.c)
 *     MiSetPagesModified @ 0x1405350B0 (MiSetPagesModified.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x140554DE8 (MiComputeCrossPartitionSectionCharges.c)
 *     MiRemoveSharedCommitNode @ 0x1406EB4E0 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x1406EB750 (MiInsertSharedCommitNode.c)
 *     MiMapViewOfDataSection @ 0x1406EC100 (MiMapViewOfDataSection.c)
 *     MiInitializeImageExtents @ 0x1408D006C (MiInitializeImageExtents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetCommittedPages(_QWORD *a1)
{
  if ( a1[8] )
    return *(_QWORD *)(*a1 + 16LL);
  else
    return a1[15] & 0xFFFFFFFFFLL;
}
