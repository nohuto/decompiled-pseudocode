/*
 * XREFs of ?LoadElement@MULTIBRUSH@@QAEXPAU_DISPSURF@@PAVSURFACE@@@Z @ 0x20182C
 * Callers:
 *     ?MulBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x201F9D (-MulBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4.c)
 *     ?MulFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x203534 (-MulFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z.c)
 *     ?MulLineTo@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@JJJJPAU_RECTL@@K@Z @ 0x203A11 (-MulLineTo@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@JJJJPAU_RECTL@@K@Z.c)
 *     ?MulStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@4PAU_POINTL@@KK@Z @ 0x2046EE (-MulStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU.c)
 *     ?MulStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@PAU_LINEATTRS@@K@Z @ 0x20495E (-MulStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL.c)
 *     ?MulTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@K@Z @ 0x204C5E (-MulTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PA.c)
 *     ?bBitBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x2054D5 (-bBitBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRU.c)
 *     ?bBitBltScreenToScreen@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x20595F (-bBitBltScreenToScreen@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_.c)
 * Callees:
 *     ?DrvRealizeHalftonePalette@@YGPAVPALETTE@@PAUHDEV__@@H@Z @ 0x1D12FD (-DrvRealizeHalftonePalette@@YGPAVPALETTE@@PAUHDEV__@@H@Z.c)
 */

void __thiscall MULTIBRUSH::LoadElement(MULTIBRUSH *this, struct _DISPSURF *a2, struct SURFACE *a3)
{
  int v4; // edx
  struct SURFACE *v5; // ebx
  struct _DISPSURF *v6; // ecx
  int v7; // esi
  struct PALETTE *v8; // eax
  _DWORD *v9; // edx
  int v10; // eax
  _DWORD *v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // esi
  int v16; // esi
  int v17; // eax
  struct PALETTE *v18; // [esp+14h] [ebp-4h]

  v4 = *((_DWORD *)this + 2);
  if ( !v4 )
    return;
  v5 = a3;
  if ( !a3 )
    return;
  v6 = a2;
  if ( !*((_DWORD *)a2 + 4) )
  {
    v16 = *((_DWORD *)this + 5);
    if ( v16 )
      *(_DWORD *)(v4 + 4) = *(_DWORD *)(v16 + 8 * *((_DWORD *)a2 + 2) + 4);
    goto LABEL_20;
  }
  v7 = *((_DWORD *)a2 + 9);
  v18 = ppalDefault;
  if ( (*(_DWORD *)(v7 + 1456) & 0x100) != 0 )
  {
    v8 = DrvRealizeHalftonePalette(v7, 0);
    v6 = a2;
    v18 = v8;
  }
  if ( *((int *)a2 + 4) > 0 )
  {
    v9 = (_DWORD *)*((_DWORD *)this + 2);
    if ( *v9 == -1 )
    {
      v10 = v9[4];
      if ( v10 != -1 )
      {
        **((_DWORD **)this + 2) = ulGetNearestIndexFromColorref(*((_DWORD *)v5 + 22), v18, v10, 1);
        *(_DWORD *)(*((_DWORD *)this + 2) + 4) = 0;
        goto LABEL_20;
      }
    }
  }
  v11 = (_DWORD *)*((_DWORD *)this + 2);
  if ( *v11 == -1 )
  {
    v15 = *((_DWORD *)this + 5);
    if ( v15 )
    {
      *((_DWORD *)this + 6) = v11[5];
      v11[5] = *(_DWORD *)(v15 + 8 * *((_DWORD *)v6 + 2) + 8);
      *(_DWORD *)(*((_DWORD *)this + 2) + 4) = *(_DWORD *)(*((_DWORD *)this + 5) + 8 * *((_DWORD *)v6 + 2) + 4);
    }
    goto LABEL_20;
  }
  v12 = *((_DWORD *)v5 + 22);
  v13 = v11[4];
  a2 = (struct _DISPSURF *)v12;
  if ( v12 )
  {
    if ( (v13 & 0x3000000) == 0 && (*(_DWORD *)(v7 + 1456) & 0x100) != 0 )
    {
      v14 = XEPALOBJ::ulDispatchGFPEFunction(&a2, *(_DWORD *)(v12 + 64), v13);
      v5 = a3;
      **((_DWORD **)this + 2) = v14;
      goto LABEL_20;
    }
    v5 = a3;
  }
  **((_DWORD **)this + 2) = ulGetNearestIndexFromColorref(*((_DWORD *)v5 + 22), v18, v11[4], 1);
LABEL_20:
  if ( *((_DWORD *)this + 5) )
  {
    *(_DWORD *)(*((_DWORD *)this + 2) + 56) = v5;
    v17 = *((_DWORD *)v5 + 22);
    if ( v17 )
      *(_DWORD *)(*((_DWORD *)this + 2) + 60) = v17;
  }
}
