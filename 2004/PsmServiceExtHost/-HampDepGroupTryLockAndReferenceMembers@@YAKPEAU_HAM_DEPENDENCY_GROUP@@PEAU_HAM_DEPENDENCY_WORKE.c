/*
 * XREFs of ?HampDepGroupTryLockAndReferenceMembers@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18001E190
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001B090 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupLockAndReferenceMembers@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x18007E80C (-HampDepGroupLockAndReferenceMembers@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_WORKER_C.c)
 *     ?HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007ECDC (-HampDepGroupTryMerge@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000DEC4 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

__int64 __fastcall HampDepGroupTryLockAndReferenceMembers(
        struct _HAM_DEPENDENCY_GROUP *a1,
        struct _HAM_DEPENDENCY_WORKER_CONTEXT *a2)
{
  DWORD v2; // edi
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v7; // edi
  _QWORD *v8; // rbx
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *v13; // rax
  struct _HAM_DEPENDENCY_WORKER_CONTEXT **v14; // rcx
  _QWORD *v15; // rax
  unsigned __int64 i; // rcx
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  bool v19; // zf
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *j; // rsi
  DWORD v21; // ebp
  _QWORD *v22; // rdi
  DWORD v23; // edi
  _QWORD *v24; // rbx
  __int64 v25; // rax
  struct _HAM_DEPENDENCY_WORKER_CONTEXT *v26; // r8
  __int64 v27; // r15
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  unsigned __int64 k; // rax
  _QWORD *v31; // rdx
  unsigned int v32; // ebx
  _QWORD *v33; // rax

  v2 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v2) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  CurrentThreadId = GetCurrentThreadId();
  v7 = HampLockTrackerId;
  dword_1800B4218 = CurrentThreadId;
  if ( HampLockTrackerId != -1 )
  {
    v8 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v7) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
      __int2c();
    *v8 |= 8uLL;
    ++v8[4];
  }
  RtlAcquireSRWLockExclusive((char *)a1 + 8);
  v9 = (unsigned __int64)a1 + 56;
  *((_DWORD *)a1 + 4) = GetCurrentThreadId();
  v10 = *((_QWORD *)a1 + 8);
  if ( (v10 & 1) != 0 )
  {
    if ( v10 == 1 )
      v11 = 0LL;
    else
      v11 = v10 ^ (v9 | 1);
  }
  else
  {
    v11 = *((_QWORD *)a1 + 8);
  }
  v12 = 0LL;
  if ( v11 )
    v12 = (_QWORD *)(v11 - 704);
  while ( v12 )
  {
    if ( *((int *)v12 - 10) >= 0 )
    {
      ++v12[74];
      v13 = (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)(v12 + 91);
      v14 = (struct _HAM_DEPENDENCY_WORKER_CONTEXT **)*((_QWORD *)a2 + 1);
      if ( *v14 != a2 )
        __fastfail(3u);
      *(_QWORD *)v13 = a2;
      v12[92] = v14;
      *v14 = v13;
      *((_QWORD *)a2 + 1) = v13;
    }
    v15 = v12 + 88;
    i = v12[89];
    if ( i )
    {
      v17 = *(_QWORD **)i;
      if ( *(_QWORD *)i )
      {
        do
        {
          i = (unsigned __int64)v17;
          v17 = (_QWORD *)*v17;
        }
        while ( v17 );
      }
    }
    else
    {
      for ( i = v12[90] & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD **)i == v15 )
          break;
        v15 = (_QWORD *)i;
      }
    }
    v12 = 0LL;
    if ( i )
      v12 = (_QWORD *)(i - 704);
  }
  *((_DWORD *)a1 + 4) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 8);
  if ( HampLockTrackerId != -1 )
  {
    v18 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v18 & 8) == 0 )
      __int2c();
    v19 = v18[4]-- == 1LL;
    if ( v19 )
      *v18 &= ~8uLL;
  }
  for ( j = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)a2; j != a2; j = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)j )
  {
    *((_DWORD *)j + 10) |= 1u;
    v21 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v22 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v21) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
        __int2c();
      *v22 |= 2uLL;
      ++v22[2];
    }
    RtlAcquireSRWLockExclusive((char *)j - 728);
    *((_DWORD *)j - 180) = GetCurrentThreadId();
  }
  v23 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v24 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v23) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
      __int2c();
    *v24 |= 8uLL;
    ++v24[4];
  }
  RtlAcquireSRWLockExclusive((char *)a1 + 8);
  *((_DWORD *)a1 + 4) = GetCurrentThreadId();
  v25 = *((_QWORD *)a1 + 8);
  v26 = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)a2;
  if ( (v25 & 1) != 0 )
  {
    if ( v25 == 1 )
      v27 = 0LL;
    else
      v27 = v25 ^ (v9 | 1);
  }
  else
  {
    v27 = *((_QWORD *)a1 + 8);
  }
  v28 = 0LL;
  if ( v27 )
    v28 = v27 - 704;
  if ( !v28 )
  {
LABEL_53:
    v32 = 1;
    goto LABEL_54;
  }
  while ( *(int *)(v28 - 40) < 0 )
  {
LABEL_47:
    v29 = v28 + 704;
    k = *(_QWORD *)(v28 + 712);
    if ( k )
    {
      v31 = *(_QWORD **)k;
      if ( *(_QWORD *)k )
      {
        do
        {
          k = (unsigned __int64)v31;
          v31 = (_QWORD *)*v31;
        }
        while ( v31 );
      }
    }
    else
    {
      for ( k = *(_QWORD *)(v28 + 720) & 0xFFFFFFFFFFFFFFFCuLL; k; k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)k == v29 )
          break;
        v29 = k;
      }
    }
    v28 = 0LL;
    if ( k )
      v28 = k - 704;
    if ( !v28 )
      goto LABEL_53;
  }
  if ( v26 != a2
    && (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)((char *)v26 - 728) == (struct _HAM_DEPENDENCY_WORKER_CONTEXT *)v28 )
  {
    v26 = *(struct _HAM_DEPENDENCY_WORKER_CONTEXT **)v26;
    goto LABEL_47;
  }
  HampDepGroupReleaseLockExclusive(a1);
  v32 = 0;
LABEL_54:
  dword_1800B4218 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v33 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v33 & 1) == 0 )
      __int2c();
    v19 = v33[1]-- == 1LL;
    if ( v19 )
      *v33 &= ~1uLL;
  }
  return v32;
}
