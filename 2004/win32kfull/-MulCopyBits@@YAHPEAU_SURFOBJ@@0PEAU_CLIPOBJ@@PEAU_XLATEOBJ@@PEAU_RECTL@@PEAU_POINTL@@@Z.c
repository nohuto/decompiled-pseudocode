/*
 * XREFs of ?MulCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C02A29D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C027EA70 (--1MULTISURF@@QEAA@XZ.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0299A90 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02A19B0 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C02A1B60 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z @ 0x1C02A1B80 (-IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02A23D0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C02A6E60 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C02A72B4 (-bNextSurface@MSURF@@QEAAHXZ.c)
 */

int __fastcall MulCopyBits(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6)
{
  struct _SURFOBJ *v9; // rdx
  struct _CLIPOBJ *v10; // r8
  int v11; // esi
  int i; // eax
  HDEV hdev; // rbx
  int v14; // eax
  struct _SURFOBJ *v15; // rcx
  __int64 v16; // r11
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // r11
  int v20; // eax
  int v21; // eax
  _QWORD v23[2]; // [rsp+60h] [rbp-A0h] BYREF
  HDEV v24; // [rsp+70h] [rbp-90h] BYREF
  __int64 v25; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v26[56]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+B8h] [rbp-48h]
  struct _SURFOBJ *v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  _BYTE v30[88]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v31; // [rsp+138h] [rbp+38h]

  if ( !IsMetaRedirectionBitmap(a2) )
    return MulBitBlt(a1, v9, 0LL, v10, a4, a5, a6, 0LL, 0LL, 0LL, 0xCCCCu);
  v11 = 1;
  for ( i = MSURF::bFindSurface((MSURF *)v26, v9, v10, a5); i; i = MSURF::bNextSurface((MSURF *)v26) )
  {
    v23[0] = 0LL;
    hdev = v28->hdev;
    v24 = hdev;
    if ( ((_DWORD)hdev[532] & 0x8000) == 0 )
    {
      if ( (HIDWORD(a2[1].hsurf) & 0x10) != 0 )
        SURFREFVIEW::bMap((SURFREFVIEW *)v23, v28);
      if ( IsMetaDevBitmapForMirroring(a1) )
      {
        MULTISURF::MULTISURF((MULTISURF *)v30, a1);
        if ( ((__int64)v28[1].hsurf & 0x400) != 0 )
          v14 = (*(__int64 (__fastcall **)(__int64, struct _SURFOBJ *, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(*(_QWORD *)(v27 + 56) + 2840LL))(
                  v31,
                  v28,
                  v29,
                  a4,
                  a5,
                  a6);
        else
          v14 = ((__int64 (__fastcall *)(__int64, struct _SURFOBJ *, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))EngCopyBits)(
                  v31,
                  v28,
                  v29,
                  a4,
                  a5,
                  a6);
        v11 &= v14;
        MULTISURF::~MULTISURF((MULTISURF *)v30);
      }
    }
    if ( IsMetaDevBitmapForMirroring(a1) )
    {
      v17 = *(_QWORD *)(*((_QWORD *)a1->dhsurf + 1) + 8LL * *(unsigned int *)(v27 + 16));
      if ( v17 )
      {
        if ( (*(_DWORD *)(v16 + 88) & 0x400) != 0 )
          v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(*(_QWORD *)(v27 + 56) + 2840LL))(
                  v17,
                  v16,
                  v29,
                  a4,
                  a5,
                  a6);
        else
          v18 = ((__int64 (__fastcall *)(__int64, __int64, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))EngCopyBits)(
                  v17,
                  v16,
                  v29,
                  a4,
                  a5,
                  a6);
        v11 &= v18;
      }
    }
    else if ( IsMetaRedirectionBitmap(v15) )
    {
      if ( (*(_DWORD *)(v19 + 88) & 0x400) != 0 )
        v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(*(_QWORD *)(v27 + 56) + 2840LL))(
                *(_QWORD *)(*((_QWORD *)a1->dhsurf + 1) + 8LL * *(unsigned int *)(v27 + 16)),
                v19,
                v29,
                a4,
                a5,
                a6);
      else
        v20 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))EngCopyBits)(
                *(_QWORD *)(*((_QWORD *)a1->dhsurf + 1) + 8LL * *(unsigned int *)(v27 + 16)),
                v19,
                v29,
                a4,
                a5,
                a6);
      v11 &= v20;
    }
    else if ( ((_DWORD)hdev[532] & 0x8000) == 0 || *(_WORD *)(v19 + 76) )
    {
      MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION((MARK_ACCDRV_NOTIFICATION *)&v25, (struct PDEVOBJ *)&v24, a1);
      v21 = ((__int64)v28[1].hsurf & 0x400) != 0
          ? (*(__int64 (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(*(_QWORD *)(v27 + 56) + 2840LL))(
              a1,
              v28,
              v29,
              a4,
              a5,
              a6)
          : ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))EngCopyBits)(
              a1,
              v28,
              v29,
              a4,
              a5,
              a6);
      v11 &= v21;
      if ( v25 )
        *(_WORD *)(v25 + 78) &= ~0x8000u;
    }
    SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v23);
    v23[0] = 0LL;
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v23);
  }
  return v11;
}
