/*
 * XREFs of ?GetDDIOBJ@UMPDOBJ@@QAEPAU_CLIPOBJ@@PAU2@PAUtagSIZE@@@Z @ 0x21637D
 * Callers:
 *     _NtGdiEngAlphaBlend@28 @ 0x2173F0 (_NtGdiEngAlphaBlend@28.c)
 *     _NtGdiEngBitBlt@44 @ 0x217630 (_NtGdiEngBitBlt@44.c)
 *     _NtGdiEngCopyBits@24 @ 0x217AED (_NtGdiEngCopyBits@24.c)
 *     _NtGdiEngFillPath@28 @ 0x218304 (_NtGdiEngFillPath@28.c)
 *     _NtGdiEngGradientFill@40 @ 0x218480 (_NtGdiEngGradientFill@40.c)
 *     _NtGdiEngLineTo@36 @ 0x21873E (_NtGdiEngLineTo@36.c)
 *     _NtGdiEngPaint@20 @ 0x21894A (_NtGdiEngPaint@20.c)
 *     _NtGdiEngPlgBlt@44 @ 0x218A7F (_NtGdiEngPlgBlt@44.c)
 *     _NtGdiEngStretchBlt@44 @ 0x218D88 (_NtGdiEngStretchBlt@44.c)
 *     _NtGdiEngStretchBltROP@52 @ 0x219109 (_NtGdiEngStretchBltROP@52.c)
 *     _NtGdiEngStrokeAndFillPath@40 @ 0x219580 (_NtGdiEngStrokeAndFillPath@40.c)
 *     _NtGdiEngStrokePath@32 @ 0x219789 (_NtGdiEngStrokePath@32.c)
 *     _NtGdiEngTextOut@40 @ 0x21998C (_NtGdiEngTextOut@40.c)
 *     _NtGdiEngTransparentBlt@32 @ 0x219BED (_NtGdiEngTransparentBlt@32.c)
 *     _NtGdiPATHOBJ_vEnumStartClipLines@16 @ 0x21AAAC (_NtGdiPATHOBJ_vEnumStartClipLines@16.c)
 * Callees:
 *     ?CaptureAndMungeCLIPOBJ@@YGPAU_CLIPOBJ@@PAU1@0PAUtagSIZE@@@Z @ 0x216257 (-CaptureAndMungeCLIPOBJ@@YGPAU_CLIPOBJ@@PAU1@0PAUtagSIZE@@@Z.c)
 */

struct _CLIPOBJ *__thiscall UMPDOBJ::GetDDIOBJ(UMPDOBJ *this, struct _CLIPOBJ *a2, struct _CLIPOBJ *a3)
{
  struct _CLIPOBJ *v4; // esi
  struct _CLIPOBJ *v6; // [esp+0h] [ebp-Ch]
  struct tagSIZE *v7; // [esp+4h] [ebp-8h]

  if ( a2 == *((struct _CLIPOBJ **)this + 17) )
  {
    v4 = (struct _CLIPOBJ *)*((_DWORD *)this + 16);
  }
  else if ( a2 == *((struct _CLIPOBJ **)this + 19) )
  {
    v4 = CaptureAndMungeCLIPOBJ(*((_DWORD *)this + 18), (ULONG)a2, a3, v6, v7);
  }
  else
  {
    v4 = 0;
  }
  if ( a2 )
  {
    if ( !v4 )
    {
      ++gdwUMPDUnmatchedUMPointers;
      if ( gfUMPDDebug )
        _DbgPrint(
          "onecoreuap\\internal\\windows\\inc\\private\\core\\ntgdi\\gre\\umpd.hxx:%d:UMPDOBJ::GetDDIOBJ:Unmatched usermode pointer.\n",
          793);
    }
  }
  if ( (*((_DWORD *)this + 55) & 0x100) != 0 && v4 && v4 < _MmSystemRangeStart )
  {
    if ( gfUMPDDebug )
      _DbgPrint(
        "onecoreuap\\internal\\windows\\inc\\private\\core\\ntgdi\\gre\\umpd.hxx:%d:UMPDOBJ::GetDDIOBJ:Unexpected usermode pointer.\n",
        799);
    return 0;
  }
  return v4;
}
