/*
 * XREFs of ??$GetDDIOBJ@U_BLENDOBJ@@@UMPDOBJ@@QAEPAU_BLENDOBJ@@PAU1@@Z @ 0x215E5A
 * Callers:
 *     _NtGdiEngAlphaBlend@28 @ 0x2173F0 (_NtGdiEngAlphaBlend@28.c)
 * Callees:
 *     <none>
 */

unsigned int __thiscall UMPDOBJ::GetDDIOBJ<_BLENDOBJ>(_DWORD *this, int a2)
{
  unsigned int v3; // esi

  if ( a2 == this[41] )
    v3 = this[40];
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
