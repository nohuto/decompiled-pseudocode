/*
 * XREFs of ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YGHKAAVDCOBJ@@AAVPDEVOBJ@@AAVSURFREF@@AAVXEPALOBJ@@PAUHDC__@@PAUHBITMAP__@@IIPAEPAUtagBITMAPINFO@@III@Z @ 0x4B706 (-GreGetDIBitsInternalWorker@@YGHKAAVDCOBJ@@AAVPDEVOBJ@@AAVSURFREF@@AAVXEPALOBJ@@PAUHDC__@@PAUHBI.c)
 *     _EngCopyBits@24 @ 0x519F0 (_EngCopyBits@24.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     _GreDrawStream@12 @ 0x5C150 (_GreDrawStream@12.c)
 *     ?vSetPointer@@YGXPAUHDEV__@@PAU_CURSINFO@@KKK@Z @ 0x77F4E (-vSetPointer@@YGXPAUHDEV__@@PAU_CURSINFO@@KKK@Z.c)
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 *     _GreMaskBlt@52 @ 0x7A502 (_GreMaskBlt@52.c)
 *     ?vProcessCursorShape@@YGXPAUHDEV__@@HHPAU_SURFOBJ@@1PAVPALETTE@@PAU_RECTL@@PAPAUHBITMAP__@@@Z @ 0x935DE (-vProcessCursorShape@@YGXPAUHDEV__@@HHPAU_SURFOBJ@@1PAVPALETTE@@PAU_RECTL@@PAPAUHBITMAP__@@@Z.c)
 *     ?bGetRealizedBrush@@YGHPAVBRUSH@@PAVEBRUSHOBJ@@P6GHPAU_BRUSHOBJ@@PAU_SURFOBJ@@33PAU_XLATEOBJ@@K@Z@Z @ 0x95996 (-bGetRealizedBrush@@YGHPAVBRUSH@@PAVEBRUSHOBJ@@P6GHPAU_BRUSHOBJ@@PAU_SURFOBJ@@33PAU_XLATEOBJ@@K@.c)
 *     ?EngRealizeBrush@@YGHPAU_BRUSHOBJ@@PAU_SURFOBJ@@11PAU_XLATEOBJ@@K@Z @ 0x961A2 (-EngRealizeBrush@@YGHPAU_BRUSHOBJ@@PAU_SURFOBJ@@11PAU_XLATEOBJ@@K@Z.c)
 *     ?bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z @ 0xA0A28 (-bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z.c)
 *     _GreGradientFill@24 @ 0xBCEF0 (_GreGradientFill@24.c)
 *     _NtGdiTransparentBlt@44 @ 0xC151A (_NtGdiTransparentBlt@44.c)
 *     ?bSpDwmUpdateSpriteShape@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAU_SURFOBJ@@PAU_RECTL@@PAVPALETTE@@PAK4PAPAV3@@Z @ 0xC62AC (-bSpDwmUpdateSpriteShape@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAU_SURFOBJ@@PAU_REC.c)
 *     ?vProfileDriver@PDEVOBJ@@QAEXXZ @ 0xE4A94 (-vProfileDriver@PDEVOBJ@@QAEXXZ.c)
 *     ?bSpDwmUpdateMaskCursor@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAU_SURFOBJ@@3PAU_RECTL@@PAKPAPAV3@@Z @ 0x1CD742 (-bSpDwmUpdateMaskCursor@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAU_SURFOBJ@@3PAU_REC.c)
 *     ?EngNineGridHelper@@YGHAAVXDCOBJ@@PAVPALETTE@@1PAU_SURFOBJ@@2PAU_RECTL@@3PAU_MARGINS@@@Z @ 0x1DA746 (-EngNineGridHelper@@YGHAAVXDCOBJ@@PAVPALETTE@@1PAU_SURFOBJ@@2PAU_RECTL@@3PAU_MARGINS@@@Z.c)
 *     ?bSpTransferShape@@YGHPAVSPRITE@@0@Z @ 0x1DE52B (-bSpTransferShape@@YGHPAVSPRITE@@0@Z.c)
 *     ?bSpUpdateShape@@YGHPAVSPRITE@@KPAUHDC__@@1KPAU_BLENDFUNCTION@@PAU_POINTL@@PAUtagSIZE@@PAU_RECTL@@@Z @ 0x1DE86D (-bSpUpdateShape@@YGHPAVSPRITE@@KPAUHDC__@@1KPAU_BLENDFUNCTION@@PAU_POINTL@@PAUtagSIZE@@PAU_RECTL.c)
 *     ?vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E0318 (-vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     ?vSpDrawCursor@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@1@Z @ 0x1E1501 (-vSpDrawCursor@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@1@Z.c)
 *     ?vSpReadFromScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E19B3 (-vSpReadFromScreen@@YGXPAU_SPRITESTATE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 *     _GrePlgBlt@44 @ 0x1EDD56 (_GrePlgBlt@44.c)
 *     ?MulAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z @ 0x2019CF (-MulAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z.c)
 *     ?MulBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x201F9D (-MulBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4.c)
 *     ?MulDrawStream@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@KPAXPAU_DSSTATE@@@Z @ 0x202E96 (-MulDrawStream@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@KPAXPAU_DSSTA.c)
 *     ?MulGradientFill@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAXKPAU_RECTL@@PAU_POINTL@@K@Z @ 0x203762 (-MulGradientFill@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAXKPAU_RECTL@@PAU_.c)
 *     ?MulStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x203EDB (-MulStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@.c)
 *     ?MulTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z @ 0x204EF4 (-MulTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z.c)
 *     ?bBitBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x2054D5 (-bBitBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRU.c)
 *     ?bBitBltScreenToScreen@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x20595F (-bBitBltScreenToScreen@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_.c)
 *     _EngHTBlt@48 @ 0x2271FF (_EngHTBlt@48.c)
 * Callees:
 *     ?CreateXlateObject@@YGPAVXLATE@@PAXJVXEPALOBJ@@111KKKK@Z @ 0x5D380 (-CreateXlateObject@@YGPAVXLATE@@PAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?vAddToCache@EXLATEOBJ@@QAEXVXEPALOBJ@@000@Z @ 0x9C5F6 (-vAddToCache@EXLATEOBJ@@QAEXVXEPALOBJ@@000@Z.c)
 *     ?ulTime@XEPALOBJ@@QAEKXZ @ 0xF8393 (-ulTime@XEPALOBJ@@QAEKXZ.c)
 */

int __thiscall EXLATEOBJ::bInitXlateObj(
        int *this,
        int a2,
        int a3,
        _DWORD *a4,
        _DWORD *a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v11; // eax
  _DWORD *v12; // esi
  _DWORD *v13; // edi
  _DWORD *v14; // ecx
  int v15; // edx
  _DWORD *v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ebx
  int v20; // ebx
  int v21; // edx
  _DWORD *v22; // eax
  struct _XLATETABLE *v23; // eax
  struct _XLATETABLE **v24; // ecx
  int XlateObject; // eax
  int *v26; // esi
  _DWORD *v28; // eax
  struct _XLATETABLE *v29; // eax
  int v30; // eax
  struct _XLATETABLE *v31; // eax
  struct _XLATETABLE *v32; // ecx
  struct _XLATETABLE *v33; // eax
  int v34; // ecx
  int v35; // ecx
  unsigned int v36; // eax
  int v37; // [esp+Ch] [ebp-24h] BYREF
  int v38; // [esp+10h] [ebp-20h]
  int v39; // [esp+14h] [ebp-1Ch] BYREF
  unsigned int i; // [esp+18h] [ebp-18h]
  signed __int32 v41; // [esp+1Ch] [ebp-14h] BYREF
  int v42; // [esp+20h] [ebp-10h]
  int v43; // [esp+24h] [ebp-Ch]
  struct _XLATETABLE *v44; // [esp+28h] [ebp-8h]
  int *v45; // [esp+2Ch] [ebp-4h]

  v11 = a7;
  v12 = a4;
  v45 = this;
  v42 = a7;
  v13 = a5;
  if ( !a4 && (!a5 || (a5[4] & 0x800) != 0 && ((v34 = *(_DWORD *)(a7 + 56)) == 0 || v34 == *(_DWORD *)(a7 + 52)))
    || !a5 && (a4[4] & 0x800) != 0 && ((v35 = *(_DWORD *)(a7 + 56)) == 0 || v35 == *(_DWORD *)(a7 + 52))
    || a4
    && a5
    && ((v14 = (_DWORD *)a4[20], v14 != a4) ? (v15 = v14[6]) : (v15 = a4[6]),
        (v16 = (_DWORD *)a5[20], v16 != a5) ? (v17 = v16[6]) : (v17 = a5[6]),
        v15 == v17) )
  {
    *v45 = (int)xloIdent;
    return 1;
  }
  else
  {
    v18 = a3;
    v19 = 1;
    if ( (a3 & 7) != 0 && a2 )
    {
      v19 = 0;
    }
    else if ( a4 && a5 )
    {
      v20 = a4[10];
      v39 = a6;
      v37 = _ghsemPalette;
      GreAcquireSemaphore(_ghsemPalette);
      v21 = v42;
      for ( i = 0; i < 8; ++i )
      {
        v22 = (_DWORD *)a4[20];
        if ( v22 == a4 )
          v23 = (struct _XLATETABLE *)a4[6];
        else
          v23 = (struct _XLATETABLE *)v22[6];
        v44 = v23;
        v38 = 24 * v20;
        v24 = &xlateTable + 6 * v20;
        if ( v24[2] == v23 )
        {
          v28 = (_DWORD *)a5[20];
          v29 = (struct _XLATETABLE *)(v28 == a5 ? a5[6] : v28[6]);
          if ( v24[3] == v29 )
          {
            v30 = *(_DWORD *)(v21 + 80);
            v31 = v30 == v21 ? *(struct _XLATETABLE **)(v21 + 24) : *(struct _XLATETABLE **)(v30 + 24);
            if ( v24[5] == v31 )
            {
              v32 = v24[1];
              v44 = v32;
              *v45 = (int)v32;
              v41 = *((_DWORD *)v32 + 14);
              if ( (v41 & 0x6000) == a11 )
              {
                v43 = *((_DWORD *)v32 + 1);
                if ( !_bittest(&v41, 8u) && (v43 & 4) == 0 )
                  goto LABEL_41;
                v33 = v44;
                if ( (v43 & 4) != 0 && a10 == *((_DWORD *)v44 + 5) )
                {
                  v36 = XEPALOBJ::ulTime((XEPALOBJ *)&v39);
                  v21 = v42;
                  if ( *(_DWORD *)((char *)xlateTable + v38 + 16) == v36 )
                    goto LABEL_41;
                  v33 = v44;
                }
                if ( (v41 & 0x100) != 0 && a8 == *((_DWORD *)v33 + 6) && a9 == *((_DWORD *)v33 + 7) )
                {
LABEL_41:
                  _InterlockedIncrement((volatile signed __int32 *)&xlateTable + 6 * v20);
                  a4[10] = v20;
                  SEMOBJ::vUnlock((SEMOBJ *)&v37);
                  return 1;
                }
              }
            }
          }
        }
        v20 = ((_BYTE)v20 + 1) & 7;
      }
      *v45 = 0;
      if ( _ghsemPalette )
      {
        EtwTraceGreLockReleaseSemaphore(L"hsem", _ghsemPalette);
        GreReleaseSemaphoreInternal(_ghsemPalette);
      }
      v18 = a3;
      v19 = 1;
      v12 = a4;
      v13 = a5;
      v11 = a7;
    }
    XlateObject = CreateXlateObject(a2, v18, v12, v13, a6, v11, a8, a9, a10, a11);
    v26 = v45;
    *v45 = XlateObject;
    if ( XlateObject )
    {
      if ( v19 && a4 && a5 && (*(_DWORD *)(XlateObject + 56) & 0x200) == 0 )
        EXLATEOBJ::vAddToCache(v26, a4, a5, a6, a7);
      return 1;
    }
    else
    {
      return 0;
    }
  }
}
