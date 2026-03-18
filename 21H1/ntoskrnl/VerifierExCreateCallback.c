/*
 * XREFs of VerifierExCreateCallback @ 0x1409CEB20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierExCreateCallback()
{
  return ((__int64 (*)(void))pXdvExCreateCallback)();
}
