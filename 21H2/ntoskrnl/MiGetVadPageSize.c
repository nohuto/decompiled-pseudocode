/*
 * XREFs of MiGetVadPageSize @ 0x14055BDB0
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1405F8650 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1405FA060 (MmProtectVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x14061E930 (MmQueryVirtualMemory.c)
 *     MiCheckSecuredVad @ 0x1406623F8 (MiCheckSecuredVad.c)
 *     MmFreeVirtualMemory @ 0x1406ED600 (MmFreeVirtualMemory.c)
 *     MmSetGraphicsPtes @ 0x1408C6EB0 (MmSetGraphicsPtes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVadPageSize(__int64 a1)
{
  return MiVadPageSizes[(*(_DWORD *)(a1 + 48) >> 18) & 3];
}
