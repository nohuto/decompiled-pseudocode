/*
 * XREFs of EngPlgBlt @ 0x1C028CE10
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C007EE80 (NtGdiAlphaBlend.c)
 *     NtGdiTransparentBlt @ 0x1C0148ED0 (NtGdiTransparentBlt.c)
 *     ?SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C0280490 (-SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C028C7AC (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C028CA10 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     EngPlgBlt @ 0x1C028CE10 (EngPlgBlt.c)
 *     ?RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C029D200 (-RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINT.c)
 *     NtGdiEngPlgBlt @ 0x1C02B3A90 (NtGdiEngPlgBlt.c)
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C001BA8C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C001D0B8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C001D7A0 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C0071268 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0077C50 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     EngEraseSurface @ 0x1C00CB800 (EngEraseSurface.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00CC838 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     PALLOCMEM2 @ 0x1C00D8F8C (PALLOCMEM2.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C01494C8 (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C01598D4 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0159900 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C015A488 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C015A91C (--0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     EngPlgBlt @ 0x1C028CE10 (EngPlgBlt.c)
 *     ?bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1C02D5CBC (-bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z.c)
 *     ?lSizeDDA@@YAJPEAU_PLGDDA@@@Z @ 0x1C02D7D18 (-lSizeDDA@@YAJPEAU_PLGDDA@@@Z.c)
 *     ?vAdvYDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C02D8D60 (-vAdvYDDA@@YAXPEAU_PLGDDA@@@Z.c)
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
  ULONG v11; // r15d
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r13
  BOOL v15; // edi
  int v16; // ecx
  int v17; // eax
  ULONG v18; // r8d
  LONG v19; // ecx
  LONG v20; // eax
  int v21; // r10d
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // rax
  int v26; // ecx
  int v27; // eax
  unsigned __int64 v28; // r15
  CLIPOBJ *v29; // r13
  ULONG v30; // r8d
  BOOL (__stdcall *v31)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  unsigned __int64 v32; // rdx
  struct _PLGDDA *v33; // rax
  struct _PLGDDA *v34; // r15
  unsigned int v35; // eax
  unsigned __int64 v36; // r9
  void (*const near *v37)(struct _PLGRUN *, struct _PLGRUN *, struct SURFACE *, struct _CLIPOBJ *); // rax
  LONG top; // r9d
  XLATEOBJ *v39; // rcx
  LONG v40; // ecx
  LONG v41; // eax
  POINTL *v42; // r11
  __int64 v43; // rax
  int v44; // r13d
  __int64 v45; // r14
  FIX x; // edx
  FIX y; // eax
  struct _RECTL *v48; // r9
  CLIPOBJ *v49; // r13
  int v50; // r9d
  int v51; // r10d
  int v52; // r8d
  int v53; // edx
  int (*v54)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v55; // r8
  int v56; // r9d
  __int64 v57; // r10
  __int64 v58; // r11
  BOOL (__stdcall *v59)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r10
  unsigned __int64 v60; // rcx
  char v62; // [rsp+60h] [rbp-548h]
  char v63; // [rsp+61h] [rbp-547h]
  ULONG v64; // [rsp+64h] [rbp-544h]
  LONG v65; // [rsp+64h] [rbp-544h]
  int v66; // [rsp+68h] [rbp-540h]
  XLATEOBJ *v67; // [rsp+70h] [rbp-538h]
  __int64 v68; // [rsp+78h] [rbp-530h] BYREF
  POINTL *v69; // [rsp+80h] [rbp-528h]
  _DWORD *v70; // [rsp+88h] [rbp-520h]
  LONG v71; // [rsp+90h] [rbp-518h]
  POINTFIX *v72; // [rsp+98h] [rbp-510h]
  void *v73; // [rsp+A0h] [rbp-508h]
  _DWORD *v74; // [rsp+A8h] [rbp-500h] BYREF
  char v75; // [rsp+B0h] [rbp-4F8h]
  int v76; // [rsp+B4h] [rbp-4F4h]
  CLIPOBJ *v77; // [rsp+B8h] [rbp-4F0h]
  __int64 v78; // [rsp+C0h] [rbp-4E8h]
  unsigned __int64 v79; // [rsp+C8h] [rbp-4E0h]
  RECTL *v80; // [rsp+D0h] [rbp-4D8h]
  POINTFIX *v81; // [rsp+D8h] [rbp-4D0h]
  CLIPOBJ *v82; // [rsp+E0h] [rbp-4C8h]
  __int64 v83; // [rsp+E8h] [rbp-4C0h] BYREF
  XLATEOBJ *v84; // [rsp+F0h] [rbp-4B8h]
  struct _SURFOBJ *v85; // [rsp+F8h] [rbp-4B0h]
  struct _SURFOBJ *v86; // [rsp+100h] [rbp-4A8h] BYREF
  __int64 v87; // [rsp+108h] [rbp-4A0h] BYREF
  char v88; // [rsp+110h] [rbp-498h]
  int v89; // [rsp+114h] [rbp-494h]
  unsigned __int64 v90; // [rsp+118h] [rbp-490h] BYREF
  char v91; // [rsp+120h] [rbp-488h]
  int v92; // [rsp+124h] [rbp-484h]
  __int64 v93; // [rsp+130h] [rbp-478h] BYREF
  XLATEOBJ *v94; // [rsp+138h] [rbp-470h]
  void (*const near *v95)(struct _PLGRUN *, struct _PLGRUN *, struct SURFACE *, struct _CLIPOBJ *); // [rsp+140h] [rbp-468h]
  unsigned __int64 v96; // [rsp+148h] [rbp-460h] BYREF
  char v97; // [rsp+150h] [rbp-458h]
  int v98; // [rsp+154h] [rbp-454h]
  struct REGION *v99[2]; // [rsp+158h] [rbp-450h] BYREF
  struct REGION *v100[2]; // [rsp+168h] [rbp-440h] BYREF
  int v101; // [rsp+178h] [rbp-430h] BYREF
  LONG right; // [rsp+17Ch] [rbp-42Ch]
  LONG bottom; // [rsp+180h] [rbp-428h]
  int v104; // [rsp+184h] [rbp-424h]
  __int64 v105; // [rsp+188h] [rbp-420h]
  int v106; // [rsp+190h] [rbp-418h]
  int v107; // [rsp+194h] [rbp-414h]
  unsigned __int64 v108; // [rsp+198h] [rbp-410h]
  struct _PLGRUN *(*const near *v109)(struct _PLGDDA *, struct _PLGRUN *, unsigned __int8 *, unsigned __int8 *, struct _XLATEOBJ *, int, int, int); // [rsp+1A0h] [rbp-408h]
  __int64 v110; // [rsp+1A8h] [rbp-400h] BYREF
  int v111; // [rsp+1B0h] [rbp-3F8h]
  int v112; // [rsp+1B4h] [rbp-3F4h]
  __int64 v113; // [rsp+1B8h] [rbp-3F0h]
  struct REGION *v114[2]; // [rsp+1C0h] [rbp-3E8h] BYREF
  _QWORD v115[2]; // [rsp+1D0h] [rbp-3D8h] BYREF
  _DWORD v116[4]; // [rsp+1E0h] [rbp-3C8h] BYREF
  __int64 v117; // [rsp+1F0h] [rbp-3B8h]
  int v118; // [rsp+1F8h] [rbp-3B0h]
  int v119; // [rsp+1FCh] [rbp-3ACh]
  __int64 v120; // [rsp+200h] [rbp-3A8h] BYREF
  int v121; // [rsp+208h] [rbp-3A0h]
  struct _PLGDDA *v122; // [rsp+210h] [rbp-398h]
  struct _PLGRUN *(*const near *v123)(struct _PLGDDA *, struct _PLGRUN *, unsigned __int8 *, unsigned __int8 *, struct _XLATEOBJ *, int, int, int); // [rsp+218h] [rbp-390h]
  unsigned __int64 v124; // [rsp+220h] [rbp-388h]
  CLIPOBJ *v125; // [rsp+228h] [rbp-380h]
  RECTL *v126; // [rsp+230h] [rbp-378h]
  unsigned __int64 v127; // [rsp+238h] [rbp-370h]
  _DWORD v128[4]; // [rsp+240h] [rbp-368h] BYREF
  __int64 v129; // [rsp+250h] [rbp-358h]
  int v130; // [rsp+258h] [rbp-350h]
  int v131; // [rsp+25Ch] [rbp-34Ch]
  char v132[8]; // [rsp+260h] [rbp-348h] BYREF
  __int64 v133; // [rsp+268h] [rbp-340h]
  RECTL v134; // [rsp+2E0h] [rbp-2C8h] BYREF
  RECTL v135; // [rsp+2F0h] [rbp-2B8h] BYREF
  __int128 v136; // [rsp+300h] [rbp-2A8h] BYREF
  struct _RECTL v137; // [rsp+310h] [rbp-298h] BYREF
  __int64 v138; // [rsp+320h] [rbp-288h] BYREF
  int v139; // [rsp+328h] [rbp-280h]
  int v140; // [rsp+32Ch] [rbp-27Ch]
  struct _RECTL v141; // [rsp+330h] [rbp-278h] BYREF
  _BYTE v142[160]; // [rsp+340h] [rbp-268h] BYREF
  _BYTE v143[4]; // [rsp+3E0h] [rbp-1C8h] BYREF
  char v144[156]; // [rsp+3E4h] [rbp-1C4h] BYREF
  CLIPOBJ pcoa; // [rsp+480h] [rbp-128h] BYREF
  POINTFIX v146; // [rsp+520h] [rbp-88h] BYREF
  POINTFIX v147; // [rsp+528h] [rbp-80h]
  POINTFIX v148; // [rsp+530h] [rbp-78h]
  int v149; // [rsp+538h] [rbp-70h]
  int v150; // [rsp+53Ch] [rbp-6Ch]
  POINTFIX v151; // [rsp+540h] [rbp-68h] BYREF
  POINTFIX v152; // [rsp+548h] [rbp-60h] BYREF
  int v153; // [rsp+550h] [rbp-58h]
  int v154; // [rsp+554h] [rbp-54h]
  FIX v155; // [rsp+558h] [rbp-50h]
  FIX v156; // [rsp+55Ch] [rbp-4Ch]

  v82 = pco;
  v85 = psoSrc;
  v86 = psoTrg;
  v125 = pco;
  v67 = pxlo;
  v72 = pptfx;
  v126 = prcl;
  v69 = pptl;
  v11 = iMode;
  v64 = iMode;
  v12 = (unsigned __int64)&psoTrg[-1].pvScan0 & -(__int64)(psoTrg != 0LL);
  v127 = v12;
  v13 = (unsigned __int64)&psoSrc[-1].pvScan0 & -(__int64)(psoSrc != 0LL);
  v14 = (unsigned __int64)&psoMsk[-1].pvScan0 & -(__int64)(psoMsk != 0LL);
  v79 = v14;
  v124 = v14;
  v66 = 0;
  if ( iMode != 4 || v14 )
  {
    v62 = 0;
    v15 = 1;
  }
  else
  {
    v15 = 1;
    v62 = 1;
  }
  if ( iMode - 1 <= 3 )
  {
    v16 = *(_DWORD *)(((unsigned __int64)&psoTrg[-1].pvScan0 & -(__int64)(psoTrg != 0LL)) + 0x60);
    if ( (unsigned int)(v16 - 7) > 2 )
    {
      v17 = *(_DWORD *)(((unsigned __int64)&psoSrc[-1].pvScan0 & -(__int64)(psoSrc != 0LL)) + 0x60);
      if ( v17 != 9 && v16 != 10 && v17 != 10 )
      {
        ERECTL::vOrder((ERECTL *)prcl);
        if ( iMode < v18 && !v14 && (*(_DWORD *)(v13 + 96) == 1 || *(_DWORD *)(v12 + 96) == 1) )
        {
          v63 = 1;
        }
        else
        {
          v63 = 0;
          if ( iMode < v18 )
            v11 = v18;
          v64 = v11;
        }
        v83 = *(_QWORD *)(v12 + 48);
        v93 = *(_QWORD *)(v13 + 48);
        v74 = 0LL;
        v75 = 0;
        v76 = 0;
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v142);
        v84 = 0LL;
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v99);
        v19 = *(_DWORD *)(v13 + 60);
        v20 = *(_DWORD *)(v13 + 56);
        *(_QWORD *)&v135.left = 0LL;
        v135.right = v20;
        v135.bottom = v19;
        if ( v93 && v13 == *(_QWORD *)(v93 + 2552) && (*(_DWORD *)(v93 + 40) & 0x20000) != 0 )
          ERECTL::bOffsetAdd((ERECTL *)&v135, (const struct _POINTL *)(v93 + 2584), 0);
        if ( !v63 && !*(_WORD *)(v12 + 100) && *(_QWORD *)(v12 + 32) != *(_QWORD *)(v13 + 32) && !v62 )
          goto LABEL_42;
        v146 = *v72;
        v147 = v72[1];
        v148 = v72[2];
        v149 = v148.x + v147.x - v146.x;
        v150 = v72[1].y + v72[2].y - v72->y;
        v21 = (v147.x <= v149) ^ (v147.x > v146.x);
        v22 = (v147.y <= v150) ^ (unsigned int)(v147.y > v146.y);
        v23 = v21 ^ 3;
        if ( *(&v146.x + 2 * v21) <= *(&v146.x + 2 * (v21 ^ 3LL)) )
          v23 = (v147.x <= v149) ^ (v147.x > v146.x);
        v24 = v23;
        v134.left = (*(&v146.x + 2 * v23) >> 4) - 1;
        v25 = (unsigned int)v22 ^ 3;
        if ( *(&v146.y + 2 * v22) <= *(&v146.y + 2 * ((unsigned int)v22 ^ 3LL)) )
          v25 = (unsigned int)v22;
        v134.top = (*(&v146.y + 2 * v25) >> 4) - 1;
        v134.right = ((*(&v146.x + 2 * (v24 ^ 3)) + 15) >> 4) + 1;
        v134.bottom = ((*(&v146.y + 2 * ((unsigned int)v25 ^ 3LL)) + 15) >> 4) + 1;
        v26 = *(_DWORD *)(v12 + 60);
        v27 = *(_DWORD *)(v12 + 56);
        v110 = 0LL;
        v111 = v27;
        v112 = v26;
        if ( v83 && v12 == *(_QWORD *)(v83 + 2552) && (*(_DWORD *)(v83 + 40) & 0x20000) != 0 )
          ERECTL::bOffsetAdd((ERECTL *)&v110, (const struct _POINTL *)(v83 + 2584), 0);
        ERECTL::operator*=(&v134.left, (int *)&v110);
        if ( ERECTL::bEmpty((ERECTL *)&v134) )
          goto LABEL_145;
        if ( v63
          || *(_WORD *)(v12 + 100)
          || v62
          || v134.left <= prcl->right
          && v134.right >= prcl->left
          && v134.top <= prcl->bottom
          && v134.bottom >= prcl->top )
        {
          v146.x -= 16 * v134.left;
          v146.y -= 16 * v134.top;
          v147.x -= 16 * v134.left;
          v147.y -= 16 * v134.top;
          v148.x -= 16 * v134.left;
          v148.y -= 16 * v134.top;
          v116[3] = 0;
          v119 = 0;
          v116[1] = v134.right - v134.left + 1;
          v116[2] = v134.bottom - v134.top + 1;
          v117 = 0LL;
          v116[0] = *(_DWORD *)(v12 + 96);
          v118 = *(_DWORD *)(v12 + 112) & 0x40000;
          if ( v63 )
          {
            v116[0] = 1;
          }
          else if ( v62 )
          {
            v116[0] = *(_DWORD *)(v13 + 96);
          }
          SURFMEM::bCreateDIB((SURFMEM *)&v74, (struct _DEVBITMAPINFO *)v116, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
          if ( !v74 )
            goto LABEL_144;
          v68 = *(_QWORD *)&v134.left;
          if ( !v99[0] )
            goto LABEL_144;
          *(_QWORD *)&v134.left = 0LL;
          v134.right -= v68;
          v134.bottom -= HIDWORD(v68);
          RGNOBJ::vSet((RGNOBJ *)v99, &v134);
          XCLIPOBJ::vSetup((XCLIPOBJ *)v142, v99[0], (struct ERECTL *)&v134, 1);
          PDEVOBJ::vSync((PDEVOBJ *)&v83, v86, 0LL, 0);
          if ( v14 )
          {
            if ( (*(_DWORD *)(v12 + 112) & 0x400) != 0 )
              (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD, XLATEOBJ *const, RECTL *, __int64 *))(v83 + 2840))(
                (unsigned __int64)(v74 + 6) & -(__int64)(v74 != 0LL),
                (v12 + 24) & ((unsigned __int128)-(__int128)v12 >> 64),
                0LL,
                xloIdent,
                &v134,
                &v68);
            else
              ((void (__fastcall *)(unsigned __int64, _QWORD, _QWORD, XLATEOBJ *const, RECTL *, __int64 *))EngCopyBits)(
                (unsigned __int64)(v74 + 6) & -(__int64)(v74 != 0LL),
                (v12 + 24) & ((unsigned __int128)-(__int128)v12 >> 64),
                0LL,
                xloIdent,
                &v134,
                &v68);
          }
          if ( v63 )
          {
            v30 = -1;
            if ( v11 != 1 )
              v30 = 0;
            if ( !EngEraseSurface((SURFOBJ *)(-(__int64)(v74 != 0LL) & (unsigned __int64)(v74 + 6)), &v134, v30) )
            {
LABEL_144:
              v15 = 0;
              goto LABEL_145;
            }
          }
          v28 = (unsigned __int64)v74;
          v70 = v74;
          v81 = &v146;
          v29 = (CLIPOBJ *)v142;
          v77 = (CLIPOBJ *)v142;
          if ( v63 && *(_DWORD *)(v13 + 96) == 1 || v62 )
          {
            v84 = pxlo;
            v67 = 0LL;
          }
          else
          {
            v84 = xloIdent;
          }
        }
        else
        {
LABEL_42:
          v28 = v12;
          v70 = (_DWORD *)v12;
          v81 = v72;
          v29 = v82;
          v77 = v82;
        }
        PDEVOBJ::vSync((PDEVOBJ *)&v93, v85, 0LL, 0);
        ERECTL::operator*=(&v135.left, &prcl->left);
        if ( ERECTL::bEmpty((ERECTL *)&v135) )
        {
LABEL_145:
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v99);
          SURFMEM::~SURFMEM((SURFMEM *)&v74);
          return v15;
        }
        v90 = 0LL;
        v91 = 0;
        v92 = 0;
        v136 = 0LL;
        if ( *(_WORD *)(v13 + 100) || (unsigned int)(*(_DWORD *)(v13 + 96) - 7) <= 1 )
        {
          v128[3] = 0;
          v131 = 0;
          v128[1] = v135.right - v135.left + 1;
          v128[2] = v135.bottom - v135.top + 1;
          v129 = 0LL;
          v128[0] = *(_DWORD *)(v28 + 96);
          v130 = *(_DWORD *)(v13 + 112) & 0x40000;
          SURFMEM::bCreateDIB((SURFMEM *)&v90, (struct _DEVBITMAPINFO *)v128, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
          if ( !v90 )
          {
LABEL_67:
            v15 = 0;
            SURFMEM::~SURFMEM((SURFMEM *)&v90);
            goto LABEL_145;
          }
          DWORD2(v136) = v135.right - v135.left;
          HIDWORD(v136) = v135.bottom - v135.top;
          if ( (*(_DWORD *)(v13 + 112) & 0x400) != 0 )
            v31 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v93 + 2840);
          else
            v31 = EngCopyBits;
          v32 = v13 + 24;
          if ( !v13 )
            v32 = 0LL;
          ((void (__fastcall *)(unsigned __int64, unsigned __int64, _QWORD, XLATEOBJ *, __int128 *, RECTL *))v31)(
            v90 + 24,
            v32,
            0LL,
            v67,
            &v136,
            &v135);
          LODWORD(v136) = prcl->left - v135.left;
          DWORD1(v136) = prcl->top - v135.top;
          DWORD2(v136) = prcl->right - v135.left;
          HIDWORD(v136) = prcl->bottom - v135.top;
          v13 = v90;
          v67 = 0LL;
          v94 = 0LL;
          v80 = (RECTL *)&v136;
          v135.right -= v135.left;
          v135.bottom -= v135.top;
          *(_QWORD *)&v135.left = 0LL;
        }
        else
        {
          v94 = v67;
          v80 = prcl;
        }
        v108 = v13;
        v120 = *(_QWORD *)(v28 + 48);
        PDEVOBJ::vSync((PDEVOBJ *)&v120, (struct _SURFOBJ *)(v28 + 24), 0LL, 0);
        v33 = (struct _PLGDDA *)PALLOCMEM2(0x18CuLL, 1650946119LL, 1);
        v34 = v33;
        v122 = v33;
        if ( !v33 )
        {
LABEL_143:
          SURFMEM::~SURFMEM((SURFMEM *)&v90);
          v15 = v66;
          goto LABEL_145;
        }
        if ( !(unsigned int)bInitPlgDDA(v33, &v135, v80, v81) )
        {
LABEL_76:
          v66 = 1;
LABEL_142:
          Win32FreePool(v34);
          goto LABEL_143;
        }
        v109 = (&apfnRead)[*(unsigned int *)(v13 + 96)];
        v123 = v109;
        v35 = lSizeDDA(v34);
        v36 = v35 * (unsigned __int64)(unsigned int)(v135.right - v135.left + 2);
        if ( v36 > 0xFFFFFFFF )
          goto LABEL_142;
        v121 = v35 * (v135.right - v135.left + 2);
        if ( !(_DWORD)v36 )
          goto LABEL_142;
        if ( v63 )
        {
          *(_DWORD *)v34 = 1;
          v37 = (&apfnBogus)[v64];
        }
        else
        {
          *(_DWORD *)v34 = 0;
          v37 = (&apfnWrite)[v70[24]];
        }
        v85 = (struct _SURFOBJ *)v37;
        v95 = v37;
        v73 = PALLOCMEM2((unsigned int)v36, 1650946119LL, 1);
        if ( !v73 )
          goto LABEL_142;
        top = v135.top;
        v65 = v135.top;
        v78 = *(_QWORD *)(v13 + 80) + v135.top * *(_DWORD *)(v13 + 88);
        v113 = 0LL;
        if ( !v79 )
        {
          v69 = 0LL;
          goto LABEL_91;
        }
        if ( !bUMPDSecurityGateEx() || v69 )
        {
          LODWORD(v113) = v135.left + v69->x - v80->left;
          top = v135.top;
          v65 = v135.top;
          v69 = (POINTL *)(*(_QWORD *)(v79 + 80) + *(_DWORD *)(v79 + 88) * (v135.top + v69->y - v80->top));
LABEL_91:
          v39 = v67;
          if ( v67 )
          {
            if ( (v67->flXlate & 1) != 0 )
              v39 = 0LL;
            v67 = v39;
            v94 = v39;
          }
          if ( !v29 || !v29->iDComplexity )
          {
            v40 = v70[15];
            v41 = v70[14];
            *(_QWORD *)&v137.left = 0LL;
            v137.right = v41;
            v137.bottom = v40;
            RGNOBJ::vSet((RGNOBJ *)v99, &v137);
            XCLIPOBJ::vSetup((XCLIPOBJ *)v142, v99[0], (struct ERECTL *)&v137, 1);
            v29 = (CLIPOBJ *)v142;
            v77 = (CLIPOBJ *)v142;
            top = v135.top;
            v65 = v135.top;
            v39 = v67;
          }
          if ( v29->rclBounds.left >= v29->rclBounds.right || v29->rclBounds.top >= v29->rclBounds.bottom )
          {
            Win32FreePool(v73);
            goto LABEL_142;
          }
          v42 = v69;
          while ( 1 )
          {
            v71 = top;
            if ( top >= v135.bottom )
              break;
            *(_OWORD *)((char *)v34 + 68) = *(_OWORD *)((char *)v34 + 4);
            *(_OWORD *)((char *)v34 + 84) = *(_OWORD *)((char *)v34 + 20);
            *(_OWORD *)((char *)v34 + 100) = *(_OWORD *)((char *)v34 + 36);
            *(_OWORD *)((char *)v34 + 116) = *(_OWORD *)((char *)v34 + 52);
            v43 = ((__int64 (__fastcall *)(struct _PLGDDA *, void *, __int64, POINTL *, XLATEOBJ *, LONG, LONG, _DWORD))v109)(
                    v34,
                    v73,
                    v78,
                    v42,
                    v39,
                    v135.left,
                    v135.right,
                    v113);
            ((void (__fastcall *)(void *, __int64, _DWORD *, CLIPOBJ *))v95)(v73, v43, v70, v29);
            vAdvYDDA(v34);
            v78 += *(int *)(v13 + 88);
            if ( v42 )
            {
              v42 = (POINTL *)((char *)v42 + *(int *)(v79 + 88));
              v69 = v42;
            }
            top = ++v65;
            v39 = v67;
          }
          Win32FreePool(v73);
          if ( v70 == (_DWORD *)v12 )
            goto LABEL_76;
          v44 = 0;
          v87 = 0LL;
          v88 = 0;
          v89 = 0;
          v45 = 0LL;
          if ( prcl->right - prcl->left == v135.right && prcl->bottom - prcl->top == v135.bottom )
          {
            v44 = 1;
          }
          else
          {
            v104 = 0;
            v107 = 0;
            right = v134.right + 1;
            bottom = v134.bottom + 1;
            v105 = 0LL;
            v101 = 1;
            v106 = *(_DWORD *)(v12 + 112) & 0x40000;
            SURFMEM::bCreateDIB((SURFMEM *)&v87, (struct _DEVBITMAPINFO *)&v101, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
            if ( v87 )
            {
              v96 = 0LL;
              v97 = 0;
              v98 = 0;
              right = v135.right;
              bottom = v135.bottom;
              v105 = 0LL;
              v101 = 1;
              v106 = *(_DWORD *)(v12 + 112) & 0x40000;
              SURFMEM::bCreateDIB((SURFMEM *)&v96, (struct _DEVBITMAPINFO *)&v101, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
              RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v114);
              if ( v96 )
              {
                if ( v114[0] )
                {
                  RGNOBJ::vSet((RGNOBJ *)v114, &v134);
                  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pcoa, v114[0], (struct ERECTL *)&v134, 1);
                  if ( EngEraseSurface((SURFOBJ *)(-(__int64)(v87 != 0) & (v87 + 24)), &v134, 0) )
                  {
                    if ( EngEraseSurface((SURFOBJ *)(-(__int64)(v96 != 0) & (v96 + 24)), &v135, 0xFFFFFFFF)
                      && EngPlgBlt(
                           (SURFOBJ *)(-(__int64)(v87 != 0) & (v87 + 24)),
                           (SURFOBJ *)((v96 + 24) & ((unsigned __int128)-(__int128)v96 >> 64)),
                           0LL,
                           &pcoa,
                           0LL,
                           0LL,
                           0LL,
                           v81,
                           v80,
                           0LL,
                           3u) )
                    {
                      v45 = v87;
                      v44 = 1;
                    }
                  }
                }
              }
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v114);
              SURFMEM::~SURFMEM((SURFMEM *)&v96);
            }
          }
          PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v132);
          if ( !v44 )
            goto LABEL_140;
          if ( !v133 )
            goto LABEL_140;
          v151 = *v72;
          v152 = v72[1];
          x = v72[2].x;
          v153 = x + v152.x - v151.x;
          y = v72[2].y;
          v154 = y + v152.y - v151.y;
          v155 = x;
          v156 = y;
          if ( !EPATHOBJ::bMoveTo((EPATHOBJ *)v132, 0LL, (struct _POINTL *)&v151)
            || !EPATHOBJ::bPolyLineTo((EPATHOBJ *)v132, 0LL, (struct _POINTL *)&v152, 3u) )
          {
LABEL_140:
            PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v132);
            SURFMEM::~SURFMEM((SURFMEM *)&v87);
            goto LABEL_142;
          }
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v115, (struct EPATHOBJ *)v132, 1u, v48);
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v100);
          if ( v115[0] && v100[0] )
          {
            v49 = v82;
            if ( !v82 )
            {
              if ( !RGNOBJ::bCopy((RGNOBJ *)v100, (struct RGNOBJ *)v115) )
                goto LABEL_139;
LABEL_127:
              v141 = (struct _RECTL)*((_OWORD *)v100[0] + 6);
              if ( !v49 || bIntersect(&v141, &v49->rclBounds, &v141) )
              {
                ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v143, v100[0], (struct ERECTL *)&v141, 1);
                if ( !ERECTL::bEmpty((ERECTL *)v144) )
                {
                  v50 = v68 + v134.left;
                  v134.left += v68;
                  v51 = HIDWORD(v68) + v134.top;
                  v134.top += HIDWORD(v68);
                  v52 = v68 + v134.right;
                  v134.right += v68;
                  v53 = HIDWORD(v68) + v134.bottom;
                  v134.bottom += HIDWORD(v68);
                  v68 = 0LL;
                  ++*(_DWORD *)(v12 + 92);
                  if ( v62 )
                  {
                    v138 = 0LL;
                    v139 = v52 - v50;
                    v140 = v53 - v51;
                    v86 = 0LL;
                    if ( (*(_DWORD *)(v12 + 112) & 2) != 0 )
                      v59 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v83 + 2848);
                    else
                      v59 = EngStretchBlt;
                    v60 = v12 + 24;
                    if ( !v12 )
                      v60 = 0LL;
                    ((void (__fastcall *)(unsigned __int64, _QWORD, __int64, _BYTE *, XLATEOBJ *, _QWORD, struct _SURFOBJ **, RECTL *, __int64 *, __int64 *, int))v59)(
                      v60,
                      (unsigned __int64)(v74 + 6) & ((unsigned __int128)-(__int128)(unsigned __int64)v74 >> 64),
                      (v45 + 24) & -(__int64)(v45 != 0),
                      v143,
                      v84,
                      0LL,
                      &v86,
                      &v134,
                      &v138,
                      &v68,
                      4);
                  }
                  else
                  {
                    v54 = SURFACE::pfnBitBlt((SURFACE *)v12);
                    ((void (__fastcall *)(__int64, __int64, __int64, _BYTE *, XLATEOBJ *, RECTL *, __int64 *, __int64 *, _QWORD, _QWORD, int))v54)(
                      v57,
                      v58,
                      v55,
                      v143,
                      v84,
                      &v134,
                      &v68,
                      &v68,
                      0LL,
                      0LL,
                      v56);
                  }
                }
              }
              v66 = 1;
              goto LABEL_139;
            }
            if ( RGNOBJ::bMerge((RGNOBJ *)v100, (struct RGNOBJ *)v115, (struct RGNOBJ *)&v82[2].rclBounds.top, 8u) )
              goto LABEL_127;
          }
LABEL_139:
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v100);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v115);
          goto LABEL_140;
        }
        if ( gfUMPDDebug )
          DbgPrint(
            "clientcore\\windows\\core\\ntgdi\\gre\\windows\\plgblt.cxx:%d:EngPlgBlt:pptl/pptlMask == NULL\n",
            1732);
        Win32FreePool(v73);
        Win32FreePool(v34);
        goto LABEL_67;
      }
    }
  }
  return 0;
}
