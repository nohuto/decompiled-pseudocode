/*
 * XREFs of MiDereferencePageRuns @ 0x14037BE90
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x1407134D0 (MiCombineAllPhysicalMemory.c)
 *     MiGetPhysicalMemoryRanges @ 0x14075AC78 (MiGetPhysicalMemoryRanges.c)
 *     MmGetNodeChannelRanges @ 0x1407B2870 (MmGetNodeChannelRanges.c)
 *     MiComputeNodeMemory @ 0x1407B73E0 (MiComputeNodeMemory.c)
 *     MiAddPhysicalMemory @ 0x1408C0540 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1408C163C (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x1408C2768 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x1408CBE80 (MiScanPagefileSpace.c)
 *     MiReleaseScrubPacket @ 0x1408D7600 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiDereferencePageRunsEx @ 0x140313848 (MiDereferencePageRunsEx.c)
 */

void __fastcall MiDereferencePageRuns(__int64 a1)
{
  MiDereferencePageRunsEx(a1, 1);
}
