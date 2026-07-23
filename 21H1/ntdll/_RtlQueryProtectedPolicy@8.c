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

NTSTATUS __cdecl RtlQueryProtectedPolicy(PGUID PolicyGuid, PULONG_PTR PolicyValue)
{
  int v2; // edi
  NTSTATUS v3; // esi
  _DWORD *v4; // eax
  size_t v6; // [esp-8h] [ebp-Ch]
  int (__cdecl *v7)(const void *, const void *); // [esp+0h] [ebp-4h]

  v3 = -1073741275;
  if ( RtlpProtectedPolicies )
  {
    HIDWORD(v6) = v2;
    RtlAcquireSRWLockShared(&RtlpProtectedPoliciesSRWLock);
    LODWORD(v6) = RtlpSearchProtectedPolicyEntry;
    v4 = bsearch(
           PolicyGuid,
           RtlpProtectedPolicies,
           (unsigned int)RtlpProtectedPoliciesActiveCount | 0x1400000000LL,
           v6,
           v7);
    if ( v4 )
    {
      v3 = 0;
      *(_DWORD *)PolicyValue = v4[4];
    }
    RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
  }
  return v3;
}
