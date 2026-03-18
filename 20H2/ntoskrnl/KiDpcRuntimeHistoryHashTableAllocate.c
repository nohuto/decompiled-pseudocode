/*
 * XREFs of KiDpcRuntimeHistoryHashTableAllocate @ 0x140521114
 * Callers:
 *     KiInsertNewDpcRuntime @ 0x140521138 (KiInsertNewDpcRuntime.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall KiDpcRuntimeHistoryHashTableAllocate(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x74687244u);
}
