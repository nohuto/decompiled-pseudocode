/*
 * XREFs of ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QAEPAU_BRUSHOBJ@@PAU1@@Z @ 0x215EDE
 * Callers:
 *     _NtGdiBRUSHOBJ_DeleteRbrush@8 @ 0x216F80 (_NtGdiBRUSHOBJ_DeleteRbrush@8.c)
 *     _NtGdiBRUSHOBJ_hGetColorTransform@4 @ 0x217031 (_NtGdiBRUSHOBJ_hGetColorTransform@4.c)
 *     _NtGdiBRUSHOBJ_pvAllocRbrush@8 @ 0x217087 (_NtGdiBRUSHOBJ_pvAllocRbrush@8.c)
 *     _NtGdiBRUSHOBJ_pvGetRbrush@4 @ 0x2170E1 (_NtGdiBRUSHOBJ_pvGetRbrush@4.c)
 *     _NtGdiBRUSHOBJ_ulGetBrushColor@4 @ 0x217138 (_NtGdiBRUSHOBJ_ulGetBrushColor@4.c)
 *     _NtGdiEngBitBlt@44 @ 0x217630 (_NtGdiEngBitBlt@44.c)
 *     _NtGdiEngFillPath@28 @ 0x218304 (_NtGdiEngFillPath@28.c)
 *     _NtGdiEngLineTo@36 @ 0x21873E (_NtGdiEngLineTo@36.c)
 *     _NtGdiEngPaint@20 @ 0x21894A (_NtGdiEngPaint@20.c)
 *     _NtGdiEngStretchBltROP@52 @ 0x219109 (_NtGdiEngStretchBltROP@52.c)
 *     _NtGdiEngStrokeAndFillPath@40 @ 0x219580 (_NtGdiEngStrokeAndFillPath@40.c)
 *     _NtGdiEngStrokePath@32 @ 0x219789 (_NtGdiEngStrokePath@32.c)
 *     _NtGdiEngTextOut@40 @ 0x21998C (_NtGdiEngTextOut@40.c)
 * Callees:
 *     <none>
 */

unsigned int __thiscall UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(_DWORD *this, int a2)
{
  unsigned int v3; // esi

  if ( a2 == this[21] )
  {
    v3 = this[20];
  }
  else if ( a2 == this[23] )
  {
    v3 = this[22];
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
