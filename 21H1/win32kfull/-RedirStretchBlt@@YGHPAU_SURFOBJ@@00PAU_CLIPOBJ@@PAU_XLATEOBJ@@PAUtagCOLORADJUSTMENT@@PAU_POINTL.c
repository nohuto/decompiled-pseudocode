/*
 * XREFs of ?RedirStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x1FBB44
 * Callers:
 *     ?bSpDwmUpdateSpriteShape@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAU_SURFOBJ@@PAU_RECTL@@PAVPALETTE@@PAK4PAPAV3@@Z @ 0xC62AC (-bSpDwmUpdateSpriteShape@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAU_SURFOBJ@@PAU_REC.c)
 *     ?bSpDwmUpdateDragRectShape@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagPOINT@@PAUtagSIZE@@PAKPAPAV3@@Z @ 0x1CD629 (-bSpDwmUpdateDragRectShape@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagPOINT@@PAUta.c)
 * Callees:
 *     ?vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0x219D2 (-vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z.c)
 *     _EngStretchBlt@44 @ 0x4BF90 (_EngStretchBlt@44.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z @ 0x1F97D3 (--0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YGPAU_SURFOBJ@@PAU_DISPSURF@@PAU1@@Z @ 0x1FA7B5 (-GetDevBitmap@@YGPAU_SURFOBJ@@PAU_DISPSURF@@PAU1@@Z.c)
 *     ??0REDIROPEN@@QAE@PAU_SURFOBJ@@@Z @ 0x1FAE3D (--0REDIROPEN@@QAE@PAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YGHPAVSURFACE@@@Z @ 0x1FC3FB (-bMakeOpaque@@YGHPAVSURFACE@@@Z.c)
 */

BOOL __userpurge RedirStretchBlt@<eax>(
        struct SURFACE *a1@<edi>,
        SURFOBJ *psoDest,
        SURFOBJ *psoSrc,
        SURFOBJ *psoMask,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlHTOrg,
        RECTL *prclDest,
        RECTL *prclSrc,
        POINTL *pptlMask,
        ULONG iMode)
{
  int HDEV; // esi
  _DWORD *i; // edi
  _DWORD *v14; // esi
  int v15; // esi
  struct _SURFOBJ *v16; // eax
  BOOL v17; // esi
  struct _SURFOBJ *v19; // [esp-Ch] [ebp-78h]
  struct _SURFOBJ *DevBitmap; // [esp-8h] [ebp-74h]
  struct SURFACE *v21; // [esp+1Ch] [ebp-50h]
  _DWORD *v22; // [esp+28h] [ebp-44h] BYREF
  int v23; // [esp+2Ch] [ebp-40h] BYREF
  int v24; // [esp+30h] [ebp-3Ch] BYREF
  int v25; // [esp+34h] [ebp-38h] BYREF
  int v26; // [esp+38h] [ebp-34h] BYREF
  _BYTE v27[20]; // [esp+3Ch] [ebp-30h] BYREF
  _DWORD v28[3]; // [esp+50h] [ebp-1Ch] BYREF
  __int16 v29; // [esp+5Ch] [ebp-10h]

  REDIROPEN::REDIROPEN((REDIROPEN *)&v26, a1, psoDest);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v25, a1, psoSrc);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v24, a1, psoMask);
  if ( psoDest )
  {
    if ( ((int)psoDest[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v22 = (_DWORD *)HDEV;
      if ( HDEV )
      {
        v29 = 256;
        memset(v28, 0, sizeof(v28));
        DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v27, (struct PDEVOBJ *)&v22);
        if ( ((unsigned int)&loc_20000 & *(_DWORD *)(HDEV + 24)) != 0 )
        {
          for ( i = **(_DWORD ***)(HDEV + 1108); i; i = (_DWORD *)*i )
          {
            v14 = (_DWORD *)i[9];
            v22 = v14;
            if ( v14 )
            {
              if ( (v14[280] & 0x8000000) != 0 && (v14[354] & 0x8000) != 0 )
              {
                if ( *(_DWORD *)(v14[276] + 120) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v23,
                    (struct PDEVOBJ *)&v22,
                    psoDest);
                  v15 = v14[276];
                  DevBitmap = GetDevBitmap((int)i, (int)psoMask);
                  v19 = GetDevBitmap((int)i, (int)psoSrc);
                  v16 = GetDevBitmap((int)i, (int)psoDest);
                  (*(void (__stdcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v15 + 120))(
                    v16,
                    v19,
                    DevBitmap,
                    pco,
                    pxlo,
                    pca,
                    pptlHTOrg,
                    prclDest,
                    prclSrc,
                    pptlMask,
                    iMode);
                  if ( v23 )
                    *(_WORD *)(v23 + 50) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v27);
        if ( v28[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v28);
      }
    }
  }
  v17 = EngStretchBlt(psoDest, psoSrc, psoMask, pco, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode);
  if ( v24 )
    bMakeOpaque(v21);
  if ( v25 )
    bMakeOpaque(v21);
  if ( v26 )
    bMakeOpaque(v21);
  return v17;
}
