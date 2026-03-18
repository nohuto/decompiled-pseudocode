/*
 * XREFs of ?SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C014C1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0068928 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0084A1C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C0084A50 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C00AE788 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C00AEA70 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     EngStretchBltROP @ 0x1C00FBF80 (EngStretchBltROP.c)
 *     OffStretchBltROP @ 0x1C014C468 (OffStretchBltROP.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall SpStretchBltROP(
        SURFOBJ *psoDest,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlHTOrg,
        RECTL *prclDest,
        RECTL *prclSrc,
        POINTL *pptlMask,
        ULONG iMode,
        struct _BRUSHOBJ *pbo,
        DWORD rop4)
{
  unsigned int v14; // r12d
  HDEV hdev; // rax
  struct _SURFOBJ *v16; // r10
  struct _CLIPOBJ *v17; // r11
  struct _SURFOBJ *v18; // rsi
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  int v21; // eax
  PVOID *v22; // rdi
  int v23; // r9d
  USHORT *p_iType; // r14
  BOOL (__stdcall *v25)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD); // rcx
  HDEV v27; // rcx
  __int64 ThreadWin32Thread; // rax
  struct _SURFOBJ *v29; // [rsp+80h] [rbp-80h] BYREF
  PVOID *v30; // [rsp+88h] [rbp-78h] BYREF
  struct _CLIPOBJ *v31; // [rsp+90h] [rbp-70h] BYREF
  struct _POINTL v32; // [rsp+98h] [rbp-68h] BYREF
  __int64 v33; // [rsp+A0h] [rbp-60h]
  __int64 v34; // [rsp+A8h] [rbp-58h]
  __int64 v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  __int64 v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  __int64 v39; // [rsp+D0h] [rbp-30h]
  struct _RECTL v40; // [rsp+D8h] [rbp-28h] BYREF
  __int64 *v41[114]; // [rsp+F0h] [rbp-10h] BYREF

  v32 = 0LL;
  v14 = 1;
  hdev = a2->hdev;
  v29 = psoDest;
  v31 = a4;
  v39 = (__int64)a3;
  v38 = (__int64)pxlo;
  v37 = (__int64)pca;
  v36 = (__int64)pptlHTOrg;
  v35 = (__int64)prclSrc;
  v34 = (__int64)pptlMask;
  v33 = (__int64)pbo;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 15) != a2 )
  {
    v40 = *prclDest;
    ERECTL::vOrder((ERECTL *)&v40);
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v41, v16, v17, &v40);
    while ( 1 )
    {
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v41, &v29, &v32, &v31) )
        return v14;
      v18 = v29;
      p_pvScan0 = 0LL;
      v30 = 0LL;
      if ( v29 )
      {
        hsurf = (int)v29[1].hsurf;
        if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
        {
          p_pvScan0 = &v29[-1].pvScan0;
          v27 = v29->hdev;
          v30 = &v29[-1].pvScan0;
          GreLockDisplayDevice(v27);
        }
      }
      v21 = (int)a2[1].hsurf;
      v22 = 0LL;
      if ( (v21 & 0x80004000) != 0 && (v21 & 0x200) == 0 )
      {
        v22 = &a2[-1].pvScan0;
        GreLockDisplayDevice(a2->hdev);
      }
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v30, &v31) )
        break;
LABEL_17:
      if ( v22 )
        GreUnlockDisplayDevice(v22[6]);
      if ( p_pvScan0 )
        GreUnlockDisplayDevice(p_pvScan0[6]);
    }
    p_iType = &v18->iType;
    if ( v18->iType == 1 )
    {
      if ( bAllowShareAccess(v18) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x2000) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          p_pvScan0 = v30;
          LODWORD(v18) = (_DWORD)v29;
          v25 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(*(_QWORD *)(ThreadWin32Thread + 280) + 152LL);
          goto LABEL_16;
        }
        p_pvScan0 = v30;
        v18 = v29;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v18) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          p_pvScan0 = v30;
          LODWORD(v18) = (_DWORD)v29;
          goto LABEL_38;
        }
        p_pvScan0 = v30;
        v18 = v29;
      }
    }
    if ( ((__int64)v18[1].hsurf & 0x2000) != 0 )
    {
      v25 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))*((_QWORD *)v18->hdev + 174);
LABEL_16:
      v14 &= OffStretchBltROP(
               (int)v25,
               (int)&v32,
               (int)v18,
               v23,
               (__int64)a2,
               v39,
               v31,
               v38,
               v37,
               v36,
               (__int64)prclDest,
               v35,
               v34,
               iMode,
               v33,
               rop4);
      goto LABEL_17;
    }
LABEL_38:
    v25 = EngStretchBltROP;
    goto LABEL_16;
  }
  return EngStretchBltROP(psoDest, a2, a3, a4, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode, pbo, rop4);
}
