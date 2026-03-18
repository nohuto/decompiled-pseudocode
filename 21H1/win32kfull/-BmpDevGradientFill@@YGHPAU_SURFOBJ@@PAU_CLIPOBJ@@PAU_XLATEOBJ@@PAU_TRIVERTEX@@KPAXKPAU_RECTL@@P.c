/*
 * XREFs of ?BmpDevGradientFill@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAXKPAU_RECTL@@PAU_POINTL@@K@Z @ 0x1F9D1F
 * Callers:
 *     <none>
 * Callees:
 *     _EngGradientFill@40 @ 0xBE83A (_EngGradientFill@40.c)
 *     ??0BMPDEVOPEN@@QAE@PAU_SURFOBJ@@@Z @ 0x1F97A6 (--0BMPDEVOPEN@@QAE@PAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z @ 0x1F97D3 (--0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z.c)
 *     ?bBmpMakeOpaque@@YGHPAVSURFACE@@@Z @ 0x1FA81B (-bBmpMakeOpaque@@YGHPAVSURFACE@@@Z.c)
 */

BOOL __stdcall BmpDevGradientFill(
        struct _SURFOBJ *psoDest,
        struct _CLIPOBJ *pco,
        struct _XLATEOBJ *pxlo,
        struct _TRIVERTEX *pVertex,
        ULONG nVertex,
        PVOID pMesh,
        ULONG nMesh,
        struct _RECTL *prclExtents,
        struct _POINTL *pptlDitherOrg,
        ULONG ulMode)
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
  SURFOBJ *psoDesta; // [esp+1Ch] [ebp+8h]

  v11 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v18, psoDest);
  if ( psoDest )
  {
    v11 = EngGradientFill(psoDest, pco, pxlo, pVertex, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode);
    psoDesta = (SURFOBJ *)v11;
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
                if ( *(_DWORD *)(v14[276] + 312) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v19,
                    (struct PDEVOBJ *)&v20,
                    psoDest);
                  (*(void (__stdcall **)(struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _TRIVERTEX *, ULONG, PVOID, ULONG, struct _RECTL *, struct _POINTL *, ULONG))(v14[276] + 312))(
                    psoDest,
                    pco,
                    pxlo,
                    pVertex,
                    nVertex,
                    pMesh,
                    nMesh,
                    prclExtents,
                    pptlDitherOrg,
                    ulMode);
                  if ( v19 )
                    *(_WORD *)(v19 + 50) &= ~0x8000u;
                }
              }
            }
          }
        }
        v11 = (BOOL)psoDesta;
      }
    }
  }
  if ( v18 )
    bBmpMakeOpaque(v17);
  return v11;
}
