/*
 * XREFs of _LdrpGetMappingFromCacheEntry@16 @ 0x4B33F6B8
 * Callers:
 *     _LdrpGetAlternateResourceModuleHandleEx@16 @ 0x4B33F505 (_LdrpGetAlternateResourceModuleHandleEx@16.c)
 * Callees:
 *     _RtlImageNtHeader@4 @ 0x4B2BB8E0 (_RtlImageNtHeader@4.c)
 */

char __fastcall LdrpGetMappingFromCacheEntry(unsigned int a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  int v5; // esi
  int v6; // ecx
  int v7; // esi
  int v8; // eax
  __int16 v9; // cx

  if ( !a2 )
    return 0;
  if ( !a3 )
    return 0;
  if ( a1 >= AlternateResourceModuleCount )
    return 0;
  _mm_lfence();
  v5 = 32 * a1;
  v6 = *(_DWORD *)(32 * a1 + AlternateResourceModules + 24);
  v7 = *(_DWORD *)(v5 + AlternateResourceModules + 16);
  if ( !v7 || v7 == -1 )
    return 0;
  if ( !v6 )
  {
    v8 = RtlImageNtHeader(v7 & 0xFFFFFFFC);
    if ( !v8 )
      return 0;
    v9 = *(_WORD *)(v8 + 24);
    if ( v9 == 267 || v9 == 523 )
      v6 = *(_DWORD *)(v8 + 80);
    else
      v6 = 0;
    if ( !v6 )
      return 0;
  }
  if ( a2 < (v7 & 0xFFFFFFFC) || a2 >= v6 + (v7 & 0xFFFFFFFC) )
    return 0;
  *a3 = v7;
  *a4 = v6;
  return 1;
}
