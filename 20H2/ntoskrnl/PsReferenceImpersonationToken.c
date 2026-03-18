/*
 * XREFs of PsReferenceImpersonationToken @ 0x1406BD8E0
 * Callers:
 *     <none>
 * Callees:
 *     PsReferenceImpersonationTokenEx @ 0x14060D780 (PsReferenceImpersonationTokenEx.c)
 */

PACCESS_TOKEN __stdcall PsReferenceImpersonationToken(
        PETHREAD Thread,
        PBOOLEAN CopyOnOpen,
        PBOOLEAN EffectiveOnly,
        PSECURITY_IMPERSONATION_LEVEL ImpersonationLevel)
{
  return PsReferenceImpersonationTokenEx(
           (__int64)Thread,
           1,
           CopyOnOpen,
           (bool *)EffectiveOnly,
           (int *)ImpersonationLevel,
           0LL);
}
