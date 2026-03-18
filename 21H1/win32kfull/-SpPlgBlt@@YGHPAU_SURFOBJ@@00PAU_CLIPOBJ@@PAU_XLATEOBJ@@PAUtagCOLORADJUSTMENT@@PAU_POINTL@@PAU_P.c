/*
 * XREFs of ?SpPlgBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_POINTFIX@@PAU_RECTL@@4K@Z @ 0x1DBA99
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?bEnum@ENUMUNDERLAYS@@QAEHPAPAU_SURFOBJ@@PAU_POINTL@@PAPAU_CLIPOBJ@@@Z @ 0x66A00 (-bEnum@ENUMUNDERLAYS@@QAEHPAPAU_SURFOBJ@@PAU_POINTL@@PAPAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z @ 0x66EB0 (--0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QAEHPAPAU_CLIPOBJ@@@Z @ 0xCAC18 (-bRender@NEEDDDILOCK@@QAEHPAPAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YGHPAU_SURFOBJ@@@Z @ 0xE51B4 (-bAllowShareAccess@@YGHPAU_SURFOBJ@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _EngPlgBlt@44 @ 0x1ECC18 (_EngPlgBlt@44.c)
 *     _OffPlgBlt@56 @ 0x22F17C (_OffPlgBlt@56.c)
 */

BOOL __stdcall SpPlgBlt(
        struct _SURFOBJ *psoTrg,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _POINTFIX *pptfx,
        struct _RECTL *a9,
        struct _POINTL *a10,
        ULONG iMode)
{
  FIX x; // ecx
  bool v12; // zf
  bool v13; // sf
  bool v14; // of
  BOOL v15; // edx
  FIX y; // ecx
  int v17; // edx
  BOOL v18; // ebx
  int v19; // ebx
  HDEV hdev; // eax
  LONG *p_lDelta; // esi
  HSURF hsurf; // ecx
  LONG *v24; // edi
  HSURF v25; // eax
  struct _SURFOBJ *v26; // eax
  PKTHREAD CurrentThread; // eax
  PKTHREAD v28; // eax
  PKTHREAD v29; // eax
  PKTHREAD v30; // eax
  PKTHREAD v31; // eax
  PKTHREAD v32; // eax
  BOOL (__stdcall *v33)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG); // ecx
  PKTHREAD v34; // eax
  PKTHREAD v35; // eax
  PKTHREAD v36; // eax
  PKTHREAD v37; // eax
  int v38; // eax
  HDEV v39; // [esp-4h] [ebp-30Ch]
  struct _SURFOBJ *v40; // [esp+10h] [ebp-2F8h] BYREF
  CLIPOBJ *pco; // [esp+14h] [ebp-2F4h] BYREF
  struct _CLIPOBJ *v42; // [esp+18h] [ebp-2F0h] BYREF
  SURFOBJ *psoSrc; // [esp+1Ch] [ebp-2ECh]
  int v44; // [esp+20h] [ebp-2E8h]
  POINTL *pptl; // [esp+24h] [ebp-2E4h]
  RECTL *prcl; // [esp+28h] [ebp-2E0h]
  POINTL *pptlBrushOrg; // [esp+2Ch] [ebp-2DCh]
  COLORADJUSTMENT *pca; // [esp+30h] [ebp-2D8h]
  XLATEOBJ *pxlo; // [esp+34h] [ebp-2D4h]
  SURFOBJ *psoMsk; // [esp+38h] [ebp-2D0h]
  struct _POINTL v51; // [esp+3Ch] [ebp-2CCh] BYREF
  struct _RECTL v52; // [esp+48h] [ebp-2C0h] BYREF
  struct _RECTL v53[42]; // [esp+58h] [ebp-2B0h] BYREF

  psoSrc = a2;
  psoMsk = a3;
  pco = a4;
  v42 = a4;
  pxlo = a5;
  pca = a6;
  pptlBrushOrg = a7;
  prcl = a9;
  pptl = a10;
  v44 = 1;
  x = pptfx[1].x;
  v14 = __OFSUB__(x, pptfx[3].x);
  v12 = x == pptfx[3].x;
  v13 = x - pptfx[3].x < 0;
  v40 = psoTrg;
  v15 = !(v13 ^ v14 | v12);
  v14 = __OFSUB__(x, pptfx->x);
  v12 = x == pptfx->x;
  v13 = x - pptfx->x < 0;
  y = pptfx[1].y;
  v17 = (v13 ^ v14 | v12) ^ v15;
  v18 = y > pptfx[3].y;
  v14 = __OFSUB__(y, pptfx->y);
  v12 = y == pptfx->y;
  v13 = y - pptfx->y < 0;
  v51.x = 0;
  v51.y = 0;
  v19 = (v13 ^ v14 | v12) ^ v18;
  hdev = a2->hdev;
  if ( hdev && *((struct _SURFOBJ **)hdev + 20) == a2 )
    return EngPlgBlt(psoTrg, a2, psoMsk, pco, pxlo, pca, pptlBrushOrg, pptfx, prcl, pptl, iMode);
  if ( pptfx[v17].x > pptfx[v17 ^ 3].x )
    v17 ^= 3u;
  if ( pptfx[v19].y > pptfx[v19 ^ 3].y )
    v19 ^= 3u;
  v52.left = (pptfx[v17].x >> 4) - 1;
  v52.top = (pptfx[v19].y >> 4) - 1;
  v52.right = ((pptfx[v17 ^ 3].x + 15) >> 4) + 1;
  v52.bottom = ((pptfx[v19 ^ 3].y + 15) >> 4) + 1;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v53, psoTrg, pco, &v52);
  while ( ENUMUNDERLAYS::bEnum(v53, &v40, &v51, &v42) )
  {
    p_lDelta = 0;
    pco = 0;
    if ( v40 )
    {
      hsurf = v40[1].hsurf;
      if ( ((unsigned int)hsurf & 0x80004000) != 0 && ((unsigned __int16)hsurf & 0x200) == 0 )
      {
        p_lDelta = &v40[-1].lDelta;
        v39 = v40->hdev;
        pco = (CLIPOBJ *)&v40[-1].lDelta;
        GreLockDisplayDevice(v39);
      }
    }
    v24 = 0;
    v25 = psoSrc[1].hsurf;
    if ( ((unsigned int)v25 & 0x80004000) != 0 && ((unsigned __int16)v25 & 0x200) == 0 )
    {
      v24 = &psoSrc[-1].lDelta;
      GreLockDisplayDevice(psoSrc->hdev);
    }
    if ( !NEEDDDILOCK::bRender((NEEDDDILOCK *)&pco, &v42) )
      goto LABEL_36;
    v26 = v40;
    if ( v40->iType == 1 )
    {
      if ( bAllowShareAccess(v40) )
      {
        CurrentThread = KeGetCurrentThread();
        if ( W32GetThreadWin32Thread(CurrentThread) )
        {
          v28 = KeGetCurrentThread();
          if ( *(_DWORD *)(W32GetThreadWin32Thread(v28) + 156) )
          {
            v29 = KeGetCurrentThread();
            if ( *(_DWORD *)(W32GetThreadWin32Thread(v29) + 52)
              || (v30 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v30) + 56)) )
            {
              v31 = KeGetCurrentThread();
              if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(v31) + 156) + 20) & 4) != 0 )
              {
                v32 = KeGetCurrentThread();
                v33 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))(*(_DWORD *)(W32GetThreadWin32Thread(v32) + 156) + 76);
                goto LABEL_35;
              }
            }
          }
        }
      }
      v26 = v40;
      if ( v40->iType == 1 )
      {
        if ( bAllowShareAccess(v40) )
        {
          v34 = KeGetCurrentThread();
          if ( W32GetThreadWin32Thread(v34) )
          {
            v35 = KeGetCurrentThread();
            if ( *(_DWORD *)(W32GetThreadWin32Thread(v35) + 156) )
            {
              v36 = KeGetCurrentThread();
              if ( *(_DWORD *)(W32GetThreadWin32Thread(v36) + 52)
                || (v37 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v37) + 56)) )
              {
LABEL_34:
                v33 = EngPlgBlt;
                goto LABEL_35;
              }
            }
          }
        }
        v26 = v40;
      }
    }
    if ( ((int)v26[1].hsurf & 4) == 0 )
      goto LABEL_34;
    v33 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))*((_DWORD *)v26->hdev + 215);
LABEL_35:
    v38 = OffPlgBlt(
            (int)v40,
            (int)v33,
            (int)psoSrc,
            (int)psoMsk,
            v42,
            (int)pxlo,
            (int)pca,
            (int)pptlBrushOrg,
            (int)pptfx,
            (int)prcl,
            (int)pptl,
            iMode);
    v44 &= v38;
LABEL_36:
    if ( v24 )
      GreUnlockDisplayDevice(v24[7]);
    if ( p_lDelta )
      GreUnlockDisplayDevice(p_lDelta[7]);
  }
  return v44;
}
