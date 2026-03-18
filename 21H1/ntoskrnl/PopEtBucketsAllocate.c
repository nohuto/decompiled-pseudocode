/*
 * XREFs of PopEtBucketsAllocate @ 0x14075F20C
 * Callers:
 *     PopEtAggregateGet @ 0x1405F1BA8 (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x1406D456C (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PopEtBucketsAllocate(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x54456F50u);
}
