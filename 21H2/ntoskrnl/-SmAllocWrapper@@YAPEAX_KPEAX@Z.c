/*
 * XREFs of ?SmAllocWrapper@@YAPEAX_KPEAX@Z @ 0x1402D3DD0
 * Callers:
 *     SmpKeyedStoreEntryGet @ 0x1402D6348 (SmpKeyedStoreEntryGet.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SmAllocWrapper(SIZE_T NumberOfBytes, ULONG *a2)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, *a2);
}
