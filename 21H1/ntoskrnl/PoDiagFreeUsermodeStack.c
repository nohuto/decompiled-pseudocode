/*
 * XREFs of PoDiagFreeUsermodeStack @ 0x14071F334
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x140369E14 (ExCleanTimerResolutionRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PoDiagFreeUsermodeStack(void *a1)
{
  ExFreePoolWithTag(a1, 0x50455654u);
}
