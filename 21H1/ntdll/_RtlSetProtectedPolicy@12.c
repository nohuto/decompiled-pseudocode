/*
 * XREFs of _RtlSetProtectedPolicy@12 @ 0x4B2EA320
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _LdrControlFlowGuardEnforced@0 @ 0x4B2D0100 (_LdrControlFlowGuardEnforced@0.c)
 *     _LdrEnsureMrdataHeapExists@0 @ 0x4B2E1C77 (_LdrEnsureMrdataHeapExists@0.c)
 *     _LdrProtectMrdata@4 @ 0x4B2E1D36 (_LdrProtectMrdata@4.c)
 *     _LdrProtectMrdataHeap@4 @ 0x4B2EC610 (_LdrProtectMrdataHeap@4.c)
 *     _LdrAllocateMrdataHeap@4 @ 0x4B2EC928 (_LdrAllocateMrdataHeap@4.c)
 *     _bsearch @ 0x4B2F8160 (_bsearch.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _qsort @ 0x4B2F8FA0 (_qsort.c)
 */

NTSTATUS __cdecl RtlSetProtectedPolicy(PGUID PolicyGuid, ULONG_PTR PolicyValue, PULONG_PTR OldPolicyValue)
{
  int (__cdecl *v3)(const void *, const void *); // ebx
  int v4; // edi
  int v5; // esi
  PVOID v6; // ecx
  GUID *v7; // ebx
  unsigned int v8; // esi
  char *MrdataHeap; // ebx
  PVOID v10; // edi
  char *v11; // ecx
  char v12; // dl
  unsigned int Data1; // esi
  GUID *v15; // eax
  int v16; // eax
  size_t v17; // [esp-Ch] [ebp-18h]
  int (__cdecl *v18)(const void *, const void *); // [esp-4h] [ebp-10h]

  v5 = LdrEnsureMrdataHeapExists();
  if ( v5 >= 0 )
  {
    v18 = v3;
    HIDWORD(v17) = v4;
    RtlAcquireSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    LdrProtectMrdataHeap(0);
    v6 = RtlpProtectedPolicies;
    if ( RtlpProtectedPolicies )
    {
      LODWORD(v17) = RtlpSearchProtectedPolicyEntry;
      v15 = (GUID *)bsearch(
                      PolicyGuid,
                      RtlpProtectedPolicies,
                      (unsigned int)RtlpProtectedPoliciesActiveCount | 0x1400000000LL,
                      v17,
                      v3);
      v6 = RtlpProtectedPolicies;
      v7 = v15;
    }
    else
    {
      v7 = 0;
    }
    if ( v7 )
    {
      v12 = 0;
    }
    else
    {
      if ( !v6 || (_DWORD)RtlpProtectedPoliciesActiveCount + 1 == RtlpProtectedPoliciesTotalCount )
      {
        if ( RtlpProtectedPoliciesTotalCount )
          v8 = 2 * RtlpProtectedPoliciesTotalCount;
        else
          v8 = 16;
        if ( v8 < RtlpProtectedPoliciesTotalCount
          || v8 >= 0xCCCCCCC
          || (MrdataHeap = (char *)LdrAllocateMrdataHeap(20 * v8)) == 0 )
        {
          v5 = -1073741801;
LABEL_19:
          LdrProtectMrdataHeap(1);
          RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
          return v5;
        }
        LdrProtectMrdata(0);
        v10 = RtlpProtectedPolicies;
        if ( RtlpProtectedPolicies )
        {
          LODWORD(v17) = 20 * RtlpProtectedPoliciesActiveCount;
          memcpy(MrdataHeap, RtlpProtectedPolicies, v17);
          LOBYTE(v16) = LdrControlFlowGuardEnforced();
          if ( v16 )
            RtlFreeHeap(LdrpMrdataHeap, 0, v10);
          else
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
        }
        v11 = MrdataHeap;
        RtlpProtectedPolicies = MrdataHeap;
        RtlpProtectedPoliciesTotalCount = v8;
      }
      else
      {
        LdrProtectMrdata(0);
        v11 = (char *)RtlpProtectedPolicies;
      }
      v7 = (GUID *)&v11[20 * RtlpProtectedPoliciesActiveCount];
      LODWORD(RtlpProtectedPoliciesActiveCount) = RtlpProtectedPoliciesActiveCount + 1;
      v7->Data1 = 0;
      *(_DWORD *)&v7->Data2 = 0;
      *(_DWORD *)v7->Data4 = 0;
      *(_DWORD *)&v7->Data4[4] = 0;
      v7[1].Data1 = 0;
      *v7 = *PolicyGuid;
      LdrProtectMrdata(1);
      v6 = RtlpProtectedPolicies;
      v12 = 1;
    }
    Data1 = v7[1].Data1;
    v7[1].Data1 = PolicyValue;
    if ( HIDWORD(PolicyValue) )
      *(_DWORD *)HIDWORD(PolicyValue) = Data1;
    if ( v12 )
    {
      LODWORD(v17) = RtlpSearchProtectedPolicyEntry;
      qsort(v6, (unsigned int)RtlpProtectedPoliciesActiveCount | 0x1400000000LL, v17, v18);
    }
    v5 = 0;
    goto LABEL_19;
  }
  return v5;
}
