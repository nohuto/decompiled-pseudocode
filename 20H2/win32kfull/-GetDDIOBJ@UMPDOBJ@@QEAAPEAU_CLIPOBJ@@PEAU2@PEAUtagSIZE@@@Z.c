/*
 * XREFs of ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C0132664
 * Callers:
 *     NtGdiEngCopyBits @ 0x1C0130F60 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C01312C0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C0131780 (NtGdiEngBitBlt.c)
 *     NtGdiEngTextOut @ 0x1C0131D30 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBlt @ 0x1C0132090 (NtGdiEngStretchBlt.c)
 *     NtGdiEngAlphaBlend @ 0x1C02B13D0 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngFillPath @ 0x1C02B1B20 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C02B1D30 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02B2150 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C02B2360 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02B2510 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02B2980 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02B2C90 (NtGdiEngStrokePath.c)
 *     NtGdiEngTransparentBlt @ 0x1C02B2F50 (NtGdiEngTransparentBlt.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02B3EB0 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     ?CaptureAndMungeCLIPOBJ@@YAPEAU_CLIPOBJ@@PEAU1@0PEAUtagSIZE@@@Z @ 0x1C02B08D8 (-CaptureAndMungeCLIPOBJ@@YAPEAU_CLIPOBJ@@PEAU1@0PEAUtagSIZE@@@Z.c)
 */

struct _CLIPOBJ *__fastcall UMPDOBJ::GetDDIOBJ(UMPDOBJ *this, struct _CLIPOBJ *a2, struct tagSIZE *a3)
{
  struct _CLIPOBJ *v5; // rbx

  if ( a2 == *((struct _CLIPOBJ **)this + 15) )
  {
    v5 = (struct _CLIPOBJ *)*((_QWORD *)this + 14);
  }
  else if ( a2 == *((struct _CLIPOBJ **)this + 17) )
  {
    v5 = CaptureAndMungeCLIPOBJ(a2, *((struct _CLIPOBJ **)this + 16), a3);
  }
  else
  {
    v5 = 0LL;
  }
  if ( a2 )
  {
    if ( !v5 )
    {
      ++gdwUMPDUnmatchedUMPointers;
      if ( gfUMPDDebug )
        DbgPrint(
          "onecoreuap\\internal\\windows\\inc\\private\\core\\ntgdi\\gre\\umpd.hxx:%d:UMPDOBJ::GetDDIOBJ:Unmatched usermode pointer.\n",
          786);
    }
  }
  if ( (*((_DWORD *)this + 103) & 0x100) != 0 && v5 && v5 < MmSystemRangeStart )
  {
    if ( gfUMPDDebug )
      DbgPrint(
        "onecoreuap\\internal\\windows\\inc\\private\\core\\ntgdi\\gre\\umpd.hxx:%d:UMPDOBJ::GetDDIOBJ:Unexpected usermode pointer.\n",
        792);
    return 0LL;
  }
  return v5;
}
