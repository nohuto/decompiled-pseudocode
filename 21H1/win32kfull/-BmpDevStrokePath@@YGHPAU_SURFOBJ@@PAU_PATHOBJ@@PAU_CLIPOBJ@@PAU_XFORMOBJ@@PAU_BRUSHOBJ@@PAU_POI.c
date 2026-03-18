/*
 * XREFs of ?BmpDevStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@PAU_LINEATTRS@@K@Z @ 0x1FA467
 * Callers:
 *     <none>
 * Callees:
 *     _EngStrokePath@32 @ 0x1EB539 (_EngStrokePath@32.c)
 *     ??0BMPDEVOPEN@@QAE@PAU_SURFOBJ@@@Z @ 0x1F97A6 (--0BMPDEVOPEN@@QAE@PAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z @ 0x1F97D3 (--0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z.c)
 *     ?bBmpMakeOpaque@@YGHPAVSURFACE@@@Z @ 0x1FA81B (-bBmpMakeOpaque@@YGHPAVSURFACE@@@Z.c)
 */

BOOL __stdcall BmpDevStrokePath(
        struct _SURFOBJ *pso,
        struct _PATHOBJ *ppo,
        struct _CLIPOBJ *pco,
        struct _XFORMOBJ *pxo,
        struct _BRUSHOBJ *pbo,
        struct _POINTL *pptlBrushOrg,
        struct _LINEATTRS *plineattrs,
        MIX mix)
{
  BOOL v9; // ebx
  int HDEV; // eax
  _DWORD *i; // ebx
  _DWORD *v12; // esi
  int v13; // eax
  struct SURFACE *v15; // [esp+0h] [ebp-14h]
  int v16; // [esp+8h] [ebp-Ch] BYREF
  int v17; // [esp+Ch] [ebp-8h] BYREF
  _DWORD *v18; // [esp+10h] [ebp-4h] BYREF
  SURFOBJ *psoa; // [esp+1Ch] [ebp+8h]

  v9 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v16, pso);
  if ( pso )
  {
    v9 = EngStrokePath(pso, ppo, pco, pxo, pbo, pptlBrushOrg, plineattrs, mix);
    psoa = (SURFOBJ *)v9;
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 24) & 0x20000000) != 0 )
      {
        for ( i = **(_DWORD ***)(HDEV + 1108); i; i = (_DWORD *)*i )
        {
          v12 = (_DWORD *)i[9];
          v18 = v12;
          if ( v12 )
          {
            if ( (v12[280] & 0x8000000) != 0 )
            {
              v13 = v12[354];
              if ( (v13 & 0x1000) != 0 && (v13 & 0x8000) != 0 )
              {
                if ( *(_DWORD *)(v12[276] + 96) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v17,
                    (struct PDEVOBJ *)&v18,
                    pso);
                  (*(void (__stdcall **)(struct _SURFOBJ *, struct _PATHOBJ *, struct _CLIPOBJ *, struct _XFORMOBJ *, struct _BRUSHOBJ *, struct _POINTL *, struct _LINEATTRS *, MIX))(v12[276] + 96))(
                    pso,
                    ppo,
                    pco,
                    pxo,
                    pbo,
                    pptlBrushOrg,
                    plineattrs,
                    mix);
                  if ( v17 )
                    *(_WORD *)(v17 + 50) &= ~0x8000u;
                }
              }
            }
          }
        }
        v9 = (BOOL)psoa;
      }
    }
  }
  if ( v16 )
    bBmpMakeOpaque(v15);
  return v9;
}
