/*
 * XREFs of ?vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QAEXXZ @ 0x1FDD88
 * Callers:
 *     _NtGdiRectangle@20 @ 0xBB870 (_NtGdiRectangle@20.c)
 *     _NtGdiLineTo@12 @ 0xBBAF6 (_NtGdiLineTo@12.c)
 *     _NtGdiInvertRgn@8 @ 0x1FEC75 (_NtGdiInvertRgn@8.c)
 *     _GrePolyBezier@12 @ 0x1FFD2A (_GrePolyBezier@12.c)
 *     _GrePolyPolygon@20 @ 0x200428 (_GrePolyPolygon@20.c)
 *     _GrePolyPolyline@20 @ 0x2006C0 (_GrePolyPolyline@20.c)
 * Callees:
 *     ?vAccumulateTight@XDCOBJ@@QAEXAAVERECTL@@@Z @ 0xBB856 (-vAccumulateTight@XDCOBJ@@QAEXAAVERECTL@@@Z.c)
 *     ?vCurrentPosition@DC@@QAEXABU_POINTL@@ABU_POINTFIX@@@Z @ 0x1FDD2F (-vCurrentPosition@DC@@QAEXABU_POINTL@@ABU_POINTFIX@@@Z.c)
 */

void __thiscall DWMSCREENREADMODIFYWRITEASSIST::vRestoreAccumBoundsAndEnableSpriteUpdates(
        DWMSCREENREADMODIFYWRITEASSIST *this)
{
  DC *v2; // ecx
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax

  v2 = (DC *)**((_DWORD **)this + 5);
  if ( v2 )
  {
    if ( *((_DWORD *)this + 12) || *((_DWORD *)this + 13) )
    {
      DC::vCurrentPosition(v2, (const struct _POINTL *)this + 4, (const struct _POINTFIX *)this + 5);
      v3 = *(_DWORD *)(**((_DWORD **)this + 5) + 1020);
      if ( *((_DWORD *)this + 13) )
        *(_DWORD *)(v3 + 184) |= 0x100u;
      else
        *(_DWORD *)(v3 + 184) |= 0x200u;
    }
    *(_BYTE *)(*(_DWORD *)(**((_DWORD **)this + 5) + 1020) + 232) = *((_BYTE *)this + 24);
    v4 = *((_DWORD *)this + 7);
    v5 = *(_DWORD *)(**((_DWORD **)this + 5) + 1020);
    if ( *(_DWORD *)(v5 + 188) != v4 )
    {
      *(_DWORD *)(v5 + 188) = v4;
      v6 = *(_DWORD *)(**((_DWORD **)this + 5) + 1020);
      *(_DWORD *)(v6 + 184) |= 0x1000u;
    }
    if ( *(_DWORD *)this )
      XDCOBJ::vAccumulateTight(*((XDCOBJ **)this + 5), (DWMSCREENREADMODIFYWRITEASSIST *)((char *)this + 4));
    *(_DWORD *)(**((_DWORD **)this + 5) + 496) = 1;
  }
}
