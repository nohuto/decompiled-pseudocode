/*
 * XREFs of _RtlCompareAltitudes@8 @ 0x4B35A270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlCompareAltitudes(int a1, int a2)
{
  unsigned __int16 v2; // si
  unsigned __int16 v3; // di
  unsigned __int16 v4; // bx
  unsigned __int16 v5; // cx
  unsigned __int16 i; // dx
  int v7; // eax
  unsigned __int16 v8; // bx
  unsigned __int16 v9; // dx
  _WORD *v10; // ebx
  int v11; // eax
  unsigned __int16 v12; // dx
  _WORD *v13; // edi
  bool v14; // cf
  int result; // eax
  unsigned __int16 v16; // dx
  __int16 v17; // di
  __int16 v18; // dx
  unsigned __int16 v19; // si
  unsigned __int16 v20; // si
  int v21; // ebx
  int v22; // ecx
  int v23; // eax
  __int16 v24; // ax
  unsigned __int16 v25; // [esp+Ch] [ebp-20h]
  unsigned __int16 v26; // [esp+Ch] [ebp-20h]
  __int16 v27; // [esp+Ch] [ebp-20h]
  int v28; // [esp+Ch] [ebp-20h]
  __int16 v29; // [esp+10h] [ebp-1Ch]
  int v30; // [esp+10h] [ebp-1Ch]
  unsigned __int16 v31; // [esp+14h] [ebp-18h]
  unsigned __int16 v32; // [esp+18h] [ebp-14h]
  _WORD *v33; // [esp+1Ch] [ebp-10h]
  unsigned __int16 v34; // [esp+20h] [ebp-Ch]
  unsigned __int16 v35; // [esp+24h] [ebp-8h]
  _WORD *v36; // [esp+28h] [ebp-4h]

  v2 = 0;
  v3 = *(_WORD *)a1 >> 1;
  v4 = *(_WORD *)a2 >> 1;
  v5 = 0;
  v36 = *(_WORD **)(a2 + 4);
  v35 = v3;
  v34 = v4;
  v33 = *(_WORD **)(a1 + 4);
  if ( v3 )
  {
    do
    {
      if ( *(_WORD *)(*(_DWORD *)(a1 + 4) + 2 * v5) == 46 )
        break;
      ++v5;
    }
    while ( v5 < v3 );
    v4 = *(_WORD *)a2 >> 1;
  }
  v32 = v5;
  for ( i = 0; i < v4; ++i )
  {
    if ( v36[i] == 46 )
      break;
  }
  v7 = 0;
  v8 = i;
  v31 = i;
  v9 = v5;
  if ( v5 )
  {
    v10 = *(_WORD **)(a1 + 4);
    do
    {
      if ( *v10 != 48 )
        break;
      ++v7;
      ++v10;
      --v5;
      --v3;
    }
    while ( (unsigned __int16)v7 < v9 );
    v33 = v10;
    v2 = 0;
    v8 = v31;
    v35 = v3;
    v32 = v5;
  }
  v25 = v8;
  v11 = 0;
  if ( v8 )
  {
    v12 = *(_WORD *)a2 >> 1;
    v13 = *(_WORD **)(a2 + 4);
    do
    {
      if ( *v13 != 48 )
        break;
      ++v11;
      ++v13;
      --v8;
      --v12;
    }
    while ( (unsigned __int16)v11 < v25 );
    v5 = v32;
    v36 = v13;
    v3 = v35;
    v34 = v12;
    v31 = v8;
  }
  if ( v5 != v8 )
  {
    v14 = v8 < v5;
    return v14 ? 1 : -1;
  }
  v16 = 0;
  if ( v5 )
  {
    while ( 1 )
    {
      v26 = v33[v16];
      v3 = v35;
      v2 = 0;
      if ( v26 != v36[v16] )
        break;
      if ( ++v16 >= v5 )
        goto LABEL_24;
    }
    v14 = v36[v16] < v26;
    return v14 ? 1 : -1;
  }
LABEL_24:
  v17 = v3 - v5 - 1;
  v29 = v17;
  if ( v17 < 0 )
  {
    v17 = 0;
    v29 = 0;
  }
  v18 = v34 - v8 - 1;
  v27 = v18;
  if ( v18 < 0 )
  {
    v18 = 0;
    v27 = 0;
  }
  if ( v35 && (unsigned __int16)(v35 - 1) > v5 )
  {
    v19 = v35 - 1;
    do
    {
      if ( v33[v19] != 48 )
        break;
      --v19;
      --v17;
    }
    while ( v19 > v5 );
    v18 = v27;
    v2 = 0;
    v8 = v31;
    v29 = v17;
  }
  if ( v34 && (unsigned __int16)(v34 - 1) > v8 )
  {
    v20 = v34 - 1;
    do
    {
      if ( v36[v20] != 48 )
        break;
      --v20;
      --v18;
    }
    while ( v20 > v8 );
    v5 = v32;
    v2 = 0;
    v17 = v29;
  }
  v28 = (int)&v33[v5 + 1];
  v30 = (int)&v36[v8 + 1];
  if ( v17 > 0 )
  {
    v21 = (int)&v33[v5 + 1];
    v22 = 0;
    v23 = v18;
    while ( v22 < v23 )
    {
      v24 = *(_WORD *)(v21 + 2 * v22);
      v21 = v28;
      if ( v24 != *(_WORD *)(v30 + 2 * v22) )
      {
        v14 = *(_WORD *)(v30 + 2 * v2) < *(_WORD *)(v28 + 2 * v2);
        return v14 ? 1 : -1;
      }
      v23 = v18;
      v22 = ++v2;
      if ( v2 >= v17 )
        break;
    }
  }
  result = 0;
  if ( v17 != v18 )
  {
    LOBYTE(result) = v17 > v18;
    return 2 * result - 1;
  }
  return result;
}
