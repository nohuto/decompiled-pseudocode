/*
 * XREFs of MmGetPhysicalMemoryRanges @ 0x1407C8B30
 * Callers:
 *     IopGetPhysicalMemoryBlock @ 0x1403CA7D4 (IopGetPhysicalMemoryBlock.c)
 *     IoFillDumpHeader @ 0x1404FFF78 (IoFillDumpHeader.c)
 * Callees:
 *     MmGetPhysicalMemoryRangesEx2 @ 0x14076B7A0 (MmGetPhysicalMemoryRangesEx2.c)
 */

PPHYSICAL_MEMORY_RANGE MmGetPhysicalMemoryRanges(void)
{
  return (PPHYSICAL_MEMORY_RANGE)MmGetPhysicalMemoryRangesEx2(0LL, 0);
}
