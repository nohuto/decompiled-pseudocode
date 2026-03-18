/*
 * XREFs of ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x1C01302BC
 * Callers:
 *     NtGdiEngCopyBits @ 0x1C012ECC0 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C012F020 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C012F4E0 (NtGdiEngBitBlt.c)
 *     NtGdiEngTextOut @ 0x1C012FA90 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBlt @ 0x1C012FDF0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngAlphaBlend @ 0x1C02B2950 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngEraseSurface @ 0x1C02B2F20 (NtGdiEngEraseSurface.c)
 *     NtGdiEngGradientFill @ 0x1C02B32B0 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02B36D0 (NtGdiEngLineTo.c)
 *     NtGdiEngPlgBlt @ 0x1C02B3A90 (NtGdiEngPlgBlt.c)
 *     NtGdiEngTransparentBlt @ 0x1C02B44D0 (NtGdiEngTransparentBlt.c)
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
