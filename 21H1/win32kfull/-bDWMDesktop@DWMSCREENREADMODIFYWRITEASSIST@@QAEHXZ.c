/*
 * XREFs of ?bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QAEHXZ @ 0xBC054
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

int __thiscall DWMSCREENREADMODIFYWRITEASSIST::bDWMDesktop(DWMSCREENREADMODIFYWRITEASSIST *this)
{
  int v1; // ecx
  int result; // eax

  v1 = **((_DWORD **)this + 5);
  result = 0;
  if ( v1 && *(_DWORD *)(v1 + 500) && (*(_DWORD *)(v1 + 24) & 0x4000) != 0 )
    return 1;
  return result;
}
