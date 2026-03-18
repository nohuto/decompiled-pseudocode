/*
 * XREFs of VerifierPsDisableImpersonation @ 0x1409D0B90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierPsDisableImpersonation()
{
  return ((__int64 (*)(void))pXdvPsDisableImpersonation)();
}
