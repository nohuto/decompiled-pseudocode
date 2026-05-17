/*
 * XREFs of _RtlFindNextForwardRunClear@12 @ 0x4B34EDF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlFindNextForwardRunClear(int a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // esi
  unsigned int v4; // edx
  int v5; // edx
  int v6; // ecx
  _DWORD *v7; // edi
  _DWORD *v8; // edi
  unsigned int i; // eax
  int v11; // [esp+Ch] [ebp-8h]
  int v12; // [esp+Ch] [ebp-8h]
  _DWORD *v13; // [esp+10h] [ebp-4h]

  v3 = a2;
  v4 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 > a2 )
  {
    v6 = *(_DWORD *)(a1 + 4);
    v13 = (_DWORD *)(v6 + 4 * ((v4 - 1) >> 5));
    v7 = (_DWORD *)(v6 + 4 * (a2 >> 5));
    if ( v7 != v13 )
    {
      v11 = a2 & 0x1F;
      if ( (*v7 | dword_4B288AA0[v11]) == 0xFFFFFFFF )
      {
        v3 = a2 - v11 + 32;
        for ( ++v7; v7 < v13 && *v7 == -1; ++v7 )
          v3 += 32;
      }
    }
    for ( ; v3 < v4; ++v3 )
    {
      if ( !_bittest(*(const signed __int32 **)(a1 + 4), v3) )
        break;
    }
    v5 = 0;
    if ( v7 != v13 )
    {
      v12 = v3 & 0x1F;
      if ( (*v7 & ~dword_4B288AA0[v12]) == 0 )
      {
        v5 = 32 - v12;
        if ( v12 == 33 )
        {
LABEL_23:
          *a3 = v3;
          return v5;
        }
        v8 = v7 + 1;
        while ( v8 < v13 && !*v8 )
        {
          v5 += 32;
          ++v8;
          if ( v5 == -1 )
            goto LABEL_23;
        }
      }
    }
    for ( i = v5 + v3; i < *(_DWORD *)a1; ++v5 )
    {
      if ( _bittest(*(const signed __int32 **)(a1 + 4), i) )
        break;
      if ( v5 == -1 )
        break;
      ++i;
    }
    goto LABEL_23;
  }
  v5 = 0;
  *a3 = a2;
  return v5;
}
