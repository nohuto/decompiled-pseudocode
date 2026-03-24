/*
 * XREFs of MiLocateVadEvent @ 0x1402FE3B4
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1405F8650 (MiAllocateVirtualMemory.c)
 *     MiMapViewOfImageSection @ 0x14061CEB0 (MiMapViewOfImageSection.c)
 *     MiUnmapViewOfSection @ 0x14061E0F0 (MiUnmapViewOfSection.c)
 *     MmQueryVirtualMemory @ 0x14061E930 (MmQueryVirtualMemory.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14069F198 (MiAllocateNewSubAllocatedRegion.c)
 *     MiFreeToSubAllocatedRegion @ 0x1406E9484 (MiFreeToSubAllocatedRegion.c)
 *     MiInsertVadCharges @ 0x1406ECC70 (MiInsertVadCharges.c)
 *     MmFreeVirtualMemory @ 0x1406ED600 (MmFreeVirtualMemory.c)
 *     MiMarkPrivateImageCfgBits @ 0x140713DA4 (MiMarkPrivateImageCfgBits.c)
 *     MiGetReadyInPageBlock @ 0x1408C85B4 (MiGetReadyInPageBlock.c)
 *     MiGetAweVadPageSize @ 0x1408D60A8 (MiGetAweVadPageSize.c)
 *     MiAllocateChildVads @ 0x1408D8A90 (MiAllocateChildVads.c)
 *     MiCopyLargeVad @ 0x1408D9D20 (MiCopyLargeVad.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x1402FE3CC (MiLocateLockedVadEvent.c)
 */

__int64 __fastcall MiLocateVadEvent(__int64 a1, __int64 a2)
{
  return MiLocateLockedVadEvent(a1, a2);
}
