/*
 * XREFs of ?BmpDevFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x1F9C2D
 * Callers:
 *     <none>
 * Callees:
 *     _EngFillPath@28 @ 0x1E7DFE (_EngFillPath@28.c)
 *     ??0BMPDEVOPEN@@QAE@PAU_SURFOBJ@@@Z @ 0x1F97A6 (--0BMPDEVOPEN@@QAE@PAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z @ 0x1F97D3 (--0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z.c)
 *     ?bBmpMakeOpaque@@YGHPAVSURFACE@@@Z @ 0x1FA81B (-bBmpMakeOpaque@@YGHPAVSURFACE@@@Z.c)
 */

BOOL __stdcall BmpDevFillPath(
        struct _SURFOBJ *pso,
        struct _PATHOBJ *ppo,
        struct _CLIPOBJ *pco,
        struct _BRUSHOBJ *pbo,
        struct _POINTL *pptlBrushOrg,
        MIX mix,
        FLONG flOptions)
{
  BOOL v8; // ebx
  int HDEV; // eax
  _DWORD *i; // ebx
  _DWORD *v11; // esi
  int v12; // eax
  struct SURFACE *v14; // [esp+0h] [ebp-14h]
  int v15; // [esp+8h] [ebp-Ch] BYREF
  int v16; // [esp+Ch] [ebp-8h] BYREF
  _DWORD *v17; // [esp+10h] [ebp-4h] BYREF
  SURFOBJ *psoa; // [esp+1Ch] [ebp+8h]

  v8 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v15, pso);
  if ( pso )
  {
    v8 = EngFillPath(pso, ppo, pco, pbo, pptlBrushOrg, mix, flOptions);
    psoa = (SURFOBJ *)v8;
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 24) & 0x20000000) != 0 )
      {
        for ( i = **(_DWORD ***)(HDEV + 1108); i; i = (_DWORD *)*i )
        {
          v11 = (_DWORD *)i[9];
          v17 = v11;
          if ( v11 )
          {
            if ( (v11[280] & 0x8000000) != 0 )
            {
              v12 = v11[354];
              if ( (v12 & 0x1000) != 0 && (v12 & 0x8000) != 0 )
              {
                if ( *(_DWORD *)(v11[276] + 100) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v16,
                    (struct PDEVOBJ *)&v17,
                    pso);
                  (*(void (__stdcall **)(struct _SURFOBJ *, struct _PATHOBJ *, struct _CLIPOBJ *, struct _BRUSHOBJ *, struct _POINTL *, MIX, FLONG))(v11[276] + 100))(
                    pso,
                    ppo,
                    pco,
                    pbo,
                    pptlBrushOrg,
                    mix,
                    flOptions);
                  if ( v16 )
                    *(_WORD *)(v16 + 50) &= ~0x8000u;
                }
              }
            }
          }
        }
        v8 = (BOOL)psoa;
      }
    }
  }
  if ( v15 )
    bBmpMakeOpaque(v14);
  return v8;
}
