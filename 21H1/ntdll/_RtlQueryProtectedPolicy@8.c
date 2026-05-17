/*
 * XREFs of _RtlQueryProtectedPolicy@8 @ 0x4B2ED030
 * Callers:
 *     _RtlpAddVectoredHandler@12 @ 0x4B2AB096 (_RtlpAddVectoredHandler@12.c)
 *     _RtlGuardCheckLongJumpTarget@12 @ 0x4B3639C0 (_RtlGuardCheckLongJumpTarget@12.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _bsearch @ 0x4B2F8160 (_bsearch.c)
 */

int __stdcall RtlQueryProtectedPolicy(void *Key, _DWORD *a2)
{
  int v2; // esi
  _DWORD *v3; // eax

  v2 = -1073741275;
  if ( RtlpProtectedPolicies )
  {
    RtlAcquireSRWLockShared(&RtlpProtectedPoliciesSRWLock);
    v3 = bsearch(
           Key,
           RtlpProtectedPolicies,
           RtlpProtectedPoliciesActiveCount,
           0x14u,
           (_CoreCrtNonSecureSearchSortCompareFunction)RtlpSearchProtectedPolicyEntry);
    if ( v3 )
    {
      v2 = 0;
      *a2 = v3[4];
    }
    RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
  }
  return v2;
}
