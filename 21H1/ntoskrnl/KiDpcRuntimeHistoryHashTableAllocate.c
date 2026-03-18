/*
 * XREFs of KiDpcRuntimeHistoryHashTableAllocate @ 0x14051D0F4
 * Callers:
 *     KiInsertNewDpcRuntime @ 0x14051D118 (KiInsertNewDpcRuntime.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall KiDpcRuntimeHistoryHashTableAllocate(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x74687244u);
}
