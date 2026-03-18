/*
 * XREFs of ?RedirTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@K@Z @ 0x1FC132
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0x219D2 (-vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     _EngTextOut@40 @ 0x54580 (_EngTextOut@40.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z @ 0x1F97D3 (--0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z.c)
 *     ??0REDIROPEN@@QAE@PAU_SURFOBJ@@@Z @ 0x1FAE3D (--0REDIROPEN@@QAE@PAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YGHPAVSURFACE@@@Z @ 0x1FC3FB (-bMakeOpaque@@YGHPAVSURFACE@@@Z.c)
 */

BOOL __userpurge RedirTextOut@<eax>(
        struct SURFACE *a1@<edi>,
        SURFOBJ *pso,
        STROBJ *pstro,
        FONTOBJ *pfo,
        CLIPOBJ *pco,
        RECTL *prclExtra,
        RECTL *prclOpaque,
        BRUSHOBJ *pboFore,
        BRUSHOBJ *pboOpaque,
        POINTL *pptlOrg,
        MIX mix)
{
  int HDEV; // esi
  _DWORD *i; // edi
  _DWORD *v13; // esi
  BOOL v14; // esi
  struct SURFACE *v16; // [esp+18h] [ebp-48h]
  _DWORD *v17; // [esp+24h] [ebp-3Ch] BYREF
  int v18; // [esp+28h] [ebp-38h] BYREF
  int v19; // [esp+2Ch] [ebp-34h] BYREF
  _BYTE v20[20]; // [esp+30h] [ebp-30h] BYREF
  _DWORD v21[3]; // [esp+44h] [ebp-1Ch] BYREF
  __int16 v22; // [esp+50h] [ebp-10h]

  REDIROPEN::REDIROPEN((REDIROPEN *)&v19, a1, pso);
  if ( pso )
  {
    if ( ((int)pso[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v17 = (_DWORD *)HDEV;
      if ( HDEV )
      {
        v22 = 256;
        memset(v21, 0, sizeof(v21));
        DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v20, (struct PDEVOBJ *)&v17);
        if ( ((unsigned int)&loc_20000 & *(_DWORD *)(HDEV + 24)) != 0 )
        {
          for ( i = **(_DWORD ***)(HDEV + 1108); i; i = (_DWORD *)*i )
          {
            v13 = (_DWORD *)i[9];
            v17 = v13;
            if ( v13 )
            {
              if ( (v13[280] & 0x8000000) != 0 && (v13[354] & 0x8000) != 0 )
              {
                if ( *(_DWORD *)(v13[276] + 132) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v18,
                    (struct PDEVOBJ *)&v17,
                    pso);
                  (*(void (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(v13[276] + 132))(
                    pso,
                    pstro,
                    pfo,
                    pco,
                    prclExtra,
                    prclOpaque,
                    pboFore,
                    pboOpaque,
                    pptlOrg,
                    mix);
                  if ( v18 )
                    *(_WORD *)(v18 + 50) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v20);
        if ( v21[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v21);
      }
    }
  }
  v14 = EngTextOut(pso, pstro, pfo, pco, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
  if ( v19 )
    bMakeOpaque(v16);
  return v14;
}
