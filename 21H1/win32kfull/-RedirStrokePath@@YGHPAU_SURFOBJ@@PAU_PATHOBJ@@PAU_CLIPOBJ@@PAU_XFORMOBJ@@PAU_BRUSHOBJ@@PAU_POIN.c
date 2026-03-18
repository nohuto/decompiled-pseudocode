/*
 * XREFs of ?RedirStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@PAU_LINEATTRS@@K@Z @ 0x1FBFF6
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0x219D2 (-vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     _EngStrokePath@32 @ 0x1EB539 (_EngStrokePath@32.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z @ 0x1F97D3 (--0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z.c)
 *     ??0REDIROPEN@@QAE@PAU_SURFOBJ@@@Z @ 0x1FAE3D (--0REDIROPEN@@QAE@PAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YGHPAVSURFACE@@@Z @ 0x1FC3FB (-bMakeOpaque@@YGHPAVSURFACE@@@Z.c)
 */

BOOL __stdcall RedirStrokePath(
        SURFOBJ *pso,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        LINEATTRS *plineattrs,
        MIX mix)
{
  int HDEV; // esi
  _DWORD *i; // ebx
  _DWORD *v10; // esi
  BOOL v11; // esi
  struct SURFACE *v13; // [esp+10h] [ebp-48h]
  _DWORD *v14; // [esp+1Ch] [ebp-3Ch] BYREF
  int v15; // [esp+20h] [ebp-38h] BYREF
  int v16; // [esp+24h] [ebp-34h] BYREF
  _BYTE v17[20]; // [esp+28h] [ebp-30h] BYREF
  _DWORD v18[3]; // [esp+3Ch] [ebp-1Ch] BYREF
  __int16 v19; // [esp+48h] [ebp-10h]

  REDIROPEN::REDIROPEN((REDIROPEN *)&v16, (struct SURFACE *)pso, pso);
  if ( pso )
  {
    if ( ((int)pso[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v14 = (_DWORD *)HDEV;
      if ( HDEV )
      {
        v19 = 256;
        memset(v18, 0, sizeof(v18));
        DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v17, (struct PDEVOBJ *)&v14);
        if ( ((unsigned int)&loc_20000 & *(_DWORD *)(HDEV + 24)) != 0 )
        {
          for ( i = **(_DWORD ***)(HDEV + 1108); i; i = (_DWORD *)*i )
          {
            v10 = (_DWORD *)i[9];
            v14 = v10;
            if ( v10 )
            {
              if ( (v10[280] & 0x8000000) != 0 && (v10[354] & 0x8000) != 0 )
              {
                if ( *(_DWORD *)(v10[276] + 96) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v15,
                    (struct PDEVOBJ *)&v14,
                    pso);
                  (*(void (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(v10[276] + 96))(
                    pso,
                    ppo,
                    pco,
                    pxo,
                    pbo,
                    pptlBrushOrg,
                    plineattrs,
                    mix);
                  if ( v15 )
                    *(_WORD *)(v15 + 50) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v17);
        if ( v18[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v18);
      }
    }
  }
  v11 = EngStrokePath(pso, ppo, pco, pxo, pbo, pptlBrushOrg, plineattrs, mix);
  if ( v16 )
    bMakeOpaque(v13);
  return v11;
}
