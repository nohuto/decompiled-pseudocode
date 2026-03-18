/*
 * XREFs of MiGetVadPageSize @ 0x140556910
 * Callers:
 *     MmProtectVirtualMemory @ 0x1405F7EB0 (MmProtectVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x1405F9180 (MmFreeVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1405FF9D0 (MmQueryVirtualMemory.c)
 *     MiCheckSecuredVad @ 0x14062F008 (MiCheckSecuredVad.c)
 *     MiAllocateVirtualMemory @ 0x140696560 (MiAllocateVirtualMemory.c)
 *     MmSetGraphicsPtes @ 0x1408C38B0 (MmSetGraphicsPtes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVadPageSize(__int64 a1)
{
  return MiVadPageSizes[(*(_DWORD *)(a1 + 48) >> 18) & 3];
}
