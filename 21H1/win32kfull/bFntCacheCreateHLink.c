/*
 * XREFs of bFntCacheCreateHLink @ 0xECE08
 * Callers:
 *     SearchFntCacheNewLink @ 0xECD92 (SearchFntCacheNewLink.c)
 * Callees:
 *     <none>
 */

int __fastcall bFntCacheCreateHLink(unsigned int a1)
{
  int v1; // edi
  unsigned int v2; // eax
  unsigned int v3; // edx
  int v4; // ecx

  v1 = *(_DWORD *)dword_274068;
  v2 = *(_DWORD *)(*(_DWORD *)dword_274068 + 4 * (a1 % 0x3D) + 72);
  if ( v2 == -1 )
  {
    *(_DWORD *)(v1 + 4 * (a1 % 0x3D) + 72) = *(_DWORD *)(dword_274068 + 4);
  }
  else
  {
    v3 = *(_DWORD *)(v1 + 16);
    if ( v2 > v3 )
      return 0;
    while ( 1 )
    {
      v4 = v1 + 80 * (v2 + 4);
      v2 = *(_DWORD *)(v4 + 8);
      if ( v2 == -1 )
        break;
      if ( v2 > v3 )
      {
        *(_DWORD *)(dword_274068 + 12) |= 2u;
        return 0;
      }
    }
    *(_DWORD *)(v4 + 8) = *(_DWORD *)(dword_274068 + 4);
  }
  return 1;
}
