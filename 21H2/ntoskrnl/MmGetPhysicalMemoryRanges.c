/*
 * XREFs of MmGetPhysicalMemoryRanges @ 0x1407CCF60
 * Callers:
 *     IopGetPhysicalMemoryBlock @ 0x1403CB314 (IopGetPhysicalMemoryBlock.c)
 *     IoFillDumpHeader @ 0x140501A78 (IoFillDumpHeader.c)
 * Callees:
 *     MmGetPhysicalMemoryRangesEx2 @ 0x14076F8C0 (MmGetPhysicalMemoryRangesEx2.c)
 */

PPHYSICAL_MEMORY_RANGE MmGetPhysicalMemoryRanges(void)
{
  return (PPHYSICAL_MEMORY_RANGE)MmGetPhysicalMemoryRangesEx2(0LL, 0);
}
