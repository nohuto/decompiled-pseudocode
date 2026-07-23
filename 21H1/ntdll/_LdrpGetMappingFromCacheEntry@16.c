/*
 * XREFs of _LdrpGetMappingFromCacheEntry@16 @ 0x4B33F6B8
 * Callers:
 *     _LdrpGetAlternateResourceModuleHandleEx@16 @ 0x4B33F505 (_LdrpGetAlternateResourceModuleHandleEx@16.c)
 * Callees:
 *     _RtlImageNtHeader@4 @ 0x4B2BB8E0 (_RtlImageNtHeader@4.c)
 */

char __fastcall LdrpGetMappingFromCacheEntry(unsigned int a1, unsigned int a2, _DWORD *a3, DWORD *a4)
{
  int v5; // esi
  DWORD SizeOfImage; // ecx
  int v7; // esi
  PIMAGE_NT_HEADERS v8; // eax
  WORD Magic; // cx

  if ( !a2 )
    return 0;
  if ( !a3 )
    return 0;
  if ( a1 >= AlternateResourceModuleCount )
    return 0;
  _mm_lfence();
  v5 = 32 * a1;
  SizeOfImage = *((_DWORD *)AlternateResourceModules + 8 * a1 + 6);
  v7 = *(_DWORD *)((char *)AlternateResourceModules + v5 + 16);
  if ( !v7 || v7 == -1 )
    return 0;
  if ( !SizeOfImage )
  {
    v8 = RtlImageNtHeader((PVOID)(v7 & 0xFFFFFFFC));
    if ( !v8 )
      return 0;
    Magic = v8->OptionalHeader.Magic;
    if ( Magic == 267 || Magic == 523 )
      SizeOfImage = v8->OptionalHeader.SizeOfImage;
    else
      SizeOfImage = 0;
    if ( !SizeOfImage )
      return 0;
  }
  if ( a2 < (v7 & 0xFFFFFFFC) || a2 >= SizeOfImage + (v7 & 0xFFFFFFFC) )
    return 0;
  *a3 = v7;
  *a4 = SizeOfImage;
  return 1;
}
