/*
 * XREFs of MmAllocatePagesForMdl @ 0x1403A5BF0
 * Callers:
 *     HalpDmaAllocateScatterMemory @ 0x140867698 (HalpDmaAllocateScatterMemory.c)
 * Callees:
 *     MiAllocatePagesForMdl @ 0x1403342D4 (MiAllocatePagesForMdl.c)
 */

PMDL __stdcall MmAllocatePagesForMdl(
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        PHYSICAL_ADDRESS SkipBytes,
        SIZE_T TotalBytes)
{
  return (PMDL)MiAllocatePagesForMdl(
                 (int)&MiSystemPartition,
                 LowAddress.QuadPart,
                 HighAddress.QuadPart,
                 SkipBytes.QuadPart,
                 TotalBytes,
                 3,
                 *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 146LL),
                 0);
}
