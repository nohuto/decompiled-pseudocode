/*
 * XREFs of KiDpcRuntimeHistoryHashTableAllocate @ 0x140522BF4
 * Callers:
 *     KiInsertNewDpcRuntime @ 0x140522C18 (KiInsertNewDpcRuntime.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall KiDpcRuntimeHistoryHashTableAllocate(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x74687244u);
}
