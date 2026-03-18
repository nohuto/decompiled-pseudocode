/*
 * XREFs of ?SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C0280490
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0083518 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0083800 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C01067E4 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C010681C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     EngPlgBlt @ 0x1C028CE10 (EngPlgBlt.c)
 *     OffPlgBlt @ 0x1C02C9034 (OffPlgBlt.c)
 */

__int64 __fastcall SpPlgBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlBrushOrg,
        POINTFIX *pptfx,
        RECTL *prcl,
        struct _POINTL *a10,
        ULONG iMode)
{
  unsigned int v14; // r13d
  FIX x; // ecx
  bool v16; // zf
  bool v17; // sf
  bool v18; // of
  BOOL v19; // r10d
  FIX y; // ecx
  __int64 v21; // r10
  BOOL v22; // eax
  __int64 v23; // r11
  HDEV hdev; // rax
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rax
  struct _SURFOBJ *v28; // rsi
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  HDEV v31; // rcx
  int v32; // eax
  PVOID *v33; // rdi
  int v34; // r9d
  USHORT *p_iType; // r12
  __int64 ThreadWin32Thread; // rax
  BOOL (__stdcall *v37)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG); // rcx
  struct _SURFOBJ *v39; // [rsp+70h] [rbp-90h] BYREF
  PVOID *v40; // [rsp+78h] [rbp-88h] BYREF
  struct _CLIPOBJ *v41; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v42; // [rsp+88h] [rbp-78h] BYREF
  POINTL *pptl; // [rsp+90h] [rbp-70h]
  __int64 v44; // [rsp+98h] [rbp-68h]
  __int64 v45; // [rsp+A0h] [rbp-60h]
  __int64 v46; // [rsp+A8h] [rbp-58h]
  __int64 v47; // [rsp+B0h] [rbp-50h]
  __int64 v48; // [rsp+B8h] [rbp-48h]
  struct _RECTL v49; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v50[114]; // [rsp+D0h] [rbp-30h] BYREF

  v14 = 1;
  pptl = a10;
  v39 = a1;
  x = pptfx[1].x;
  v18 = __OFSUB__(x, pptfx[3].x);
  v16 = x == pptfx[3].x;
  v17 = x - pptfx[3].x < 0;
  v41 = a4;
  v19 = !(v17 ^ v18 | v16);
  v48 = (__int64)a3;
  v18 = __OFSUB__(x, pptfx->x);
  v16 = x == pptfx->x;
  v17 = x - pptfx->x < 0;
  y = pptfx[1].y;
  v47 = (__int64)pxlo;
  v21 = (v17 ^ v18 | v16) ^ (unsigned int)v19;
  v46 = (__int64)pca;
  v45 = (__int64)pptlBrushOrg;
  v18 = __OFSUB__(y, pptfx[3].y);
  v16 = y == pptfx[3].y;
  v17 = y - pptfx[3].y < 0;
  v44 = (__int64)prcl;
  v22 = y <= pptfx->y;
  v42 = 0LL;
  v23 = v22 ^ (unsigned int)!(v17 ^ v18 | v16);
  hdev = a2->hdev;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 15) != a2 )
  {
    v25 = (unsigned int)v21 ^ 3;
    if ( pptfx[v21].x <= pptfx[(unsigned int)v21 ^ 3LL].x )
      v25 = (unsigned int)v21;
    v26 = (unsigned int)v25;
    v49.left = (pptfx[v25].x >> 4) - 1;
    v27 = (unsigned int)v23 ^ 3;
    if ( pptfx[v23].y <= pptfx[(unsigned int)v23 ^ 3LL].y )
      v27 = (unsigned int)v23;
    v49.top = (pptfx[v27].y >> 4) - 1;
    v49.right = ((pptfx[v26 ^ 3].x + 15) >> 4) + 1;
    v49.bottom = ((pptfx[(unsigned int)v27 ^ 3LL].y + 15) >> 4) + 1;
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v50, a1, a4, &v49);
    while ( 1 )
    {
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v50, &v39, &v42, &v41) )
        return v14;
      v28 = v39;
      p_pvScan0 = 0LL;
      v40 = 0LL;
      if ( v39 )
      {
        hsurf = (int)v39[1].hsurf;
        if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
        {
          p_pvScan0 = &v39[-1].pvScan0;
          v31 = v39->hdev;
          v40 = &v39[-1].pvScan0;
          GreLockDisplayDevice(v31);
        }
      }
      v32 = (int)a2[1].hsurf;
      v33 = 0LL;
      if ( (v32 & 0x80004000) != 0 && (v32 & 0x200) == 0 )
      {
        v33 = &a2[-1].pvScan0;
        GreLockDisplayDevice(a2->hdev);
      }
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v40, &v41) )
        break;
LABEL_35:
      if ( v33 )
        GreUnlockDisplayDevice(v33[6]);
      if ( p_pvScan0 )
        GreUnlockDisplayDevice(p_pvScan0[6]);
    }
    p_iType = &v28->iType;
    if ( v28->iType == 1 )
    {
      if ( bAllowShareAccess(v28) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 4) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          p_pvScan0 = v40;
          LODWORD(v28) = (_DWORD)v39;
          v37 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 128LL);
LABEL_34:
          v14 &= OffPlgBlt(
                   (int)v37,
                   (int)&v42,
                   (int)v28,
                   v34,
                   (__int64)a2,
                   v48,
                   v41,
                   v47,
                   v46,
                   v45,
                   (__int64)pptfx,
                   v44,
                   (__int64)pptl,
                   iMode);
          goto LABEL_35;
        }
        p_pvScan0 = v40;
        v28 = v39;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v28) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          p_pvScan0 = v40;
          LODWORD(v28) = (_DWORD)v39;
LABEL_33:
          v37 = EngPlgBlt;
          goto LABEL_34;
        }
        p_pvScan0 = v40;
        v28 = v39;
      }
    }
    if ( ((__int64)v28[1].hsurf & 4) != 0 )
    {
      v37 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))*((_QWORD *)v28->hdev + 171);
      goto LABEL_34;
    }
    goto LABEL_33;
  }
  return EngPlgBlt(a1, a2, a3, a4, pxlo, pca, pptlBrushOrg, pptfx, prcl, pptl, iMode);
}
