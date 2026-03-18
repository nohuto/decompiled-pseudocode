/*
 * XREFs of ?BmpDevLineTo@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@JJJJPAU_RECTL@@K@Z @ 0x1F9E31
 * Callers:
 *     <none>
 * Callees:
 *     _EngLineTo@36 @ 0xBDF44 (_EngLineTo@36.c)
 *     ??0BMPDEVOPEN@@QAE@PAU_SURFOBJ@@@Z @ 0x1F97A6 (--0BMPDEVOPEN@@QAE@PAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z @ 0x1F97D3 (--0MARK_ACCDRV_NOTIFICATION@@QAE@AAVPDEVOBJ@@PAU_SURFOBJ@@@Z.c)
 *     ?bBmpMakeOpaque@@YGHPAVSURFACE@@@Z @ 0x1FA81B (-bBmpMakeOpaque@@YGHPAVSURFACE@@@Z.c)
 */

BOOL __stdcall BmpDevLineTo(
        struct _SURFOBJ *pso,
        struct _CLIPOBJ *pco,
        struct _BRUSHOBJ *pbo,
        LONG x1,
        LONG y1,
        LONG x2,
        LONG y2,
        struct _RECTL *prclBounds,
        MIX mix)
{
  BOOL v10; // ebx
  int HDEV; // eax
  _DWORD *i; // ebx
  _DWORD *v13; // esi
  int v14; // eax
  struct SURFACE *v16; // [esp+0h] [ebp-14h]
  int v17; // [esp+8h] [ebp-Ch] BYREF
  int v18; // [esp+Ch] [ebp-8h] BYREF
  _DWORD *v19; // [esp+10h] [ebp-4h] BYREF
  SURFOBJ *psoa; // [esp+1Ch] [ebp+8h]

  v10 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v17, pso);
  if ( pso )
  {
    v10 = EngLineTo(pso, pco, pbo, x1, y1, x2, y2, prclBounds, mix);
    psoa = (SURFOBJ *)v10;
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 24) & 0x20000000) != 0 )
      {
        for ( i = **(_DWORD ***)(HDEV + 1108); i; i = (_DWORD *)*i )
        {
          v13 = (_DWORD *)i[9];
          v19 = v13;
          if ( v13 )
          {
            if ( (v13[280] & 0x8000000) != 0 )
            {
              v14 = v13[354];
              if ( (v14 & 0x1000) != 0 && (v14 & 0x8000) != 0 )
              {
                if ( *(_DWORD *)(v13[276] + 164) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v18,
                    (struct PDEVOBJ *)&v19,
                    pso);
                  (*(void (__stdcall **)(struct _SURFOBJ *, struct _CLIPOBJ *, struct _BRUSHOBJ *, LONG, LONG, LONG, LONG, struct _RECTL *, MIX))(v13[276] + 164))(
                    pso,
                    pco,
                    pbo,
                    x1,
                    y1,
                    x2,
                    y2,
                    prclBounds,
                    mix);
                  if ( v18 )
                    *(_WORD *)(v18 + 50) &= ~0x8000u;
                }
              }
            }
          }
        }
        v10 = (BOOL)psoa;
      }
    }
  }
  if ( v17 )
    bBmpMakeOpaque(v16);
  return v10;
}
