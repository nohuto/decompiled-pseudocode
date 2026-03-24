/*
 * XREFs of MiDereferencePageRuns @ 0x14037EFC0
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x1407272B0 (MiCombineAllPhysicalMemory.c)
 *     MiGetPhysicalMemoryRanges @ 0x14076F768 (MiGetPhysicalMemoryRanges.c)
 *     MmGetNodeChannelRanges @ 0x1407C84D0 (MmGetNodeChannelRanges.c)
 *     MiComputeNodeMemory @ 0x1407CD0A0 (MiComputeNodeMemory.c)
 *     MiAddPhysicalMemory @ 0x1408C4E90 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1408C5F8C (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x1408C70B8 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x1408D07D0 (MiScanPagefileSpace.c)
 *     MiReleaseScrubPacket @ 0x1408DBF50 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiDereferencePageRunsEx @ 0x1402C34F8 (MiDereferencePageRunsEx.c)
 */

void __fastcall MiDereferencePageRuns(__int64 a1)
{
  MiDereferencePageRunsEx(a1, 1);
}
