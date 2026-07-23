/*
 * XREFs of KiDpcRuntimeHistoryHashTableAllocate @ 0x140522E34
 * Callers:
 *     KiInsertNewDpcRuntime @ 0x140522E58 (KiInsertNewDpcRuntime.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall KiDpcRuntimeHistoryHashTableAllocate(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x74687244u);
}
