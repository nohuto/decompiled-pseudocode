/*
 * XREFs of MiLocateVadEvent @ 0x140309104
 * Callers:
 *     MiAllocateNewSubAllocatedRegion @ 0x1405FE4DC (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapViewOfImageSection @ 0x140686B20 (MiMapViewOfImageSection.c)
 *     MiUnmapViewOfSection @ 0x140687D60 (MiUnmapViewOfSection.c)
 *     MmQueryVirtualMemory @ 0x1406885A0 (MmQueryVirtualMemory.c)
 *     MiMarkPrivateImageCfgBits @ 0x1406C23F4 (MiMarkPrivateImageCfgBits.c)
 *     MiAllocateVirtualMemory @ 0x1406E7DB0 (MiAllocateVirtualMemory.c)
 *     MiFreeToSubAllocatedRegion @ 0x140700864 (MiFreeToSubAllocatedRegion.c)
 *     MiInsertVadCharges @ 0x140704050 (MiInsertVadCharges.c)
 *     MmFreeVirtualMemory @ 0x1407049E0 (MmFreeVirtualMemory.c)
 *     MiGetReadyInPageBlock @ 0x1408C8714 (MiGetReadyInPageBlock.c)
 *     MiGetAweVadPageSize @ 0x1408D6208 (MiGetAweVadPageSize.c)
 *     MiAllocateChildVads @ 0x1408D8BF0 (MiAllocateChildVads.c)
 *     MiCopyLargeVad @ 0x1408D9E80 (MiCopyLargeVad.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x14030911C (MiLocateLockedVadEvent.c)
 */

__int64 __fastcall MiLocateVadEvent(__int64 a1)
{
  return MiLocateLockedVadEvent(a1);
}
