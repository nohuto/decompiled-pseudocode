/*
 * XREFs of PopEtBucketsAllocate @ 0x14076FC1C
 * Callers:
 *     PopEtAggregateGet @ 0x140667428 (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x1406CA2FC (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PopEtBucketsAllocate(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x54456F50u);
}
