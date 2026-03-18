/*
 * XREFs of VerifierKeQueryRuntimeThread @ 0x1409D0420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeQueryRuntimeThread()
{
  return ((__int64 (*)(void))pXdvKeQueryRuntimeThread)();
}
