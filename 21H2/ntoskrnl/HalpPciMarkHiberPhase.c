/*
 * XREFs of HalpPciMarkHiberPhase @ 0x14038808C
 * Callers:
 *     HaliLocateHiberRanges @ 0x140997620 (HaliLocateHiberRanges.c)
 * Callees:
 *     PoSetHiberRange @ 0x1403881B0 (PoSetHiberRange.c)
 */

void __fastcall HalpPciMarkHiberPhase(void *a1)
{
  PoSetHiberRange(a1, 2u, &HalpPCIConfigLock, 8uLL, 0x69635048u);
}
