/*
 * XREFs of VerifierExUnregisterCallback @ 0x1409CEE40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 VerifierExUnregisterCallback()
{
  return ((__int64 (*)(void))pXdvExUnregisterCallback)();
}
