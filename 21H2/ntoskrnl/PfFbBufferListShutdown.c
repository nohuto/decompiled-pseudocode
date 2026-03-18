/*
 * XREFs of PfFbBufferListShutdown @ 0x1405C6630
 * Callers:
 *     PfTCleanup @ 0x1409882B4 (PfTCleanup.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall PfFbBufferListShutdown(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
