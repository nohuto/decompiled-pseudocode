/*
 * XREFs of _RtlpLocateRelatedBlocks@8 @ 0x4B36EA9C
 * Callers:
 *     _RtlpHpHeapHandleError@12 @ 0x4B36D980 (_RtlpHpHeapHandleError@12.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall RtlpLocateRelatedBlocks(int a1, unsigned int a2)
{
  int v2; // esi
  unsigned int *v3; // ecx
  unsigned int result; // eax
  unsigned int i; // ecx
  _DWORD *v6; // edi
  int v7; // ebx
  _DWORD *v8; // eax
  int *v9; // ecx
  unsigned int v10; // edi
  int *v11; // edi
  int v12; // ebx
  int v13; // eax
  unsigned int j; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // edx
  int *v21; // [esp+Ch] [ebp-18h]
  _DWORD *v23; // [esp+14h] [ebp-10h]
  unsigned int v24; // [esp+18h] [ebp-Ch]
  int v25; // [esp+1Ch] [ebp-8h]
  unsigned __int16 v26; // [esp+1Ch] [ebp-8h]
  _DWORD *v27; // [esp+20h] [ebp-4h]

  v2 = a1;
  v3 = (unsigned int *)(a1 + 164);
  for ( result = *v3; ; result = *(_DWORD *)result )
  {
    if ( (unsigned int *)result == v3 )
    {
      for ( i = *(_DWORD *)(v2 + 156); i != v2 + 156; i = *(_DWORD *)i )
      {
        if ( (i & 0xFFFF0000) <= a2 )
        {
          result = (i & 0xFFFF0000) + *(_DWORD *)(i + 20);
          if ( result > a2 )
            dword_4B3A3968 = 5;
        }
      }
      return result;
    }
    v21 = (int *)(result - 16);
    if ( *(_DWORD *)(result + 12) <= a2 && *(_DWORD *)(result + 24) > a2 )
      break;
  }
  v6 = (_DWORD *)(result + 40);
  v7 = 0;
  v8 = *(_DWORD **)(result + 40);
  v9 = 0;
  v27 = 0;
  v23 = v6;
  if ( v8 != v6 )
  {
    do
    {
      v10 = v8[2] + v8[3];
      v24 = v8[2];
      if ( v10 < a2 && v10 > (unsigned int)v9 )
        v9 = (int *)(v8[2] + v8[3]);
      if ( v24 > a2 && (!v27 || v24 < v27[4]) )
        v27 = v8 - 2;
      v8 = (_DWORD *)*v8;
    }
    while ( v8 != v23 );
    v2 = a1;
  }
  v25 = 0;
  if ( !v9 )
    v9 = v21;
  v11 = 0;
  if ( (unsigned int)v9 < a2 )
  {
    v12 = *(_DWORD *)(v2 + 76);
    do
    {
      v11 = v9;
      if ( v12 )
      {
        v13 = *v9;
        v12 = *(_DWORD *)(v2 + 76);
        if ( (v12 & *v9) != 0 )
          v13 ^= *(_DWORD *)(v2 + 80);
      }
      else
      {
        LOWORD(v13) = *(_WORD *)v9;
      }
      if ( !(_WORD)v13 )
        break;
      v9 += 2 * (unsigned __int16)v13;
    }
    while ( (unsigned int)v9 < a2 );
    v7 = 0;
  }
  for ( j = (unsigned int)(v27 - 2); j > a2; j += -8 * v15 )
  {
    v15 = (unsigned __int16)(*(_WORD *)(v2 + 84) ^ *(_WORD *)(j + 4));
    v25 = j;
    if ( !(_WORD)v15 )
      break;
  }
  v16 = v25;
  dword_4B3A3980 = (int)v11;
  dword_4B3A3984 = v25;
  if ( v11 && v25 )
  {
    if ( *(_DWORD *)(v2 + 76) )
    {
      v17 = *v11;
      if ( (*v11 & *(_DWORD *)(v2 + 76)) != 0 )
        v17 ^= *(_DWORD *)(v2 + 80);
    }
    else
    {
      LOWORD(v17) = *(_WORD *)v11;
    }
    result = (unsigned int)&v11[2 * (unsigned __int16)v17];
    if ( result != v25 - 8 * (*(unsigned __int16 *)(v2 + 84) ^ *(unsigned __int16 *)(v25 + 4)) )
    {
      dword_4B3A3968 = 4;
      return result;
    }
    v16 = v25;
  }
  if ( *(_DWORD *)(v2 + 76) )
  {
    v18 = *v11;
    v7 = *(_DWORD *)(v2 + 76);
    if ( (v7 & *v11) != 0 )
      v18 ^= *(_DWORD *)(v2 + 80);
  }
  else
  {
    LOWORD(v18) = *(_WORD *)v11;
  }
  v26 = v18;
  if ( v16 )
  {
    dword_4B3A3988 = *(unsigned __int16 *)(v2 + 84) ^ *(unsigned __int16 *)(v16 + 4);
    v7 = *(_DWORD *)(v2 + 76);
  }
  if ( v7 )
  {
    v19 = *v11;
    if ( (*v11 & *(_DWORD *)(v2 + 76)) != 0 )
      v19 ^= *(_DWORD *)(v2 + 80);
  }
  else
  {
    LOWORD(v19) = *(_WORD *)v11;
  }
  v20 = (unsigned __int16)v19;
  dword_4B3A398C = (unsigned __int16)v19;
  if ( *(_DWORD *)(v2 + 76) )
  {
    result = v11[2 * v26];
    if ( (result & *(_DWORD *)(v2 + 76)) != 0 )
      result ^= *(_DWORD *)(v2 + 80);
    v20 = dword_4B3A398C;
  }
  else
  {
    LOWORD(result) = v11[2 * v26];
  }
  result = (unsigned __int16)result;
  if ( dword_4B3A3988 == (unsigned __int16)result )
  {
    result = *(unsigned __int16 *)(v2 + 84);
    if ( v20 != (result ^ LOWORD(v11[2 * v26 + 1])) )
      dword_4B3A3968 = 7;
  }
  else
  {
    dword_4B3A3968 = 6;
  }
  return result;
}
