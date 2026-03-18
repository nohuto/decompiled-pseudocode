/*
 * XREFs of VerifierKeReadStateTimer @ 0x1409D7F20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReadStateTimer()
{
  return ((__int64 (*)(void))pXdvKeReadStateTimer)();
}
