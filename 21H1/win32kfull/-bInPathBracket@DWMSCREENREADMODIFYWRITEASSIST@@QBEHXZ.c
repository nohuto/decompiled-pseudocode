/*
 * XREFs of ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QBEHXZ @ 0x1FDC85
 * Callers:
 *     _NtGdiRectangle@20 @ 0xBB870 (_NtGdiRectangle@20.c)
 *     _NtGdiLineTo@12 @ 0xBBAF6 (_NtGdiLineTo@12.c)
 *     _NtGdiInvertRgn@8 @ 0x1FEC75 (_NtGdiInvertRgn@8.c)
 *     _GrePolyBezier@12 @ 0x1FFD2A (_GrePolyBezier@12.c)
 *     _GrePolyPolygon@20 @ 0x200428 (_GrePolyPolygon@20.c)
 *     _GrePolyPolyline@20 @ 0x2006C0 (_GrePolyPolyline@20.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall DWMSCREENREADMODIFYWRITEASSIST::bInPathBracket(DWMSCREENREADMODIFYWRITEASSIST *this)
{
  int v1; // eax

  v1 = **((_DWORD **)this + 5);
  return v1 && (*(_BYTE *)(v1 + 172) & 1) != 0;
}
