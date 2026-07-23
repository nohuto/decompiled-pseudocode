/*
 * XREFs of RtlQueryProtectedPolicy @ 0x1800819D0
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x18006DEC0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlpAddVectoredHandler @ 0x180081790 (RtlpAddVectoredHandler.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     bsearch @ 0x18008EDC0 (bsearch.c)
 */

NTSTATUS __cdecl RtlQueryProtectedPolicy(PGUID PolicyGuid, PULONG_PTR PolicyValue)
{
  NTSTATUS v4; // ebx
  _QWORD *v6; // rax

  v4 = -1073741275;
  if ( RtlpProtectedPolicies )
  {
    RtlAcquireSRWLockShared(&RtlpProtectedPoliciesSRWLock);
    v6 = bsearch(
           PolicyGuid,
           RtlpProtectedPolicies,
           (unsigned int)RtlpProtectedPoliciesActiveCount,
           0x18uLL,
           (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
    if ( v6 )
    {
      v4 = 0;
      *PolicyValue = v6[2];
    }
    RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
  }
  return v4;
}
