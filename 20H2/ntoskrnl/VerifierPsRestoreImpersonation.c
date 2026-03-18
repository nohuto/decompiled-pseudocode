/*
 * XREFs of VerifierPsRestoreImpersonation @ 0x1409D6C90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 VerifierPsRestoreImpersonation()
{
  return ((__int64 (*)(void))pXdvPsRestoreImpersonation)();
}
