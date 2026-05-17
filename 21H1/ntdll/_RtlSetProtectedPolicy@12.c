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

int __stdcall RtlSetProtectedPolicy(_DWORD *Key, int a2, _DWORD *a3)
{
  int v3; // esi
  void *v4; // ecx
  char *v5; // ebx
  unsigned int v6; // esi
  char *MrdataHeap; // ebx
  void *v8; // edi
  char *v9; // ecx
  char v10; // dl
  int v11; // esi
  char *v13; // eax

  v3 = LdrEnsureMrdataHeapExists();
  if ( v3 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    LdrProtectMrdataHeap(0);
    v4 = RtlpProtectedPolicies;
    if ( RtlpProtectedPolicies )
    {
      v13 = (char *)bsearch(
                      Key,
                      RtlpProtectedPolicies,
                      RtlpProtectedPoliciesActiveCount,
                      0x14u,
                      (_CoreCrtNonSecureSearchSortCompareFunction)RtlpSearchProtectedPolicyEntry);
      v4 = RtlpProtectedPolicies;
      v5 = v13;
    }
    else
    {
      v5 = 0;
    }
    if ( v5 )
    {
      v10 = 0;
    }
    else
    {
      if ( !v4 || RtlpProtectedPoliciesActiveCount + 1 == RtlpProtectedPoliciesTotalCount )
      {
        if ( RtlpProtectedPoliciesTotalCount )
          v6 = 2 * RtlpProtectedPoliciesTotalCount;
        else
          v6 = 16;
        if ( v6 < RtlpProtectedPoliciesTotalCount
          || v6 >= 0xCCCCCCC
          || (MrdataHeap = (char *)LdrAllocateMrdataHeap(20 * v6)) == 0 )
        {
          v3 = -1073741801;
LABEL_19:
          LdrProtectMrdataHeap(1);
          RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
          return v3;
        }
        LdrProtectMrdata(0);
        v8 = RtlpProtectedPolicies;
        if ( RtlpProtectedPolicies )
        {
          memcpy(MrdataHeap, RtlpProtectedPolicies, 20 * RtlpProtectedPoliciesActiveCount);
          if ( LdrControlFlowGuardEnforced() )
            RtlFreeHeap(LdrpMrdataHeap, 0, (int)v8);
          else
            RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v8);
        }
        v9 = MrdataHeap;
        RtlpProtectedPolicies = MrdataHeap;
        RtlpProtectedPoliciesTotalCount = v6;
      }
      else
      {
        LdrProtectMrdata(0);
        v9 = (char *)RtlpProtectedPolicies;
      }
      v5 = &v9[20 * RtlpProtectedPoliciesActiveCount++];
      *(_DWORD *)v5 = 0;
      *((_DWORD *)v5 + 1) = 0;
      *((_DWORD *)v5 + 2) = 0;
      *((_DWORD *)v5 + 3) = 0;
      *((_DWORD *)v5 + 4) = 0;
      *(_DWORD *)v5 = *Key;
      *((_DWORD *)v5 + 1) = Key[1];
      *((_DWORD *)v5 + 2) = Key[2];
      *((_DWORD *)v5 + 3) = Key[3];
      LdrProtectMrdata(1);
      v4 = RtlpProtectedPolicies;
      v10 = 1;
    }
    v11 = *((_DWORD *)v5 + 4);
    *((_DWORD *)v5 + 4) = a2;
    if ( a3 )
      *a3 = v11;
    if ( v10 )
      qsort(
        v4,
        RtlpProtectedPoliciesActiveCount,
        0x14u,
        (_CoreCrtNonSecureSearchSortCompareFunction)RtlpSearchProtectedPolicyEntry);
    v3 = 0;
    goto LABEL_19;
  }
  return v3;
}
