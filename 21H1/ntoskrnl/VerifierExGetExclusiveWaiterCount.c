/*
 * XREFs of VerifierExGetExclusiveWaiterCount @ 0x1409CEB70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierExGetExclusiveWaiterCount()
{
  return ((__int64 (*)(void))pXdvExGetExclusiveWaiterCount)();
}
