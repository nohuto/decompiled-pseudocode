/*
 * XREFs of PopEtBucketsAllocate @ 0x140773B2C
 * Callers:
 *     PopEtAggregateGet @ 0x140619EA8 (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x14069905C (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PopEtBucketsAllocate(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x54456F50u);
}
