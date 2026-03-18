/*
 * XREFs of ?bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C013A908
 * Callers:
 *     GrePolyPolyline @ 0x1C0137F50 (GrePolyPolyline.c)
 *     NtGdiRectangle @ 0x1C01392C0 (NtGdiRectangle.c)
 *     GrePolyPolygon @ 0x1C0139C50 (GrePolyPolygon.c)
 *     NtGdiLineTo @ 0x1C013A190 (NtGdiLineTo.c)
 *     NtGdiInvertRgn @ 0x1C013DC50 (NtGdiInvertRgn.c)
 *     GrePolyBezier @ 0x1C029F6E0 (GrePolyBezier.c)
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
