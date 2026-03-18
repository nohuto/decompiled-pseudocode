/*
 * XREFs of VerifierExGetSharedWaiterCount @ 0x1409D4BC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 VerifierExGetSharedWaiterCount()
{
  return ((__int64 (*)(void))pXdvExGetSharedWaiterCount)();
}
