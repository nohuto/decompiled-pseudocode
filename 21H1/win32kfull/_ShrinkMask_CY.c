/*
 * XREFs of _ShrinkMask_CY @ 0x1C5EFD
 * Callers:
 *     <none>
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __cdecl ShrinkMask_CY(int a1)
{
  int *v2; // ecx
  int *v3; // edi
  int v4; // edx
  int i; // ebx
  int v6; // eax
  int v7; // edi
  int v8; // ecx
  unsigned __int16 *v9; // eax
  int v10; // edx
  int *v11; // edi
  int v12; // ebx
  _DWORD *v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // edi
  int v17; // eax
  int v19; // [esp+14h] [ebp+8h]

  v2 = *(int **)(a1 + 136);
  v3 = *(int **)(a1 + 132);
  if ( (*(_DWORD *)a1 & 0x100) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 128) & 3;
    for ( i = *(_DWORD *)(a1 + 128) >> 2; i; --i )
    {
      v6 = *v2++;
      *v3++ = ~v6;
    }
    if ( v4 )
    {
      v7 = (char *)v3 - (char *)v2;
      do
      {
        *((_BYTE *)v2 + v7) = ~*(_BYTE *)v2;
        v2 = (int *)((char *)v2 + 1);
        --v4;
      }
      while ( v4 );
    }
  }
  else
  {
    memcpy(v3, v2, *(_DWORD *)(a1 + 128));
  }
  if ( (int)--*(_DWORD *)(a1 + 144) > 0 )
    *(_DWORD *)(a1 + 136) += *(_DWORD *)(a1 + 140);
  v8 = *(_DWORD *)(a1 + 192);
  v9 = *(unsigned __int16 **)(v8 + 120);
  v10 = *v9;
  *(_DWORD *)(v8 + 120) = v9 + 1;
  v19 = v10 - 1;
  if ( v10 != 1 )
  {
    do
    {
      v11 = *(int **)(a1 + 136);
      v12 = *(_DWORD *)(a1 + 128) & 3;
      v13 = *(_DWORD **)(a1 + 132);
      v14 = *(_DWORD *)(a1 + 128) >> 2;
      if ( (*(_DWORD *)a1 & 0x100) != 0 )
      {
        for ( ; v14; --v14 )
        {
          v15 = *v11++;
          *v13++ |= ~v15;
        }
        if ( v12 )
        {
          v16 = (char *)v11 - (char *)v13;
          do
          {
            *(_BYTE *)v13 |= ~*((_BYTE *)v13 + v16);
            v13 = (_DWORD *)((char *)v13 + 1);
            --v12;
          }
          while ( v12 );
        }
      }
      else
      {
        for ( ; v14; --v14 )
        {
          v17 = *v11++;
          *v13++ |= v17;
        }
        for ( ; v12; --v12 )
        {
          *(_BYTE *)v13 |= *(_BYTE *)v11;
          v11 = (int *)((char *)v11 + 1);
          v13 = (_DWORD *)((char *)v13 + 1);
        }
      }
      if ( (int)--*(_DWORD *)(a1 + 144) > 0 )
        *(_DWORD *)(a1 + 136) += *(_DWORD *)(a1 + 140);
      --v19;
    }
    while ( v19 );
  }
  return (*(int (__cdecl **)(int))(a1 + 120))(a1);
}
