/*
 * XREFs of ?BmpDevAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C0299AC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C0299A58 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0299A90 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C029B694 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029B718 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall BmpDevAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BLENDOBJ *a7)
{
  unsigned int v11; // esi
  BOOL (__stdcall *v12)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rax
  __int64 HDEV; // rax
  struct _DISPSURF *i; // rbx
  __int64 v15; // r9
  int v16; // eax
  struct _SURFOBJ *DevBitmap; // rax
  __int64 v18; // r10
  __int64 v19; // r11
  __int64 v21; // [rsp+40h] [rbp-48h] BYREF
  __int64 v22; // [rsp+48h] [rbp-40h] BYREF
  struct SURFACE *v23; // [rsp+50h] [rbp-38h] BYREF
  struct SURFACE *v24; // [rsp+58h] [rbp-30h] BYREF

  v11 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v24, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v23, a2);
  if ( a1 )
  {
    v12 = ((__int64)a1[1].hsurf & 0x10000) != 0
        ? (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))*((_QWORD *)a1->hdev + 407)
        : EngAlphaBlend;
    v11 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *))v12)(a1, a2, a3);
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 40) & 0x20000000) != 0 )
      {
        for ( i = **(struct _DISPSURF ***)(HDEV + 1800); i; i = *(struct _DISPSURF **)i )
        {
          v15 = *((_QWORD *)i + 6);
          v21 = v15;
          if ( v15 )
          {
            if ( (*(_DWORD *)(v15 + 1824) & 0x8000000) != 0 )
            {
              v16 = *(_DWORD *)(v15 + 2128);
              if ( (v16 & 0x1000) != 0 && (v16 & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v15 + 1792) + 632LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v22,
                    (struct PDEVOBJ *)&v21,
                    a1);
                  GetDevBitmap(i, a2);
                  DevBitmap = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, struct _BLENDOBJ *))(v18 + 632))(
                    DevBitmap,
                    v19,
                    a3,
                    a4,
                    a5,
                    a6,
                    a7);
                  if ( v22 )
                    *(_WORD *)(v22 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v23 )
    bBmpMakeOpaque(v23);
  if ( v24 )
    bBmpMakeOpaque(v24);
  return v11;
}
