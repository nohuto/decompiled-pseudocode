/*
 * XREFs of LdrpMergeNodes @ 0x18006E608
 * Callers:
 *     LdrpCondenseGraphRecurse @ 0x18006E468 (LdrpCondenseGraphRecurse.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     LdrpLogDbgPrint @ 0x1800CDCC8 (LdrpLogDbgPrint.c)
 */

int __fastcall LdrpMergeNodes(__int64 a1, _QWORD **a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rsi
  __int64 v6; // rax
  _QWORD *v7; // rcx
  bool v8; // zf
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // r8
  _QWORD *v15; // rdx
  _QWORD *i; // rcx
  _QWORD *v17; // rdi
  _QWORD **v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // r8
  _QWORD *v22; // rax
  _QWORD **v23; // r14
  _QWORD **v24; // rsi
  _QWORD *k; // rdi
  _QWORD **v26; // r8
  _QWORD *v27; // r9
  _QWORD *j; // r10
  _QWORD **v29; // rax
  _QWORD *v30; // rdi
  _QWORD *v31; // rdx
  _QWORD *v32; // rcx
  _QWORD *v33; // r8
  __int64 v34; // rdx
  _QWORD *v35; // r9
  _QWORD *v36; // rax
  _QWORD **v37; // rax
  _QWORD **v38; // rcx
  _QWORD *m; // r9
  _QWORD **v40; // rax

  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrddag.c",
      996,
      (unsigned int)"LdrpMergeNodes",
      2,
      (__int64)"Merging a cycle rooted at %wZ.\n",
      *(_QWORD *)a1 - 72LL);
  v4 = *a2;
  do
  {
    v5 = (_QWORD *)*(v4 - 8);
    v6 = *v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5 )
      goto LABEL_80;
    v7 = (_QWORD *)v5[1];
    if ( (_QWORD *)*v7 != v5 )
      goto LABEL_80;
    v8 = (LdrpDebugFlags & 5) == 0;
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    if ( !v8 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrddag.c",
        1032,
        (unsigned int)"LdrpMergeNodes",
        2,
        (__int64)"Adding cyclic module %wZ.\n",
        v5 - 9);
    *(v5 - 1) = a1;
    v9 = *(_QWORD **)(a1 + 8);
    if ( *v9 != a1 )
LABEL_80:
      __fastfail(3u);
    v5[1] = v9;
    *v5 = a1;
    *v9 = v5;
    *(_QWORD *)(a1 + 8) = v5;
    *(_DWORD *)(a1 + 24) += *((_DWORD *)v4 - 10);
    v10 = (_QWORD *)*(v4 - 3);
    *((_DWORD *)v4 - 10) = 0;
    v11 = v10;
    *((_DWORD *)v4 - 2) = -5;
    do
    {
      v11 = (_QWORD *)*v11;
      v11[3] = a1;
    }
    while ( v11 != v10 );
    v12 = (_QWORD *)*(v4 - 2);
    v13 = v12;
    do
    {
      v13 = (_QWORD *)*v13;
      *(v13 - 1) = a1;
    }
    while ( v13 != v12 );
    v4 = (_QWORD *)*v4;
  }
  while ( v4 );
  v14 = *(_QWORD **)(a1 + 40);
  v15 = v14;
  for ( i = (_QWORD *)*v14; ; i = (_QWORD *)*v15 )
  {
    if ( i[1] == a1 )
    {
      v13 = (_QWORD *)*i;
      *v15 = *i;
      if ( *(_QWORD **)(a1 + 40) == i )
      {
        v13 = 0LL;
        if ( v15 != i )
          v13 = v15;
        *(_QWORD *)(a1 + 40) = v13;
      }
      *i = 0LL;
    }
    else
    {
      v15 = i;
    }
    if ( i == v14 )
      break;
  }
  v17 = *a2;
  do
  {
    while ( 1 )
    {
      v18 = (_QWORD **)*(v17 - 3);
      if ( !v18 )
        break;
      v19 = *v18;
      if ( *v18 == v18 )
      {
        *(v17 - 3) = 0LL;
      }
      else
      {
        v13 = (_QWORD *)*v19;
        *v18 = (_QWORD *)*v19;
      }
      if ( !v19 )
        break;
      v20 = v19[1];
      if ( v20 == a1 )
      {
        *v19 = 0LL;
      }
      else
      {
        v21 = *(_QWORD **)(a1 + 40);
        if ( v21 )
        {
          v22 = *(_QWORD **)(a1 + 40);
          while ( 1 )
          {
            v22 = (_QWORD *)*v22;
            if ( v22[1] == v20 )
              break;
            if ( v22 == v21 )
            {
              v13 = (_QWORD *)*v21;
              *v19 = *v21;
              *v21 = v19;
              goto LABEL_34;
            }
          }
          v26 = *(_QWORD ***)(v20 + 48);
          v27 = v19 + 2;
          for ( j = *v26; j != v27; j = (_QWORD *)*j )
            v26 = (_QWORD **)j;
          *v26 = (_QWORD *)*v27;
          if ( *(_QWORD **)(v20 + 48) == v27 )
          {
            v29 = 0LL;
            if ( v26 != v27 )
              v29 = v26;
            *(_QWORD *)(v20 + 48) = v29;
          }
          --*(_DWORD *)(v20 + 24);
          LODWORD(v13) = RtlFreeHeap(LdrpHeap, 0, v19);
        }
        else
        {
          *v19 = v19;
LABEL_34:
          *(_QWORD *)(a1 + 40) = v19;
        }
      }
    }
    v17 = (_QWORD *)*v17;
  }
  while ( v17 );
  v23 = *(_QWORD ***)(a1 + 48);
  v24 = v23;
  for ( k = *v23; ; k = *v24 )
  {
    if ( k[1] == a1 )
    {
      *v24 = (_QWORD *)*k;
      if ( *(_QWORD **)(a1 + 48) == k )
      {
        v37 = 0LL;
        if ( v24 != k )
          v37 = v24;
        *(_QWORD *)(a1 + 48) = v37;
      }
      --*(_DWORD *)(a1 + 24);
      LODWORD(v13) = RtlFreeHeap(LdrpHeap, 0, k - 2);
    }
    else
    {
      v24 = (_QWORD **)k;
    }
    if ( k == v23 )
      break;
  }
  v30 = *a2;
  do
  {
    while ( 1 )
    {
      v31 = (_QWORD *)*(v30 - 2);
      if ( !v31 )
        break;
      v32 = (_QWORD *)*v31;
      if ( (_QWORD *)*v31 == v31 )
      {
        *(v30 - 2) = 0LL;
      }
      else
      {
        v13 = (_QWORD *)*v32;
        *v31 = *v32;
      }
      if ( !v32 )
        break;
      v33 = v32 - 2;
      v34 = v32[1];
      if ( v34 == a1 )
        goto LABEL_57;
      v35 = *(_QWORD **)(a1 + 48);
      if ( v35 )
      {
        v36 = *(_QWORD **)(a1 + 48);
        while ( 1 )
        {
          v36 = (_QWORD *)*v36;
          if ( v36[1] == v34 )
            break;
          if ( v36 == v35 )
          {
            v13 = (_QWORD *)*v35;
            *v32 = *v35;
            *v35 = v32;
            goto LABEL_68;
          }
        }
        v38 = *(_QWORD ***)(v34 + 40);
        for ( m = *v38; m != v33; m = (_QWORD *)*m )
          v38 = (_QWORD **)m;
        *v38 = (_QWORD *)*v33;
        if ( *(_QWORD **)(v34 + 40) == v33 )
        {
          v40 = 0LL;
          if ( v38 != v33 )
            v40 = v38;
          *(_QWORD *)(v34 + 40) = v40;
        }
LABEL_57:
        --*(_DWORD *)(a1 + 24);
        LODWORD(v13) = RtlFreeHeap(LdrpHeap, 0, v33);
      }
      else
      {
        *v32 = v32;
LABEL_68:
        *(_QWORD *)(a1 + 48) = v32;
      }
    }
    v30 = (_QWORD *)*v30;
  }
  while ( v30 );
  return (int)v13;
}
