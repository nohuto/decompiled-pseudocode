/*
 * XREFs of HalpPciMarkHiberPhase @ 0x1403846CC
 * Callers:
 *     HaliLocateHiberRanges @ 0x140991DB0 (HaliLocateHiberRanges.c)
 * Callees:
 *     PoSetHiberRange @ 0x1403847F0 (PoSetHiberRange.c)
 */

void __fastcall HalpPciMarkHiberPhase(void *a1)
{
  PoSetHiberRange(a1, 2u, &HalpPCIConfigLock, 8uLL, 0x69635048u);
}
