/*
 * XREFs of HvlpFreeOverlayPages @ 0x14036A000
 * Callers:
 *     HvlInitializeProcessor @ 0x14078217C (HvlInitializeProcessor.c)
 *     HvlDeleteProcessor @ 0x14088A2B0 (HvlDeleteProcessor.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x1402F9FE0 (MmFreeContiguousMemory.c)
 */

void __stdcall HvlpFreeOverlayPages(PVOID BaseAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  MmFreeContiguousMemory(BaseAddress);
}
