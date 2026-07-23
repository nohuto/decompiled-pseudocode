/*
 * XREFs of PoDiagFreeUsermodeStack @ 0x1407335F4
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14036CF94 (ExCleanTimerResolutionRequest.c)
 *     NtSetTimerResolution @ 0x1406B3A00 (NtSetTimerResolution.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PoDiagFreeUsermodeStack(void *a1)
{
  ExFreePoolWithTag(a1, 0x50455654u);
}
