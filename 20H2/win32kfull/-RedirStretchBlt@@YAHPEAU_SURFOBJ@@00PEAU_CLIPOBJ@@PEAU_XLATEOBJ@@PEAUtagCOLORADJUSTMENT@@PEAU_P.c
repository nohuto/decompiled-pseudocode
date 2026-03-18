/*
 * XREFs of ?RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C029C070
 * Callers:
 *     <none>
 * Callees:
 *     EngStretchBlt @ 0x1C006ADB0 (EngStretchBlt.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0098F74 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A47D0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0298640 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C029A244 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C029AAD8 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029CF38 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirStretchBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlHTOrg,
        RECTL *prclDest,
        RECTL *prclSrc,
        POINTL *pptlMask,
        ULONG a11)
{
  ULONG iMode; // r13d
  struct _DISPSURF *i; // rdi
  __int64 HDEV; // rax
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // r9
  struct _SURFOBJ *DevBitmap; // rbx
  struct _SURFOBJ *v22; // rax
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
  _QWORD v34[2]; // [rsp+A8h] [rbp-29h] BYREF
  __int16 v35; // [rsp+B8h] [rbp-19h]
  __int64 v36; // [rsp+C0h] [rbp-11h]
  __int64 v37; // [rsp+C8h] [rbp-9h]
  __int64 v38; // [rsp+108h] [rbp+37h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v30, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v29, a2);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v28, a3);
  iMode = a11;
  i = 0LL;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v18 = HDEV;
      if ( HDEV )
      {
        v19 = *(_DWORD *)(HDEV + 40);
        v31 = 0LL;
        v34[1] = 0LL;
        v35 = 256;
        v37 = 0LL;
        v36 = 0LL;
        v34[0] = 0LL;
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
            v20 = *((_QWORD *)i + 6);
            v38 = v20;
            if ( v20
              && (*(_DWORD *)(v20 + 1824) & 0x8000000) != 0
              && (*(_DWORD *)(v20 + 2128) & 0x8000) != 0
              && *(_QWORD *)(*(_QWORD *)(v20 + 1792) + 224LL) )
            {
              MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                (MARK_ACCDRV_NOTIFICATION *)&v27,
                (struct PDEVOBJ *)&v38,
                a1);
              DevBitmap = GetDevBitmap(i, a3);
              GetDevBitmap(i, a2);
              v22 = GetDevBitmap(i, a1);
              (*(void (__fastcall **)(struct _SURFOBJ *, __int64, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v23 + 224))(
                v22,
                v24,
                DevBitmap,
                pco,
                pxlo,
                pca,
                pptlHTOrg,
                prclDest,
                prclSrc,
                pptlMask,
                iMode);
              if ( v27 )
                *(_WORD *)(v27 + 78) &= ~0x8000u;
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v31);
        if ( (struct _DISPSURF *)v34[0] != i )
          DLODCOBJ::vUnlock((DLODCOBJ *)v34);
      }
    }
  }
  v25 = EngStretchBlt(a1, a2, a3, pco, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode);
  if ( v28 )
    bMakeOpaque(v28);
  if ( v29 )
    bMakeOpaque(v29);
  if ( v30 )
    bMakeOpaque(v30);
  return v25;
}
