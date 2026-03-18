/*
 * XREFs of VerifierPsDisableImpersonation @ 0x1409D0BA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 VerifierPsDisableImpersonation()
{
  return ((__int64 (*)(void))pXdvPsDisableImpersonation)();
}
