/*
 * XREFs of PfFbBufferListShutdown @ 0x140564F2C
 * Callers:
 *     PfTCleanup @ 0x1408E03BC (PfTCleanup.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402797E0 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall PfFbBufferListShutdown(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
