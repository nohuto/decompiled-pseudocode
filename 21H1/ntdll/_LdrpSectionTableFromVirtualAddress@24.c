/*
 * XREFs of _LdrpSectionTableFromVirtualAddress@24 @ 0x4B2B8182
 * Callers:
 *     _LdrpResGetResourceDirectory@20 @ 0x4B2BB320 (_LdrpResGetResourceDirectory@20.c)
 *     _LdrpResSearchResourceInsideDirectory@52 @ 0x4B2BE960 (_LdrpResSearchResourceInsideDirectory@52.c)
 * Callees:
 *     <none>
 */

int __fastcall LdrpSectionTableFromVirtualAddress(int a1, int a2, int a3, int a4, unsigned int a5, char a6)
{
  int v6; // eax
  int v7; // esi
  int v8; // ecx
  int v9; // ebx

  v6 = a2;
  v7 = a4;
  if ( !a3 )
    return 0;
  if ( !a4 )
  {
    v7 = *(unsigned __int16 *)(a3 + 20) + a3 + 24;
    if ( !v7 )
      return 0;
  }
  v8 = *(unsigned __int16 *)(a3 + 6);
  v9 = 0;
  if ( !*(_WORD *)(a3 + 6) )
    return 0;
  while ( 1 )
  {
    if ( !a4 && a6 )
    {
      if ( v7 + 40 > v6 + (a1 & 0xFFFFFFFC) )
        return 0;
      v8 = *(unsigned __int16 *)(a3 + 6);
    }
    if ( a5 == *(_DWORD *)(v7 + 12) || a5 > *(_DWORD *)(v7 + 12) && a5 < *(_DWORD *)(v7 + 12) + *(_DWORD *)(v7 + 16) )
      break;
    v6 = a2;
    v7 += 40;
    if ( ++v9 >= v8 )
      return 0;
  }
  return v7;
}
