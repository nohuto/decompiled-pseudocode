/*
 * XREFs of ?RedirTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z @ 0x1FC284
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0x219D2 (-vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     _EngTransparentBlt@32 @ 0xCAC46 (_EngTransparentBlt@32.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z @ 0x1F97D3 (--0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YGPAU_SURFOBJ@@PAU_DISPSURF@@PAU1@@Z @ 0x1FA7B5 (-GetDevBitmap@@YGPAU_SURFOBJ@@PAU_DISPSURF@@PAU1@@Z.c)
 *     ??0REDIROPEN@@QAE@PAU_SURFOBJ@@@Z @ 0x1FAE3D (--0REDIROPEN@@QAE@PAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YGHPAVSURFACE@@@Z @ 0x1FC3FB (-bMakeOpaque@@YGHPAVSURFACE@@@Z.c)
 */

BOOL __userpurge RedirTransparentBlt@<eax>(
        struct SURFACE *a1@<edi>,
        SURFOBJ *psoDst,
        SURFOBJ *psoSrc,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDst,
        RECTL *prclSrc,
        ULONG iTransColor,
        ULONG ulReserved)
{
  int HDEV; // esi
  _DWORD *i; // edi
  _DWORD *v11; // esi
  int v12; // esi
  struct _SURFOBJ *v13; // eax
  BOOL v14; // esi
  struct _SURFOBJ *DevBitmap; // [esp-10h] [ebp-6Ch]
  struct SURFACE *v17; // [esp+Ch] [ebp-50h]
  _DWORD *v18; // [esp+1Ch] [ebp-40h] BYREF
  int v19; // [esp+20h] [ebp-3Ch] BYREF
  int v20; // [esp+24h] [ebp-38h] BYREF
  int v21; // [esp+28h] [ebp-34h] BYREF
  _BYTE v22[20]; // [esp+2Ch] [ebp-30h] BYREF
  _DWORD v23[3]; // [esp+40h] [ebp-1Ch] BYREF
  __int16 v24; // [esp+4Ch] [ebp-10h]

  REDIROPEN::REDIROPEN((REDIROPEN *)&v21, a1, psoDst);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v20, a1, psoSrc);
  if ( psoDst )
  {
    if ( ((int)psoDst[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v18 = (_DWORD *)HDEV;
      if ( HDEV )
      {
        v24 = 256;
        memset(v23, 0, sizeof(v23));
        DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v22, (struct PDEVOBJ *)&v18);
        if ( ((unsigned int)&loc_20000 & *(_DWORD *)(HDEV + 24)) != 0 )
        {
          for ( i = **(_DWORD ***)(HDEV + 1108); i; i = (_DWORD *)*i )
          {
            v11 = (_DWORD *)i[9];
            v18 = v11;
            if ( v11 )
            {
              if ( (v11[280] & 0x8000000) != 0 && (v11[354] & 0x8000) != 0 )
              {
                if ( *(_DWORD *)(v11[276] + 336) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v19,
                    (struct PDEVOBJ *)&v18,
                    psoDst);
                  v12 = v11[276];
                  DevBitmap = GetDevBitmap((int)i, (int)psoSrc);
                  v13 = GetDevBitmap((int)i, (int)psoDst);
                  (*(void (__stdcall **)(struct _SURFOBJ *, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(v12 + 336))(
                    v13,
                    DevBitmap,
                    pco,
                    pxlo,
                    prclDst,
                    prclSrc,
                    iTransColor,
                    ulReserved);
                  if ( v19 )
                    *(_WORD *)(v19 + 50) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v22);
        if ( v23[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v23);
      }
    }
  }
  v14 = EngTransparentBlt(psoDst, psoSrc, pco, pxlo, prclDst, prclSrc, iTransColor, ulReserved);
  if ( v20 )
    bMakeOpaque(v17);
  if ( v21 )
    bMakeOpaque(v17);
  return v14;
}
