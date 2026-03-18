/*
 * XREFs of ?SmAllocWrapper@@YAPEAX_KPEAX@Z @ 0x140360D50
 * Callers:
 *     SmpKeyedStoreEntryGet @ 0x1402CCAF0 (SmpKeyedStoreEntryGet.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SmAllocWrapper(SIZE_T NumberOfBytes, ULONG *a2)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, *a2);
}
