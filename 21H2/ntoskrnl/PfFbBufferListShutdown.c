/*
 * XREFs of PfFbBufferListShutdown @ 0x14056516C
 * Callers:
 *     PfTCleanup @ 0x1408E051C (PfTCleanup.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140267780 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall PfFbBufferListShutdown(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
