/*
 * XREFs of ?RedirLineTo@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@JJJJPAU_RECTL@@K@Z @ 0x1FB6CD
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0x219D2 (-vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     _EngLineTo@36 @ 0xBDF44 (_EngLineTo@36.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z @ 0x1F97D3 (--0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z.c)
 *     ??0REDIROPEN@@QAE@PAU_SURFOBJ@@@Z @ 0x1FAE3D (--0REDIROPEN@@QAE@PAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YGHPAVSURFACE@@@Z @ 0x1FC3FB (-bMakeOpaque@@YGHPAVSURFACE@@@Z.c)
 */

BOOL __userpurge RedirLineTo@<eax>(
        struct SURFACE *a1@<edi>,
        SURFOBJ *pso,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        LONG x1,
        LONG y1,
        LONG x2,
        LONG y2,
        RECTL *prclBounds,
        MIX mix)
{
  int HDEV; // esi
  _DWORD *i; // edi
  _DWORD *v12; // esi
  BOOL v13; // esi
  struct SURFACE *v15; // [esp+14h] [ebp-48h]
  _DWORD *v16; // [esp+20h] [ebp-3Ch] BYREF
  int v17; // [esp+24h] [ebp-38h] BYREF
  int v18; // [esp+28h] [ebp-34h] BYREF
  _BYTE v19[20]; // [esp+2Ch] [ebp-30h] BYREF
  _DWORD v20[3]; // [esp+40h] [ebp-1Ch] BYREF
  __int16 v21; // [esp+4Ch] [ebp-10h]

  REDIROPEN::REDIROPEN((REDIROPEN *)&v18, a1, pso);
  if ( pso )
  {
    if ( ((int)pso[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v16 = (_DWORD *)HDEV;
      if ( HDEV )
      {
        v21 = 256;
        memset(v20, 0, sizeof(v20));
        DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v19, (struct PDEVOBJ *)&v16);
        if ( ((unsigned int)&loc_20000 & *(_DWORD *)(HDEV + 24)) != 0 )
        {
          for ( i = **(_DWORD ***)(HDEV + 1108); i; i = (_DWORD *)*i )
          {
            v12 = (_DWORD *)i[9];
            v16 = v12;
            if ( v12 )
            {
              if ( (v12[280] & 0x8000000) != 0 && (v12[354] & 0x8000) != 0 )
              {
                if ( *(_DWORD *)(v12[276] + 164) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v17,
                    (struct PDEVOBJ *)&v16,
                    pso);
                  (*(void (__stdcall **)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))(v12[276] + 164))(
                    pso,
                    pco,
                    pbo,
                    x1,
                    y1,
                    x2,
                    y2,
                    prclBounds,
                    mix);
                  if ( v17 )
                    *(_WORD *)(v17 + 50) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v19);
        if ( v20[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v20);
      }
    }
  }
  v13 = EngLineTo(pso, pco, pbo, x1, y1, x2, y2, prclBounds, mix);
  if ( v18 )
    bMakeOpaque(v15);
  return v13;
}
