/*
 * XREFs of MiLocateVadEvent @ 0x140251084
 * Callers:
 *     MmFreeVirtualMemory @ 0x1405F9180 (MmFreeVirtualMemory.c)
 *     MiInsertVadCharges @ 0x1405FE050 (MiInsertVadCharges.c)
 *     MmQueryVirtualMemory @ 0x1405FF9D0 (MmQueryVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x140600DD0 (MiUnmapViewOfSection.c)
 *     MiMapViewOfImageSection @ 0x140601270 (MiMapViewOfImageSection.c)
 *     MiFreeToSubAllocatedRegion @ 0x1406056FC (MiFreeToSubAllocatedRegion.c)
 *     MiAllocateVirtualMemory @ 0x140696560 (MiAllocateVirtualMemory.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1406EFD48 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMarkPrivateImageCfgBits @ 0x1407005F4 (MiMarkPrivateImageCfgBits.c)
 *     MiGetReadyInPageBlock @ 0x1408C4FB4 (MiGetReadyInPageBlock.c)
 *     MiGetAweVadPageSize @ 0x1408D2AA8 (MiGetAweVadPageSize.c)
 *     MiAllocateChildVads @ 0x1408D5490 (MiAllocateChildVads.c)
 *     MiCopyLargeVad @ 0x1408D6720 (MiCopyLargeVad.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x14025109C (MiLocateLockedVadEvent.c)
 */

__int64 __fastcall MiLocateVadEvent(__int64 a1, __int64 a2)
{
  return MiLocateLockedVadEvent(a1, a2);
}
