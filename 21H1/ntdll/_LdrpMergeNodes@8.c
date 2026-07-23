/*
 * XREFs of _LdrpMergeNodes@8 @ 0x4B2E21AC
 * Callers:
 *     _LdrpCondenseGraphRecurse@12 @ 0x4B2E2082 (_LdrpCondenseGraphRecurse@12.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 */

_DWORD *__fastcall LdrpMergeNodes(_DWORD *a1, _DWORD **a2)
{
  _DWORD *v3; // esi
  _DWORD *v4; // edi
  _DWORD *v5; // ebx
  int v6; // ecx
  _DWORD *v7; // eax
  bool v8; // zf
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  _DWORD *v11; // eax
  _DWORD *v12; // ecx
  _DWORD *v13; // eax
  _DWORD **v14; // edi
  _DWORD **v15; // edx
  _DWORD *i; // ecx
  _DWORD *v17; // edi
  _DWORD **v18; // edx
  _DWORD *v19; // ecx
  _DWORD *v20; // edx
  _DWORD *v21; // ebx
  _DWORD *v22; // eax
  _DWORD **v23; // ebx
  _DWORD *v24; // eax
  _DWORD *v25; // esi
  _DWORD **v26; // eax
  _DWORD **v27; // ebx
  _DWORD *j; // edi
  _DWORD *result; // eax
  _DWORD *v30; // edi
  _DWORD *v31; // edx
  _DWORD *v32; // ecx
  _DWORD *v33; // edx
  _DWORD *v34; // ebx
  _DWORD *v35; // edx
  _DWORD **v36; // ecx
  _DWORD *v37; // esi
  _DWORD **v38; // [esp+10h] [ebp-10h]
  _DWORD *v40; // [esp+18h] [ebp-8h]

  v3 = a1;
  if ( (ShowSnaps & 5) != 0 )
    LdrpLogDbgPrint(
      "minkernel\\ntdll\\ldrddag.c",
      996,
      "LdrpMergeNodes",
      2,
      "Merging a cycle rooted at %wZ.\n",
      *a1 - 40);
  v4 = *a2;
  do
  {
    v5 = (_DWORD *)*(v4 - 9);
    v6 = *v5;
    if ( *(_DWORD **)(*v5 + 4) != v5 )
      goto LABEL_77;
    v7 = (_DWORD *)v5[1];
    if ( (_DWORD *)*v7 != v5 )
      goto LABEL_77;
    v8 = (ShowSnaps & 5) == 0;
    *v7 = v6;
    *(_DWORD *)(v6 + 4) = v7;
    if ( !v8 )
      LdrpLogDbgPrint("minkernel\\ntdll\\ldrddag.c", 1032, "LdrpMergeNodes", 2, "Adding cyclic module %wZ.\n", v5 - 10);
    *(v5 - 1) = v3;
    v9 = (_DWORD *)v3[1];
    if ( (_DWORD *)*v9 != v3 )
LABEL_77:
      __fastfail(3u);
    v5[1] = v9;
    *v5 = v3;
    *v9 = v5;
    v3[1] = v5;
    v3[3] += *(v4 - 6);
    v10 = (_DWORD *)*(v4 - 3);
    v11 = v10;
    *(v4 - 6) = 0;
    *(v4 - 1) = -5;
    do
    {
      v11 = (_DWORD *)*v11;
      v11[3] = v3;
    }
    while ( v11 != v10 );
    v12 = (_DWORD *)*(v4 - 2);
    v13 = v12;
    do
    {
      v13 = (_DWORD *)*v13;
      *(v13 - 1) = v3;
    }
    while ( v13 != v12 );
    v4 = (_DWORD *)*v4;
  }
  while ( v4 );
  v14 = (_DWORD **)v3[6];
  v15 = v14;
  for ( i = *v14; ; i = *v15 )
  {
    if ( (_DWORD *)i[1] == v3 )
    {
      *v15 = (_DWORD *)*i;
      if ( (_DWORD *)v3[6] == i )
        v3[6] = i != v15 ? v15 : 0;
      *i = 0;
    }
    else
    {
      v15 = (_DWORD **)i;
    }
    if ( i == v14 )
      break;
  }
  v17 = *a2;
  do
  {
    while ( 1 )
    {
      v18 = (_DWORD **)*(v17 - 3);
      if ( !v18 )
        break;
      v19 = *v18;
      if ( *v18 == v18 )
        *(v17 - 3) = 0;
      else
        *v18 = (_DWORD *)*v19;
      if ( !v19 )
        break;
      v20 = (_DWORD *)v19[1];
      if ( v20 == v3 )
      {
        *v19 = 0;
      }
      else
      {
        v21 = (_DWORD *)v3[6];
        if ( v21 )
        {
          v22 = (_DWORD *)v3[6];
          while ( 1 )
          {
            v22 = (_DWORD *)*v22;
            if ( (_DWORD *)v22[1] == v20 )
              break;
            if ( v22 == v21 )
              goto LABEL_33;
          }
          v23 = (_DWORD **)v20[7];
          v24 = v19 + 2;
          v40 = v19 + 2;
          v3 = a1;
          if ( *v23 != v19 + 2 )
          {
            v25 = *v23;
            do
            {
              v23 = (_DWORD **)v25;
              v25 = (_DWORD *)*v25;
            }
            while ( v25 != v40 );
            v3 = a1;
            v24 = v19 + 2;
          }
          *v23 = (_DWORD *)*v24;
          if ( (_DWORD *)v20[7] == v19 + 2 )
            v20[7] = v40 != v23 ? v23 : 0;
          --v20[3];
          RtlFreeHeap(LdrpHeap, 0, v19);
        }
        else
        {
LABEL_33:
          if ( v21 )
          {
            *v19 = *v21;
            *v21 = v19;
          }
          else
          {
            *v19 = v19;
          }
          v3[6] = v19;
        }
      }
    }
    v17 = (_DWORD *)*v17;
  }
  while ( v17 );
  v26 = (_DWORD **)v3[7];
  v27 = v26;
  v38 = v26;
  for ( j = *v26; ; j = *v27 )
  {
    if ( (_DWORD *)j[1] == v3 )
    {
      *v27 = (_DWORD *)*j;
      if ( (_DWORD *)v3[7] == j )
        v3[7] = j != v27 ? v27 : 0;
      --v3[3];
      RtlFreeHeap(LdrpHeap, 0, j - 2);
      v26 = v38;
    }
    else
    {
      v27 = (_DWORD **)j;
    }
    if ( j == v26 )
      break;
  }
  result = a2;
  v30 = *a2;
  do
  {
    while ( 1 )
    {
      v31 = (_DWORD *)*(v30 - 2);
      if ( !v31 )
        break;
      v32 = (_DWORD *)*v31;
      if ( (_DWORD *)*v31 == v31 )
      {
        *(v30 - 2) = 0;
      }
      else
      {
        result = (_DWORD *)*v32;
        *v31 = *v32;
      }
      if ( !v32 )
        break;
      v33 = v32 - 2;
      v34 = (_DWORD *)v32[1];
      if ( v34 == v3 )
        goto LABEL_59;
      if ( v3[7] )
      {
        result = (_DWORD *)v3[7];
        while ( 1 )
        {
          result = (_DWORD *)*result;
          if ( (_DWORD *)result[1] == v34 )
            break;
          if ( result == (_DWORD *)v3[7] )
            goto LABEL_67;
        }
        v36 = (_DWORD **)v34[6];
        if ( *v36 != v33 )
        {
          v37 = *v36;
          do
          {
            v36 = (_DWORD **)v37;
            v37 = (_DWORD *)*v37;
          }
          while ( v37 != v33 );
          v3 = a1;
        }
        *v36 = (_DWORD *)*v33;
        if ( (_DWORD *)v34[6] == v33 )
          v34[6] = v33 != v36 ? v36 : 0;
LABEL_59:
        --v3[3];
        result = (_DWORD *)RtlFreeHeap(LdrpHeap, 0, v33);
      }
      else
      {
LABEL_67:
        v35 = (_DWORD *)v3[7];
        if ( v35 )
        {
          result = (_DWORD *)*v35;
          *v32 = *v35;
          *v35 = v32;
        }
        else
        {
          *v32 = v32;
        }
        v3[7] = v32;
      }
    }
    v30 = (_DWORD *)*v30;
  }
  while ( v30 );
  return result;
}
