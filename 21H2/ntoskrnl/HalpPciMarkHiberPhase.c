/*
 * XREFs of HalpPciMarkHiberPhase @ 0x140387F3C
 * Callers:
 *     HaliLocateHiberRanges @ 0x140996620 (HaliLocateHiberRanges.c)
 * Callees:
 *     PoSetHiberRange @ 0x140388060 (PoSetHiberRange.c)
 */

void __fastcall HalpPciMarkHiberPhase(void *a1)
{
  PoSetHiberRange(a1, 2u, &HalpPCIConfigLock, 8uLL, 0x69635048u);
}
