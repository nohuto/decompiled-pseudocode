/*
 * XREFs of ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C01324E0
 * Callers:
 *     NtGdiEngCopyBits @ 0x1C0130F60 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C01312C0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C0131780 (NtGdiEngBitBlt.c)
 *     NtGdiEngTextOut @ 0x1C0131D30 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBlt @ 0x1C0132090 (NtGdiEngStretchBlt.c)
 *     NtGdiEngAlphaBlend @ 0x1C02B13D0 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngEraseSurface @ 0x1C02B19A0 (NtGdiEngEraseSurface.c)
 *     NtGdiEngGradientFill @ 0x1C02B1D30 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02B2150 (NtGdiEngLineTo.c)
 *     NtGdiEngPlgBlt @ 0x1C02B2510 (NtGdiEngPlgBlt.c)
 *     NtGdiEngTransparentBlt @ 0x1C02B2F50 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     <none>
 */

void __fastcall CaptureRECTL(struct _RECTL **a1, struct _RECTL *a2)
{
  struct _RECTL *v2; // r9

  v2 = *a1;
  if ( *a1 )
  {
    if ( (unsigned __int64)v2 >= MmUserProbeAddress )
      v2 = (struct _RECTL *)MmUserProbeAddress;
    *a2 = *v2;
    *a1 = a2;
  }
}
