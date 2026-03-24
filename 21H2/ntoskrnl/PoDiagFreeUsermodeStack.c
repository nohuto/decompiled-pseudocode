/*
 * XREFs of PoDiagFreeUsermodeStack @ 0x140733434
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14036CDE4 (ExCleanTimerResolutionRequest.c)
 *     NtSetTimerResolution @ 0x1406DC720 (NtSetTimerResolution.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall PoDiagFreeUsermodeStack(void *a1)
{
  ExFreePoolWithTag(a1, 0x50455654u);
}
