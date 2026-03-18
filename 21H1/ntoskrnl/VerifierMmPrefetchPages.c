/*
 * XREFs of VerifierMmPrefetchPages @ 0x1409D0750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierMmPrefetchPages()
{
  return ((__int64 (*)(void))pXdvMmPrefetchPages)();
}
