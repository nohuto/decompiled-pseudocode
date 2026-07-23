/*
 * XREFs of HvlpFreeOverlayPages @ 0x14036D180
 * Callers:
 *     HvlInitializeProcessor @ 0x14079FF30 (HvlInitializeProcessor.c)
 *     HvlDeleteProcessor @ 0x14088E820 (HvlDeleteProcessor.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x140217BE0 (MmFreeContiguousMemory.c)
 */

void __stdcall HvlpFreeOverlayPages(PVOID BaseAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  MmFreeContiguousMemory(BaseAddress);
}
