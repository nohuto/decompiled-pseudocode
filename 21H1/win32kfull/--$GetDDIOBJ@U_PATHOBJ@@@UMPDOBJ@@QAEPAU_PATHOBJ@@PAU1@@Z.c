/*
 * XREFs of ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QAEPAU_PATHOBJ@@PAU1@@Z @ 0x215F66
 * Callers:
 *     _NtGdiEngFillPath@28 @ 0x218304 (_NtGdiEngFillPath@28.c)
 *     _NtGdiEngStrokeAndFillPath@40 @ 0x219580 (_NtGdiEngStrokeAndFillPath@40.c)
 *     _NtGdiEngStrokePath@32 @ 0x219789 (_NtGdiEngStrokePath@32.c)
 *     _NtGdiPATHOBJ_bEnum@8 @ 0x21A730 (_NtGdiPATHOBJ_bEnum@8.c)
 *     _NtGdiPATHOBJ_bEnumClipLines@12 @ 0x21A890 (_NtGdiPATHOBJ_bEnumClipLines@12.c)
 *     _NtGdiPATHOBJ_vEnumStart@4 @ 0x21AA1F (_NtGdiPATHOBJ_vEnumStart@4.c)
 *     _NtGdiPATHOBJ_vEnumStartClipLines@16 @ 0x21AAAC (_NtGdiPATHOBJ_vEnumStartClipLines@16.c)
 *     _NtGdiPATHOBJ_vGetBounds@8 @ 0x21ABE1 (_NtGdiPATHOBJ_vGetBounds@8.c)
 * Callees:
 *     <none>
 */

unsigned int __thiscall UMPDOBJ::GetDDIOBJ<_PATHOBJ>(_DWORD *this, int a2)
{
  unsigned int v3; // esi

  if ( a2 == this[31] )
  {
    v3 = this[30];
  }
  else if ( a2 == this[33] )
  {
    v3 = this[32];
  }
  else if ( a2 == this[35] )
  {
    v3 = this[34];
  }
  else
  {
    v3 = 0;
  }
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
