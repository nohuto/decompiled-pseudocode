/*
 * XREFs of ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C0130440
 * Callers:
 *     NtGdiEngCopyBits @ 0x1C012ECC0 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C012F020 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C012F4E0 (NtGdiEngBitBlt.c)
 *     NtGdiEngTextOut @ 0x1C012FA90 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBlt @ 0x1C012FDF0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngAlphaBlend @ 0x1C02B2950 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngFillPath @ 0x1C02B30A0 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C02B32B0 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02B36D0 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C02B38E0 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02B3A90 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02B3F00 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02B4210 (NtGdiEngStrokePath.c)
 *     NtGdiEngTransparentBlt @ 0x1C02B44D0 (NtGdiEngTransparentBlt.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02B5430 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     ?CaptureAndMungeCLIPOBJ@@YAPEAU_CLIPOBJ@@PEAU1@0PEAUtagSIZE@@@Z @ 0x1C02B1E58 (-CaptureAndMungeCLIPOBJ@@YAPEAU_CLIPOBJ@@PEAU1@0PEAUtagSIZE@@@Z.c)
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
          787);
    }
  }
  if ( (*((_DWORD *)this + 103) & 0x100) != 0 && v5 && v5 < MmSystemRangeStart )
  {
    if ( gfUMPDDebug )
      DbgPrint(
        "onecoreuap\\internal\\windows\\inc\\private\\core\\ntgdi\\gre\\umpd.hxx:%d:UMPDOBJ::GetDDIOBJ:Unexpected usermode pointer.\n",
        793);
    return 0LL;
  }
  return v5;
}
