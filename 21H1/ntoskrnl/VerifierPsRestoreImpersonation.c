/*
 * XREFs of VerifierPsRestoreImpersonation @ 0x1409D0C60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierPsRestoreImpersonation()
{
  return ((__int64 (*)(void))pXdvPsRestoreImpersonation)();
}
