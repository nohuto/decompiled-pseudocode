/*
 * XREFs of VerifierExRegisterCallback @ 0x1409CED30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierExRegisterCallback()
{
  return ((__int64 (*)(void))pXdvExRegisterCallback)();
}
