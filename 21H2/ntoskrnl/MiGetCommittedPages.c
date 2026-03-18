/*
 * XREFs of MiGetCommittedPages @ 0x140287C30
 * Callers:
 *     MiCreatePrototypePtes @ 0x14026E564 (MiCreatePrototypePtes.c)
 *     MiDeleteSegmentPages @ 0x14027034C (MiDeleteSegmentPages.c)
 *     MiReferenceActiveSubsection @ 0x140286DE0 (MiReferenceActiveSubsection.c)
 *     MiSetPagesModified @ 0x14058D310 (MiSetPagesModified.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x1405C48A0 (MiComputeCrossPartitionSectionCharges.c)
 *     MiMapViewOfDataSection @ 0x1406FB4D0 (MiMapViewOfDataSection.c)
 *     MiRemoveSharedCommitNode @ 0x1406FC2F0 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x1406FC590 (MiInsertSharedCommitNode.c)
 *     MiInitializeImageExtents @ 0x1409706E4 (MiInitializeImageExtents.c)
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
