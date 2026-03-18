/*
 * XREFs of PoDiagFreeUsermodeStack @ 0x1407211F4
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14036A7D4 (ExCleanTimerResolutionRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall PoDiagFreeUsermodeStack(void *a1)
{
  ExFreePoolWithTag(a1, 0x50455654u);
}
