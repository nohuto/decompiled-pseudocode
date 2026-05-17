/*
 * XREFs of _RtlFindLastBackwardRunClear@12 @ 0x4B34EB90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __stdcall RtlFindLastBackwardRunClear(unsigned int *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // esi
  unsigned int result; // eax
  _DWORD *v5; // ebx
  _DWORD *v6; // edx
  unsigned int v7; // edi
  _DWORD *i; // edx

  v3 = a2;
  if ( *a1 > a2 )
  {
    v5 = (_DWORD *)a1[1];
    v6 = &v5[a2 >> 5];
    if ( v6 != v5 && (*v6 | ~dword_4B288AA4[a2 & 0x1F]) == 0xFFFFFFFF )
    {
      v3 = (a2 & 0xFFFFFFE0) - 1;
      for ( --v6; v6 > v5 && *v6 == -1; --v6 )
        v3 -= 32;
    }
    while ( v3 != -1 && (((int)v5[v3 >> 5] >> (v3 & 0x1F)) & 1) != 0 )
      --v3;
    v7 = v3;
    if ( (dword_4B288AA0[v3 & 0x1F] & *v6) == 0 )
    {
      v7 = (v3 & 0xFFFFFFE0) - 1;
      for ( i = v6 - 1; i > v5 && !*i; --i )
        v7 -= 32;
    }
    while ( v7 != -1 && (((int)v5[v7 >> 5] >> (v7 & 0x1F)) & 1) == 0 )
      --v7;
    result = v3 - v7;
    *a3 = v7 + 1;
  }
  else
  {
    *a3 = a2;
    return 0;
  }
  return result;
}
