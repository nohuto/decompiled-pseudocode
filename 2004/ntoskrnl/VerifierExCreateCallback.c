/*
 * XREFs of VerifierExCreateCallback @ 0x1409CEB30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 VerifierExCreateCallback()
{
  return ((__int64 (*)(void))pXdvExCreateCallback)();
}
