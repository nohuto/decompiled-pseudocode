/*
 * XREFs of PfFbBufferListShutdown @ 0x14055F438
 * Callers:
 *     PfTCleanup @ 0x1408DBA4C (PfTCleanup.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1403560A0 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall PfFbBufferListShutdown(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
