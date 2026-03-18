/*
 * XREFs of PopEtBucketsFree @ 0x14075F28C
 * Callers:
 *     PopEtAggregateGet @ 0x1405F1BA8 (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x1406D456C (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PopEtBucketsFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x54456F50u);
}
