/*
 * XREFs of ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C013250C
 * Callers:
 *     NtGdiEngStretchBltROP @ 0x1C01312C0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C0131780 (NtGdiEngBitBlt.c)
 *     NtGdiBRUSHOBJ_ulGetBrushColor @ 0x1C0131C00 (NtGdiBRUSHOBJ_ulGetBrushColor.c)
 *     NtGdiEngTextOut @ 0x1C0131D30 (NtGdiEngTextOut.c)
 *     NtGdiBRUSHOBJ_DeleteRbrush @ 0x1C02B0ED0 (NtGdiBRUSHOBJ_DeleteRbrush.c)
 *     NtGdiBRUSHOBJ_hGetColorTransform @ 0x1C02B0FD0 (NtGdiBRUSHOBJ_hGetColorTransform.c)
 *     NtGdiBRUSHOBJ_pvAllocRbrush @ 0x1C02B1040 (NtGdiBRUSHOBJ_pvAllocRbrush.c)
 *     NtGdiBRUSHOBJ_pvGetRbrush @ 0x1C02B10C0 (NtGdiBRUSHOBJ_pvGetRbrush.c)
 *     NtGdiEngFillPath @ 0x1C02B1B20 (NtGdiEngFillPath.c)
 *     NtGdiEngLineTo @ 0x1C02B2150 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C02B2360 (NtGdiEngPaint.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02B2980 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02B2C90 (NtGdiEngStrokePath.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx

  if ( a2 == *(_QWORD *)(a1 + 152) )
  {
    v3 = *(_QWORD *)(a1 + 144);
  }
  else if ( a2 == *(_QWORD *)(a1 + 168) )
  {
    v3 = *(_QWORD *)(a1 + 160);
  }
  else
  {
    v3 = 0LL;
  }
  if ( a2 )
  {
    if ( !v3 )
    {
      ++gdwUMPDUnmatchedUMPointers;
      if ( gfUMPDDebug )
        DbgPrint(
          "onecoreuap\\internal\\windows\\inc\\private\\core\\ntgdi\\gre\\umpd.hxx:%d:UMPDOBJ::GetDDIOBJ:Unmatched usermode pointer.\n",
          766);
    }
  }
  if ( (*(_DWORD *)(a1 + 412) & 0x100) != 0 && v3 && v3 < (unsigned __int64)MmSystemRangeStart )
  {
    if ( gfUMPDDebug )
      DbgPrint(
        "onecoreuap\\internal\\windows\\inc\\private\\core\\ntgdi\\gre\\umpd.hxx:%d:UMPDOBJ::GetDDIOBJ:Unexpected usermode pointer.\n",
        771);
    return 0LL;
  }
  return v3;
}
