/*
 * XREFs of HvlpFreeOverlayPages @ 0x14036CFD0
 * Callers:
 *     HvlInitializeProcessor @ 0x14079FD30 (HvlInitializeProcessor.c)
 *     HvlDeleteProcessor @ 0x14088E6C0 (HvlDeleteProcessor.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x140295F20 (MmFreeContiguousMemory.c)
 */

void __stdcall HvlpFreeOverlayPages(PVOID BaseAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  MmFreeContiguousMemory(BaseAddress);
}
