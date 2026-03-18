/*
 * XREFs of MiGetVadPageSize @ 0x14055A2E0
 * Callers:
 *     MmQueryVirtualMemory @ 0x140621F60 (MmQueryVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x140624BF0 (MmFreeVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x14067B2A0 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x14067CCB0 (MmProtectVirtualMemory.c)
 *     MiCheckSecuredVad @ 0x14068337C (MiCheckSecuredVad.c)
 *     MmSetGraphicsPtes @ 0x1408C96F0 (MmSetGraphicsPtes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVadPageSize(__int64 a1)
{
  return MiVadPageSizes[(*(_DWORD *)(a1 + 48) >> 18) & 3];
}
