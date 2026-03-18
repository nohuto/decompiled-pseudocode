/*
 * XREFs of MmMapLockedPages @ 0x140585870
 * Callers:
 *     ViFlushDoubleBuffer @ 0x140A87EFC (ViFlushDoubleBuffer.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 */

PVOID __stdcall MmMapLockedPages(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode)
{
  return MmMapLockedPagesSpecifyCache(MemoryDescriptorList, AccessMode, MmCached, 0LL, 1u, 0x20u);
}
