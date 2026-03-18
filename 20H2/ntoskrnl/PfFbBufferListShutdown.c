/*
 * XREFs of PfFbBufferListShutdown @ 0x14056345C
 * Callers:
 *     PfTCleanup @ 0x1408E2BFC (PfTCleanup.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402D5F70 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall PfFbBufferListShutdown(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
