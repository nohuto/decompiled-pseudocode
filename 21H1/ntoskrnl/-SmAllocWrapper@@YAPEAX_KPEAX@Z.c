/*
 * XREFs of ?SmAllocWrapper@@YAPEAX_KPEAX@Z @ 0x140323260
 * Callers:
 *     SmpKeyedStoreEntryGet @ 0x140239CC0 (SmpKeyedStoreEntryGet.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SmAllocWrapper(SIZE_T NumberOfBytes, ULONG *a2)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, *a2);
}
