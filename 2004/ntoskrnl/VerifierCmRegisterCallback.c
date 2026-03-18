/*
 * XREFs of VerifierCmRegisterCallback @ 0x1409CEA00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 VerifierCmRegisterCallback()
{
  return ((__int64 (*)(void))pXdvCmRegisterCallback)();
}
