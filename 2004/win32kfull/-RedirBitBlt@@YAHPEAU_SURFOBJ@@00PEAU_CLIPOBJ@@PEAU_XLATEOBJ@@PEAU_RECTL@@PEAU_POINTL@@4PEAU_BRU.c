/*
 * XREFs of ?RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C029C1C0
 * Callers:
 *     ?RedirCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C029C470 (-RedirCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C001936C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     EngBitBlt @ 0x1C00CD5F0 (EngBitBlt.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0299A90 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C029B694 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C029BF28 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029E388 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclTrg,
        POINTL *pptlSrc,
        POINTL *pptlMask,
        BRUSHOBJ *pbo,
        POINTL *a10,
        ROP4 a11)
{
  ROP4 rop4; // r12d
  POINTL *pptlBrush; // r13
  __int64 HDEV; // rax
  __int64 v18; // rbx
  int v19; // eax
  struct _DISPSURF *i; // rbx
  __int64 v21; // r9
  struct _SURFOBJ *DevBitmap; // rax
  __int64 v23; // r10
  __int64 v24; // r11
  unsigned int v25; // r8d
  __int64 v27; // [rsp+68h] [rbp-69h] BYREF
  struct SURFACE *v28; // [rsp+70h] [rbp-61h] BYREF
  struct SURFACE *v29; // [rsp+78h] [rbp-59h] BYREF
  struct SURFACE *v30; // [rsp+80h] [rbp-51h] BYREF
  __int128 v31; // [rsp+88h] [rbp-49h] BYREF
  __int64 v32; // [rsp+98h] [rbp-39h]
  int v33; // [rsp+A0h] [rbp-31h]
  __int64 v34; // [rsp+A8h] [rbp-29h] BYREF
  int v35; // [rsp+B0h] [rbp-21h]
  int v36; // [rsp+B4h] [rbp-1Dh]
  __int16 v37; // [rsp+B8h] [rbp-19h]
  __int64 v38; // [rsp+C0h] [rbp-11h]
  __int64 v39; // [rsp+C8h] [rbp-9h]
  __int64 v40; // [rsp+108h] [rbp+37h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v30, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v29, a2);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v28, a3);
  rop4 = a11;
  pptlBrush = a10;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v18 = HDEV;
      if ( HDEV )
      {
        v35 = 0;
        v36 = 0;
        v39 = 0LL;
        v38 = 0LL;
        v34 = 0LL;
        v19 = *(_DWORD *)(HDEV + 40);
        v37 = 256;
        v31 = 0LL;
        v33 = 1;
        if ( (v19 & 1) != 0 )
        {
          *(_QWORD *)&v31 = *(_QWORD *)(v18 + 48);
          v32 = v18;
          GreAcquireSemaphore(v31);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v31, 11LL);
          v19 = *(_DWORD *)(v18 + 40);
        }
        if ( (v19 & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(v18 + 1800); i; i = *(struct _DISPSURF **)i )
          {
            v21 = *((_QWORD *)i + 6);
            v40 = v21;
            if ( v21 )
            {
              if ( (*(_DWORD *)(v21 + 1824) & 0x8000000) != 0 && (*(_DWORD *)(v21 + 2128) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v21 + 1792) + 208LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v27,
                    (struct PDEVOBJ *)&v40,
                    a1);
                  GetDevBitmap(i, a2);
                  DevBitmap = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, __int64, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(v23 + 208))(
                    DevBitmap,
                    v24,
                    a3,
                    pco,
                    pxlo,
                    prclTrg,
                    pptlSrc,
                    pptlMask,
                    pbo,
                    pptlBrush,
                    rop4);
                  if ( v27 )
                    *(_WORD *)(v27 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v31);
        if ( v34 )
          DLODCOBJ::vUnlock((DLODCOBJ *)&v34);
      }
    }
  }
  v25 = EngBitBlt(a1, a2, a3, pco, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
  if ( v28 )
    bMakeOpaque(v28);
  if ( v29 )
    bMakeOpaque(v29);
  if ( v30 )
    bMakeOpaque(v30);
  return v25;
}
