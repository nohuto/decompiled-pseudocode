/*
 * XREFs of HvlpFreeOverlayPages @ 0x14036C9A0
 * Callers:
 *     HvlInitializeProcessor @ 0x140795810 (HvlInitializeProcessor.c)
 *     HvlDeleteProcessor @ 0x140891120 (HvlDeleteProcessor.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x1402619D0 (MmFreeContiguousMemory.c)
 */

void __stdcall HvlpFreeOverlayPages(PVOID BaseAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  MmFreeContiguousMemory(BaseAddress);
}
