/*
 * XREFs of HvlpFreeOverlayPages @ 0x14036A9C0
 * Callers:
 *     HvlInitializeProcessor @ 0x140787B00 (HvlInitializeProcessor.c)
 *     HvlDeleteProcessor @ 0x14088B5D0 (HvlDeleteProcessor.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x140337010 (MmFreeContiguousMemory.c)
 */

void __stdcall HvlpFreeOverlayPages(PVOID BaseAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  MmFreeContiguousMemory(BaseAddress);
}
