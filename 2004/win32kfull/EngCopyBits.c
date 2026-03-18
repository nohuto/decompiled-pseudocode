/*
 * XREFs of EngCopyBits @ 0x1C00D10E0
 * Callers:
 *     GreGetBitmapBits @ 0x1C002E424 (GreGetBitmapBits.c)
 *     GreSetBitmapBits @ 0x1C002E780 (GreSetBitmapBits.c)
 *     GreStretchDIBitsInternal @ 0x1C0074590 (GreStretchDIBitsInternal.c)
 *     NtGdiAlphaBlend @ 0x1C007EE80 (NtGdiAlphaBlend.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C00C8A90 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C00CB21C (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00CB960 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     EngBitBlt @ 0x1C00CD5F0 (EngBitBlt.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00CF2B0 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C00D0890 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     EngStretchBlt @ 0x1C00D2AA0 (EngStretchBlt.c)
 *     EngHTBlt @ 0x1C00D4640 (EngHTBlt.c)
 *     NtGdiEngCopyBits @ 0x1C012ECC0 (NtGdiEngCopyBits.c)
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C026F604 (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1C0274238 (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x1C0281F20 (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C001A554 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0085AA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00CC838 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00CD2A0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00CD3E8 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?pfnGetRLESrcCopy@@YAP6AHPEAUBLTINFO@@@ZKK@Z @ 0x1C00D1970 (-pfnGetRLESrcCopy@@YAP6AHPEAUBLTINFO@@@ZKK@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

BOOL __stdcall EngCopyBits(
        SURFOBJ *psoDest,
        SURFOBJ *psoSrc,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDest,
        POINTL *pptlSrc)
{
  CLIPOBJ *v7; // r10
  SURFOBJ *v8; // rsi
  POINTL *v10; // r9
  __int64 p_iBitmapFormat; // rcx
  PVOID *p_pvScan0; // r13
  int v13; // edi
  int v14; // r9d
  int v15; // r8d
  unsigned int v16; // ebx
  int v17; // eax
  LONG lDelta; // eax
  CLIPOBJ *v19; // r10
  RECTL rclBounds; // xmm0
  ULONG iBitmapFormat; // eax
  unsigned int v22; // ecx
  int v23; // eax
  int v24; // ecx
  unsigned int i; // ebx
  LONG v26; // edx
  LONG left; // r11d
  LONG v28; // r9d
  LONG right; // ecx
  LONG v30; // ecx
  LONG v31; // r15d
  LONG v32; // r10d
  LONG bottom; // r8d
  int v34; // r8d
  int v35; // r13d
  int v36; // r11d
  LONG v37; // edx
  char *pvScan0; // r9
  LONG v39; // r8d
  char *v40; // r11
  CLIPOBJ *v42; // r10
  int (*RLESrcCopy)(struct BLTINFO *); // r15
  int v44; // r11d
  unsigned __int64 v45; // r9
  __int64 v46; // r8
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  char *v51; // rdx
  char *v52; // rcx
  unsigned int j; // ebx
  LONG v54; // edx
  LONG v55; // eax
  LONG v56; // r8d
  LONG v57; // eax
  LONG v58; // r9d
  LONG v59; // eax
  int v60; // eax
  LONG v61; // r10d
  __int64 *v62; // rbx
  RECTL *v63; // rax
  __int64 x; // rdx
  LONG y; // r8d
  int v66; // ecx
  int v67; // ebx
  LONG v68; // ecx
  LONG top; // edx
  unsigned __int64 v70; // rax
  __int64 *v71; // r9
  __int64 *v72; // rsi
  __int64 v73; // rdi
  int v74; // [rsp+64h] [rbp-2D4h]
  int v75; // [rsp+68h] [rbp-2D0h]
  int v76; // [rsp+6Ch] [rbp-2CCh]
  int v78; // [rsp+78h] [rbp-2C0h]
  POINTL *v79; // [rsp+80h] [rbp-2B8h]
  XLATEOBJ *v80; // [rsp+88h] [rbp-2B0h] BYREF
  __int64 *v81; // [rsp+90h] [rbp-2A8h]
  LONG v82; // [rsp+98h] [rbp-2A0h] BYREF
  LONG v83; // [rsp+9Ch] [rbp-29Ch]
  void (* near *v84)(struct BLTINFO *); // [rsp+A0h] [rbp-298h]
  RECTL *v85; // [rsp+A8h] [rbp-290h]
  int v86; // [rsp+B0h] [rbp-288h]
  CLIPOBJ *v87; // [rsp+B8h] [rbp-280h]
  int v88; // [rsp+C0h] [rbp-278h]
  HDEV hdev; // [rsp+C8h] [rbp-270h] BYREF
  _QWORD v90[6]; // [rsp+D0h] [rbp-268h] BYREF
  XLATEOBJ *v91; // [rsp+100h] [rbp-238h] BYREF
  char *v92; // [rsp+108h] [rbp-230h]
  char *v93; // [rsp+110h] [rbp-228h]
  int v94; // [rsp+118h] [rbp-220h]
  int v95; // [rsp+11Ch] [rbp-21Ch]
  int v96; // [rsp+120h] [rbp-218h]
  int v97; // [rsp+124h] [rbp-214h]
  int v98; // [rsp+128h] [rbp-210h]
  LONG v99; // [rsp+12Ch] [rbp-20Ch]
  int v100; // [rsp+130h] [rbp-208h]
  int v101; // [rsp+134h] [rbp-204h]
  int v102; // [rsp+138h] [rbp-200h]
  LONG v103; // [rsp+13Ch] [rbp-1FCh]
  int v104; // [rsp+140h] [rbp-1F8h]
  PVOID *v105; // [rsp+148h] [rbp-1F0h]
  POINTL v106; // [rsp+150h] [rbp-1E8h]
  __int128 v107; // [rsp+158h] [rbp-1E0h]
  char *v108; // [rsp+168h] [rbp-1D0h]
  char *v109; // [rsp+170h] [rbp-1C8h]
  int v110; // [rsp+178h] [rbp-1C0h]
  int v111; // [rsp+17Ch] [rbp-1BCh]
  int v112; // [rsp+180h] [rbp-1B8h]
  unsigned int v113; // [rsp+184h] [rbp-1B4h]
  int v114; // [rsp+188h] [rbp-1B0h]
  _DWORD v115[84]; // [rsp+1A0h] [rbp-198h] BYREF

  v7 = pco;
  v8 = psoSrc;
  v90[2] = psoDest;
  v90[3] = psoSrc;
  v87 = pco;
  v85 = prclDest;
  v10 = pptlSrc;
  v79 = pptlSrc;
  v90[5] = pptlSrc;
  if ( psoDest )
    p_iBitmapFormat = (__int64)&psoDest->iBitmapFormat;
  else
    p_iBitmapFormat = 96LL;
  if ( psoSrc )
    p_pvScan0 = &psoSrc[-1].pvScan0;
  else
    p_pvScan0 = 0LL;
  if ( psoSrc->iType )
  {
    v62 = (__int64 *)p_pvScan0[6];
    v63 = (RECTL *)v62[355];
    v80 = 0LL;
    x = (unsigned int)pptlSrc->x;
    v82 = pptlSrc->x;
    y = pptlSrc->y;
    v83 = y;
    v66 = *((_DWORD *)p_pvScan0 + 28);
    if ( (v66 & 0x80000) == 0 )
      goto LABEL_82;
    v71 = (__int64 *)v62[3];
    v81 = v71;
    if ( v62 != v71 )
    {
      if ( v66 >= 0 )
      {
        v72 = v71;
      }
      else
      {
        v82 = x + *((_DWORD *)v62 + 646);
        v83 = y + *((_DWORD *)v62 + 647);
        v79 = (POINTL *)&v82;
        v72 = (__int64 *)v62[3];
        v81 = v72;
      }
      LOBYTE(x) = 5;
      v73 = HmgShareLockCheck(p_pvScan0[18], x);
      if ( v73 )
      {
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             (__int64 *)&v80,
                             0LL,
                             0,
                             v72[226],
                             v62[226],
                             (__int64)ppalDefault,
                             (__int64)ppalDefault,
                             0,
                             0,
                             0,
                             0x2000) )
        {
          pxlo = v80;
          v8 = (SURFOBJ *)(v73 + 24);
          v85 = (RECTL *)v81[355];
          DEC_SHARE_REF_CNT(v73);
          v63 = v85;
          v7 = pco;
          goto LABEL_106;
        }
        DEC_SHARE_REF_CNT(v73);
      }
LABEL_108:
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v80);
      return 0;
    }
LABEL_106:
    v10 = v79;
LABEL_82:
    if ( v63 )
    {
      v67 = ((__int64 (__fastcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))v63)(
              psoDest,
              v8,
              v7,
              pxlo,
              prclDest,
              v10);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v80);
      return v67;
    }
    goto LABEL_108;
  }
  if ( (*((_DWORD *)p_pvScan0 + 24) > 8u || *(_DWORD *)p_iBitmapFormat > 8u) && bUMPDSecurityGateEx() )
  {
    if ( gfUMPDDebug )
      DbgPrint("clientcore\\windows\\core\\ntgdi\\gre\\windows\\trivblt.cxx:%d:EngCopyBits:Invalid iFormat().\n", 470);
    return 0;
  }
  hdev = psoDest->hdev;
  PDEVOBJ::vSync((PDEVOBJ *)&hdev, psoDest, 0LL, 0);
  v90[0] = v8->hdev;
  PDEVOBJ::vSync((PDEVOBJ *)v90, v8, 0LL, 0);
  v13 = 0;
  v74 = 0;
  v104 = 0;
  v14 = 1;
  v75 = 1;
  v15 = 1;
  v76 = 1;
  if ( v8->iBitmapFormat - 7 <= 1 )
  {
    v16 = 2;
    v75 = 1;
    v76 = -1;
    lDelta = psoDest->lDelta;
    v98 = 0;
    v74 = 1;
LABEL_53:
    lDelta = -lDelta;
    goto LABEL_14;
  }
  if ( v8->pvScan0 == psoDest->pvScan0 )
  {
    v68 = pptlSrc->y;
    top = prclDest->top;
    if ( pptlSrc->x < prclDest->left )
    {
      v14 = -1;
      v75 = -1;
      if ( v68 >= top )
      {
        v16 = 1;
      }
      else
      {
        v15 = -1;
        v76 = -1;
        v16 = 3;
      }
    }
    else if ( v68 < top )
    {
      v15 = -1;
      v76 = -1;
      v16 = 2;
    }
    else
    {
      v16 = 0;
    }
  }
  else
  {
    v16 = 4;
  }
  v17 = v8->lDelta;
  if ( v15 <= 0 )
    v17 = -v17;
  v98 = v17;
  lDelta = psoDest->lDelta;
  if ( v15 <= 0 )
    goto LABEL_53;
LABEL_14:
  v99 = lDelta;
  v86 = v14;
  memset(v115, 0, 0x144uLL);
  v19 = pco;
  if ( !pco || !pco->iDComplexity )
  {
    rclBounds = *prclDest;
LABEL_16:
    v115[0] = 1;
    *(RECTL *)&v115[1] = rclBounds;
    goto LABEL_17;
  }
  if ( pco->iDComplexity == 1 )
  {
    rclBounds = pco->rclBounds;
    goto LABEL_16;
  }
  if ( pco->iDComplexity == 3 )
  {
    v13 = 1;
    XCLIPOBJ::cEnumStart((XCLIPOBJ *)pco, 0, 0, v16, 0x14u);
    v19 = pco;
  }
LABEL_17:
  if ( !pxlo )
    pxlo = xloIdent;
  v91 = pxlo;
  v94 = v75;
  v97 = v76;
  iBitmapFormat = psoDest->iBitmapFormat;
  v22 = v8->iBitmapFormat;
  if ( !v74 )
  {
    v23 = 4 * (v22 | (8 * iBitmapFormat));
    v24 = v23 + 2;
    if ( v75 >= 0 )
      v24 = v23;
    if ( (pxlo->flXlate & 1) != 0 )
    {
      ++v24;
      if ( (v8->fjBitmap & 0x20) != 0 )
        v104 = 1;
    }
    v84 = (&SrcCopyFunctionTable)[v24];
    v90[4] = v84;
    if ( v13 )
      goto LABEL_87;
    while ( 1 )
    {
      for ( i = 0; i < v115[0]; ++i )
      {
        v26 = v115[4 * i + 1];
        left = prclDest->left;
        if ( v26 < prclDest->left )
        {
          v115[4 * i + 1] = left;
          v26 = left;
        }
        v28 = v115[4 * i + 3];
        right = prclDest->right;
        if ( v28 > right )
        {
          v115[4 * i + 3] = right;
          v28 = right;
        }
        v30 = v115[4 * i + 2];
        v31 = prclDest->top;
        if ( v30 < v31 )
        {
          v115[4 * i + 2] = v31;
          v30 = v31;
        }
        v32 = v115[4 * i + 4];
        bottom = prclDest->bottom;
        if ( v32 > bottom )
        {
          v115[4 * i + 4] = bottom;
          v32 = bottom;
        }
        if ( v30 < v32 && v26 < v28 )
        {
          v34 = v26 + pptlSrc->x - left;
          v35 = v30 + pptlSrc->y - v31;
          v36 = v28 - v26;
          v95 = v28 - v26;
          v96 = v32 - v30;
          if ( v75 <= 0 )
            v34 = v36 + v34 - 1;
          v100 = v34;
          v101 = v34 + v36 * v86;
          if ( v75 <= 0 )
            v102 = v28 - 1;
          else
            v102 = v26;
          v103 = v30;
          v37 = v8->lDelta;
          pvScan0 = (char *)v8->pvScan0;
          v39 = psoDest->lDelta;
          v40 = (char *)psoDest->pvScan0;
          if ( v76 <= 0 )
          {
            v92 = &pvScan0[v37 * (v35 + v32 - v30 - 1)];
            v93 = &v40[v39 * (v32 - 1)];
          }
          else
          {
            v92 = &pvScan0[v35 * v37];
            v93 = &v40[v30 * v39];
          }
          ((void (__fastcall *)(XLATEOBJ **))v84)(&v91);
        }
      }
      v19 = pco;
      if ( !v13 )
        break;
LABEL_87:
      v13 = XCLIPOBJ::bEnum((XCLIPOBJ *)v19, 0x144u, (char *)v115, 0LL);
    }
    return 1;
  }
  RLESrcCopy = pfnGetRLESrcCopy(v22, iBitmapFormat);
  v84 = (void (* near *)(struct BLTINFO *))RLESrcCopy;
  if ( !RLESrcCopy )
    return 0;
  v44 = 1;
  v78 = 1;
  v45 = HIDWORD(*(unsigned __int64 *)pptlSrc);
  v106 = *pptlSrc;
  v105 = p_pvScan0;
  v46 = prclDest->top + (__int64)v8->sizlBitmap.cy;
  if ( (unsigned __int64)(v46 + 0x80000000LL) > 0xFFFFFFFF )
  {
    v47 = -2147024362;
    LODWORD(v46) = -1;
  }
  else
  {
    v47 = 0;
  }
  if ( v47 < 0 )
    return 0;
  v48 = (int)v46 - (__int64)(int)v45;
  if ( (unsigned __int64)(v48 + 0x80000000LL) > 0xFFFFFFFF )
    return 0;
  v49 = (int)v48 - 1LL;
  if ( (unsigned __int64)(v49 + 0x80000000LL) > 0xFFFFFFFF )
    return 0;
  v88 = v48 - 1;
  v103 = v48 - 1;
  v102 = prclDest->left - pptlSrc->x;
  v112 = v102;
  v92 = (char *)v8->pvScan0;
  v50 = (int)v49 * (__int64)psoDest->lDelta;
  if ( (unsigned __int64)(v50 + 0x80000000LL) > 0xFFFFFFFF )
    return 0;
  LODWORD(v81) = v49 * psoDest->lDelta;
  v51 = (char *)psoDest->pvScan0;
  if ( (int)v50 < 0 )
  {
    v70 = (unsigned int)-(int)v50;
    if ( (unsigned __int64)v51 >= v70 )
    {
      v52 = &v51[-v70];
      goto LABEL_63;
    }
    return 0;
  }
  v52 = &v51[(int)v50];
  if ( v52 < v51 )
    return 0;
LABEL_63:
  v90[1] = v52;
  v93 = v52;
  v110 = 0;
  DWORD1(v107) = 0;
  if ( v13 )
    goto LABEL_114;
  while ( 2 )
  {
    for ( j = 0; j < v115[0]; ++j )
    {
      v54 = v115[4 * j + 1];
      v55 = prclDest->left;
      if ( v54 < prclDest->left )
      {
        v115[4 * j + 1] = v55;
        v54 = v55;
      }
      v56 = v115[4 * j + 3];
      v57 = prclDest->right;
      if ( v56 > v57 )
      {
        v115[4 * j + 3] = v57;
        v56 = v57;
      }
      v58 = v115[4 * j + 2];
      v59 = prclDest->top;
      if ( v58 < v59 )
      {
        v115[4 * j + 2] = v59;
        v58 = v59;
      }
      v60 = v115[4 * j + 4];
      v61 = prclDest->bottom;
      if ( v60 > v61 )
      {
        v115[4 * j + 4] = v61;
        v60 = v61;
      }
      if ( v58 < v60 && v54 < v56 )
      {
        if ( v60 > SDWORD1(v107) )
          goto LABEL_77;
        if ( v58 <= v113 )
        {
          if ( !v44 )
            return 1;
          v92 = v108;
          v93 = v109;
          v103 = v113;
          v112 = v114;
          v110 = v111;
LABEL_77:
          v107 = *(_OWORD *)&v115[4 * j + 1];
          v44 = ((__int64 (__fastcall *)(XLATEOBJ **))RLESrcCopy)(&v91);
          v78 = v44;
          v42 = pco;
          continue;
        }
      }
      v42 = pco;
    }
    if ( v13 )
    {
LABEL_114:
      v13 = XCLIPOBJ::bEnum((XCLIPOBJ *)v42, 0x144u, (char *)v115, 0LL);
      v44 = v78;
      v42 = pco;
      continue;
    }
    return 1;
  }
}
