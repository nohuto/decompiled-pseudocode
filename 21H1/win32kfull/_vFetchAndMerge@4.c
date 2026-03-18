/*
 * XREFs of _vFetchAndMerge@4 @ 0xEDD06
 * Callers:
 *     ?vPatXorRect8@@YGXPAU_PATBLTFRAME@@@Z @ 0x111D6 (-vPatXorRect8@@YGXPAU_PATBLTFRAME@@@Z.c)
 *     ?vPatXorRow8@@YGXPAU_PATBLTFRAME@@JH@Z @ 0x22E5D7 (-vPatXorRow8@@YGXPAU_PATBLTFRAME@@JH@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall vFetchAndMerge(int a1)
{
  _DWORD *v1; // edi
  int *v2; // esi
  int v3; // ebx
  int v4; // edx
  int result; // eax
  int v6; // ecx
  bool v7; // cc
  int v8; // edx
  int v9; // ecx

  v1 = *(_DWORD **)a1;
  v2 = *(int **)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  if ( v3 )
  {
    while ( 1 )
    {
      result = *(int *)((char *)v2 + v3);
      *v1++ ^= result;
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
        result = *v2++;
        *v1++ ^= result;
        --v6;
      }
      while ( v6 );
      v2 = *(int **)(a1 + 4);
    }
    v8 = v6 + v4;
    if ( v8 )
    {
      v9 = v8;
      do
      {
        result = *v2++;
        *v1++ ^= result;
        --v9;
      }
      while ( v9 );
    }
  }
  return result;
}
