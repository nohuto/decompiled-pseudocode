/*
 * XREFs of ?bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C0138938
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

__int64 __fastcall DWMSCREENREADMODIFYWRITEASSIST::bDWMDesktop(DWMSCREENREADMODIFYWRITEASSIST *this)
{
  __int64 *v1; // rax
  unsigned int v2; // ecx
  __int64 v3; // rdx

  v1 = (__int64 *)*((_QWORD *)this + 3);
  v2 = 0;
  v3 = *v1;
  if ( *v1 && *(_DWORD *)(v3 + 492) )
    return (*(_DWORD *)(v3 + 36) & 0x4000) != 0;
  return v2;
}
