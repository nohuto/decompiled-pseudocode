/*
 * XREFs of MmAllocatePagesForMdl @ 0x1403D8690
 * Callers:
 *     DifMmAllocatePagesForMdlWrapper @ 0x140616B60 (DifMmAllocatePagesForMdlWrapper.c)
 *     HalpDmaAllocateScatterMemory @ 0x14090943C (HalpDmaAllocateScatterMemory.c)
 * Callees:
 *     MiAllocatePagesForMdl @ 0x140265428 (MiAllocatePagesForMdl.c)
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
                 *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 138LL),
                 0,
                 (__int64)KeGetCurrentThread()->ApcState.Process);
}
