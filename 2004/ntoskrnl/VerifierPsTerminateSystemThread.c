/*
 * XREFs of VerifierPsTerminateSystemThread @ 0x1409D0D30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 VerifierPsTerminateSystemThread()
{
  return ((__int64 (*)(void))pXdvPsTerminateSystemThread)();
}
