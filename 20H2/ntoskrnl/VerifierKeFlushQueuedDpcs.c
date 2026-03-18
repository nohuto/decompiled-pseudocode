/*
 * XREFs of VerifierKeFlushQueuedDpcs @ 0x1409D6320
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeFlushQueuedDpcs()
{
  return ((__int64 (*)(void))pXdvKeFlushQueuedDpcs)();
}
