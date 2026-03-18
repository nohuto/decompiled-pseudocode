/*
 * XREFs of ?DrvRealizeHalftonePalette@@YGPAVPALETTE@@PAUHDEV__@@H@Z @ 0x1D12FD
 * Callers:
 *     _DrvRealizeHalftonePaletteWrap@8 @ 0x1D157D (_DrvRealizeHalftonePaletteWrap@8.c)
 *     ?LoadElement@MULTIBRUSH@@QAEXPAU_DISPSURF@@PAVSURFACE@@@Z @ 0x20182C (-LoadElement@MULTIBRUSH@@QAEXPAU_DISPSURF@@PAVSURFACE@@@Z.c)
 *     ?MulAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z @ 0x2019CF (-MulAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z.c)
 *     ?MulBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x201F9D (-MulBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4.c)
 *     ?MulDrawStream@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@KPAXPAU_DSSTATE@@@Z @ 0x202E96 (-MulDrawStream@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@KPAXPAU_DSSTA.c)
 *     ?MulGradientFill@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAXKPAU_RECTL@@PAU_POINTL@@K@Z @ 0x203762 (-MulGradientFill@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAXKPAU_RECTL@@PAU_.c)
 *     ?MulStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x203EDB (-MulStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@.c)
 *     ?MulTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z @ 0x204EF4 (-MulTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z.c)
 *     ?bBitBltScreenToScreen@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x20595F (-bBitBltScreenToScreen@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     _GreCreateCompatibleHalftonePalette@8 @ 0xADC12 (_GreCreateCompatibleHalftonePalette@8.c)
 *     _GreRealizePalette@4 @ 0xBF88E (_GreRealizePalette@4.c)
 */

struct PALETTE *__fastcall DrvRealizeHalftonePalette(int a1, int a2)
{
  int v4; // esi
  int v5; // ecx
  HDC DisplayDC; // edi
  int CompatibleHalftonePalette; // eax
  int v8; // edx
  int v9; // eax
  _DWORD *v10; // eax
  struct PALETTE *v11; // esi
  int v13; // [esp+Ch] [ebp-Ch] BYREF
  int v14; // [esp+10h] [ebp-8h]
  int v15; // [esp+14h] [ebp-4h] BYREF

  v15 = 0;
  v13 = _ghsemHT;
  GreAcquireSemaphore(_ghsemHT);
  v4 = *(_DWORD *)(a1 + 1116);
  if ( !a2 && v4 )
    goto LABEL_11;
  DisplayDC = (HDC)GreCreateDisplayDC(a1, 0, 0);
  if ( !DisplayDC )
    goto LABEL_12;
  if ( !v4 )
  {
    CompatibleHalftonePalette = GreCreateCompatibleHalftonePalette(v5, 10);
    LOBYTE(v8) = 8;
    v9 = HmgShareLockCheck(CompatibleHalftonePalette, v8);
    if ( v9 )
    {
      *(_DWORD *)(a1 + 1116) = v9;
      DEC_SHARE_REF_CNT(v9);
    }
  }
  v10 = *(_DWORD **)(a1 + 1116);
  if ( v10 )
  {
    v14 = GreSelectPalette(DisplayDC, *v10, 1);
    if ( v14 )
    {
      v15 = *(_DWORD *)(a1 + 1116);
      XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v15);
      GreRealizePalette(DisplayDC);
      GreSelectPalette(DisplayDC, v14, 0);
      v15 = 1;
    }
  }
  bDeleteDCInternal(DisplayDC, 1, 0, 0);
  if ( v15 )
LABEL_11:
    v11 = *(struct PALETTE **)(a1 + 1116);
  else
LABEL_12:
    v11 = ppalDefault;
  SEMOBJ::vUnlock((SEMOBJ *)&v13);
  return v11;
}
