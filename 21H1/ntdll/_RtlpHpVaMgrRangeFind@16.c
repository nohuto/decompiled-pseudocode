/*
 * XREFs of _RtlpHpVaMgrRangeFind@16 @ 0x4B37B145
 * Callers:
 *     _RtlpHpVaMgrAlloc@12 @ 0x4B37A845 (_RtlpHpVaMgrAlloc@12.c)
 * Callees:
 *     _RtlSparseArrayElementAllocated@8 @ 0x4B37E3A6 (_RtlSparseArrayElementAllocated@8.c)
 */

unsigned int __fastcall RtlpHpVaMgrRangeFind(int a1, unsigned __int16 a2, unsigned __int16 a3, unsigned int *a4)
{
  int v4; // eax
  unsigned int v5; // esi
  unsigned int v6; // ecx
  unsigned int v8; // edi
  int v9; // edx
  unsigned __int16 v10; // ax
  unsigned int v11; // eax
  int v12; // eax
  int v13; // edi
  int i; // ebx
  unsigned int v15; // edx
  unsigned int v16; // ebx
  _DWORD **v17; // eax
  unsigned int v18; // ecx
  _DWORD *j; // ecx
  int v21; // [esp+10h] [ebp-8h]

  v4 = a1 + 4;
  v5 = 0;
  v21 = a2;
  v6 = *(_DWORD *)(a1 + 4);
  if ( (*(_BYTE *)(v4 + 4) & 1) != 0 )
  {
    if ( v6 )
      v6 ^= v4;
    else
      v6 = 0;
  }
  v8 = 0;
  v9 = *(_BYTE *)(v4 + 4) & 1;
  while ( v6 )
  {
    v10 = *(_WORD *)(v6 + 12);
    if ( a2 < v10 )
    {
      v11 = *(_DWORD *)v6;
      v8 = v6;
    }
    else
    {
      if ( a2 <= v10 )
        goto LABEL_16;
      v11 = *(_DWORD *)(v6 + 4);
    }
    if ( v9 && v11 )
      v6 ^= v11;
    else
      v6 = v11;
  }
  v6 = v8;
LABEL_16:
  if ( v6 )
  {
    v5 = v6;
    if ( a3 > 1u )
    {
      v12 = a3;
      v13 = *(_DWORD *)(a1 + 12);
      for ( i = a3 - 1; ; i = a3 - 1 )
      {
        v15 = (v5 - *(_DWORD *)(v13 + 20)) >> *(_DWORD *)(v13 + 12);
        v16 = v15 + v12 - (i & (v12 + v15 - 1)) - 1;
        if ( v16 + v21 <= v15 + *(unsigned __int16 *)(v5 + 12) )
          break;
        v17 = *(_DWORD ***)(v5 + 4);
        v18 = v5;
        if ( v17 )
        {
          v5 = *(_DWORD *)(v5 + 4);
          for ( j = *v17; j; j = (_DWORD *)*j )
            v5 = (unsigned int)j;
        }
        else
        {
          while ( 1 )
          {
            v5 = *(_DWORD *)(v5 + 8) & 0xFFFFFFFC;
            if ( !v5 || *(_DWORD *)v5 == v18 )
              break;
            v18 = v5;
          }
        }
        if ( !v5 )
          return v5;
        v12 = a3;
      }
      *a4 = RtlSparseArrayElementAllocated(v13 + 8, v16);
    }
    else
    {
      *a4 = v6;
    }
  }
  return v5;
}
