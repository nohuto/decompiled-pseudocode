/*
 * XREFs of _vFetchNotAndCopy@4 @ 0xEDC5C
 * Callers:
 *     ?vPatNotRect8@@YGXPAU_PATBLTFRAME@@@Z @ 0x22E0EC (-vPatNotRect8@@YGXPAU_PATBLTFRAME@@@Z.c)
 *     ?vPatNotRow8@@YGXPAU_PATBLTFRAME@@JH@Z @ 0x22E3F8 (-vPatNotRow8@@YGXPAU_PATBLTFRAME@@JH@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall vFetchNotAndCopy(int a1)
{
  int *v1; // edi
  int *v2; // esi
  int v3; // ebx
  int v4; // edx
  int result; // eax
  int v6; // ecx
  bool v7; // cc
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // eax

  v1 = *(int **)a1;
  v2 = *(int **)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  if ( v3 )
  {
    while ( 1 )
    {
      result = ~*(int *)((char *)v2 + v3);
      *v1++ = result;
      if ( !--v4 )
        break;
      v3 += 4;
      if ( v3 == *(_DWORD *)(a1 + 12) )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    while ( 1 )
    {
      v6 = *(_DWORD *)(a1 + 20);
      v7 = v4 < v6;
      v4 -= v6;
      if ( v7 )
        break;
      do
      {
        v8 = *v2++;
        result = ~v8;
        *v1++ = result;
        --v6;
      }
      while ( v6 );
      v2 = *(int **)(a1 + 4);
    }
    v9 = v6 + v4;
    if ( v9 )
    {
      v10 = v9;
      do
      {
        v11 = *v2++;
        result = ~v11;
        *v1++ = result;
        --v10;
      }
      while ( v10 );
    }
  }
  return result;
}
