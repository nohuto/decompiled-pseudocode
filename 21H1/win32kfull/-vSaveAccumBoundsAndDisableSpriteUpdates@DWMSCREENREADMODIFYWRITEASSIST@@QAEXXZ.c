/*
 * XREFs of ?vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QAEXXZ @ 0x1FDE41
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

void __thiscall DWMSCREENREADMODIFYWRITEASSIST::vSaveAccumBoundsAndDisableSpriteUpdates(
        DWMSCREENREADMODIFYWRITEASSIST *this)
{
  int v2; // eax
  _DWORD *v3; // esi
  int v4; // edx
  int v5; // ecx
  _DWORD *v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // esi
  int v11; // ecx
  int v12; // ecx

  v2 = **((_DWORD **)this + 5);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 496) = 0;
    v3 = (_DWORD *)((char *)this + 4);
    *(_DWORD *)this = GreGetBounds(***((_DWORD ***)this + 5), (char *)this + 4, 4);
    v4 = **((_DWORD **)this + 5);
    v5 = *(_DWORD *)(v4 + 28) & 1;
    *v3 -= *(_DWORD *)(v4 + 8 * v5 + 1048);
    *((_DWORD *)this + 3) -= *(_DWORD *)(v4 + 8 * v5 + 1048);
    *((_DWORD *)this + 2) -= *(_DWORD *)(v4 + 8 * v5 + 1052);
    *((_DWORD *)this + 4) -= *(_DWORD *)(v4 + 8 * v5 + 1052);
    v6 = (_DWORD *)*((_DWORD *)this + 5);
    *((_DWORD *)this + 6) = *(unsigned __int8 *)(*(_DWORD *)(*v6 + 1020) + 232);
    v7 = *(_DWORD *)(*v6 + 1020);
    if ( (*(_DWORD *)(v7 + 184) & 0x1000) != 0 )
    {
      *((_DWORD *)this + 7) = *(_DWORD *)(v7 + 188);
      GreDCSelectBrush(*v6, gahStockObjects[5]);
    }
    else
    {
      *((_DWORD *)this + 7) = GreDCSelectBrush(*v6, gahStockObjects[5]);
    }
    *(_BYTE *)(*(_DWORD *)(**((_DWORD **)this + 5) + 1020) + 232) = 11;
    v8 = *((_DWORD *)this + 5);
    v9 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v8 + 1020) + 184) & 0x100;
    *((_DWORD *)this + 12) = v9 == 0;
    v10 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v8 + 1020) + 184) & 0x200;
    *((_DWORD *)this + 13) = v10 == 0;
    if ( !v9 )
    {
      v11 = *(_DWORD *)(*(_DWORD *)v8 + 1020);
      *((_DWORD *)this + 8) = *(_DWORD *)(v11 + 236);
      *((_DWORD *)this + 9) = *(_DWORD *)(v11 + 240);
    }
    if ( !v10 )
    {
      v12 = *(_DWORD *)(*(_DWORD *)v8 + 1020);
      *((_DWORD *)this + 10) = *(_DWORD *)(v12 + 8);
      *((_DWORD *)this + 11) = *(_DWORD *)(v12 + 12);
    }
  }
}
