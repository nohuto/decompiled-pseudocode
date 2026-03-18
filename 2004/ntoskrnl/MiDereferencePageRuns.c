/*
 * XREFs of MiDereferencePageRuns @ 0x14037CC10
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x140715860 (MiCombineAllPhysicalMemory.c)
 *     MiGetPhysicalMemoryRanges @ 0x14075D0A8 (MiGetPhysicalMemoryRanges.c)
 *     MmGetNodeChannelRanges @ 0x1407B59E0 (MmGetNodeChannelRanges.c)
 *     MiComputeNodeMemory @ 0x1407BA550 (MiComputeNodeMemory.c)
 *     MiAddPhysicalMemory @ 0x1408C1890 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1408C298C (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x1408C3AB8 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x1408CD1D0 (MiScanPagefileSpace.c)
 *     MiReleaseScrubPacket @ 0x1408D8950 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiDereferencePageRunsEx @ 0x1403516F8 (MiDereferencePageRunsEx.c)
 */

void __fastcall MiDereferencePageRuns(__int64 a1)
{
  MiDereferencePageRunsEx(a1, 1);
}
