/*
 * XREFs of PopEtBucketsFree @ 0x140773D6C
 * Callers:
 *     PopEtProcessSnapshotCreate @ 0x1405F7D4C (PopEtProcessSnapshotCreate.c)
 *     PopEtAggregateGet @ 0x140683B08 (PopEtAggregateGet.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PopEtBucketsFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x54456F50u);
}
