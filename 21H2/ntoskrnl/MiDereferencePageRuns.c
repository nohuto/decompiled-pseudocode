/*
 * XREFs of MiDereferencePageRuns @ 0x14023FCF0
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x1407F8FE0 (MiCombineAllPhysicalMemory.c)
 *     MiComputeNodeMemory @ 0x14081DDB0 (MiComputeNodeMemory.c)
 *     MiGetPhysicalMemoryRanges @ 0x1408525D8 (MiGetPhysicalMemoryRanges.c)
 *     MmGetNodeChannelRanges @ 0x140855E78 (MmGetNodeChannelRanges.c)
 *     MiAddPhysicalMemory @ 0x140968388 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x140969850 (MiRemovePhysicalMemory.c)
 *     MmIdentifyPhysicalMemory @ 0x14096B768 (MmIdentifyPhysicalMemory.c)
 *     MiScanPagefileSpace @ 0x14096F470 (MiScanPagefileSpace.c)
 *     MiReleaseScrubPacket @ 0x140983AC0 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiDereferencePageRunsEx @ 0x14023FD0C (MiDereferencePageRunsEx.c)
 */

__int64 __fastcall MiDereferencePageRuns(__int64 a1)
{
  return MiDereferencePageRunsEx(a1, 1LL);
}
