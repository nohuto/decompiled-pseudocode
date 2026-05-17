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

__int64 __fastcall RtlSetProtectedPolicy(_OWORD *Key, __int64 a2, _QWORD *a3)
{
  char v6; // di
  unsigned __int64 v7; // rdx
  int v8; // ebx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  int v14; // ebx
  void *v15; // rax
  char *v16; // rbx
  unsigned int v17; // ebx
  void *ProcessHeap; // rcx
  char *Heap; // rsi
  void *v20; // rdi
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r9
  int v25; // edx
  void *v27; // rcx

  v6 = 0;
  v8 = LdrEnsureMrdataHeapExists();
  if ( v8 >= 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpProtectedPoliciesSRWLock, v7, v9, v10);
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v11, v12, v13);
      v14 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
      if ( v14 == -1 )
        goto LABEL_43;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v14 + 1;
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    v15 = RtlpProtectedPolicies;
    if ( RtlpProtectedPolicies )
    {
      v16 = (char *)bsearch(
                      Key,
                      RtlpProtectedPolicies,
                      (unsigned int)RtlpProtectedPoliciesActiveCount,
                      0x18uLL,
                      (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
      v15 = RtlpProtectedPolicies;
    }
    else
    {
      v16 = 0LL;
    }
    if ( v16 )
      goto LABEL_22;
    if ( v15 && (_DWORD)RtlpProtectedPoliciesActiveCount + 1 != RtlpProtectedPoliciesTotalCount )
    {
      LdrProtectMrdata(0);
      Heap = (char *)RtlpProtectedPolicies;
LABEL_21:
      v16 = &Heap[24 * (unsigned int)RtlpProtectedPoliciesActiveCount];
      LODWORD(RtlpProtectedPoliciesActiveCount) = RtlpProtectedPoliciesActiveCount + 1;
      *(_OWORD *)v16 = 0LL;
      *((_QWORD *)v16 + 2) = 0LL;
      *(_OWORD *)v16 = *Key;
      LdrProtectMrdata(1);
      v15 = RtlpProtectedPolicies;
      v6 = 1;
LABEL_22:
      v21 = *((_QWORD *)v16 + 2);
      *((_QWORD *)v16 + 2) = a2;
      if ( a3 )
        *a3 = v21;
      if ( v6 )
        qsort(
          v15,
          (unsigned int)RtlpProtectedPoliciesActiveCount,
          0x18uLL,
          (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
      v8 = 0;
      goto LABEL_27;
    }
    v17 = 16;
    if ( RtlpProtectedPoliciesTotalCount )
      v17 = 2 * RtlpProtectedPoliciesTotalCount;
    if ( v17 >= RtlpProtectedPoliciesTotalCount && v17 < 0xAAAAAAA )
    {
      if ( (unsigned int)LdrControlFlowGuardEnforced() )
      {
        if ( 24 * (unsigned __int64)v17 >= 0xFF000 )
          goto LABEL_42;
        ProcessHeap = (void *)LdrpMrdataHeap;
      }
      else
      {
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
      }
      Heap = (char *)RtlAllocateHeap((__int64)ProcessHeap, 0, 24LL * v17);
      if ( Heap )
      {
        LdrProtectMrdata(0);
        v20 = RtlpProtectedPolicies;
        if ( RtlpProtectedPolicies )
        {
          memmove(Heap, RtlpProtectedPolicies, 24LL * (unsigned int)RtlpProtectedPoliciesActiveCount);
          if ( (unsigned int)LdrControlFlowGuardEnforced() )
            v27 = (void *)LdrpMrdataHeap;
          else
            v27 = NtCurrentPeb()->ProcessHeap;
          RtlFreeHeap((__int64)v27, 0, (__int64)v20);
        }
        RtlpProtectedPolicies = Heap;
        RtlpProtectedPoliciesTotalCount = v17;
        goto LABEL_21;
      }
    }
LABEL_42:
    v8 = -1073741801;
LABEL_27:
    if ( !(unsigned int)LdrControlFlowGuardEnforced() )
    {
LABEL_32:
      RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
      return (unsigned int)v8;
    }
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v22, v23, v24);
    v25 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      *(_DWORD *)LdrpMrdataHeapUnprotected = v25 - 1;
      if ( v25 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      goto LABEL_32;
    }
LABEL_43:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  return (unsigned int)v8;
}
