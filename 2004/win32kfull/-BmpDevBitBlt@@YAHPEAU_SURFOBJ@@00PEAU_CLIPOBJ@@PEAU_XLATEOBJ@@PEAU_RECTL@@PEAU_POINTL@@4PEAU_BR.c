/*
 * XREFs of ?BmpDevBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0299CC0
 * Callers:
 *     ?BmpDevCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C0299F50 (-BmpDevCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C0299A58 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0299A90 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C029B694 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029B718 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall BmpDevBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  unsigned int v15; // esi
  BOOL (__stdcall *v16)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rax
  __int64 HDEV; // rax
  struct _DISPSURF *i; // rbx
  __int64 v19; // r9
  int v20; // eax
  struct _SURFOBJ *DevBitmap; // rax
  __int64 v22; // r10
  __int64 v23; // r11
  __int64 v25; // [rsp+60h] [rbp-58h] BYREF
  __int64 v26; // [rsp+68h] [rbp-50h] BYREF
  struct SURFACE *v27; // [rsp+70h] [rbp-48h] BYREF
  struct SURFACE *v28; // [rsp+78h] [rbp-40h] BYREF
  struct SURFACE *v29; // [rsp+80h] [rbp-38h] BYREF

  v15 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v29, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v28, a2);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v27, a3);
  if ( a1 )
  {
    v16 = ((__int64)a1[1].hsurf & 1) != 0
        ? (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a1->hdev + 354)
        : EngBitBlt;
    v15 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *))v16)(a1, a2, a3);
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 40) & 0x20000000) != 0 )
      {
        for ( i = **(struct _DISPSURF ***)(HDEV + 1800); i; i = *(struct _DISPSURF **)i )
        {
          v19 = *((_QWORD *)i + 6);
          v25 = v19;
          if ( v19 )
          {
            if ( (*(_DWORD *)(v19 + 1824) & 0x8000000) != 0 )
            {
              v20 = *(_DWORD *)(v19 + 2128);
              if ( (v20 & 0x1000) != 0 && (v20 & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v19 + 1792) + 208LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v26,
                    (struct PDEVOBJ *)&v25,
                    a1);
                  GetDevBitmap(i, a2);
                  DevBitmap = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, __int64, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))(v22 + 208))(
                    DevBitmap,
                    v23,
                    a3,
                    a4,
                    a5,
                    a6,
                    a7,
                    a8,
                    a9,
                    a10,
                    a11);
                  if ( v26 )
                    *(_WORD *)(v26 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v27 )
    bBmpMakeOpaque(v27);
  if ( v28 )
    bBmpMakeOpaque(v28);
  if ( v29 )
    bBmpMakeOpaque(v29);
  return v15;
}
