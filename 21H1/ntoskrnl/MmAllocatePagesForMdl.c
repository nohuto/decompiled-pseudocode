/*
 * XREFs of MmAllocatePagesForMdl @ 0x1403A30C0
 * Callers:
 *     HalpDmaAllocateScatterMemory @ 0x14086097C (HalpDmaAllocateScatterMemory.c)
 * Callees:
 *     MiAllocatePagesForMdl @ 0x140342ADC (MiAllocatePagesForMdl.c)
 */

PMDL __stdcall MmAllocatePagesForMdl(
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        PHYSICAL_ADDRESS SkipBytes,
        SIZE_T TotalBytes)
{
  return (PMDL)MiAllocatePagesForMdl(
                 (__int64)&MiSystemPartition,
                 LowAddress.QuadPart,
                 HighAddress.QuadPart,
                 SkipBytes.QuadPart,
                 TotalBytes,
                 3,
                 *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 146LL),
                 0);
}
