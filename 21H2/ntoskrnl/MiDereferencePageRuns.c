/*
 * XREFs of MiDereferencePageRuns @ 0x14037EB10
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x140727760 (MiCombineAllPhysicalMemory.c)
 *     MiGetPhysicalMemoryRanges @ 0x14076F928 (MiGetPhysicalMemoryRanges.c)
 *     MmGetNodeChannelRanges @ 0x1407C87F0 (MmGetNodeChannelRanges.c)
 *     MiComputeNodeMemory @ 0x1407CD210 (MiComputeNodeMemory.c)
 *     MiAddPhysicalMemory @ 0x1408C4FF0 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1408C60EC (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x1408C7218 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x1408D0930 (MiScanPagefileSpace.c)
 *     MiReleaseScrubPacket @ 0x1408DC0B0 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiDereferencePageRunsEx @ 0x140241A18 (MiDereferencePageRunsEx.c)
 */

void __fastcall MiDereferencePageRuns(__int64 a1)
{
  MiDereferencePageRunsEx(a1, 1);
}
