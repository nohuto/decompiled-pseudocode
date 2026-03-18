/*
 * XREFs of ?bSpDwmUpdateSpriteShape@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAU_SURFOBJ@@PAU_RECTL@@PAVPALETTE@@PAK4PAPAV3@@Z @ 0xC62AC
 * Callers:
 *     ?GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUNCTION@@KPAUtagRECT@@PAUtagMINIWINDOWINFO@@HH@Z @ 0x603A0 (-GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_.c)
 *     ?bSpDwmUpdateCursor@@YGHPAUHSPRITE__@@PAU_SURFOBJ@@1PAU_XLATEOBJ@@PAU_RECTL@@PAU_BLENDFUNCTION@@@Z @ 0xD05AE (-bSpDwmUpdateCursor@@YGHPAUHSPRITE__@@PAU_SURFOBJ@@1PAU_XLATEOBJ@@PAU_RECTL@@PAU_BLENDFUNCTION@@.c)
 *     ?bSpDwmUpdateMaskCursor@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAU_SURFOBJ@@3PAU_RECTL@@PAKPAPAV3@@Z @ 0x1CD742 (-bSpDwmUpdateMaskCursor@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAU_SURFOBJ@@3PAU_REC.c)
 * Callees:
 *     ?bNeedRenderHint@@YGHAAVPDEVOBJ@@@Z @ 0x23160 (-bNeedRenderHint@@YGHAAVPDEVOBJ@@@Z.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ??XERECTL@@QAEAAV0@ABU_RECTL@@@Z @ 0x4F46A (--XERECTL@@QAEAAV0@ABU_RECTL@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vSpUpdateDirtyRgn@@YGXPAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUHDC__@@PAUtagRECT@@PAKH@Z @ 0x60D20 (-vSpUpdateDirtyRgn@@YGXPAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUHDC__@@PAUtagRECT@@PAKH@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QAEXXZ @ 0x794B6 (-vAltUnlock@EXLATEOBJ@@QAEXXZ.c)
 *     ?bOffsetSubtract@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x8D950 (-bOffsetSubtract@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     ?bSpDwmCreateLogicalSurface@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagSIZE@@PAPAV3@@Z @ 0xC6572 (-bSpDwmCreateLogicalSurface@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagSIZE@@PAPAV.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?vScale@ERECTL@@QAEXABVPOINTFL@@@Z @ 0x1CDA4B (-vScale@ERECTL@@QAEXABVPOINTFL@@@Z.c)
 *     ?RedirCopyBits@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@@Z @ 0x1FB17E (-RedirCopyBits@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@@Z.c)
 *     ?RedirStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x1FBB44 (-RedirStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL.c)
 */

int __userpurge bSpDwmUpdateSpriteShape@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        HDEV a3,
        SURFOBJ *psoSrc,
        struct SFMLOGICALSURFACE *a5,
        struct _SURFOBJ *a6,
        struct _RECTL *a7,
        struct PALETTE *a8,
        XLATEOBJ *a9,
        struct _RECTL *a10,
        struct SFMLOGICALSURFACE **a11)
{
  int LogicalSurface; // esi
  LONG v12; // ecx
  LONG v13; // edx
  LONG v14; // ebx
  XLATEOBJ *v15; // eax
  XLATEOBJ *v16; // ebx
  _DWORD *iUniq; // ebx
  struct _SURFOBJ *v18; // ecx
  SURFOBJ *v19; // esi
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // edi
  int v24; // eax
  SURFOBJ *v25; // ecx
  int v26; // eax
  struct tagSIZE *v28; // [esp+0h] [ebp-84h]
  unsigned int *v29; // [esp+0h] [ebp-84h]
  struct SFMLOGICALSURFACE **v30; // [esp+4h] [ebp-80h]
  int v31; // [esp+4h] [ebp-80h]
  _DWORD v32[4]; // [esp+10h] [ebp-74h] BYREF
  _DWORD v33[2]; // [esp+20h] [ebp-64h] BYREF
  _DWORD v34[2]; // [esp+28h] [ebp-5Ch] BYREF
  _DWORD v35[2]; // [esp+30h] [ebp-54h] BYREF
  int v36; // [esp+38h] [ebp-4Ch] BYREF
  SURFOBJ *v37; // [esp+3Ch] [ebp-48h]
  POINTL pptlSrc; // [esp+40h] [ebp-44h] BYREF
  HDEV left; // [esp+48h] [ebp-3Ch]
  int v40; // [esp+4Ch] [ebp-38h]
  int v41; // [esp+50h] [ebp-34h]
  XLATEOBJ *pxlo; // [esp+54h] [ebp-30h]
  XLATEOBJ *top; // [esp+58h] [ebp-2Ch] BYREF
  RECTL prclSrc; // [esp+5Ch] [ebp-28h] BYREF
  RECTL prclTrg; // [esp+6Ch] [ebp-18h] BYREF

  v41 = a1;
  LogicalSurface = 1;
  left = a3;
  v40 = a2;
  v37 = psoSrc;
  pxlo = a9;
  v36 = a2;
  if ( psoSrc )
  {
    v12 = *(_DWORD *)a5;
    if ( *(int *)a5 >= 0 )
    {
      v13 = *((_DWORD *)a5 + 1);
      if ( v13 >= 0 )
      {
        v14 = *((_DWORD *)a5 + 2);
        if ( v14 <= psoSrc->sizlBitmap.cx )
        {
          v15 = (XLATEOBJ *)*((_DWORD *)a5 + 3);
          top = v15;
          if ( (int)v15 <= psoSrc->sizlBitmap.cy && v13 <= (int)v15 && v12 <= v14 )
          {
            v34[0] = 0;
            prclTrg.left = v12;
            v33[0] = v14 - v12;
            prclTrg.top = v13;
            v33[1] = (char *)top - v13;
            prclTrg.right = v14;
            prclTrg.bottom = (LONG)top;
            SURFREFVIEW::bMap((SURFREFVIEW *)v34, psoSrc);
            if ( !v34[0] )
              goto LABEL_37;
            v16 = pxlo;
            LogicalSurface = bSpDwmCreateLogicalSurface(
                               left,
                               (struct DWMSPRITE *)v33,
                               (struct SFMLOGICALSURFACE *)pxlo,
                               v28,
                               v30);
            if ( !LogicalSurface )
              goto LABEL_37;
            iUniq = (_DWORD *)v16->iUniq;
            v18 = (struct _SURFOBJ *)iUniq[28];
            v35[0] = 0;
            SURFREFVIEW::bMap((SURFREFVIEW *)v35, v18);
            if ( !v35[0] )
              goto LABEL_36;
            left = (HDEV)prclTrg.left;
            pptlSrc.x = prclTrg.left;
            top = (XLATEOBJ *)prclTrg.top;
            pptlSrc.y = prclTrg.top;
            ERECTL::bOffsetSubtract((ERECTL *)&prclTrg, &pptlSrc, 0);
            if ( a8 )
            {
              ERECTL::operator*=(&prclTrg.left, (int *)a8);
              pptlSrc.x = (LONG)left + prclTrg.left;
              pptlSrc.y = (LONG)top + prclTrg.top;
            }
            if ( ERECTL::bEmpty((ERECTL *)&prclTrg) )
            {
LABEL_36:
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v35);
LABEL_37:
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v34);
              return LogicalSurface;
            }
            pxlo = xloIdent;
            top = 0;
            if ( a6 )
            {
              LogicalSurface = EXLATEOBJ::bInitXlateObj(
                                 (int *)&top,
                                 0,
                                 0,
                                 a6,
                                 gppalRGB,
                                 (int)ppalDefault,
                                 (int)ppalDefault,
                                 0,
                                 0,
                                 0,
                                 0);
              pxlo = top;
            }
            if ( LogicalSurface )
            {
              if ( (*(_BYTE *)(v41 + 132) & 0x20) != 0 )
              {
                prclSrc = prclTrg;
                ERECTL::vScale((ERECTL *)&prclTrg, (const struct POINTFL *)(v41 + 116));
                v19 = v37;
                if ( ((int)v37[1].dhpdev & 0x800) != 0 )
                {
                  v32[0] = v37[8].pvBits;
                  v32[1] = v37[8].pvScan0;
                  v32[2] = v37[8].lDelta;
                  v32[3] = v37[8].iUniq;
                  ERECTL::vScale((ERECTL *)&prclSrc, (const struct POINTFL *)v32);
                  v19 = v37;
                }
                v20 = bNeedRenderHint(&v36);
                v21 = iUniq[28];
                if ( v20 )
                {
                  v22 = RedirStretchBlt((SURFOBJ *)v21, v19, 0, 0, pxlo, 0, 0, &prclTrg, &prclSrc, 0, 3u);
                }
                else if ( (*(_BYTE *)(v21 + 56) & 2) != 0 )
                {
                  v22 = (*(int (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v40 + 1980))(
                          (SURFOBJ *)v21,
                          v19,
                          0,
                          0,
                          pxlo,
                          0,
                          0,
                          &prclTrg,
                          &prclSrc,
                          0,
                          3u);
                }
                else
                {
                  v22 = EngStretchBlt((SURFOBJ *)v21, v19, 0, 0, pxlo, 0, 0, &prclTrg, &prclSrc, 0, 3u);
                }
                v23 = v41;
                LogicalSurface = v22;
              }
              else
              {
                v24 = bNeedRenderHint(&v36);
                v25 = (SURFOBJ *)iUniq[28];
                if ( v24 )
                {
                  v26 = RedirCopyBits(v25, psoSrc, 0, pxlo, &prclTrg, &pptlSrc);
                }
                else if ( ((int)v25[1].hsurf & 0x400) != 0 )
                {
                  v26 = (*(int (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v40 + 1976))(
                          v25,
                          psoSrc,
                          0,
                          pxlo,
                          &prclTrg,
                          &pptlSrc);
                }
                else
                {
                  v26 = EngCopyBits(v25, psoSrc, 0, pxlo, &prclTrg, &pptlSrc);
                }
                LogicalSurface = v26;
                if ( !v26 )
                  goto LABEL_35;
                v23 = v41;
                vSpUpdateDirtyRgn(iUniq, v41, 0, &prclTrg, (HDC)a7, 0, v29, v31);
              }
              if ( LogicalSurface )
                vSpUpdateDirtyRgn(iUniq, v23, 0, &prclTrg, (HDC)a7, 0, v29, v31);
            }
LABEL_35:
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&top);
            goto LABEL_36;
          }
        }
      }
    }
  }
  return LogicalSurface;
}
