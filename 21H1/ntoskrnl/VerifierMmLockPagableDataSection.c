/*
 * XREFs of VerifierMmLockPagableDataSection @ 0x1409D06D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierMmLockPagableDataSection()
{
  return ((__int64 (*)(void))pXdvMmLockPagableDataSection)();
}
