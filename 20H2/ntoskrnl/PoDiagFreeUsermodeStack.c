/*
 * XREFs of PoDiagFreeUsermodeStack @ 0x14072F1E4
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14036C7B4 (ExCleanTimerResolutionRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PoDiagFreeUsermodeStack(void *a1)
{
  ExFreePoolWithTag(a1, 0x50455654u);
}
