/*
 * XREFs of PopEtBucketsAllocate @ 0x140773CEC
 * Callers:
 *     PopEtProcessSnapshotCreate @ 0x1405F7D4C (PopEtProcessSnapshotCreate.c)
 *     PopEtAggregateGet @ 0x140683B08 (PopEtAggregateGet.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PopEtBucketsAllocate(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x54456F50u);
}
