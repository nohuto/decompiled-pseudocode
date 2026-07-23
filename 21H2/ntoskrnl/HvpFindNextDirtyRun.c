/*
 * XREFs of HvpFindNextDirtyRun @ 0x140255088
 * Callers:
 *     HvpFindNextDirtyBlock @ 0x14063AF08 (HvpFindNextDirtyBlock.c)
 * Callees:
 *     <none>
 */

char __fastcall HvpFindNextDirtyRun(__int64 a1, unsigned int *a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v4; // r10d
  unsigned int v6; // r11d
  __int64 v10; // r9
  unsigned int v11; // r8d
  _DWORD *v12; // rbx
  _DWORD *v13; // rdx
  int v14; // r9d
  __int64 v15; // rdi
  unsigned int v16; // ecx
  unsigned int i; // eax
  char result; // al
  _DWORD *v19; // rdx
  unsigned int v20; // edi
  unsigned int v21; // r9d
  int v22; // edx
  __int64 v23; // rdx
  _DWORD *v24; // rbx
  _DWORD *v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rdi
  _DWORD *v28; // r8
  unsigned int j; // eax

  v4 = *a2;
  v6 = *(_DWORD *)a1;
  if ( *a2 >= *(_DWORD *)a1 )
    return 0;
  v10 = *(_QWORD *)(a1 + 8);
  v11 = *a2;
  v12 = (_DWORD *)(v10 + 4 * ((unsigned __int64)(v6 - 1) >> 5));
  v13 = (_DWORD *)(v10 + 4 * ((unsigned __int64)v4 >> 5));
  if ( v13 != v12 && (*v13 | *((_DWORD *)qword_140012120 + (v4 & 0x1F))) == -1 )
  {
    v11 = v4 - (v4 & 0x1F) + 32;
    for ( ++v13; v13 < v12 && *v13 == -1; ++v13 )
      v11 += 32;
  }
  for ( ; v11 < v6; ++v11 )
  {
    if ( !_bittest(*(const signed __int32 **)(a1 + 8), v11) )
      break;
  }
  v14 = 0;
  if ( v13 != v12 )
  {
    v15 = v11 & 0x1F;
    if ( (*v13 & ~*((_DWORD *)qword_140012120 + v15)) == 0 )
    {
      v14 = 32 - v15;
      if ( (_DWORD)v15 == 33 )
        goto LABEL_17;
      v19 = v13 + 1;
      while ( v19 < v12 && !*v19 )
      {
        ++v19;
        v14 += 32;
        if ( v14 == -1 )
          goto LABEL_17;
      }
    }
  }
  v16 = *(_DWORD *)a1;
  for ( i = v14 + v11; i < v16; ++v14 )
  {
    if ( _bittest(*(const signed __int32 **)(a1 + 8), i) )
      break;
    if ( v14 == -1 )
      break;
    ++i;
  }
LABEL_17:
  if ( !v14 )
  {
    v11 = v6;
    goto LABEL_20;
  }
  if ( v11 != v4 )
  {
    v6 = v14 + v11;
LABEL_20:
    *a2 = v6;
    result = 1;
    *a3 = v4;
    *a4 = v11;
    return result;
  }
  v4 += v14;
  if ( v4 < v6 )
  {
    v20 = *(_DWORD *)a1;
    v21 = v4;
    if ( *(_DWORD *)a1 <= v4 )
    {
      v22 = 0;
      goto LABEL_52;
    }
    v23 = *(_QWORD *)(a1 + 8);
    v24 = (_DWORD *)(v23 + 4 * ((unsigned __int64)(v20 - 1) >> 5));
    v25 = (_DWORD *)(v23 + 4 * ((unsigned __int64)v4 >> 5));
    if ( v25 != v24 )
    {
      v26 = v4 & 0x1F;
      if ( (*v25 | *((_DWORD *)qword_140012120 + v26)) == -1 )
      {
        v21 = v4 - v26 + 32;
        for ( ++v25; v25 < v24 && *v25 == -1; ++v25 )
          v21 += 32;
      }
    }
    for ( ; v21 < v20; ++v21 )
    {
      if ( !_bittest(*(const signed __int32 **)(a1 + 8), v21) )
        break;
    }
    v22 = 0;
    if ( v25 != v24 )
    {
      v27 = v21 & 0x1F;
      if ( (*v25 & ~*((_DWORD *)qword_140012120 + v27)) == 0 )
      {
        v22 = 32 - v27;
        if ( (_DWORD)v27 == 33 )
        {
LABEL_52:
          v11 = v6;
          if ( v22 )
          {
            v11 = v21;
            v6 = v22 + v21;
          }
          goto LABEL_20;
        }
        v28 = v25 + 1;
        while ( v28 < v24 && !*v28 )
        {
          ++v28;
          v22 += 32;
          if ( v22 == -1 )
            goto LABEL_52;
        }
      }
    }
    for ( j = v22 + v21; j < *(_DWORD *)a1; ++v22 )
    {
      if ( _bittest(*(const signed __int32 **)(a1 + 8), j) )
        break;
      if ( v22 == -1 )
        break;
      ++j;
    }
    goto LABEL_52;
  }
  return 0;
}
