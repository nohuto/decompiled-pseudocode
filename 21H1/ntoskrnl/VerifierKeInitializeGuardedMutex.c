/*
 * XREFs of VerifierKeInitializeGuardedMutex @ 0x1409D0330
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeInitializeGuardedMutex()
{
  return ((__int64 (*)(void))pXdvKeInitializeGuardedMutex)();
}
