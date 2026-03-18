/*
 * XREFs of PopEtBucketsAllocate @ 0x14076160C
 * Callers:
 *     PopEtAggregateGet @ 0x14069B0B8 (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x1406F735C (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PopEtBucketsAllocate(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x54456F50u);
}
