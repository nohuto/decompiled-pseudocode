/*
 * XREFs of ?CapturePOINTL@@YGXPAPAU_POINTL@@PAU1@@Z @ 0x216335
 * Callers:
 *     _NtGdiEngBitBlt@44 @ 0x217630 (_NtGdiEngBitBlt@44.c)
 *     _NtGdiEngCopyBits@24 @ 0x217AED (_NtGdiEngCopyBits@24.c)
 *     _NtGdiEngFillPath@28 @ 0x218304 (_NtGdiEngFillPath@28.c)
 *     _NtGdiEngGradientFill@40 @ 0x218480 (_NtGdiEngGradientFill@40.c)
 *     _NtGdiEngPaint@20 @ 0x21894A (_NtGdiEngPaint@20.c)
 *     _NtGdiEngPlgBlt@44 @ 0x218A7F (_NtGdiEngPlgBlt@44.c)
 *     _NtGdiEngStretchBlt@44 @ 0x218D88 (_NtGdiEngStretchBlt@44.c)
 *     _NtGdiEngStretchBltROP@52 @ 0x219109 (_NtGdiEngStretchBltROP@52.c)
 *     _NtGdiEngStrokeAndFillPath@40 @ 0x219580 (_NtGdiEngStrokeAndFillPath@40.c)
 *     _NtGdiEngStrokePath@32 @ 0x219789 (_NtGdiEngStrokePath@32.c)
 *     _NtGdiEngTextOut@40 @ 0x21998C (_NtGdiEngTextOut@40.c)
 * Callees:
 *     <none>
 */

void __fastcall CapturePOINTL(_DWORD **a1, _DWORD *a2)
{
  _DWORD *v2; // esi

  v2 = *a1;
  if ( *a1 )
  {
    if ( (unsigned int)v2 >= _MmUserProbeAddress )
      v2 = (_DWORD *)_MmUserProbeAddress;
    *a2 = *v2;
    a2[1] = v2[1];
    *a1 = a2;
  }
}
