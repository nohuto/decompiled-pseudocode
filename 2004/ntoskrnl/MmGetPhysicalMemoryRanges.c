/*
 * XREFs of MmGetPhysicalMemoryRanges @ 0x1407BA2A0
 * Callers:
 *     IopGetPhysicalMemoryBlock @ 0x1403C7B94 (IopGetPhysicalMemoryBlock.c)
 *     IoFillDumpHeader @ 0x1404FC6A8 (IoFillDumpHeader.c)
 * Callees:
 *     MmGetPhysicalMemoryRangesEx2 @ 0x14075D040 (MmGetPhysicalMemoryRangesEx2.c)
 */

PPHYSICAL_MEMORY_RANGE MmGetPhysicalMemoryRanges(void)
{
  return (PPHYSICAL_MEMORY_RANGE)MmGetPhysicalMemoryRangesEx2(0LL, 0);
}
