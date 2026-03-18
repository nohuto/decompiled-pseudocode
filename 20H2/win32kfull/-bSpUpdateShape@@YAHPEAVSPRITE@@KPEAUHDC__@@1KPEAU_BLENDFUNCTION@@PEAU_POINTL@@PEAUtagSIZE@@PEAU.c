/*
 * XREFs of ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0159470
 * Callers:
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C0084C10 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 * Callees:
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C006C5FC (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C0082BC0 (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00833A0 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008513C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0085290 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00852CC (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C009D498 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A2CC0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A4450 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     XLATEOBJ_iXlate @ 0x1C00DE150 (XLATEOBJ_iXlate.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00F8FAC (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C01031A8 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z @ 0x1C015430C (-pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C0159898 (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     ?bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z @ 0x1C0159AC0 (-bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x1C0284190 (-vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z.c)
 *     ?bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z @ 0x1C02B9604 (-bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall bSpUpdateShape(
        struct SPRITE *a1,
        int a2,
        HDC a3,
        HDC a4,
        unsigned int a5,
        struct _BLENDFUNCTION *a6,
        struct _POINTL *a7,
        struct tagSIZE *a8,
        struct _RECTL *a9)
{
  int v12; // r15d
  struct _SPRITESTATE *v13; // r13
  __int64 v14; // r8
  __int64 v15; // rcx
  LONG x; // ecx
  int y; // edx
  LONG v18; // r8d
  LONG v19; // r9d
  __int64 v20; // r13
  LONG v21; // ecx
  LONG v22; // eax
  struct _SPRITESTATE *v23; // r14
  _DWORD *v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rdi
  int v27; // ebx
  struct PALETTE *v28; // rcx
  struct PALETTE *v29; // rax
  char v30; // r8
  int v31; // ebx
  bool v32; // zf
  struct _RECTL *v33; // rbx
  struct _SURFOBJ *v34; // rcx
  unsigned int v35; // ebx
  unsigned int v37; // r14d
  __int64 v38; // rdx
  __int64 v39; // rax
  int v40; // edx
  LONG v41; // eax
  struct _BLENDFUNCTION v42; // eax
  ULONG v43; // eax
  int v44; // eax
  HSURF v45; // rcx
  ULONG NearestIndexFromColorref; // [rsp+60h] [rbp-89h]
  struct PALETTE *v47; // [rsp+68h] [rbp-81h] BYREF
  LONG v48; // [rsp+70h] [rbp-79h]
  LONG v49; // [rsp+74h] [rbp-75h]
  struct _BLENDFUNCTION v50; // [rsp+78h] [rbp-71h] BYREF
  int v51; // [rsp+7Ch] [rbp-6Dh]
  __int64 v52; // [rsp+80h] [rbp-69h] BYREF
  int v53; // [rsp+88h] [rbp-61h]
  int v54; // [rsp+8Ch] [rbp-5Dh]
  unsigned int v55; // [rsp+90h] [rbp-59h]
  unsigned int v56; // [rsp+94h] [rbp-55h]
  int v57; // [rsp+98h] [rbp-51h]
  _QWORD v58[2]; // [rsp+A0h] [rbp-49h] BYREF
  XLATEOBJ *pxlo; // [rsp+B0h] [rbp-39h] BYREF
  __int64 v60; // [rsp+B8h] [rbp-31h] BYREF
  struct PALETTE *v61; // [rsp+C0h] [rbp-29h]
  struct _SPRITESTATE *v62; // [rsp+C8h] [rbp-21h]
  struct _RECTL *v63; // [rsp+D0h] [rbp-19h]
  struct _RECTL v64; // [rsp+D8h] [rbp-11h] BYREF

  v12 = a2;
  v13 = (struct _SPRITESTATE *)*((_QWORD *)a1 + 2);
  v63 = a9;
  v51 = 0;
  v64.bottom = 0;
  v52 = *(_QWORD *)v13;
  NearestIndexFromColorref = 0;
  v50 = 0;
  v62 = v13;
  if ( a2 == 0x2000000 )
  {
    *((_DWORD *)a1 + 1) = 0x2000000;
    v37 = 1;
    *((_DWORD *)a1 + 24) = 0;
    *((_DWORD *)a1 + 26) = a8->cx;
    *((_DWORD *)a1 + 25) = 0;
    *((_DWORD *)a1 + 27) = a8->cy;
    *((_DWORD *)a1 + 38) = *((_DWORD *)v13 + 27);
    *((_DWORD *)a1 + 39) = *((_DWORD *)v13 + 28);
    return v37;
  }
  if ( !a2 )
  {
    v12 = *((_DWORD *)a1 + 1);
    a6 = (struct _BLENDFUNCTION *)((char *)a1 + 200);
  }
  if ( !a7 || !a8 || !a6 && (v12 & 2) != 0 )
    return 0;
  DCOBJ::DCOBJ((DCOBJ *)v58, a4);
  if ( !v58[0] )
    goto LABEL_59;
  if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v58) )
    goto LABEL_59;
  if ( !(unsigned int)SrcSurfaceAccessCheck(*(struct SURFACE **)(v14 + 496)) )
    goto LABEL_59;
  v15 = *(_QWORD *)(v58[0] + 48LL);
  if ( v15 != *(_QWORD *)v13 && v15 != *(_QWORD *)(v52 + 24) )
    goto LABEL_59;
  if ( !a3 )
  {
    v54 = 0xFFFFFF;
    v61 = ppalDefault;
    v53 = 0;
    v55 = 0;
LABEL_13:
    x = a7->x;
    y = a7->y;
    v18 = a7->x + a8->cx;
    v19 = y + a8->cy;
    v64.left = a7->x;
    v20 = *(_QWORD *)(v58[0] + 496LL);
    v64.right = v18;
    v64.top = y;
    v64.bottom = v19;
    if ( !v20 )
      goto LABEL_49;
    if ( x < 0 )
      goto LABEL_49;
    if ( y < 0 )
      goto LABEL_49;
    if ( x >= v18 )
      goto LABEL_49;
    if ( y >= v19 )
      goto LABEL_49;
    v21 = *(_DWORD *)(v20 + 56);
    if ( v18 > v21 )
      goto LABEL_49;
    v22 = *(_DWORD *)(v20 + 60);
    if ( v19 > v22 )
      goto LABEL_49;
    if ( v63 )
    {
      v47 = 0LL;
      v48 = v21;
      v49 = v22;
      ERECTL::operator*=(&v63->left, (int *)&v47);
    }
    v23 = v62;
    SPRITERANGELOCK::vLockShared((struct _SPRITESTATE *)((char *)v62 + 120));
    v24 = (_DWORD *)*((_QWORD *)a1 + 16);
    if ( v24 && (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v24 - 6)) )
    {
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v24 + 62));
      if ( (*(_DWORD *)a1 & 0x200) != 0 )
      {
        v41 = v24[8];
        v47 = 0LL;
        v48 = v41;
        v49 = v24[9];
        ERECTL::operator*=(&v64.left, (int *)&v47);
      }
      W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v24 + 62));
    }
    v25 = *(_QWORD *)(v20 + 128);
    pxlo = 0LL;
    v26 = *(_QWORD *)(v58[0] + 88LL);
    v60 = v25;
    if ( v25 )
      INC_SHARE_REF_CNT(v25);
    SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v23 + 120));
    if ( v12 != 3 || a6->AlphaFormat )
    {
      v27 = 0;
      v57 = 0;
    }
    else
    {
      v42 = *a6;
      a6 = &v50;
      v50 = v42;
      v50.AlphaFormat = 1;
      v12 = 2;
      v57 = 1;
      NearestIndexFromColorref = rgbFromColorref(gppalRGB, v26);
      v27 = 1;
    }
    if ( v12 == 2 && (a6->AlphaFormat & 1) != 0 )
    {
      v56 = 6;
      v28 = gppalRGB;
      v29 = ppalDefault;
    }
    else
    {
      v56 = 0;
      v28 = *(struct PALETTE **)(v52 + 1808);
      v29 = v61;
    }
    v47 = v28;
    if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                          (__int64 *)&pxlo,
                          0LL,
                          v55,
                          v60,
                          (__int64)v28,
                          v26,
                          (__int64)v29,
                          v54,
                          v53,
                          0,
                          0) )
    {
LABEL_48:
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v60);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
LABEL_49:
      v35 = v51;
      goto LABEL_50;
    }
    v51 = 1;
    *((_DWORD *)a1 + 1) = v12;
    *((struct _RECTL *)a1 + 6) = v64;
    if ( v12 == 4 )
    {
      *(_DWORD *)a1 |= 8u;
      v31 = 1;
      goto LABEL_46;
    }
    if ( v12 == 1 )
    {
      NearestIndexFromColorref = ulGetNearestIndexFromColorref(v60, v26, a5, 1LL);
      v43 = XLATEOBJ_iXlate(pxlo, NearestIndexFromColorref);
      *(_DWORD *)a1 &= ~8u;
      *((_DWORD *)a1 + 51) = v43;
      v31 = *(_DWORD *)(v52 + 44) & 4;
    }
    else
    {
      if ( v12 != 2 || !(unsigned int)bSpUpdateAlpha(a1, a6, 0) )
        goto LABEL_82;
      v30 = a6->AlphaFormat & 1;
      if ( v30 && !(unsigned int)bIsSourceBGRA((struct SURFACE *)v20) )
      {
        if ( v27 )
          goto LABEL_72;
LABEL_82:
        vSpDeleteShape(a1);
        *((_DWORD *)a1 + 1) = 4;
        v51 = 0;
        goto LABEL_48;
      }
      if ( v27 )
      {
LABEL_72:
        v31 = 0;
LABEL_44:
        if ( *(_WORD *)(v20 + 100) || (*(_BYTE *)(v20 + 102) & 0x20) != 0 )
        {
          if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v52) )
          {
            v44 = *(_DWORD *)(v20 + 116);
            if ( (v44 & 0x20) == 0 )
            {
              v45 = *(HSURF *)(v20 + 32);
              *(_DWORD *)(v20 + 116) = v44 | 0x20;
              pConvertDfbSurfaceToDibPostNKAPC(v45);
            }
          }
          else
          {
            bConvertDfbDcToDib((struct XDCOBJ *)v58);
          }
          v20 = *(_QWORD *)(v58[0] + 496LL);
        }
LABEL_46:
        vSpDirectDriverAccess(v62, 0);
        v32 = v31 == 0;
        v33 = v63;
        bSpCreateShape(
          a1,
          &gptlZero,
          (struct _SURFOBJ *)((v20 + 24) & -(__int64)(v20 != 0)),
          pxlo,
          &v64,
          v47,
          v56,
          v32,
          v63);
        vSpDirectDriverAccess(v62, 1);
        v34 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
        if ( v34 )
        {
          if ( v57 )
          {
            if ( (*(_DWORD *)a1 & 0x40) != 0 )
              *((_DWORD *)a1 + 51) = NearestIndexFromColorref;
            else
              vSpUpdatePerPixelAlphaFromColorKey(v34, NearestIndexFromColorref, v33, 0LL);
          }
          goto LABEL_48;
        }
        goto LABEL_82;
      }
      if ( v30 )
        v31 = *(_DWORD *)(v52 + 44) & 2;
      else
        v31 = *(_DWORD *)(v52 + 44) & 1;
    }
    if ( v31 )
      goto LABEL_46;
    goto LABEL_44;
  }
  DCOBJ::DCOBJ((DCOBJ *)&v47, a3);
  if ( v47 )
  {
    v38 = *((_QWORD *)v47 + 6);
    if ( v38 == *(_QWORD *)(v58[0] + 48LL) && (v38 == *(_QWORD *)v13 || v38 == *(_QWORD *)(v52 + 24)) )
    {
      v61 = (struct PALETTE *)*((_QWORD *)v47 + 11);
      v39 = *((_QWORD *)v47 + 122);
      v40 = *(_DWORD *)(v39 + 184);
      v53 = *(_DWORD *)(v39 + 176);
      LODWORD(v39) = *((_DWORD *)v47 + 30);
      v54 = v40;
      v55 = v39;
      XDCOBJ::vUnlockFast((XDCOBJ *)&v47);
      goto LABEL_13;
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)&v47);
  }
LABEL_59:
  v35 = 0;
LABEL_50:
  if ( v58[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v58);
  return v35;
}
