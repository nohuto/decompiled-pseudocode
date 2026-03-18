/*
 * XREFs of ?CaptureRECTL@@YGXPAPAU_RECTL@@PAU1@@Z @ 0x21635A
 * Callers:
 *     _NtGdiEngAlphaBlend@28 @ 0x2173F0 (_NtGdiEngAlphaBlend@28.c)
 *     _NtGdiEngBitBlt@44 @ 0x217630 (_NtGdiEngBitBlt@44.c)
 *     _NtGdiEngCopyBits@24 @ 0x217AED (_NtGdiEngCopyBits@24.c)
 *     _NtGdiEngEraseSurface@12 @ 0x2181D1 (_NtGdiEngEraseSurface@12.c)
 *     _NtGdiEngGradientFill@40 @ 0x218480 (_NtGdiEngGradientFill@40.c)
 *     _NtGdiEngLineTo@36 @ 0x21873E (_NtGdiEngLineTo@36.c)
 *     _NtGdiEngPlgBlt@44 @ 0x218A7F (_NtGdiEngPlgBlt@44.c)
 *     _NtGdiEngStretchBlt@44 @ 0x218D88 (_NtGdiEngStretchBlt@44.c)
 *     _NtGdiEngStretchBltROP@52 @ 0x219109 (_NtGdiEngStretchBltROP@52.c)
 *     _NtGdiEngTextOut@40 @ 0x21998C (_NtGdiEngTextOut@40.c)
 *     _NtGdiEngTransparentBlt@32 @ 0x219BED (_NtGdiEngTransparentBlt@32.c)
 * Callees:
 *     <none>
 */

void __fastcall CaptureRECTL(_DWORD **a1, _DWORD *a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // esi

  v2 = *a1;
  if ( *a1 )
  {
    if ( (unsigned int)v2 >= _MmUserProbeAddress )
      v2 = (_DWORD *)_MmUserProbeAddress;
    *a2 = *v2;
    v3 = v2 + 1;
    a2[1] = *v3++;
    a2[2] = *v3;
    a2[3] = v3[1];
    *a1 = a2;
  }
}
