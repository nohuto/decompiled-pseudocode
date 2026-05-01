/*
 * XREFs of sub_18001E400 @ 0x18001E400
 * Callers:
 *     sub_18001B300 @ 0x18001B300 (sub_18001B300.c)
 *     sub_18007E80C @ 0x18007E80C (sub_18007E80C.c)
 *     sub_18007ECDC @ 0x18007ECDC (sub_18007ECDC.c)
 * Callees:
 *     sub_18000E244 @ 0x18000E244 (sub_18000E244.c)
 */

__int64 __fastcall sub_18001E400(__int64 a1, _QWORD *a2)
{
  DWORD v2; // edi
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v7; // edi
  _QWORD *v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  unsigned __int64 i; // rcx
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  bool v19; // zf
  _QWORD *j; // rsi
  DWORD v21; // ebp
  _QWORD *v22; // rdi
  DWORD v23; // edi
  _QWORD *v24; // rbx
  __int64 v25; // rax
  _QWORD *v26; // r8
  __int64 v27; // r15
  int *v28; // rdx
  unsigned __int64 v29; // rcx
  unsigned __int64 k; // rax
  _QWORD *v31; // rdx
  unsigned int v32; // ebx
  _QWORD *v33; // rax

  v2 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( *(_QWORD *)TlsGetValue(v2) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&unk_1800B4210);
  CurrentThreadId = GetCurrentThreadId();
  v7 = dwTlsIndex;
  dword_1800B4218 = CurrentThreadId;
  if ( dwTlsIndex != -1 )
  {
    v8 = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v7) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
      __int2c();
    *v8 |= 8uLL;
    ++v8[4];
  }
  RtlAcquireSRWLockExclusive(a1 + 8);
  v9 = a1 + 56;
  *(_DWORD *)(a1 + 16) = GetCurrentThreadId();
  v10 = *(_QWORD *)(a1 + 64);
  if ( (v10 & 1) != 0 )
  {
    if ( v10 == 1 )
      v11 = 0LL;
    else
      v11 = v10 ^ (v9 | 1);
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 64);
  }
  v12 = 0LL;
  if ( v11 )
    v12 = (_QWORD *)(v11 - 704);
  while ( v12 )
  {
    if ( *((int *)v12 - 10) >= 0 )
    {
      ++v12[74];
      v13 = v12 + 91;
      v14 = (_QWORD *)a2[1];
      if ( (_QWORD *)*v14 != a2 )
        __fastfail(3u);
      *v13 = a2;
      v12[92] = v14;
      *v14 = v13;
      a2[1] = v13;
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
  *(_DWORD *)(a1 + 16) = 0;
  RtlReleaseSRWLockExclusive(a1 + 8);
  if ( dwTlsIndex != -1 )
  {
    v18 = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)v18 & 8) == 0 )
      __int2c();
    v19 = v18[4]-- == 1LL;
    if ( v19 )
      *v18 &= ~8uLL;
  }
  for ( j = (_QWORD *)*a2; j != a2; j = (_QWORD *)*j )
  {
    *((_DWORD *)j + 10) |= 1u;
    v21 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      v22 = TlsGetValue(dwTlsIndex);
      if ( (*(_QWORD *)TlsGetValue(v21) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
        __int2c();
      *v22 |= 2uLL;
      ++v22[2];
    }
    RtlAcquireSRWLockExclusive(j - 91);
    *((_DWORD *)j - 180) = GetCurrentThreadId();
  }
  v23 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    v24 = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v23) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
      __int2c();
    *v24 |= 8uLL;
    ++v24[4];
  }
  RtlAcquireSRWLockExclusive(a1 + 8);
  *(_DWORD *)(a1 + 16) = GetCurrentThreadId();
  v25 = *(_QWORD *)(a1 + 64);
  v26 = (_QWORD *)*a2;
  if ( (v25 & 1) != 0 )
  {
    if ( v25 == 1 )
      v27 = 0LL;
    else
      v27 = v25 ^ (v9 | 1);
  }
  else
  {
    v27 = *(_QWORD *)(a1 + 64);
  }
  v28 = 0LL;
  if ( v27 )
    v28 = (int *)(v27 - 704);
  if ( !v28 )
  {
LABEL_53:
    v32 = 1;
    goto LABEL_54;
  }
  while ( *(v28 - 10) < 0 )
  {
LABEL_47:
    v29 = (unsigned __int64)(v28 + 176);
    k = *((_QWORD *)v28 + 89);
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
      for ( k = *((_QWORD *)v28 + 90) & 0xFFFFFFFFFFFFFFFCuLL; k; k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)k == v29 )
          break;
        v29 = k;
      }
    }
    v28 = 0LL;
    if ( k )
      v28 = (int *)(k - 704);
    if ( !v28 )
      goto LABEL_53;
  }
  if ( v26 != a2 && v26 - 91 == (_QWORD *)v28 )
  {
    v26 = (_QWORD *)*v26;
    goto LABEL_47;
  }
  sub_18000E244(a1);
  v32 = 0;
LABEL_54:
  dword_1800B4218 = 0;
  RtlReleaseSRWLockExclusive(&unk_1800B4210);
  if ( dwTlsIndex != -1 )
  {
    v33 = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)v33 & 1) == 0 )
      __int2c();
    v19 = v33[1]-- == 1LL;
    if ( v19 )
      *v33 &= ~1uLL;
  }
  return v32;
}
