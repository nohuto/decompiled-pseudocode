/*
 * XREFs of ?RedirStretchBltROP@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAU_BRUSHOBJ@@K@Z @ 0x1FBCEC
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0x219D2 (-vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     _EngStretchBltROP@52 @ 0x7AF4C (_EngStretchBltROP@52.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z @ 0x1F97D3 (--0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YGPAU_SURFOBJ@@PAU_DISPSURF@@PAU1@@Z @ 0x1FA7B5 (-GetDevBitmap@@YGPAU_SURFOBJ@@PAU_DISPSURF@@PAU1@@Z.c)
 *     ??0REDIROPEN@@QAE@PAU_SURFOBJ@@@Z @ 0x1FAE3D (--0REDIROPEN@@QAE@PAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YGHPAVSURFACE@@@Z @ 0x1FC3FB (-bMakeOpaque@@YGHPAVSURFACE@@@Z.c)
 */

BOOL __userpurge RedirStretchBltROP@<eax>(
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
        ULONG iMode,
        BRUSHOBJ *pbo,
        DWORD rop4)
{
  int HDEV; // esi
  _DWORD *i; // edi
  _DWORD *v16; // esi
  int v17; // esi
  struct _SURFOBJ *v18; // eax
  BOOL v19; // esi
  struct _SURFOBJ *v21; // [esp-Ch] [ebp-80h]
  struct _SURFOBJ *DevBitmap; // [esp-8h] [ebp-7Ch]
  struct SURFACE *v23; // [esp+24h] [ebp-50h]
  _DWORD *v24; // [esp+30h] [ebp-44h] BYREF
  int v25; // [esp+34h] [ebp-40h] BYREF
  int v26; // [esp+38h] [ebp-3Ch] BYREF
  int v27; // [esp+3Ch] [ebp-38h] BYREF
  int v28; // [esp+40h] [ebp-34h] BYREF
  _BYTE v29[20]; // [esp+44h] [ebp-30h] BYREF
  _DWORD v30[3]; // [esp+58h] [ebp-1Ch] BYREF
  __int16 v31; // [esp+64h] [ebp-10h]

  REDIROPEN::REDIROPEN((REDIROPEN *)&v28, a1, psoDest);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v27, a1, psoSrc);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v26, a1, psoMask);
  if ( psoDest )
  {
    if ( ((int)psoDest[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v24 = (_DWORD *)HDEV;
      if ( HDEV )
      {
        v31 = 256;
        memset(v30, 0, sizeof(v30));
        DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v29, (struct PDEVOBJ *)&v24);
        if ( ((unsigned int)&loc_20000 & *(_DWORD *)(HDEV + 24)) != 0 )
        {
          for ( i = **(_DWORD ***)(HDEV + 1108); i; i = (_DWORD *)*i )
          {
            v16 = (_DWORD *)i[9];
            v24 = v16;
            if ( v16 )
            {
              if ( (v16[280] & 0x8000000) != 0 && (v16[354] & 0x8000) != 0 )
              {
                if ( *(_DWORD *)(v16[276] + 316) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v25,
                    (struct PDEVOBJ *)&v24,
                    psoDest);
                  v17 = v16[276];
                  DevBitmap = GetDevBitmap((int)i, (int)psoMask);
                  v21 = GetDevBitmap((int)i, (int)psoSrc);
                  v18 = GetDevBitmap((int)i, (int)psoDest);
                  (*(void (__stdcall **)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(v17 + 316))(
                    v18,
                    v21,
                    DevBitmap,
                    pco,
                    pxlo,
                    pca,
                    pptlHTOrg,
                    prclDest,
                    prclSrc,
                    pptlMask,
                    iMode,
                    pbo,
                    rop4);
                  if ( v25 )
                    *(_WORD *)(v25 + 50) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v29);
        if ( v30[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v30);
      }
    }
  }
  v19 = EngStretchBltROP(
          psoDest,
          psoSrc,
          psoMask,
          pco,
          pxlo,
          pca,
          pptlHTOrg,
          prclDest,
          prclSrc,
          pptlMask,
          iMode,
          pbo,
          rop4);
  if ( v26 )
    bMakeOpaque(v23);
  if ( v27 )
    bMakeOpaque(v23);
  if ( v28 )
    bMakeOpaque(v23);
  return v19;
}
