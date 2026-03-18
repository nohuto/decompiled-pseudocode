/*
 * XREFs of VerifierMmResetDriverPaging @ 0x1409D67C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 VerifierMmResetDriverPaging()
{
  return ((__int64 (*)(void))pXdvMmResetDriverPaging)();
}
