/*
 * XREFs of MmGetPhysicalMemoryRanges @ 0x1407CCDF0
 * Callers:
 *     IopGetPhysicalMemoryBlock @ 0x1403CB1A4 (IopGetPhysicalMemoryBlock.c)
 *     IoFillDumpHeader @ 0x140501AF8 (IoFillDumpHeader.c)
 * Callees:
 *     MmGetPhysicalMemoryRangesEx2 @ 0x14076F700 (MmGetPhysicalMemoryRangesEx2.c)
 */

PPHYSICAL_MEMORY_RANGE MmGetPhysicalMemoryRanges(void)
{
  return (PPHYSICAL_MEMORY_RANGE)MmGetPhysicalMemoryRangesEx2(0LL, 0);
}
