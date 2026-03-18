/*
 * XREFs of _EngPlgBlt@44 @ 0x1ECC18
 * Callers:
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     _NtGdiTransparentBlt@44 @ 0xC151A (_NtGdiTransparentBlt@44.c)
 *     ?SpPlgBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_POINTFIX@@PAU_RECTL@@4K@Z @ 0x1DBA99 (-SpPlgBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_P.c)
 *     ?bRotate@BLTRECORD@@QAEHAAVDCOBJ@@AAVSURFMEM@@1KK@Z @ 0x1EC6D3 (-bRotate@BLTRECORD@@QAEHAAVDCOBJ@@AAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QAEHAAVSURFMEM@@K@Z @ 0x1EC88D (-bRotate@BLTRECORD@@QAEHAAVSURFMEM@@K@Z.c)
 *     _EngPlgBlt@44 @ 0x1ECC18 (_EngPlgBlt@44.c)
 *     ?RedirPlgBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_POINTFIX@@PAU_RECTL@@4K@Z @ 0x1FB996 (-RedirPlgBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PA.c)
 *     _NtGdiEngPlgBlt@44 @ 0x218A7F (_NtGdiEngPlgBlt@44.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?vOrder@ERECTL@@QAEXXZ @ 0x4E19C (-vOrder@ERECTL@@QAEXXZ.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ??XERECTL@@QAEAAV0@ABU_RECTL@@@Z @ 0x4F46A (--XERECTL@@QAEAAV0@ABU_RECTL@@@Z.c)
 *     ?bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x53E36 (-bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     ?pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ @ 0x55814 (-pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ.c)
 *     _EngEraseSurface@12 @ 0x93A4A (_EngEraseSurface@12.c)
 *     ?bUMPDSecurityGateEx@@YGHXZ @ 0x9591E (-bUMPDSecurityGateEx@@YGHXZ.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     ??0ECLIPOBJ@@QAE@XZ @ 0xF5B49 (--0ECLIPOBJ@@QAE@XZ.c)
 *     ??0RGNMEMOBJTMP@@QAE@XZ @ 0xF5B61 (--0RGNMEMOBJTMP@@QAE@XZ.c)
 *     ??1RGNMEMOBJTMP@@QAE@XZ @ 0xF5B78 (--1RGNMEMOBJTMP@@QAE@XZ.c)
 *     ??0ECLIPOBJ@@QAE@PAVREGION@@AAVERECTL@@H@Z @ 0xF6A1A (--0ECLIPOBJ@@QAE@PAVREGION@@AAVERECTL@@H@Z.c)
 *     ??0RGNMEMOBJTMP@@QAE@AAVEPATHOBJ@@KPAU_RECTL@@@Z @ 0xF6E93 (--0RGNMEMOBJTMP@@QAE@AAVEPATHOBJ@@KPAU_RECTL@@@Z.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _EngPlgBlt@44 @ 0x1ECC18 (_EngPlgBlt@44.c)
 *     ?bInitPlgDDA@@YGHPAU_PLGDDA@@PAU_RECTL@@1PAU_POINTFIX@@@Z @ 0x2414A8 (-bInitPlgDDA@@YGHPAU_PLGDDA@@PAU_RECTL@@1PAU_POINTFIX@@@Z.c)
 *     ?lSizeDDA@@YGJPAU_PLGDDA@@@Z @ 0x244759 (-lSizeDDA@@YGJPAU_PLGDDA@@@Z.c)
 *     ?vAdvYDDA@@YGXPAU_PLGDDA@@@Z @ 0x245372 (-vAdvYDDA@@YGXPAU_PLGDDA@@@Z.c)
 */

BOOL __stdcall EngPlgBlt(
        SURFOBJ *psoTrg,
        SURFOBJ *psoSrc,
        SURFOBJ *psoMsk,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlBrushOrg,
        POINTFIX *pptfx,
        RECTL *prcl,
        POINTL *pptl,
        ULONG iMode)
{
  struct REGION *v11; // edi
  BOOL v12; // ebx
  ULONG v13; // eax
  int v14; // eax
  int v15; // edx
  LONG v16; // ecx
  LONG cx; // eax
  int v18; // ecx
  int v19; // ecx
  LONG v20; // eax
  ERECTL *v21; // ecx
  LONG left; // eax
  LONG top; // ecx
  struct _SURFOBJ *v24; // eax
  SURFOBJ *v25; // eax
  XLATEOBJ *v26; // eax
  ERECTL *v27; // ecx
  SURFACE *v28; // edi
  int v29; // eax
  RECTL *v30; // eax
  char *v31; // edi
  struct _SURFOBJ *v32; // eax
  void (__stdcall *v33)(struct _SURFOBJ *, char *, _DWORD, XLATEOBJ *, int *, RECTL *); // edx
  PATHOBJ *v34; // edi
  size_t v35; // ecx
  void (__stdcall *const *v36)(struct _PLGRUN *, struct _PLGRUN *, struct SURFACE *, struct _CLIPOBJ *); // eax
  CLIPOBJ *v37; // edx
  LONG v38; // ecx
  LONG v39; // eax
  POINTFIX *v40; // esi
  int v41; // eax
  struct REGION *v42; // edi
  SURFOBJ *v43; // eax
  SURFOBJ *v44; // eax
  SURFOBJ *v45; // eax
  SURFOBJ *v46; // edx
  FIX v47; // edx
  FIX v48; // eax
  struct _RECTL *v49; // ecx
  int v50; // edi
  int v51; // esi
  int v52; // ecx
  struct REGION *v53; // eax
  ROP4 v54; // edi
  SURFOBJ *v55; // esi
  int v56; // edx
  SURFOBJ *v57; // ecx
  BOOL (__stdcall *v58)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // edi
  int v59; // esi
  struct _SURFOBJ *v60; // eax
  int v61; // edx
  SURFOBJ *v62; // edx
  XLATEOBJ *v64; // [esp-Ch] [ebp-370h]
  struct _RECTL *v65; // [esp+0h] [ebp-364h]
  struct _PLGDDA *v66; // [esp+0h] [ebp-364h]
  ULONG *v67; // [esp+0h] [ebp-364h]
  struct _PLGDDA *v68; // [esp+0h] [ebp-364h]
  struct _POINTFIX *v69; // [esp+4h] [ebp-360h]
  _BYTE v70[8]; // [esp+10h] [ebp-354h] BYREF
  int v71; // [esp+18h] [ebp-34Ch]
  _DWORD v72[6]; // [esp+54h] [ebp-310h] BYREF
  POINTL *v73; // [esp+6Ch] [ebp-2F8h]
  SURFACE *v74; // [esp+70h] [ebp-2F4h] BYREF
  char v75; // [esp+74h] [ebp-2F0h]
  int v76; // [esp+78h] [ebp-2ECh]
  int v77; // [esp+7Ch] [ebp-2E8h] BYREF
  LONG right; // [esp+80h] [ebp-2E4h]
  LONG bottom; // [esp+84h] [ebp-2E0h]
  int v80; // [esp+88h] [ebp-2DCh]
  int v81; // [esp+8Ch] [ebp-2D8h]
  int v82; // [esp+90h] [ebp-2D4h]
  int v83; // [esp+94h] [ebp-2D0h] BYREF
  struct REGION *v84; // [esp+98h] [ebp-2CCh]
  struct REGION *v85[2]; // [esp+9Ch] [ebp-2C8h] BYREF
  int v86; // [esp+A4h] [ebp-2C0h] BYREF
  struct REGION *v87; // [esp+A8h] [ebp-2BCh]
  SURFACE *v88; // [esp+ACh] [ebp-2B8h] BYREF
  char v89; // [esp+B0h] [ebp-2B4h]
  int v90; // [esp+B4h] [ebp-2B0h]
  struct REGION *v91[2]; // [esp+B8h] [ebp-2ACh] BYREF
  struct _SURFOBJ *v92; // [esp+C0h] [ebp-2A4h]
  struct REGION *v93[2]; // [esp+C4h] [ebp-2A0h] BYREF
  int v94; // [esp+CCh] [ebp-298h] BYREF
  XLATEOBJ *v95; // [esp+D0h] [ebp-294h]
  SURFACE *v96; // [esp+D4h] [ebp-290h] BYREF
  int v97; // [esp+D8h] [ebp-28Ch]
  FIX v98; // [esp+DCh] [ebp-288h]
  LONG v99; // [esp+E0h] [ebp-284h] BYREF
  LONG v100; // [esp+E4h] [ebp-280h]
  int v101; // [esp+E8h] [ebp-27Ch] BYREF
  struct _SURFOBJ *v102; // [esp+ECh] [ebp-278h] BYREF
  int v103; // [esp+F0h] [ebp-274h]
  CLIPOBJ *v104; // [esp+F4h] [ebp-270h]
  RECTL *v105; // [esp+F8h] [ebp-26Ch]
  RECTL *v106; // [esp+FCh] [ebp-268h]
  POINTFIX *v107; // [esp+100h] [ebp-264h]
  int y; // [esp+104h] [ebp-260h]
  POINTFIX *x; // [esp+108h] [ebp-25Ch]
  CLIPOBJ *v110; // [esp+10Ch] [ebp-258h]
  POINTFIX *v111; // [esp+110h] [ebp-254h]
  size_t Size; // [esp+114h] [ebp-250h]
  XLATEOBJ *v113; // [esp+118h] [ebp-24Ch]
  SURFACE *v114; // [esp+11Ch] [ebp-248h]
  ULONG v115; // [esp+120h] [ebp-244h]
  SURFACE *v116; // [esp+124h] [ebp-240h]
  int v117; // [esp+128h] [ebp-23Ch]
  unsigned int v118; // [esp+12Ch] [ebp-238h]
  char v119; // [esp+132h] [ebp-232h]
  char v120; // [esp+133h] [ebp-231h]
  RECTL v121; // [esp+134h] [ebp-230h] BYREF
  RECTL v122; // [esp+144h] [ebp-220h] BYREF
  CLIPOBJ v123; // [esp+154h] [ebp-210h] BYREF
  char v124; // [esp+1D0h] [ebp-194h] BYREF
  char v125[120]; // [esp+1D4h] [ebp-190h] BYREF
  _BYTE v126[124]; // [esp+24Ch] [ebp-118h] BYREF
  struct _RECTL v127; // [esp+2C8h] [ebp-9Ch] BYREF
  _DWORD v128[4]; // [esp+2D8h] [ebp-8Ch] BYREF
  struct _RECTL v129; // [esp+2E8h] [ebp-7Ch] BYREF
  int v130; // [esp+2F8h] [ebp-6Ch] BYREF
  int v131; // [esp+2FCh] [ebp-68h]
  int v132; // [esp+300h] [ebp-64h]
  int v133; // [esp+304h] [ebp-60h]
  POINTFIX v134; // [esp+308h] [ebp-5Ch] BYREF
  POINTFIX v135; // [esp+310h] [ebp-54h] BYREF
  int v136; // [esp+318h] [ebp-4Ch]
  int v137; // [esp+31Ch] [ebp-48h]
  FIX v138; // [esp+320h] [ebp-44h]
  FIX v139; // [esp+324h] [ebp-40h]
  PATHOBJ *v140; // [esp+328h] [ebp-3Ch] BYREF
  int v141; // [esp+32Ch] [ebp-38h]
  POINTFIX *v142; // [esp+330h] [ebp-34h]
  RECTL *v143; // [esp+334h] [ebp-30h]
  CLIPOBJ *v144; // [esp+338h] [ebp-2Ch]
  FIX v145; // [esp+33Ch] [ebp-28h]
  int v146; // [esp+340h] [ebp-24h]
  int v147; // [esp+344h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+34Ch] [ebp-18h]

  v102 = psoTrg;
  Size = (size_t)psoSrc;
  v104 = pco;
  v113 = pxlo;
  v111 = pptfx;
  v105 = prcl;
  v73 = pptl;
  v115 = iMode;
  v11 = psoTrg != 0 ? (struct REGION *)&psoTrg[-1].lDelta : 0;
  v87 = v11;
  v93[1] = v11;
  v84 = v11;
  v114 = psoSrc != 0 ? (SURFACE *)&psoSrc[-1].lDelta : 0;
  v116 = psoMsk != 0 ? (SURFACE *)&psoMsk[-1].lDelta : 0;
  v92 = (struct _SURFOBJ *)v116;
  v12 = 0;
  v103 = 0;
  v13 = iMode;
  if ( iMode != 4 || (psoMsk != 0 ? (unsigned int)&psoMsk[-1].lDelta : 0) != 0 )
  {
    v120 = 0;
    v117 = 1;
  }
  else
  {
    v117 = 1;
    v120 = 1;
    v13 = v115;
  }
  if ( !v13 )
    return 0;
  if ( v13 > 4 )
    return 0;
  v14 = *(psoTrg != 0 ? &psoTrg->iBitmapFormat : (ULONG *)60);
  switch ( v14 )
  {
    case 7:
      return 0;
    case 8:
      return 0;
    case 9:
      return 0;
  }
  v15 = *(psoSrc != 0 ? &psoSrc->iBitmapFormat : (ULONG *)60);
  if ( v15 == 9 || v14 == 10 || v15 == 10 )
    return 0;
  ERECTL::vOrder((ERECTL *)prcl);
  if ( v115 < 3
    && !v116
    && (*(psoSrc != 0 ? &psoSrc->iBitmapFormat : (ULONG *)60) == 1
     || *(psoTrg != 0 ? &psoTrg->iBitmapFormat : (ULONG *)60) == 1) )
  {
    v119 = 1;
  }
  else
  {
    v119 = 0;
    if ( v115 < 3 )
      v115 = 3;
  }
  v94 = (int)*(psoTrg != 0 ? &psoTrg->hdev : (HDEV *)28);
  v86 = (int)*(psoSrc != 0 ? &psoSrc->hdev : (HDEV *)28);
  v88 = 0;
  v89 = 0;
  v90 = 0;
  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v126);
  v95 = 0;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v91);
  v16 = *(psoSrc != 0 ? &psoSrc->sizlBitmap.cy : (LONG *)36);
  cx = (psoSrc != 0 ? &psoSrc->sizlBitmap : (SIZEL *)32)->cx;
  v121.left = 0;
  v121.top = 0;
  v121.right = cx;
  v121.bottom = v16;
  if ( v86
    && (psoSrc != 0 ? (unsigned int)&psoSrc[-1].lDelta : 0) == *(_DWORD *)(v86 + 1820)
    && ((unsigned int)&loc_20000 & *(_DWORD *)(v86 + 24)) != 0 )
  {
    ERECTL::bOffsetAdd((ERECTL *)&v121, (const struct _POINTL *)(v86 + 1836), 0);
  }
  if ( !v119
    && !*(psoTrg != 0 ? &psoTrg->iType : (USHORT *)64)
    && *(psoTrg != 0 ? &psoTrg->hsurf : (HSURF *)20) != *(psoSrc != 0 ? &psoSrc->hsurf : (HSURF *)20)
    && !v120 )
  {
    goto LABEL_44;
  }
  x = (POINTFIX *)v111->x;
  v140 = (PATHOBJ *)x;
  y = v111->y;
  v141 = y;
  v107 = (POINTFIX *)v111[1].x;
  v142 = v107;
  v106 = (RECTL *)v111[1].y;
  v143 = v106;
  v110 = (CLIPOBJ *)v111[2].x;
  v144 = v110;
  v98 = v111[2].y;
  v145 = v98;
  v146 = v111[2].x + v111[1].x - v111->x;
  v147 = v111[1].y + v98 - v111->y;
  v118 = (int)v107 > (int)x;
  v118 ^= (int)v107 <= v146;
  v18 = ((int)v106 <= v147) ^ ((int)v106 > y);
  if ( (int)(&v140)[2 * v118] > (int)(&v140)[2 * (v118 ^ 3)] )
    v118 ^= 3u;
  if ( *(&v141 + 2 * v18) > *(&v141 + 2 * (v18 ^ 3)) )
    v18 ^= 3u;
  v122.left = ((int)(&v140)[2 * v118] >> 4) - 1;
  v122.top = (*(&v141 + 2 * v18) >> 4) - 1;
  v122.right = (((int)&(&v140)[2 * (v118 ^ 3)][1].cCurves + 3) >> 4) + 1;
  v122.bottom = ((*(&v141 + 2 * (v18 ^ 3)) + 15) >> 4) + 1;
  v19 = *(psoTrg != 0 ? &psoTrg->sizlBitmap.cy : (LONG *)36);
  v20 = (psoTrg != 0 ? &psoTrg->sizlBitmap : (SIZEL *)32)->cx;
  v130 = 0;
  v131 = 0;
  v132 = v20;
  v133 = v19;
  if ( v94 && v11 == *(struct REGION **)(v94 + 1820) && ((unsigned int)&loc_20000 & *(_DWORD *)(v94 + 24)) != 0 )
    ERECTL::bOffsetAdd((ERECTL *)&v130, (const struct _POINTL *)(v94 + 1836), 0);
  ERECTL::operator*=(&v122.left, &v130);
  if ( !ERECTL::bEmpty(v21) )
  {
    if ( !v119
      && !*(psoTrg != 0 ? &psoTrg->iType : (USHORT *)64)
      && !v120
      && (v122.left > v105->right || v122.right < v105->left || v122.top > v105->bottom || v122.bottom < v105->top) )
    {
LABEL_44:
      v118 = psoTrg != 0 ? (unsigned int)&psoTrg[-1].lDelta : 0;
      v107 = v111;
      v110 = v104;
      goto LABEL_64;
    }
    v140 = (PATHOBJ *)&x[-2 * v122.left];
    v141 = y - 16 * v122.top;
    v142 = &v107[-2 * v122.left];
    v143 = &v106[-v122.top];
    v144 = (CLIPOBJ *)((char *)v110 - 16 * v122.left);
    v145 = v98 - 16 * v122.top;
    v72[3] = 0;
    v72[1] = v122.right - v122.left + 1;
    v72[2] = v122.bottom - v122.top + 1;
    v72[4] = 0;
    v72[0] = *(psoTrg != 0 ? &psoTrg->iBitmapFormat : (ULONG *)60);
    v72[5] = (int)*(psoTrg != 0 ? &psoTrg[1].hsurf : (HSURF *)72) & 0x40000;
    if ( v119 )
    {
      v72[0] = 1;
    }
    else if ( v120 )
    {
      v72[0] = *((_DWORD *)v114 + 15);
    }
    SURFMEM::bCreateDIB((SURFMEM *)&v88, (struct _DEVBITMAPINFO *)v72, 0, 0, 0, 0, 0, 0, 1, 0, 0);
    if ( v88 )
    {
      left = v122.left;
      v99 = v122.left;
      top = v122.top;
      v100 = v122.top;
      if ( v91[0] )
      {
        v122.left = 0;
        v122.top = 0;
        v122.right -= left;
        v122.bottom -= top;
        RGNOBJ::vSet((RGNOBJ *)v91, &v122);
        XCLIPOBJ::vSetup((XCLIPOBJ *)v126, v91[0], (struct ERECTL *)&v122, 1);
        PDEVOBJ::vSync((PDEVOBJ *)&v94, v102, 0, 0);
        if ( v116 )
        {
          if ( ((int)*(psoTrg != 0 ? &psoTrg[1].hsurf : (HSURF *)72) & 0x400) != 0 )
            v117 = *(_DWORD *)(v94 + 1976);
          else
            v117 = (int)EngCopyBits;
          v24 = SURFACE::pSurfobj(v88);
          ((void (__stdcall *)(struct _SURFOBJ *, char *, _DWORD, XLATEOBJ *const, RECTL *, LONG *))v117)(
            v24,
            v11 != 0 ? (char *)v11 + 16 : 0,
            0,
            xloIdent,
            &v122,
            &v99);
        }
        if ( !v119 || (v25 = SURFACE::pSurfobj(v88), EngEraseSurface(v25, &v122, (v115 != 1) - 1)) )
        {
          v118 = (unsigned int)v88;
          v107 = (POINTFIX *)&v140;
          v110 = (CLIPOBJ *)v126;
          if ( v119 && *((_DWORD *)v114 + 15) == 1 || v120 )
          {
            v26 = v113;
            v113 = 0;
          }
          else
          {
            v26 = xloIdent;
          }
          v95 = v26;
LABEL_64:
          PDEVOBJ::vSync((PDEVOBJ *)&v86, (struct _SURFOBJ *)Size, 0, 0);
          ERECTL::operator*=(&v121.left, &v105->left);
          if ( ERECTL::bEmpty(v27) )
          {
            v12 = 1;
LABEL_149:
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v91);
            SURFMEM::~SURFMEM((SURFMEM *)&v88);
            return v12;
          }
          v74 = 0;
          v75 = 0;
          v76 = 0;
          v130 = 0;
          v131 = 0;
          v132 = 0;
          v133 = 0;
          v28 = v114;
          if ( *((_WORD *)v114 + 32) || (v29 = *((_DWORD *)v114 + 15), v29 == 7) || v29 == 8 )
          {
            v80 = 0;
            right = v121.right - v121.left + 1;
            bottom = v121.bottom - v121.top + 1;
            v81 = 0;
            v77 = *(_DWORD *)(v118 + 60);
            v82 = *((_DWORD *)v114 + 18) & 0x40000;
            SURFMEM::bCreateDIB((SURFMEM *)&v74, (struct _DEVBITMAPINFO *)&v77, 0, 0, 0, 0, 0, 0, 1, 0, 0);
            if ( !v74 )
              goto LABEL_71;
            v132 = v121.right - v121.left;
            v133 = v121.bottom - v121.top;
            if ( v28 )
              v31 = (char *)v28 + 16;
            else
              v31 = 0;
            v64 = v113;
            v32 = SURFACE::pSurfobj(v74);
            v33(v32, v31, 0, v64, &v130, &v121);
            v130 = v105->left - v121.left;
            v131 = v105->top - v121.top;
            v132 = v105->right - v121.left;
            v133 = v105->bottom - v121.top;
            v114 = v74;
            v113 = 0;
            v30 = (RECTL *)&v130;
            v121.right -= v121.left;
            v121.bottom -= v121.top;
            v121.left = 0;
            v121.top = 0;
          }
          else
          {
            v30 = v105;
          }
          v106 = v30;
          v102 = *(struct _SURFOBJ **)(v118 + 28);
          PDEVOBJ::vSync((PDEVOBJ *)&v102, (struct _SURFOBJ *)(v118 + 16), 0, 0);
          v34 = (PATHOBJ *)PALLOCMEM2(0x18Cu, 1650946119, 1);
          y = (int)v34;
          if ( !v34 )
          {
LABEL_148:
            SURFMEM::~SURFMEM((SURFMEM *)&v74);
            v12 = v103;
            goto LABEL_149;
          }
          if ( !bInitPlgDDA((struct _PLGDDA *)v106, (struct _RECTL *)v107, v65, v69) )
          {
            v103 = 1;
LABEL_147:
            Win32FreePool(v34);
            goto LABEL_148;
          }
          v102 = (struct _SURFOBJ *)(&apfnRead)[*((_DWORD *)v114 + 15)];
          Size = lSizeDDA(v66);
          if ( ULongLongToULong(Size * (unsigned __int64)(unsigned int)(v121.right - v121.left + 2), v67) < 0 )
            goto LABEL_147;
          v35 = Size;
          if ( !Size )
            goto LABEL_147;
          if ( v119 )
          {
            v34->fl = 1;
            v36 = (&apfnBogus)[v115];
          }
          else
          {
            v34->fl = 0;
            v36 = (&apfnWrite)[*(_DWORD *)(v118 + 60)];
          }
          Size = (size_t)v36;
          x = (POINTFIX *)PALLOCMEM2(v35, 1650946119, 1);
          if ( !x )
            goto LABEL_147;
          v117 = *((_DWORD *)v114 + 12) + v121.top * *((_DWORD *)v114 + 13);
          v97 = 0;
          v98 = 0;
          if ( !v116 )
          {
            v115 = 0;
            goto LABEL_93;
          }
          if ( !bUMPDSecurityGateEx() || v73 )
          {
            v97 = v121.left + v73->x - v106->left;
            v115 = *((_DWORD *)v116 + 12) + *((_DWORD *)v116 + 13) * (v121.top + v73->y - v106->top);
LABEL_93:
            if ( v113 )
              v113 = (v113->flXlate & 1) == 0 ? v113 : 0;
            v37 = v110;
            if ( !v110 || !v110->iDComplexity )
            {
              v38 = *(_DWORD *)(v118 + 36);
              v39 = *(_DWORD *)(v118 + 32);
              v129.left = 0;
              v129.top = 0;
              v129.right = v39;
              v129.bottom = v38;
              RGNOBJ::vSet((RGNOBJ *)v91, &v129);
              XCLIPOBJ::vSetup((XCLIPOBJ *)v126, v91[0], (struct ERECTL *)&v129, 1);
              v37 = (CLIPOBJ *)v126;
              v110 = (CLIPOBJ *)v126;
            }
            if ( v37->rclBounds.left >= v37->rclBounds.right || v37->rclBounds.top >= v37->rclBounds.bottom )
            {
              Win32FreePool((PATHOBJ *)x);
              goto LABEL_147;
            }
            v116 = (SURFACE *)v121.top;
            while ( (int)v116 < v121.bottom )
            {
              qmemcpy(&v34[8].cCurves, &v34->cCurves, 0x40u);
              ms_exc.registration.TryLevel = 0;
              v40 = x;
              v34 = (PATHOBJ *)y;
              v41 = ((int (__stdcall *)(int, POINTFIX *, int, ULONG, XLATEOBJ *, LONG, LONG, int, unsigned int, CLIPOBJ *))v102)(
                      y,
                      x,
                      v117,
                      v115,
                      v113,
                      v121.left,
                      v121.right,
                      v97,
                      v118,
                      v37);
              ((void (__stdcall *)(POINTFIX *, int))Size)(v40, v41);
              ms_exc.registration.TryLevel = -2;
              vAdvYDDA(v68);
              v117 += *((_DWORD *)v114 + 13);
              if ( v115 )
                v115 += (ULONG)v92[1].dhsurf;
              v116 = (SURFACE *)((char *)v116 + 1);
              v37 = v110;
            }
            Win32FreePool((PATHOBJ *)x);
            v42 = v87;
            if ( (struct REGION *)v118 == v87 )
            {
              v103 = 1;
LABEL_145:
              v34 = (PATHOBJ *)y;
              goto LABEL_147;
            }
            v117 = 0;
            v96 = 0;
            LOBYTE(v97) = 0;
            v98 = 0;
            v116 = 0;
            if ( v105->right - v105->left == v121.right && v105->bottom - v105->top == v121.bottom )
            {
              v116 = 0;
              v117 = 1;
            }
            else
            {
              v80 = 0;
              right = v122.right + 1;
              bottom = v122.bottom + 1;
              v81 = 0;
              v77 = 1;
              v82 = *((_DWORD *)v87 + 18) & 0x40000;
              SURFMEM::bCreateDIB((SURFMEM *)&v96, (struct _DEVBITMAPINFO *)&v77, 0, 0, 0, 0, 0, 0, 1, 0, 0);
              if ( v96 )
              {
                v129.top = 0;
                LOBYTE(v129.right) = 0;
                v129.bottom = 0;
                right = v121.right;
                bottom = v121.bottom;
                v81 = 0;
                v77 = 1;
                v82 = *((_DWORD *)v42 + 18) & 0x40000;
                SURFMEM::bCreateDIB((SURFMEM *)&v129.top, (struct _DEVBITMAPINFO *)&v77, 0, 0, 0, 0, 0, 0, 1, 0, 0);
                RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v85);
                if ( v129.top )
                {
                  if ( v85[0] )
                  {
                    RGNOBJ::vSet((RGNOBJ *)v85, &v122);
                    ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&v123, v85[0], (struct ERECTL *)&v122, 1);
                    v43 = SURFACE::pSurfobj(v96);
                    if ( EngEraseSurface(v43, &v122, 0) )
                    {
                      v44 = SURFACE::pSurfobj((SURFACE *)v129.top);
                      if ( EngEraseSurface(v44, &v121, 0xFFFFFFFF) )
                      {
                        SURFACE::pSurfobj((SURFACE *)v129.top);
                        v45 = SURFACE::pSurfobj(v96);
                        if ( EngPlgBlt(v45, v46, 0, &v123, 0, 0, 0, v107, v106, 0, 3u) )
                        {
                          v116 = v96;
                          v117 = 1;
                        }
                      }
                    }
                  }
                }
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v85);
                SURFMEM::~SURFMEM((SURFMEM *)&v129.top);
              }
            }
            PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v70);
            if ( !v117 )
              goto LABEL_144;
            if ( !v71 )
              goto LABEL_144;
            v134 = *v111;
            v135 = v111[1];
            v47 = v111[2].x;
            v136 = v47 + v135.x - v134.x;
            v48 = v111[2].y;
            v137 = v48 + v135.y - v134.y;
            v138 = v47;
            v139 = v48;
            if ( !EPATHOBJ::bMoveTo((EPATHOBJ *)v70, 0, (struct _POINTL *)&v134)
              || !EPATHOBJ::bPolyLineTo((EPATHOBJ *)v70, 0, (struct _POINTL *)&v135, 3u) )
            {
LABEL_144:
              PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v70);
              SURFMEM::~SURFMEM((SURFMEM *)&v96);
              goto LABEL_145;
            }
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v101, (struct EPATHOBJ *)v70, 1u, v49);
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v93);
            if ( v101 && v93[0] )
            {
              if ( !v104 )
              {
                if ( !RGNOBJ::bCopy((RGNOBJ *)v93, (struct RGNOBJ *)&v101) )
                  goto LABEL_143;
LABEL_128:
                v127 = (struct _RECTL)*((_OWORD *)v93[0] + 4);
                if ( !v104 || bIntersect(&v127, &v104->rclBounds, &v127) )
                {
                  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&v124, v93[0], (struct ERECTL *)&v127, 1);
                  if ( !ERECTL::bEmpty((ERECTL *)v125) )
                  {
                    v50 = v99 + v122.left;
                    v122.left += v99;
                    v122.top += v100;
                    v51 = v99 + v122.right;
                    v122.right += v99;
                    v52 = v122.bottom + v100;
                    v122.bottom += v100;
                    v99 = 0;
                    v100 = 0;
                    ++*((_DWORD *)v87 + 14);
                    v53 = (struct REGION *)*((_DWORD *)v84 + 18);
                    v84 = v53;
                    if ( v120 )
                    {
                      v128[0] = 0;
                      v128[1] = 0;
                      v128[2] = v51 - v50;
                      v128[3] = v52 - v122.top;
                      v83 = 0;
                      v84 = 0;
                      if ( ((unsigned __int8)v53 & 2) != 0 )
                        v58 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v94 + 1980);
                      else
                        v58 = EngStretchBlt;
                      v59 = v116 != 0 ? (unsigned int)v116 + 16 : 0;
                      v60 = SURFACE::pSurfobj(v88);
                      if ( v61 )
                        v62 = (SURFOBJ *)(v61 + 16);
                      else
                        v62 = 0;
                      v58(
                        v62,
                        v60,
                        (SURFOBJ *)v59,
                        (CLIPOBJ *)&v124,
                        v95,
                        0,
                        (POINTL *)&v83,
                        &v122,
                        (RECTL *)v128,
                        (POINTL *)&v99,
                        4);
                    }
                    else
                    {
                      v54 = v116 != 0 ? 43724 : 52428;
                      v55 = v116 != 0 ? (SURFOBJ *)((unsigned int)v116 + 16) : 0;
                      v92 = SURFACE::pSurfobj(v88);
                      v57 = v56 != 0 ? (SURFOBJ *)(v56 + 16) : 0;
                      if ( ((unsigned __int8)v84 & 1) != 0 )
                        (*(void (__stdcall **)(SURFOBJ *, struct _SURFOBJ *, SURFOBJ *, char *, XLATEOBJ *, RECTL *, LONG *, LONG *, _DWORD, _DWORD, ROP4))(*(_DWORD *)(v56 + 28) + 1972))(
                          v57,
                          v92,
                          v55,
                          &v124,
                          v95,
                          &v122,
                          &v99,
                          &v99,
                          0,
                          0,
                          v54);
                      else
                        EngBitBlt(
                          v57,
                          v92,
                          v55,
                          (CLIPOBJ *)&v124,
                          v95,
                          &v122,
                          (POINTL *)&v99,
                          (POINTL *)&v99,
                          0,
                          0,
                          v54);
                    }
                  }
                }
                v103 = 1;
                goto LABEL_143;
              }
              if ( RGNOBJ::bMerge((RGNOBJ *)v93, (struct RGNOBJ *)&v101, (struct RGNOBJ *)&v104[2], 8u) )
                goto LABEL_128;
            }
LABEL_143:
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v93);
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v101);
            goto LABEL_144;
          }
          if ( gfUMPDDebug )
            _DbgPrint(
              "clientcore\\windows\\core\\ntgdi\\gre\\windows\\plgblt.cxx:%d:EngPlgBlt:pptl/pptlMask == NULL\n",
              1732);
          Win32FreePool((PATHOBJ *)x);
          Win32FreePool(v34);
LABEL_71:
          SURFMEM::~SURFMEM((SURFMEM *)&v74);
          goto LABEL_149;
        }
      }
    }
    v117 = 0;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v91);
  SURFMEM::~SURFMEM((SURFMEM *)&v88);
  return v117;
}
