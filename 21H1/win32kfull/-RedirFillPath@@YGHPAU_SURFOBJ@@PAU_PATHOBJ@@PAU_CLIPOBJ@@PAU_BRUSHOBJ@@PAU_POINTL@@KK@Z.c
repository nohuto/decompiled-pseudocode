/*
 * XREFs of ?RedirFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x1FB445
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0x219D2 (-vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     _EngFillPath@28 @ 0x1E7DFE (_EngFillPath@28.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z @ 0x1F97D3 (--0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z.c)
 *     ??0REDIROPEN@@QAE@PAU_SURFOBJ@@@Z @ 0x1FAE3D (--0REDIROPEN@@QAE@PAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YGHPAVSURFACE@@@Z @ 0x1FC3FB (-bMakeOpaque@@YGHPAVSURFACE@@@Z.c)
 */

BOOL __stdcall RedirFillPath(
        SURFOBJ *pso,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        MIX mix,
        FLONG flOptions)
{
  int HDEV; // esi
  _DWORD *i; // ebx
  _DWORD *v9; // esi
  BOOL v10; // esi
  struct SURFACE *v12; // [esp+Ch] [ebp-48h]
  _DWORD *v13; // [esp+18h] [ebp-3Ch] BYREF
  int v14; // [esp+1Ch] [ebp-38h] BYREF
  int v15; // [esp+20h] [ebp-34h] BYREF
  _BYTE v16[20]; // [esp+24h] [ebp-30h] BYREF
  _DWORD v17[3]; // [esp+38h] [ebp-1Ch] BYREF
  __int16 v18; // [esp+44h] [ebp-10h]

  REDIROPEN::REDIROPEN((REDIROPEN *)&v15, (struct SURFACE *)pso, pso);
  if ( pso )
  {
    if ( ((int)pso[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v13 = (_DWORD *)HDEV;
      if ( HDEV )
      {
        v18 = 256;
        memset(v17, 0, sizeof(v17));
        DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v16, (struct PDEVOBJ *)&v13);
        if ( ((unsigned int)&loc_20000 & *(_DWORD *)(HDEV + 24)) != 0 )
        {
          for ( i = **(_DWORD ***)(HDEV + 1108); i; i = (_DWORD *)*i )
          {
            v9 = (_DWORD *)i[9];
            v13 = v9;
            if ( v9 )
            {
              if ( (v9[280] & 0x8000000) != 0 && (v9[354] & 0x8000) != 0 )
              {
                if ( *(_DWORD *)(v9[276] + 100) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v14,
                    (struct PDEVOBJ *)&v13,
                    pso);
                  (*(void (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(v9[276] + 100))(
                    pso,
                    ppo,
                    pco,
                    pbo,
                    pptlBrushOrg,
                    mix,
                    flOptions);
                  if ( v14 )
                    *(_WORD *)(v14 + 50) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v16);
        if ( v17[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v17);
      }
    }
  }
  v10 = EngFillPath(pso, ppo, pco, pbo, pptlBrushOrg, mix, flOptions);
  if ( v15 )
    bMakeOpaque(v12);
  return v10;
}
