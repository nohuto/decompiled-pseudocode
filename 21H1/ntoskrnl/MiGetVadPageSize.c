/*
 * XREFs of MiGetVadPageSize @ 0x1405562C0
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1405ED060 (MiAllocateVirtualMemory.c)
 *     MiCheckSecuredVad @ 0x1406163C8 (MiCheckSecuredVad.c)
 *     MmProtectVirtualMemory @ 0x14062CEF0 (MmProtectVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x14062E1C0 (MmFreeVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x140634A10 (MmQueryVirtualMemory.c)
 *     MmSetGraphicsPtes @ 0x1408C2560 (MmSetGraphicsPtes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVadPageSize(__int64 a1)
{
  return MiVadPageSizes[(*(_DWORD *)(a1 + 48) >> 18) & 3];
}
