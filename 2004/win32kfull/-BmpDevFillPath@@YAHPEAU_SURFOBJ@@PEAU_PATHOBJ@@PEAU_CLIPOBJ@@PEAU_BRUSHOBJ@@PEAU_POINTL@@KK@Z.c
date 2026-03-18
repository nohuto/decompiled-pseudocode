/*
 * XREFs of ?BmpDevFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C029A1F0
 * Callers:
 *     <none>
 * Callees:
 *     EngFillPath @ 0x1C013A220 (EngFillPath.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C0299A58 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0299A90 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029B718 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall BmpDevFillPath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        struct _BRUSHOBJ *a4,
        POINTL *pptlBrushOrg,
        MIX mix,
        FLONG flOptions)
{
  unsigned int v11; // esi
  BRUSHOBJ *v12; // r9
  __int64 HDEV; // rax
  _QWORD *i; // rbx
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // r9
  __int64 v19; // [rsp+40h] [rbp-48h] BYREF
  __int64 v20; // [rsp+48h] [rbp-40h] BYREF
  struct SURFACE *v21; // [rsp+50h] [rbp-38h] BYREF

  v11 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v21, a1);
  if ( a1 )
  {
    v11 = EngFillPath(a1, ppo, pco, v12, pptlBrushOrg, mix, flOptions);
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 40) & 0x20000000) != 0 )
      {
        for ( i = **(_QWORD ***)(HDEV + 1800); i; i = (_QWORD *)*i )
        {
          v15 = i[6];
          v19 = v15;
          if ( v15 )
          {
            if ( (*(_DWORD *)(v15 + 1824) & 0x8000000) != 0 )
            {
              v16 = *(_DWORD *)(v15 + 2128);
              if ( (v16 & 0x1000) != 0 && (v16 & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v15 + 1792) + 184LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v20,
                    (struct PDEVOBJ *)&v19,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, PATHOBJ *, CLIPOBJ *, struct _BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(v17 + 1792) + 184LL))(
                    a1,
                    ppo,
                    pco,
                    a4,
                    pptlBrushOrg,
                    mix,
                    flOptions);
                  if ( v20 )
                    *(_WORD *)(v20 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v21 )
    bBmpMakeOpaque(v21);
  return v11;
}
