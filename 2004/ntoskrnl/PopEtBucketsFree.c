/*
 * XREFs of PopEtBucketsFree @ 0x1407616CC
 * Callers:
 *     PopEtAggregateGet @ 0x14069B0B8 (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x1406F735C (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall PopEtBucketsFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x54456F50u);
}
