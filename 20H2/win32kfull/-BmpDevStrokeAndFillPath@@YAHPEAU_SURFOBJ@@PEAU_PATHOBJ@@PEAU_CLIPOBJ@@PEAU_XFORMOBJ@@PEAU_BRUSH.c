/*
 * XREFs of ?BmpDevStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0299A70
 * Callers:
 *     <none>
 * Callees:
 *     EngStrokeAndFillPath @ 0x1C0140B60 (EngStrokeAndFillPath.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C0298608 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0298640 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029A2C8 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall BmpDevStrokeAndFillPath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        struct _XFORMOBJ *a4,
        BRUSHOBJ *pboStroke,
        LINEATTRS *plineattrs,
        BRUSHOBJ *pboFill,
        POINTL *pptlBrushOrg,
        MIX mixFill,
        FLONG flOptions)
{
  unsigned int v14; // esi
  XFORMOBJ *v15; // r9
  __int64 HDEV; // rax
  _QWORD *i; // rbx
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // r9
  __int64 v22; // [rsp+60h] [rbp-48h] BYREF
  __int64 v23; // [rsp+68h] [rbp-40h] BYREF
  struct SURFACE *v24; // [rsp+70h] [rbp-38h] BYREF

  v14 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v24, a1);
  if ( a1 )
  {
    v14 = EngStrokeAndFillPath(a1, ppo, pco, v15, pboStroke, plineattrs, pboFill, pptlBrushOrg, mixFill, flOptions);
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 40) & 0x20000000) != 0 )
      {
        for ( i = **(_QWORD ***)(HDEV + 1800); i; i = (_QWORD *)*i )
        {
          v18 = i[6];
          v22 = v18;
          if ( v18 )
          {
            if ( (*(_DWORD *)(v18 + 1824) & 0x8000000) != 0 )
            {
              v19 = *(_DWORD *)(v18 + 2128);
              if ( (v19 & 0x1000) != 0 && (v19 & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v18 + 1792) + 192LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v23,
                    (struct PDEVOBJ *)&v22,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, PATHOBJ *, CLIPOBJ *, struct _XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(v20 + 1792) + 192LL))(
                    a1,
                    ppo,
                    pco,
                    a4,
                    pboStroke,
                    plineattrs,
                    pboFill,
                    pptlBrushOrg,
                    mixFill,
                    flOptions);
                  if ( v23 )
                    *(_WORD *)(v23 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v24 )
    bBmpMakeOpaque(v24);
  return v14;
}
