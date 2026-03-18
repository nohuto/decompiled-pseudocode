/*
 * XREFs of ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEBAHXZ @ 0x1C029F9E0
 * Callers:
 *     GrePolyPolyline @ 0x1C0136000 (GrePolyPolyline.c)
 *     NtGdiRectangle @ 0x1C0137370 (NtGdiRectangle.c)
 *     GrePolyPolygon @ 0x1C0137C80 (GrePolyPolygon.c)
 *     NtGdiLineTo @ 0x1C01381C0 (NtGdiLineTo.c)
 *     NtGdiInvertRgn @ 0x1C013BC40 (NtGdiInvertRgn.c)
 *     GrePolyBezier @ 0x1C02A0B30 (GrePolyBezier.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMSCREENREADMODIFYWRITEASSIST::bInPathBracket(DWMSCREENREADMODIFYWRITEASSIST *this)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = *((_QWORD *)this + 3);
  if ( !*(_QWORD *)v1 )
    return 0;
  v2 = 1;
  if ( (*(_DWORD *)(*(_QWORD *)v1 + 248LL) & 1) == 0 )
    return 0;
  return v2;
}
