/*
 * XREFs of HalpPciMarkHiberPhase @ 0x14038D4BC
 * Callers:
 *     HaliLocateHiberRanges @ 0x140A4EB20 (HaliLocateHiberRanges.c)
 * Callees:
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 */

void __fastcall HalpPciMarkHiberPhase(void *a1)
{
  PoSetHiberRange(a1, 2u, &HalpPCIConfigLock, 8uLL, 0x69635048u);
}
