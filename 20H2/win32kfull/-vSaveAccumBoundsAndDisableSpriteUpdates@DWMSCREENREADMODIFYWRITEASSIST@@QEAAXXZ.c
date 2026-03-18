/*
 * XREFs of ?vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C029E798
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

void __fastcall DWMSCREENREADMODIFYWRITEASSIST::vSaveAccumBoundsAndDisableSpriteUpdates(
        DWMSCREENREADMODIFYWRITEASSIST *this)
{
  __int64 v1; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // edx
  int v9; // r9d

  v1 = *((_QWORD *)this + 3);
  if ( *(_QWORD *)v1 )
  {
    *(_DWORD *)(*(_QWORD *)v1 + 488LL) = 0;
    *(_DWORD *)this = GreGetBounds(***((_QWORD ***)this + 3), (char *)this + 4, 4LL);
    v3 = **((_QWORD **)this + 3);
    v4 = *(_DWORD *)(v3 + 40) & 1;
    *((_DWORD *)this + 1) -= *(_DWORD *)(v3 + 8 * v4 + 1016);
    *((_DWORD *)this + 3) -= *(_DWORD *)(v3 + 8 * v4 + 1016);
    *((_DWORD *)this + 2) -= *(_DWORD *)(v3 + 8 * v4 + 1020);
    *((_DWORD *)this + 4) -= *(_DWORD *)(v3 + 8 * v4 + 1020);
    v5 = (_QWORD *)*((_QWORD *)this + 3);
    *((_DWORD *)this + 8) = *(unsigned __int8 *)(*(_QWORD *)(*v5 + 976LL) + 212LL);
    v6 = *(_QWORD *)(*v5 + 976LL);
    if ( (*(_DWORD *)(v6 + 152) & 0x1000) != 0 )
    {
      *((_QWORD *)this + 5) = *(_QWORD *)(v6 + 160);
      GreDCSelectBrush(*v5, gahStockObjects[5]);
    }
    else
    {
      *((_QWORD *)this + 5) = GreDCSelectBrush(*v5, gahStockObjects[5]);
    }
    *(_BYTE *)(*(_QWORD *)(**((_QWORD **)this + 3) + 976LL) + 212LL) = 11;
    v7 = *((_QWORD *)this + 3);
    v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 976LL) + 152LL) & 0x100;
    *((_DWORD *)this + 16) = v8 == 0;
    v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 976LL) + 152LL) & 0x200;
    *((_DWORD *)this + 17) = v9 == 0;
    if ( !v8 )
      *((_QWORD *)this + 6) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 976LL) + 216LL);
    if ( !v9 )
      *((_QWORD *)this + 7) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 976LL) + 8LL);
  }
}
