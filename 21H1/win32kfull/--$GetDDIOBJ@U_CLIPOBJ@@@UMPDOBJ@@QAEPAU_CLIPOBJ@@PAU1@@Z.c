/*
 * XREFs of ??$GetDDIOBJ@U_CLIPOBJ@@@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU1@@Z @ 0x1F37D6
 * Callers:
 *     ?GetCLIPOBJPath@UMPDOBJ@@QAEPAU_PATHOBJ@@PAU_CLIPOBJ@@@Z @ 0x1F3AFC (-GetCLIPOBJPath@UMPDOBJ@@QAEPAU_PATHOBJ@@PAU_CLIPOBJ@@@Z.c)
 *     _NtGdiCLIPOBJ_bEnum@12 @ 0x21721F (_NtGdiCLIPOBJ_bEnum@12.c)
 *     _NtGdiCLIPOBJ_cEnumStart@20 @ 0x21730D (_NtGdiCLIPOBJ_cEnumStart@20.c)
 * Callees:
 *     <none>
 */

unsigned int __thiscall UMPDOBJ::GetDDIOBJ<_CLIPOBJ>(_DWORD *this, int a2)
{
  unsigned int v3; // esi

  if ( a2 == this[17] )
    v3 = this[16];
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
