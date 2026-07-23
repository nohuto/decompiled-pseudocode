/*
 * XREFs of RtlSetProtectedPolicy @ 0x180080B30
 * Callers:
 *     <none>
 * Callees:
 *     LdrEnsureMrdataHeapExists @ 0x18000787C (LdrEnsureMrdataHeapExists.c)
 *     RtlProtectHeap @ 0x18000E0E0 (RtlProtectHeap.c)
 *     LdrProtectMrdata @ 0x180012224 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180033520 (LdrControlFlowGuardEnforced.c)
 *     bsearch @ 0x18008ECC0 (bsearch.c)
 *     qsort @ 0x1800900E0 (qsort.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 */

NTSTATUS __cdecl RtlSetProtectedPolicy(PGUID PolicyGuid, ULONG_PTR PolicyValue, PULONG_PTR OldPolicyValue)
{
  char v6; // di
  int v7; // ebx
  int v8; // eax
  int v9; // ebx
  PVOID v10; // rax
  char *v11; // rbx
  unsigned int v12; // ebx
  int v13; // eax
  PVOID ProcessHeap; // rcx
  char *Heap; // rsi
  PVOID v16; // rdi
  unsigned __int64 v17; // rcx
  int v18; // eax
  int v19; // edx
  int v21; // eax
  PVOID v22; // rcx

  v6 = 0;
  v7 = LdrEnsureMrdataHeapExists();
  if ( v7 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    LOBYTE(v8) = LdrControlFlowGuardEnforced();
    if ( v8 )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v9 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        RtlProtectHeap(LdrpMrdataHeap, 0);
      if ( v9 == -1 )
        goto LABEL_43;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v9 + 1;
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    v10 = RtlpProtectedPolicies;
    if ( RtlpProtectedPolicies )
    {
      v11 = (char *)bsearch(
                      PolicyGuid,
                      RtlpProtectedPolicies,
                      (unsigned int)RtlpProtectedPoliciesActiveCount,
                      0x18uLL,
                      (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
      v10 = RtlpProtectedPolicies;
    }
    else
    {
      v11 = 0LL;
    }
    if ( v11 )
      goto LABEL_22;
    if ( v10 && (_DWORD)RtlpProtectedPoliciesActiveCount + 1 != RtlpProtectedPoliciesTotalCount )
    {
      LdrProtectMrdata(0);
      Heap = (char *)RtlpProtectedPolicies;
LABEL_21:
      v11 = &Heap[24 * (unsigned int)RtlpProtectedPoliciesActiveCount];
      LODWORD(RtlpProtectedPoliciesActiveCount) = RtlpProtectedPoliciesActiveCount + 1;
      *(_OWORD *)v11 = 0LL;
      *((_QWORD *)v11 + 2) = 0LL;
      *(GUID *)v11 = *PolicyGuid;
      LdrProtectMrdata(1);
      v10 = RtlpProtectedPolicies;
      v6 = 1;
LABEL_22:
      v17 = *((_QWORD *)v11 + 2);
      *((_QWORD *)v11 + 2) = PolicyValue;
      if ( OldPolicyValue )
        *OldPolicyValue = v17;
      if ( v6 )
        qsort(
          v10,
          (unsigned int)RtlpProtectedPoliciesActiveCount,
          0x18uLL,
          (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
      v7 = 0;
      goto LABEL_27;
    }
    v12 = 16;
    if ( RtlpProtectedPoliciesTotalCount )
      v12 = 2 * RtlpProtectedPoliciesTotalCount;
    if ( v12 >= RtlpProtectedPoliciesTotalCount && v12 < 0xAAAAAAA )
    {
      LOBYTE(v13) = LdrControlFlowGuardEnforced();
      if ( v13 )
      {
        if ( 24 * (unsigned __int64)v12 >= 0xFF000 )
          goto LABEL_42;
        ProcessHeap = LdrpMrdataHeap;
      }
      else
      {
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
      }
      Heap = (char *)RtlAllocateHeap(ProcessHeap, 0, 24LL * v12);
      if ( Heap )
      {
        LdrProtectMrdata(0);
        v16 = RtlpProtectedPolicies;
        if ( RtlpProtectedPolicies )
        {
          memmove(Heap, RtlpProtectedPolicies, 24LL * (unsigned int)RtlpProtectedPoliciesActiveCount);
          LOBYTE(v21) = LdrControlFlowGuardEnforced();
          if ( v21 )
            v22 = LdrpMrdataHeap;
          else
            v22 = NtCurrentPeb()->ProcessHeap;
          RtlFreeHeap(v22, 0, v16);
        }
        RtlpProtectedPolicies = Heap;
        RtlpProtectedPoliciesTotalCount = v12;
        goto LABEL_21;
      }
    }
LABEL_42:
    v7 = -1073741801;
LABEL_27:
    LOBYTE(v18) = LdrControlFlowGuardEnforced();
    if ( !v18 )
    {
LABEL_32:
      RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
      return v7;
    }
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v19 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      *(_DWORD *)LdrpMrdataHeapUnprotected = v19 - 1;
      if ( v19 == 1 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      goto LABEL_32;
    }
LABEL_43:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  return v7;
}
