/*
 * XREFs of ?bEnsureAuxCacheBuffer@RFONTOBJ@@QAEHK@Z @ 0x240D7F
 * Callers:
 *     ?bEnsureGlyphCacheBuffer@RFONTOBJ@@QAEHKPAPAU_GLYPHDATA@@PAKPAPAU_GLYPHBITS@@@Z @ 0xF8744 (-bEnsureGlyphCacheBuffer@RFONTOBJ@@QAEHKPAPAU_GLYPHDATA@@PAKPAPAU_GLYPHBITS@@@Z.c)
 *     ?bInsertPathLookaside@RFONTOBJ@@QAEHPAU_GLYPHPOS@@@Z @ 0x24114B (-bInsertPathLookaside@RFONTOBJ@@QAEHPAU_GLYPHPOS@@@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 */

int __thiscall RFONTOBJ::bEnsureAuxCacheBuffer(RFONTOBJ *this, size_t Size)
{
  int v3; // eax

  if ( *(_DWORD *)(*(_DWORD *)this + 628) < Size )
  {
    if ( *(_DWORD *)(*(_DWORD *)this + 624) )
      Win32FreePool(*(PATHOBJ **)(*(_DWORD *)this + 624));
    *(_DWORD *)(*(_DWORD *)this + 624) = PALLOCMEM2(Size, 1667326791, 1);
    v3 = *(_DWORD *)this;
    if ( !*(_DWORD *)(*(_DWORD *)this + 624) )
    {
      *(_DWORD *)(v3 + 628) = 0;
      return 0;
    }
    *(_DWORD *)(v3 + 628) = Size;
  }
  return 1;
}
