/*
 * XREFs of PopEtBucketsFree @ 0x14076FCDC
 * Callers:
 *     PopEtAggregateGet @ 0x140667428 (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x1406CA2FC (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PopEtBucketsFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x54456F50u);
}
