/*
 * XREFs of ?BmpDevTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@K@Z @ 0x1FA55F
 * Callers:
 *     <none>
 * Callees:
 *     _EngTextOut@40 @ 0x54580 (_EngTextOut@40.c)
 *     ??0BMPDEVOPEN@@QAE@PAU_SURFOBJ@@@Z @ 0x1F97A6 (--0BMPDEVOPEN@@QAE@PAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z @ 0x1F97D3 (--0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z.c)
 *     ?bBmpMakeOpaque@@YGHPAVSURFACE@@@Z @ 0x1FA81B (-bBmpMakeOpaque@@YGHPAVSURFACE@@@Z.c)
 */

BOOL __stdcall BmpDevTextOut(
        struct _SURFOBJ *pso,
        struct _STROBJ *pstro,
        struct _FONTOBJ *pfo,
        struct _CLIPOBJ *pco,
        struct _RECTL *prclExtra,
        struct _RECTL *prclOpaque,
        struct _BRUSHOBJ *pboFore,
        struct _BRUSHOBJ *pboOpaque,
        struct _POINTL *pptlOrg,
        MIX mix)
{
  BOOL v11; // ebx
  int HDEV; // eax
  _DWORD *i; // ebx
  _DWORD *v14; // esi
  int v15; // eax
  struct SURFACE *v17; // [esp+0h] [ebp-14h]
  int v18; // [esp+8h] [ebp-Ch] BYREF
  int v19; // [esp+Ch] [ebp-8h] BYREF
  _DWORD *v20; // [esp+10h] [ebp-4h] BYREF
  SURFOBJ *psoa; // [esp+1Ch] [ebp+8h]

  v11 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v18, pso);
  if ( pso )
  {
    v11 = EngTextOut(pso, pstro, pfo, pco, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
    psoa = (SURFOBJ *)v11;
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 24) & 0x20000000) != 0 )
      {
        for ( i = **(_DWORD ***)(HDEV + 1108); i; i = (_DWORD *)*i )
        {
          v14 = (_DWORD *)i[9];
          v20 = v14;
          if ( v14 )
          {
            if ( (v14[280] & 0x8000000) != 0 )
            {
              v15 = v14[354];
              if ( (v15 & 0x1000) != 0 && (v15 & 0x8000) != 0 )
              {
                if ( *(_DWORD *)(v14[276] + 132) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v19,
                    (struct PDEVOBJ *)&v20,
                    pso);
                  (*(void (__stdcall **)(struct _SURFOBJ *, struct _STROBJ *, struct _FONTOBJ *, struct _CLIPOBJ *, struct _RECTL *, struct _RECTL *, struct _BRUSHOBJ *, struct _BRUSHOBJ *, struct _POINTL *, MIX))(v14[276] + 132))(
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
                  if ( v19 )
                    *(_WORD *)(v19 + 50) &= ~0x8000u;
                }
              }
            }
          }
        }
        v11 = (BOOL)psoa;
      }
    }
  }
  if ( v18 )
    bBmpMakeOpaque(v17);
  return v11;
}
