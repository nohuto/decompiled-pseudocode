/*
 * XREFs of ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1C01324B4
 * Callers:
 *     NtGdiEngCopyBits @ 0x1C0130F60 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C01312C0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C0131780 (NtGdiEngBitBlt.c)
 *     NtGdiEngTextOut @ 0x1C0131D30 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBlt @ 0x1C0132090 (NtGdiEngStretchBlt.c)
 *     NtGdiEngFillPath @ 0x1C02B1B20 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C02B1D30 (NtGdiEngGradientFill.c)
 *     NtGdiEngPaint @ 0x1C02B2360 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02B2510 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02B2980 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02B2C90 (NtGdiEngStrokePath.c)
 * Callees:
 *     <none>
 */

void __fastcall CapturePOINTL(struct _POINTL **a1, struct _POINTL *a2)
{
  struct _POINTL *v2; // r9

  v2 = *a1;
  if ( *a1 )
  {
    if ( (unsigned __int64)v2 >= MmUserProbeAddress )
      v2 = (struct _POINTL *)MmUserProbeAddress;
    *a2 = *v2;
    *a1 = a2;
  }
}
