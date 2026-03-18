/*
 * XREFs of ?RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C029D780
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C001936C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     EngStretchBltROP @ 0x1C00FFE80 (EngStretchBltROP.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0299A90 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C029B694 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C029BF28 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029E388 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirStretchBltROP(
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
        ULONG iMode,
        BRUSHOBJ *pbo,
        DWORD a13)
{
  DWORD rop4; // r13d
  struct _DISPSURF *i; // rdi
  __int64 HDEV; // rax
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // r9
  struct _SURFOBJ *DevBitmap; // rbx
  struct _SURFOBJ *v24; // rax
  __int64 v25; // r10
  __int64 v26; // r11
  unsigned int v27; // r8d
  __int64 v29; // [rsp+78h] [rbp-69h] BYREF
  struct SURFACE *v30; // [rsp+80h] [rbp-61h] BYREF
  struct SURFACE *v31; // [rsp+88h] [rbp-59h] BYREF
  struct SURFACE *v32; // [rsp+90h] [rbp-51h] BYREF
  __int128 v33; // [rsp+98h] [rbp-49h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-39h]
  int v35; // [rsp+B0h] [rbp-31h]
  _QWORD v36[2]; // [rsp+B8h] [rbp-29h] BYREF
  __int16 v37; // [rsp+C8h] [rbp-19h]
  __int64 v38; // [rsp+D0h] [rbp-11h]
  __int64 v39; // [rsp+D8h] [rbp-9h]
  __int64 v40; // [rsp+118h] [rbp+37h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v32, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v31, a2);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v30, a3);
  rop4 = a13;
  i = 0LL;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v20 = HDEV;
      if ( HDEV )
      {
        v21 = *(_DWORD *)(HDEV + 40);
        v33 = 0LL;
        v36[1] = 0LL;
        v37 = 256;
        v39 = 0LL;
        v38 = 0LL;
        v36[0] = 0LL;
        v35 = 1;
        if ( (v21 & 1) != 0 )
        {
          *(_QWORD *)&v33 = *(_QWORD *)(v20 + 48);
          v34 = v20;
          GreAcquireSemaphore(v33);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v33, 11LL);
          v21 = *(_DWORD *)(v20 + 40);
        }
        if ( (v21 & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(v20 + 1800); i; i = *(struct _DISPSURF **)i )
          {
            v22 = *((_QWORD *)i + 6);
            v40 = v22;
            if ( v22
              && (*(_DWORD *)(v22 + 1824) & 0x8000000) != 0
              && (*(_DWORD *)(v22 + 2128) & 0x8000) != 0
              && *(_QWORD *)(*(_QWORD *)(v22 + 1792) + 616LL) )
            {
              MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                (MARK_ACCDRV_NOTIFICATION *)&v29,
                (struct PDEVOBJ *)&v40,
                a1);
              DevBitmap = GetDevBitmap(i, a3);
              GetDevBitmap(i, a2);
              v24 = GetDevBitmap(i, a1);
              (*(void (__fastcall **)(struct _SURFOBJ *, __int64, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(v25 + 616))(
                v24,
                v26,
                DevBitmap,
                pco,
                pxlo,
                pca,
                pptlHTOrg,
                prclDest,
                prclSrc,
                pptlMask,
                iMode,
                pbo,
                rop4);
              if ( v29 )
                *(_WORD *)(v29 + 78) &= ~0x8000u;
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v33);
        if ( (struct _DISPSURF *)v36[0] != i )
          DLODCOBJ::vUnlock((DLODCOBJ *)v36);
      }
    }
  }
  v27 = EngStretchBltROP(a1, a2, a3, pco, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode, pbo, rop4);
  if ( v30 )
    bMakeOpaque(v30);
  if ( v31 )
    bMakeOpaque(v31);
  if ( v32 )
    bMakeOpaque(v32);
  return v27;
}
