/*
 * XREFs of ?RedirBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x1FAFE2
 * Callers:
 *     ?SpDdCreateFullscreenSprite@@YGJPAUHDC__@@KPAPAXPAPAU1@@Z @ 0x1CCEEA (-SpDdCreateFullscreenSprite@@YGJPAUHDC__@@KPAPAXPAPAU1@@Z.c)
 *     ?RedirCopyBits@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@@Z @ 0x1FB17E (-RedirCopyBits@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@@Z.c)
 * Callees:
 *     ?vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0x219D2 (-vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     _EngBitBlt@44 @ 0x53EF2 (_EngBitBlt@44.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z @ 0x1F97D3 (--0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YGPAU_SURFOBJ@@PAU_DISPSURF@@PAU1@@Z @ 0x1FA7B5 (-GetDevBitmap@@YGPAU_SURFOBJ@@PAU_DISPSURF@@PAU1@@Z.c)
 *     ??0REDIROPEN@@QAE@PAU_SURFOBJ@@@Z @ 0x1FAE3D (--0REDIROPEN@@QAE@PAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YGHPAVSURFACE@@@Z @ 0x1FC3FB (-bMakeOpaque@@YGHPAVSURFACE@@@Z.c)
 */

BOOL __userpurge RedirBitBlt@<eax>(
        struct SURFACE *a1@<edi>,
        SURFOBJ *psoTrg,
        SURFOBJ *psoSrc,
        SURFOBJ *psoMask,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclTrg,
        POINTL *pptlSrc,
        POINTL *pptlMask,
        BRUSHOBJ *pbo,
        POINTL *pptlBrush,
        ROP4 rop4)
{
  int HDEV; // esi
  _DWORD *i; // edi
  _DWORD *v14; // esi
  int v15; // esi
  struct _SURFOBJ *v16; // eax
  BOOL v17; // esi
  struct _SURFOBJ *DevBitmap; // [esp-Ch] [ebp-78h]
  struct SURFACE *v20; // [esp+1Ch] [ebp-50h]
  _DWORD *v21; // [esp+28h] [ebp-44h] BYREF
  int v22; // [esp+2Ch] [ebp-40h] BYREF
  int v23; // [esp+30h] [ebp-3Ch] BYREF
  int v24; // [esp+34h] [ebp-38h] BYREF
  int v25; // [esp+38h] [ebp-34h] BYREF
  _BYTE v26[20]; // [esp+3Ch] [ebp-30h] BYREF
  _DWORD v27[3]; // [esp+50h] [ebp-1Ch] BYREF
  __int16 v28; // [esp+5Ch] [ebp-10h]

  REDIROPEN::REDIROPEN((REDIROPEN *)&v25, a1, psoTrg);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v24, a1, psoSrc);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v23, a1, psoMask);
  if ( psoTrg )
  {
    if ( ((int)psoTrg[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v21 = (_DWORD *)HDEV;
      if ( HDEV )
      {
        v28 = 256;
        memset(v27, 0, sizeof(v27));
        DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v26, (struct PDEVOBJ *)&v21);
        if ( ((unsigned int)&loc_20000 & *(_DWORD *)(HDEV + 24)) != 0 )
        {
          for ( i = **(_DWORD ***)(HDEV + 1108); i; i = (_DWORD *)*i )
          {
            v14 = (_DWORD *)i[9];
            v21 = v14;
            if ( v14 )
            {
              if ( (v14[280] & 0x8000000) != 0 && (v14[354] & 0x8000) != 0 )
              {
                if ( *(_DWORD *)(v14[276] + 112) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v22,
                    (struct PDEVOBJ *)&v21,
                    psoTrg);
                  v15 = v14[276];
                  DevBitmap = GetDevBitmap((int)i, (int)psoSrc);
                  v16 = GetDevBitmap((int)i, (int)psoTrg);
                  (*(void (__stdcall **)(struct _SURFOBJ *, struct _SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(v15 + 112))(
                    v16,
                    DevBitmap,
                    psoMask,
                    pco,
                    pxlo,
                    prclTrg,
                    pptlSrc,
                    pptlMask,
                    pbo,
                    pptlBrush,
                    rop4);
                  if ( v22 )
                    *(_WORD *)(v22 + 50) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v26);
        if ( v27[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v27);
      }
    }
  }
  v17 = EngBitBlt(psoTrg, psoSrc, psoMask, pco, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
  if ( v23 )
    bMakeOpaque(v20);
  if ( v24 )
    bMakeOpaque(v20);
  if ( v25 )
    bMakeOpaque(v20);
  return v17;
}
