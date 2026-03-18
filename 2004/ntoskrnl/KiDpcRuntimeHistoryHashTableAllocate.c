/*
 * XREFs of KiDpcRuntimeHistoryHashTableAllocate @ 0x14051D744
 * Callers:
 *     KiInsertNewDpcRuntime @ 0x14051D768 (KiInsertNewDpcRuntime.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall KiDpcRuntimeHistoryHashTableAllocate(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x74687244u);
}
