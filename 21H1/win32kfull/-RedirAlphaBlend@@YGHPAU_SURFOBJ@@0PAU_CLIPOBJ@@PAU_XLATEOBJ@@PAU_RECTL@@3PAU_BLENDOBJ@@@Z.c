/*
 * XREFs of ?RedirAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z @ 0x1FAE71
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0x219D2 (-vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     _EngAlphaBlend@28 @ 0x526B0 (_EngAlphaBlend@28.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z @ 0x1F97D3 (--0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YGPAU_SURFOBJ@@PAU_DISPSURF@@PAU1@@Z @ 0x1FA7B5 (-GetDevBitmap@@YGPAU_SURFOBJ@@PAU_DISPSURF@@PAU1@@Z.c)
 *     ??0REDIROPEN@@QAE@PAU_SURFOBJ@@@Z @ 0x1FAE3D (--0REDIROPEN@@QAE@PAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YGHPAVSURFACE@@@Z @ 0x1FC3FB (-bMakeOpaque@@YGHPAVSURFACE@@@Z.c)
 */

BOOL __userpurge RedirAlphaBlend@<eax>(
        struct SURFACE *a1@<edi>,
        SURFOBJ *psoDest,
        SURFOBJ *psoSrc,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDest,
        RECTL *prclSrc,
        BLENDOBJ *pBlendObj)
{
  int HDEV; // esi
  _DWORD *i; // edi
  _DWORD *v10; // esi
  int v11; // esi
  struct _SURFOBJ *v12; // eax
  BOOL v13; // esi
  struct _SURFOBJ *DevBitmap; // [esp-10h] [ebp-68h]
  struct SURFACE *v16; // [esp+8h] [ebp-50h]
  _DWORD *v17; // [esp+18h] [ebp-40h] BYREF
  int v18; // [esp+1Ch] [ebp-3Ch] BYREF
  int v19; // [esp+20h] [ebp-38h] BYREF
  int v20; // [esp+24h] [ebp-34h] BYREF
  _BYTE v21[20]; // [esp+28h] [ebp-30h] BYREF
  _DWORD v22[3]; // [esp+3Ch] [ebp-1Ch] BYREF
  __int16 v23; // [esp+48h] [ebp-10h]

  REDIROPEN::REDIROPEN((REDIROPEN *)&v20, a1, psoDest);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v19, a1, psoSrc);
  if ( psoDest )
  {
    if ( ((int)psoDest[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v17 = (_DWORD *)HDEV;
      if ( HDEV )
      {
        v23 = 256;
        memset(v22, 0, sizeof(v22));
        DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v21, (struct PDEVOBJ *)&v17);
        if ( ((unsigned int)&loc_20000 & *(_DWORD *)(HDEV + 24)) != 0 )
        {
          for ( i = **(_DWORD ***)(HDEV + 1108); i; i = (_DWORD *)*i )
          {
            v10 = (_DWORD *)i[9];
            v17 = v10;
            if ( v10 )
            {
              if ( (v10[280] & 0x8000000) != 0 && (v10[354] & 0x8000) != 0 )
              {
                if ( *(_DWORD *)(v10[276] + 324) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v18,
                    (struct PDEVOBJ *)&v17,
                    psoDest);
                  v11 = v10[276];
                  DevBitmap = GetDevBitmap((int)i, (int)psoSrc);
                  v12 = GetDevBitmap((int)i, (int)psoDest);
                  (*(void (__stdcall **)(struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(v11 + 324))(
                    v12,
                    DevBitmap,
                    pco,
                    pxlo,
                    prclDest,
                    prclSrc,
                    pBlendObj);
                  if ( v18 )
                    *(_WORD *)(v18 + 50) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v21);
        if ( v22[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v22);
      }
    }
  }
  v13 = EngAlphaBlend(psoDest, psoSrc, pco, pxlo, prclDest, prclSrc, pBlendObj);
  if ( v19 )
    bMakeOpaque(v16);
  if ( v20 )
    bMakeOpaque(v16);
  return v13;
}
