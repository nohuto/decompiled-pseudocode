/*
 * XREFs of ?BmpDevStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C029B0C0
 * Callers:
 *     <none>
 * Callees:
 *     EngStrokePath @ 0x1C013BD70 (EngStrokePath.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C0299A58 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0299A90 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029B718 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall BmpDevStrokePath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        struct _XFORMOBJ *a4,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        LINEATTRS *plineattrs,
        MIX mix)
{
  unsigned int v12; // esi
  XFORMOBJ *v13; // r9
  __int64 HDEV; // rax
  _QWORD *i; // rbx
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // r9
  __int64 v20; // [rsp+50h] [rbp-48h] BYREF
  __int64 v21; // [rsp+58h] [rbp-40h] BYREF
  struct SURFACE *v22; // [rsp+60h] [rbp-38h] BYREF

  v12 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v22, a1);
  if ( a1 )
  {
    v12 = EngStrokePath(a1, ppo, pco, v13, pbo, pptlBrushOrg, plineattrs, mix);
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 40) & 0x20000000) != 0 )
      {
        for ( i = **(_QWORD ***)(HDEV + 1800); i; i = (_QWORD *)*i )
        {
          v16 = i[6];
          v20 = v16;
          if ( v16 )
          {
            if ( (*(_DWORD *)(v16 + 1824) & 0x8000000) != 0 )
            {
              v17 = *(_DWORD *)(v16 + 2128);
              if ( (v17 & 0x1000) != 0 && (v17 & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v16 + 1792) + 176LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v21,
                    (struct PDEVOBJ *)&v20,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, PATHOBJ *, CLIPOBJ *, struct _XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_QWORD *)(v18 + 1792) + 176LL))(
                    a1,
                    ppo,
                    pco,
                    a4,
                    pbo,
                    pptlBrushOrg,
                    plineattrs,
                    mix);
                  if ( v21 )
                    *(_WORD *)(v21 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v22 )
    bBmpMakeOpaque(v22);
  return v12;
}
