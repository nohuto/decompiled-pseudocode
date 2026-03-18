/*
 * XREFs of ??$GetDDIOBJ@U_XFORMOBJ@@@UMPDOBJ@@QAEPAU_XFORMOBJ@@PAU1@@Z @ 0x216082
 * Callers:
 *     _NtGdiEngStrokeAndFillPath@40 @ 0x219580 (_NtGdiEngStrokeAndFillPath@40.c)
 *     _NtGdiEngStrokePath@32 @ 0x219789 (_NtGdiEngStrokePath@32.c)
 *     _NtGdiXFORMOBJ_bApplyXform@20 @ 0x21B239 (_NtGdiXFORMOBJ_bApplyXform@20.c)
 *     _NtGdiXFORMOBJ_iGetXform@8 @ 0x21B391 (_NtGdiXFORMOBJ_iGetXform@8.c)
 * Callees:
 *     <none>
 */

unsigned int __thiscall UMPDOBJ::GetDDIOBJ<_XFORMOBJ>(_DWORD *this, int a2)
{
  unsigned int v3; // esi

  if ( a2 == this[37] )
  {
    v3 = this[36];
  }
  else if ( a2 == this[39] )
  {
    v3 = this[38];
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
