/*
 * XREFs of ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QAEPAU_FONTOBJ@@PAU1@@Z @ 0x1F3854
 * Callers:
 *     ?GetFONTOBJXform@UMPDOBJ@@QAEPAU_XFORMOBJ@@PAU_FONTOBJ@@@Z @ 0x1F3B64 (-GetFONTOBJXform@UMPDOBJ@@QAEPAU_XFORMOBJ@@PAU_FONTOBJ@@@Z.c)
 *     _NtGdiEngTextOut@40 @ 0x21998C (_NtGdiEngTextOut@40.c)
 *     _NtGdiFONTOBJ_cGetAllGlyphHandles@8 @ 0x219DE2 (_NtGdiFONTOBJ_cGetAllGlyphHandles@8.c)
 *     _NtGdiFONTOBJ_cGetGlyphs@20 @ 0x219EAF (_NtGdiFONTOBJ_cGetGlyphs@20.c)
 *     _NtGdiFONTOBJ_pQueryGlyphAttrs@8 @ 0x21A080 (_NtGdiFONTOBJ_pQueryGlyphAttrs@8.c)
 *     _NtGdiFONTOBJ_pfdg@4 @ 0x21A194 (_NtGdiFONTOBJ_pfdg@4.c)
 *     _NtGdiFONTOBJ_pifi@4 @ 0x21A29C (_NtGdiFONTOBJ_pifi@4.c)
 *     _NtGdiFONTOBJ_pvTrueTypeFontFile@8 @ 0x21A3AE (_NtGdiFONTOBJ_pvTrueTypeFontFile@8.c)
 *     _NtGdiFONTOBJ_vGetInfo@12 @ 0x21A4F5 (_NtGdiFONTOBJ_vGetInfo@12.c)
 * Callees:
 *     <none>
 */

unsigned int __thiscall UMPDOBJ::GetDDIOBJ<_FONTOBJ>(_DWORD *this, int a2)
{
  unsigned int v3; // esi

  if ( a2 == this[25] )
    v3 = this[24];
  else
    v3 = 0;
  if ( a2 )
  {
    if ( !v3 )
    {
      ++gdwUMPDUnmatchedUMPointers;
      if ( gfUMPDDebug )
        _DbgPrint(
          "onecoreuap\\internal\\windows\\inc\\private\\core\\ntgdi\\gre\\umpd.hxx:%d:UMPDOBJ::GetDDIOBJ:Unmatched usermode pointer.\n",
          773);
    }
  }
  if ( (this[55] & 0x100) != 0 && v3 && v3 < (unsigned int)_MmSystemRangeStart )
  {
    if ( gfUMPDDebug )
      _DbgPrint(
        "onecoreuap\\internal\\windows\\inc\\private\\core\\ntgdi\\gre\\umpd.hxx:%d:UMPDOBJ::GetDDIOBJ:Unexpected usermode pointer.\n",
        778);
    return 0;
  }
  return v3;
}
