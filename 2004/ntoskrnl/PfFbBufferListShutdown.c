/*
 * XREFs of PfFbBufferListShutdown @ 0x14055FA88
 * Callers:
 *     PfTCleanup @ 0x1408DCDBC (PfTCleanup.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402FA0C0 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall PfFbBufferListShutdown(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1);
}
