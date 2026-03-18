/*
 * XREFs of MmGetPhysicalMemoryRanges @ 0x140852550
 * Callers:
 *     IopGetPhysicalMemoryBlock @ 0x1403D4F68 (IopGetPhysicalMemoryBlock.c)
 *     IoFillDumpHeader @ 0x140551F78 (IoFillDumpHeader.c)
 * Callees:
 *     MmGetPhysicalMemoryRangesEx2 @ 0x140852570 (MmGetPhysicalMemoryRangesEx2.c)
 */

PPHYSICAL_MEMORY_RANGE MmGetPhysicalMemoryRanges(void)
{
  return (PPHYSICAL_MEMORY_RANGE)MmGetPhysicalMemoryRangesEx2(0LL);
}
