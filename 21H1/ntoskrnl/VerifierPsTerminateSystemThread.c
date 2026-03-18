/*
 * XREFs of VerifierPsTerminateSystemThread @ 0x1409D0D20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierPsTerminateSystemThread()
{
  return ((__int64 (*)(void))pXdvPsTerminateSystemThread)();
}
