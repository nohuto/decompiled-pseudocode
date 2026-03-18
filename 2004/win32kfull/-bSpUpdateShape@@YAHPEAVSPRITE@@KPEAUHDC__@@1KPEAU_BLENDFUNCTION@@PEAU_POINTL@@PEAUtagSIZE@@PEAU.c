/*
 * XREFs of ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0156B10
 * Callers:
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C004F24C (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 * Callees:
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00177EC (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C001A554 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C002D44C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C004F890 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C004F8CC (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vSpDeleteShape@@YAXPEAVSPRITE@@@Z @ 0x1C0050890 (-vSpDeleteShape@@YAXPEAVSPRITE@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0077C50 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0085AA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00A4D4C (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     XLATEOBJ_iXlate @ 0x1C00B9BB0 (XLATEOBJ_iXlate.c)
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1C00D42EC (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00FEC0C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z @ 0x1C01519DC (-pConvertDfbSurfaceToDibPostNKAPC@@YAHPEAUHSURF__@@@Z.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C0156F38 (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     ?bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z @ 0x1C0157160 (-bSpUpdateAlpha@@YAHPEAVSPRITE@@PEAU_BLENDFUNCTION@@H@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x1C0285700 (-vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z.c)
 *     ?bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z @ 0x1C02BAB64 (-bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z.c)
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
  __int64 y; // rdx
  LONG v18; // r8d
  __int64 v19; // r9
  __int64 v20; // r13
  LONG v21; // ecx
  int v22; // eax
  struct _RECTL *v23; // r8
  struct _SPRITESTATE *v24; // r14
  _DWORD *v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rdi
  int v28; // ebx
  struct PALETTE *v29; // rcx
  struct PALETTE *v30; // rax
  char v31; // r8
  int v32; // ebx
  bool v33; // zf
  struct _RECTL *v34; // rbx
  struct _SURFOBJ *v35; // rcx
  unsigned int v36; // ebx
  unsigned int v38; // r14d
  __int64 v39; // rdx
  __int64 v40; // rax
  int v41; // edx
  LONG v42; // eax
  struct _BLENDFUNCTION v43; // eax
  ULONG v44; // eax
  int v45; // eax
  HSURF v46; // rcx
  ULONG NearestIndexFromColorref; // [rsp+60h] [rbp-89h]
  struct PALETTE *v48; // [rsp+68h] [rbp-81h] BYREF
  LONG v49; // [rsp+70h] [rbp-79h]
  int v50; // [rsp+74h] [rbp-75h]
  struct _BLENDFUNCTION v51; // [rsp+78h] [rbp-71h] BYREF
  int v52; // [rsp+7Ch] [rbp-6Dh]
  __int64 v53; // [rsp+80h] [rbp-69h] BYREF
  int v54; // [rsp+88h] [rbp-61h]
  int v55; // [rsp+8Ch] [rbp-5Dh]
  int v56; // [rsp+90h] [rbp-59h]
  unsigned int v57; // [rsp+94h] [rbp-55h]
  int v58; // [rsp+98h] [rbp-51h]
  _QWORD v59[2]; // [rsp+A0h] [rbp-49h] BYREF
  XLATEOBJ *pxlo; // [rsp+B0h] [rbp-39h] BYREF
  __int64 v61; // [rsp+B8h] [rbp-31h] BYREF
  struct PALETTE *v62; // [rsp+C0h] [rbp-29h]
  struct _SPRITESTATE *v63; // [rsp+C8h] [rbp-21h]
  struct _RECTL *v64; // [rsp+D0h] [rbp-19h]
  struct _RECTL v65; // [rsp+D8h] [rbp-11h] BYREF

  v12 = a2;
  v13 = (struct _SPRITESTATE *)*((_QWORD *)a1 + 2);
  v64 = a9;
  v52 = 0;
  v65.bottom = 0;
  v53 = *(_QWORD *)v13;
  NearestIndexFromColorref = 0;
  v51 = 0;
  v63 = v13;
  if ( a2 == 0x2000000 )
  {
    *((_DWORD *)a1 + 1) = 0x2000000;
    v38 = 1;
    *((_DWORD *)a1 + 24) = 0;
    *((_DWORD *)a1 + 26) = a8->cx;
    *((_DWORD *)a1 + 25) = 0;
    *((_DWORD *)a1 + 27) = a8->cy;
    *((_DWORD *)a1 + 38) = *((_DWORD *)v13 + 27);
    *((_DWORD *)a1 + 39) = *((_DWORD *)v13 + 28);
    return v38;
  }
  if ( !a2 )
  {
    v12 = *((_DWORD *)a1 + 1);
    a6 = (struct _BLENDFUNCTION *)((char *)a1 + 200);
  }
  if ( !a7 || !a8 || !a6 && (v12 & 2) != 0 )
    return 0;
  DCOBJ::DCOBJ((DCOBJ *)v59, a4);
  if ( !v59[0] )
    goto LABEL_59;
  if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v59) )
    goto LABEL_59;
  if ( !(unsigned int)SrcSurfaceAccessCheck(*(struct SURFACE **)(v14 + 496)) )
    goto LABEL_59;
  v15 = *(_QWORD *)(v59[0] + 48LL);
  if ( v15 != *(_QWORD *)v13 && v15 != *(_QWORD *)(v53 + 24) )
    goto LABEL_59;
  if ( !a3 )
  {
    v55 = 0xFFFFFF;
    v62 = ppalDefault;
    v54 = 0;
    v56 = 0;
LABEL_13:
    x = a7->x;
    y = (unsigned int)a7->y;
    v18 = a7->x + a8->cx;
    v19 = (unsigned int)(y + a8->cy);
    v65.left = a7->x;
    v20 = *(_QWORD *)(v59[0] + 496LL);
    v65.right = v18;
    v65.top = y;
    v65.bottom = v19;
    if ( !v20 )
      goto LABEL_49;
    if ( x < 0 )
      goto LABEL_49;
    if ( (int)y < 0 )
      goto LABEL_49;
    if ( x >= v18 )
      goto LABEL_49;
    if ( (int)y >= (int)v19 )
      goto LABEL_49;
    v21 = *(_DWORD *)(v20 + 56);
    if ( v18 > v21 )
      goto LABEL_49;
    v22 = *(_DWORD *)(v20 + 60);
    if ( (int)v19 > v22 )
      goto LABEL_49;
    v23 = v64;
    if ( v64 )
    {
      v48 = 0LL;
      v49 = v21;
      v50 = v22;
      ERECTL::operator*=(&v64->left, (int *)&v48);
    }
    v24 = v63;
    SPRITERANGELOCK::vLockShared((struct _SPRITESTATE *)((char *)v63 + 120), y, (__int64)v23, v19);
    v25 = (_DWORD *)*((_QWORD *)a1 + 16);
    if ( v25 && (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v25 - 6)) )
    {
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v25 + 62));
      if ( (*(_DWORD *)a1 & 0x200) != 0 )
      {
        v42 = v25[8];
        v48 = 0LL;
        v49 = v42;
        v50 = v25[9];
        ERECTL::operator*=(&v65.left, (int *)&v48);
      }
      W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v25 + 62));
    }
    v26 = *(_QWORD *)(v20 + 128);
    pxlo = 0LL;
    v27 = *(_QWORD *)(v59[0] + 88LL);
    v61 = v26;
    if ( v26 )
      INC_SHARE_REF_CNT(v26);
    SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v24 + 120));
    if ( v12 != 3 || a6->AlphaFormat )
    {
      v28 = 0;
      v58 = 0;
    }
    else
    {
      v43 = *a6;
      a6 = &v51;
      v51 = v43;
      v51.AlphaFormat = 1;
      v12 = 2;
      v58 = 1;
      NearestIndexFromColorref = rgbFromColorref(gppalRGB, v27);
      v28 = 1;
    }
    if ( v12 == 2 && (a6->AlphaFormat & 1) != 0 )
    {
      v57 = 6;
      v29 = gppalRGB;
      v30 = ppalDefault;
    }
    else
    {
      v57 = 0;
      v29 = *(struct PALETTE **)(v53 + 1808);
      v30 = v62;
    }
    v48 = v29;
    if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                          (__int64 *)&pxlo,
                          0LL,
                          v56,
                          v61,
                          (__int64)v29,
                          v27,
                          (__int64)v30,
                          v55,
                          v54,
                          0,
                          0) )
    {
LABEL_48:
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v61);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
LABEL_49:
      v36 = v52;
      goto LABEL_50;
    }
    v52 = 1;
    *((_DWORD *)a1 + 1) = v12;
    *((struct _RECTL *)a1 + 6) = v65;
    if ( v12 == 4 )
    {
      *(_DWORD *)a1 |= 8u;
      v32 = 1;
      goto LABEL_46;
    }
    if ( v12 == 1 )
    {
      NearestIndexFromColorref = ulGetNearestIndexFromColorref(v61, v27, a5);
      v44 = XLATEOBJ_iXlate(pxlo, NearestIndexFromColorref);
      *(_DWORD *)a1 &= ~8u;
      *((_DWORD *)a1 + 51) = v44;
      v32 = *(_DWORD *)(v53 + 44) & 4;
    }
    else
    {
      if ( v12 != 2 || !(unsigned int)bSpUpdateAlpha(a1, a6, 0) )
        goto LABEL_82;
      v31 = a6->AlphaFormat & 1;
      if ( v31 && !(unsigned int)bIsSourceBGRA((struct SURFACE *)v20) )
      {
        if ( v28 )
          goto LABEL_72;
LABEL_82:
        vSpDeleteShape(a1);
        *((_DWORD *)a1 + 1) = 4;
        v52 = 0;
        goto LABEL_48;
      }
      if ( v28 )
      {
LABEL_72:
        v32 = 0;
LABEL_44:
        if ( *(_WORD *)(v20 + 100) || (*(_BYTE *)(v20 + 102) & 0x20) != 0 )
        {
          if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v53) )
          {
            v45 = *(_DWORD *)(v20 + 116);
            if ( (v45 & 0x20) == 0 )
            {
              v46 = *(HSURF *)(v20 + 32);
              *(_DWORD *)(v20 + 116) = v45 | 0x20;
              pConvertDfbSurfaceToDibPostNKAPC(v46);
            }
          }
          else
          {
            bConvertDfbDcToDib((struct XDCOBJ *)v59);
          }
          v20 = *(_QWORD *)(v59[0] + 496LL);
        }
LABEL_46:
        vSpDirectDriverAccess(v63, 0);
        v33 = v32 == 0;
        v34 = v64;
        bSpCreateShape(
          a1,
          &gptlZero,
          (struct _SURFOBJ *)((v20 + 24) & -(__int64)(v20 != 0)),
          pxlo,
          &v65,
          v48,
          v57,
          v33,
          v64);
        vSpDirectDriverAccess(v63, 1);
        v35 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
        if ( v35 )
        {
          if ( v58 )
          {
            if ( (*(_DWORD *)a1 & 0x40) != 0 )
              *((_DWORD *)a1 + 51) = NearestIndexFromColorref;
            else
              vSpUpdatePerPixelAlphaFromColorKey(v35, NearestIndexFromColorref, v34, 0LL);
          }
          goto LABEL_48;
        }
        goto LABEL_82;
      }
      if ( v31 )
        v32 = *(_DWORD *)(v53 + 44) & 2;
      else
        v32 = *(_DWORD *)(v53 + 44) & 1;
    }
    if ( v32 )
      goto LABEL_46;
    goto LABEL_44;
  }
  DCOBJ::DCOBJ((DCOBJ *)&v48, a3);
  if ( v48 )
  {
    v39 = *((_QWORD *)v48 + 6);
    if ( v39 == *(_QWORD *)(v59[0] + 48LL) && (v39 == *(_QWORD *)v13 || v39 == *(_QWORD *)(v53 + 24)) )
    {
      v62 = (struct PALETTE *)*((_QWORD *)v48 + 11);
      v40 = *((_QWORD *)v48 + 122);
      v41 = *(_DWORD *)(v40 + 184);
      v54 = *(_DWORD *)(v40 + 176);
      LODWORD(v40) = *((_DWORD *)v48 + 30);
      v55 = v41;
      v56 = v40;
      XDCOBJ::vUnlockFast((XDCOBJ *)&v48);
      goto LABEL_13;
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)&v48);
  }
LABEL_59:
  v36 = 0;
LABEL_50:
  if ( v59[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v59);
  return v36;
}
