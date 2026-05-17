/*
 * XREFs of RtlQueryProtectedPolicy @ 0x1800818D0
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x18006DDB0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlpAddVectoredHandler @ 0x180081690 (RtlpAddVectoredHandler.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     bsearch @ 0x18008ECC0 (bsearch.c)
 */

__int64 __fastcall RtlQueryProtectedPolicy(void *Key, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v6; // ebx
  _QWORD *v8; // rax

  v6 = -1073741275;
  if ( RtlpProtectedPolicies )
  {
    RtlAcquireSRWLockShared(&RtlpProtectedPoliciesSRWLock, (unsigned __int64)a2, a3, a4);
    v8 = bsearch(
           Key,
           RtlpProtectedPolicies,
           (unsigned int)RtlpProtectedPoliciesActiveCount,
           0x18uLL,
           (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
    if ( v8 )
    {
      v6 = 0;
      *a2 = v8[2];
    }
    RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
  }
  return v6;
}
