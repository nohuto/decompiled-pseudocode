/*
 * XREFs of MiGetVadPageSize @ 0x14030EBF4
 * Callers:
 *     MiCheckSecuredVad @ 0x1407A4C90 (MiCheckSecuredVad.c)
 *     MmFreeVirtualMemory @ 0x1407B99C0 (MmFreeVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1407B9FA0 (MmProtectVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1407BA750 (MmQueryVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1407BE3C0 (MiAllocateVirtualMemory.c)
 *     MmSetGraphicsPtes @ 0x14096B560 (MmSetGraphicsPtes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVadPageSize(__int64 a1)
{
  return MiVadPageSizes[(*(_DWORD *)(a1 + 48) >> 19) & 3];
}
