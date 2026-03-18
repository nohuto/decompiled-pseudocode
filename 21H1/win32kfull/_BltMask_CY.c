/*
 * XREFs of _BltMask_CY @ 0x1C432B
 * Callers:
 *     _ExpandMask_CY @ 0x1C4810 (_ExpandMask_CY.c)
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __cdecl BltMask_CY(int a1)
{
  int *v1; // ecx
  int *v2; // edi
  int v3; // edx
  int i; // ebx
  int v5; // eax
  int v6; // edi

  v1 = *(int **)(a1 + 136);
  v2 = *(int **)(a1 + 132);
  if ( (*(_DWORD *)a1 & 0x100) != 0 )
  {
    v3 = *(_DWORD *)(a1 + 128) & 3;
    for ( i = *(_DWORD *)(a1 + 128) >> 2; i; --i )
    {
      v5 = *v1++;
      *v2++ = ~v5;
    }
    if ( v3 )
    {
      v6 = (char *)v2 - (char *)v1;
      do
      {
        *((_BYTE *)v1 + v6) = ~*(_BYTE *)v1;
        v1 = (int *)((char *)v1 + 1);
        --v3;
      }
      while ( v3 );
    }
  }
  else
  {
    memcpy(v2, v1, *(_DWORD *)(a1 + 128));
  }
  if ( (int)--*(_DWORD *)(a1 + 144) > 0 )
    *(_DWORD *)(a1 + 136) += *(_DWORD *)(a1 + 140);
  return (*(int (__cdecl **)(int))(a1 + 120))(a1);
}
