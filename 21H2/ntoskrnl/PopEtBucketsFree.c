/*
 * XREFs of PopEtBucketsFree @ 0x140773BAC
 * Callers:
 *     PopEtAggregateGet @ 0x140619EA8 (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x14069905C (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall PopEtBucketsFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x54456F50u);
}
