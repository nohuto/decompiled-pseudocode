/*
 * XREFs of HalpPciMarkHiberPhase @ 0x14038563C
 * Callers:
 *     HaliLocateHiberRanges @ 0x1409933F0 (HaliLocateHiberRanges.c)
 * Callees:
 *     PoSetHiberRange @ 0x140385760 (PoSetHiberRange.c)
 */

void __fastcall HalpPciMarkHiberPhase(void *a1)
{
  PoSetHiberRange(a1, 2u, &HalpPCIConfigLock, 8uLL, 0x69635048u);
}
