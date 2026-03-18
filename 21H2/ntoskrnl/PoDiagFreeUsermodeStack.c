/*
 * XREFs of PoDiagFreeUsermodeStack @ 0x1406EA338
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14025D2C4 (ExCleanTimerResolutionRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PoDiagFreeUsermodeStack(void *a1)
{
  ExFreePoolWithTag(a1, 0x50455654u);
}
