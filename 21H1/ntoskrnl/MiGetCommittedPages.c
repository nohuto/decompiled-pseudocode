/*
 * XREFs of MiGetCommittedPages @ 0x1402A36C8
 * Callers:
 *     MiReferenceActiveSubsection @ 0x1402A23D0 (MiReferenceActiveSubsection.c)
 *     MiDeleteSegmentPages @ 0x1402B96A0 (MiDeleteSegmentPages.c)
 *     MiCreatePrototypePtes @ 0x1402BC59C (MiCreatePrototypePtes.c)
 *     MiSetPagesModified @ 0x14052F590 (MiSetPagesModified.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x14054F2F8 (MiComputeCrossPartitionSectionCharges.c)
 *     MiMapViewOfDataSection @ 0x140632720 (MiMapViewOfDataSection.c)
 *     MiRemoveSharedCommitNode @ 0x140633470 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x1406336E0 (MiInsertSharedCommitNode.c)
 *     MiInitializeImageExtents @ 0x1408CB71C (MiInitializeImageExtents.c)
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
