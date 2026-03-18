/*
 * XREFs of VerifierKeFlushQueuedDpcs @ 0x1409D02F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeFlushQueuedDpcs()
{
  return ((__int64 (*)(void))pXdvKeFlushQueuedDpcs)();
}
