/*
 * XREFs of MmGetPhysicalMemoryRanges @ 0x1407B7130
 * Callers:
 *     IopGetPhysicalMemoryBlock @ 0x1403C6D84 (IopGetPhysicalMemoryBlock.c)
 *     IoFillDumpHeader @ 0x1404FC058 (IoFillDumpHeader.c)
 * Callees:
 *     MmGetPhysicalMemoryRangesEx2 @ 0x14075AC10 (MmGetPhysicalMemoryRangesEx2.c)
 */

PPHYSICAL_MEMORY_RANGE MmGetPhysicalMemoryRanges(void)
{
  return (PPHYSICAL_MEMORY_RANGE)MmGetPhysicalMemoryRangesEx2(0LL, 0);
}
