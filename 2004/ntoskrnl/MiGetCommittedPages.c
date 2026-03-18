/*
 * XREFs of MiGetCommittedPages @ 0x14024A698
 * Callers:
 *     MiReferenceActiveSubsection @ 0x1402493A0 (MiReferenceActiveSubsection.c)
 *     MiDeleteSegmentPages @ 0x140260670 (MiDeleteSegmentPages.c)
 *     MiCreatePrototypePtes @ 0x14026356C (MiCreatePrototypePtes.c)
 *     MiSetPagesModified @ 0x14052FBE0 (MiSetPagesModified.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x14054F948 (MiComputeCrossPartitionSectionCharges.c)
 *     MiMapViewOfDataSection @ 0x1405FD6E0 (MiMapViewOfDataSection.c)
 *     MiRemoveSharedCommitNode @ 0x1405FE430 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x1405FE6A0 (MiInsertSharedCommitNode.c)
 *     MiInitializeImageExtents @ 0x1408CCA6C (MiInitializeImageExtents.c)
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
