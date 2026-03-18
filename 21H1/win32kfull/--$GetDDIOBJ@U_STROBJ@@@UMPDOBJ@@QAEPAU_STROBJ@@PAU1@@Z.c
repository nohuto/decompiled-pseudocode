/*
 * XREFs of ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QAEPAU_STROBJ@@PAU1@@Z @ 0x216004
 * Callers:
 *     ?NtGdiSTROBJ_bEnumInternal@@YGHPAU_STROBJ@@PAKPAPAU_GLYPHPOS@@H@Z @ 0x21643D (-NtGdiSTROBJ_bEnumInternal@@YGHPAU_STROBJ@@PAKPAPAU_GLYPHPOS@@H@Z.c)
 *     _NtGdiEngTextOut@40 @ 0x21998C (_NtGdiEngTextOut@40.c)
 *     _NtGdiSTROBJ_bGetAdvanceWidths@16 @ 0x21ACC8 (_NtGdiSTROBJ_bGetAdvanceWidths@16.c)
 *     _NtGdiSTROBJ_dwGetCodePage@4 @ 0x21ADBD (_NtGdiSTROBJ_dwGetCodePage@4.c)
 *     _NtGdiSTROBJ_vEnumStart@4 @ 0x21AE10 (_NtGdiSTROBJ_vEnumStart@4.c)
 * Callees:
 *     <none>
 */

unsigned int __thiscall UMPDOBJ::GetDDIOBJ<_STROBJ>(_DWORD *this, int a2)
{
  unsigned int v3; // esi

  if ( a2 == this[27] )
    v3 = this[26];
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
