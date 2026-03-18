/*
 * XREFs of _NtGdiAlphaBlend@48 @ 0x5AABA
 * Callers:
 *     _BltIcon@36 @ 0x90D6C (_BltIcon@36.c)
 *     ?DrawMenuItemCheckMark@@YGHPAUHDC__@@PAUtagITEM@@H@Z @ 0x1A8C6A (-DrawMenuItemCheckMark@@YGHPAUHDC__@@PAUtagITEM@@H@Z.c)
 *     _xxxRealDrawMenuItem@24 @ 0x1AA53B (_xxxRealDrawMenuItem@24.c)
 * Callees:
 *     ?vSrcCopyS1D32@@YGXPAUBLTINFO@@@Z @ 0x4DFCC (-vSrcCopyS1D32@@YGXPAUBLTINFO@@@Z.c)
 *     ?vOrder@ERECTL@@QAEXXZ @ 0x4E19C (-vOrder@ERECTL@@QAEXXZ.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ??XERECTL@@QAEAAV0@ABU_RECTL@@@Z @ 0x4F46A (--XERECTL@@QAEAAV0@ABU_RECTL@@@Z.c)
 *     ?vSrcCopyS1D1LtoR@@YGXPAUBLTINFO@@@Z @ 0x4FE30 (-vSrcCopyS1D1LtoR@@YGXPAUBLTINFO@@@Z.c)
 *     _EngCopyBits@24 @ 0x519F0 (_EngCopyBits@24.c)
 *     ?vSrcCopyS32D32Identity@@YGXPAUBLTINFO@@@Z @ 0x52550 (-vSrcCopyS32D32Identity@@YGXPAUBLTINFO@@@Z.c)
 *     ?prgnVisSnap@DC@@QBEPAVREGION@@XZ @ 0x53684 (-prgnVisSnap@DC@@QBEPAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QBEPAVREGION@@XZ @ 0x538E8 (-prgnRao@DC@@QBEPAVREGION@@XZ.c)
 *     ?_SurfaceAccessCheck@@YGHPAVSURFACE@@@Z @ 0x53E0C (-_SurfaceAccessCheck@@YGHPAVSURFACE@@@Z.c)
 *     ?bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x53E36 (-bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z @ 0x56734 (-vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z.c)
 *     ?bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z @ 0x590DC (-bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@0H@Z @ 0x59880 (-bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@0H@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QAE@XZ @ 0x5DBF8 (--1DEVLOCKBLTOBJ@@QAE@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QAEHXZ @ 0x78918 (-bFullScreen@XDCOBJ@@QAEHXZ.c)
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 *     ?vAltUnlock@EXLATEOBJ@@QAEXXZ @ 0x794B6 (-vAltUnlock@EXLATEOBJ@@QAEXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z @ 0x7B8B6 (-vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z.c)
 *     ?bOffsetSubtract@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x8D950 (-bOffsetSubtract@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     ?vSrcCopyS24D32@@YGXPAUBLTINFO@@@Z @ 0x97606 (-vSrcCopyS24D32@@YGXPAUBLTINFO@@@Z.c)
 *     ?bRotationOrMirroring@EXFORMOBJ@@QBEHXZ @ 0x97C08 (-bRotationOrMirroring@EXFORMOBJ@@QBEHXZ.c)
 *     ?bIsSourceBGRA@@YGHPAVSURFACE@@@Z @ 0x99BF2 (-bIsSourceBGRA@@YGHPAVSURFACE@@@Z.c)
 *     ?vOrAlignedGrayGlyphEven@@YGXPAU_GLYPHBITS@@IPAEI@Z @ 0xA3BA8 (-vOrAlignedGrayGlyphEven@@YGXPAU_GLYPHBITS@@IPAEI@Z.c)
 *     ?vSrcCopyS32D24@@YGXPAUBLTINFO@@@Z @ 0xA7E1A (-vSrcCopyS32D24@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D24Identity@@YGXPAUBLTINFO@@@Z @ 0xAAD26 (-vSrcCopyS24D24Identity@@YGXPAUBLTINFO@@@Z.c)
 *     _GreAssertSystemCriticalProcess@4 @ 0xB5596 (_GreAssertSystemCriticalProcess@4.c)
 *     ?vSrcCopyS4D1@@YGXPAUBLTINFO@@@Z @ 0xB9616 (-vSrcCopyS4D1@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D32@@YGXPAUBLTINFO@@@Z @ 0xB9BDC (-vSrcCopyS8D32@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS4D4@@YGXPAUBLTINFO@@@Z @ 0xBA4D8 (-vSrcCopyS4D4@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D8@@YGXPAUBLTINFO@@@Z @ 0xBA604 (-vSrcCopyS8D8@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS1D4@@YGXPAUBLTINFO@@@Z @ 0xBB026 (-vSrcCopyS1D4@@YGXPAUBLTINFO@@@Z.c)
 *     ?vStrMirror01@@YGXPAVSURFACE@@@Z @ 0xBB4B2 (-vStrMirror01@@YGXPAVSURFACE@@@Z.c)
 *     ?vStrMirror32@@YGXPAVSURFACE@@@Z @ 0xBFB4E (-vStrMirror32@@YGXPAVSURFACE@@@Z.c)
 *     ?vSrcCopyS4D4Identity@@YGXPAUBLTINFO@@@Z @ 0xBFDC2 (-vSrcCopyS4D4Identity@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS1D8@@YGXPAUBLTINFO@@@Z @ 0xC2E4E (-vSrcCopyS1D8@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS4D32@@YGXPAUBLTINFO@@@Z @ 0xC594C (-vSrcCopyS4D32@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D1@@YGXPAUBLTINFO@@@Z @ 0xC5A46 (-vSrcCopyS32D1@@YGXPAUBLTINFO@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _bCvtPts1@12 @ 0xEE344 (_bCvtPts1@12.c)
 *     ?vSrcCopyS24D16@@YGXPAUBLTINFO@@@Z @ 0xFB94C (-vSrcCopyS24D16@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D16@@YGXPAUBLTINFO@@@Z @ 0xFBC32 (-vSrcCopyS32D16@@YGXPAUBLTINFO@@@Z.c)
 *     ?bRedirHooked@XDCOBJ@@QAEHXZ @ 0x1D48A1 (-bRedirHooked@XDCOBJ@@QAEHXZ.c)
 *     ?vOrNonAlignedGrayGlyphEven@@YGXPAU_GLYPHBITS@@IPAEI@Z @ 0x1D51C0 (-vOrNonAlignedGrayGlyphEven@@YGXPAU_GLYPHBITS@@IPAEI@Z.c)
 *     ?vOrNonAlignedGrayGlyphOdd@@YGXPAU_GLYPHBITS@@IPAEI@Z @ 0x1D5252 (-vOrNonAlignedGrayGlyphOdd@@YGXPAU_GLYPHBITS@@IPAEI@Z.c)
 *     _EngPlgBlt@44 @ 0x1ECC18 (_EngPlgBlt@44.c)
 *     ?vStrMirror04@@YGXPAVSURFACE@@@Z @ 0x22A61D (-vStrMirror04@@YGXPAVSURFACE@@@Z.c)
 *     ?vStrMirror08@@YGXPAVSURFACE@@@Z @ 0x22A7CB (-vStrMirror08@@YGXPAVSURFACE@@@Z.c)
 *     ?vStrMirror16@@YGXPAVSURFACE@@@Z @ 0x22A831 (-vStrMirror16@@YGXPAVSURFACE@@@Z.c)
 *     ?vStrMirror24@@YGXPAVSURFACE@@@Z @ 0x22A8A0 (-vStrMirror24@@YGXPAVSURFACE@@@Z.c)
 *     ?vSrcCopyS16D1@@YGXPAUBLTINFO@@@Z @ 0x22F795 (-vSrcCopyS16D1@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS1D1RtoL@@YGXPAUBLTINFO@@@Z @ 0x22F886 (-vSrcCopyS1D1RtoL@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D1@@YGXPAUBLTINFO@@@Z @ 0x22FBD9 (-vSrcCopyS24D1@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D1@@YGXPAUBLTINFO@@@Z @ 0x22FCCF (-vSrcCopyS8D1@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D4@@YGXPAUBLTINFO@@@Z @ 0x22FDAD (-vSrcCopyS16D4@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D4@@YGXPAUBLTINFO@@@Z @ 0x22FEBE (-vSrcCopyS24D4@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D4@@YGXPAUBLTINFO@@@Z @ 0x230060 (-vSrcCopyS32D4@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D4@@YGXPAUBLTINFO@@@Z @ 0x230198 (-vSrcCopyS8D4@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D8@@YGXPAUBLTINFO@@@Z @ 0x230289 (-vSrcCopyS16D8@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D8@@YGXPAUBLTINFO@@@Z @ 0x23043F (-vSrcCopyS24D8@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D8@@YGXPAUBLTINFO@@@Z @ 0x23064A (-vSrcCopyS32D8@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS4D8@@YGXPAUBLTINFO@@@Z @ 0x2307EB (-vSrcCopyS4D8@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D8IdentityLtoR@@YGXPAUBLTINFO@@@Z @ 0x2308A5 (-vSrcCopyS8D8IdentityLtoR@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D8IdentityRtoL@@YGXPAUBLTINFO@@@Z @ 0x2308FB (-vSrcCopyS8D8IdentityRtoL@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D16@@YGXPAUBLTINFO@@@Z @ 0x230957 (-vSrcCopyS16D16@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D16Identity@@YGXPAUBLTINFO@@@Z @ 0x230B4E (-vSrcCopyS16D16Identity@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS1D16@@YGXPAUBLTINFO@@@Z @ 0x230BCA (-vSrcCopyS1D16@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS4D16@@YGXPAUBLTINFO@@@Z @ 0x2310EA (-vSrcCopyS4D16@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D16@@YGXPAUBLTINFO@@@Z @ 0x2311A5 (-vSrcCopyS8D16@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D24@@YGXPAUBLTINFO@@@Z @ 0x231257 (-vSrcCopyS16D24@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS1D24@@YGXPAUBLTINFO@@@Z @ 0x2313BE (-vSrcCopyS1D24@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D24@@YGXPAUBLTINFO@@@Z @ 0x2319E5 (-vSrcCopyS24D24@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS4D24@@YGXPAUBLTINFO@@@Z @ 0x231BD8 (-vSrcCopyS4D24@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D24@@YGXPAUBLTINFO@@@Z @ 0x231DA2 (-vSrcCopyS8D24@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D32@@YGXPAUBLTINFO@@@Z @ 0x231ED5 (-vSrcCopyS16D32@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D32@@YGXPAUBLTINFO@@@Z @ 0x232050 (-vSrcCopyS32D32@@YGXPAUBLTINFO@@@Z.c)
 */

int __stdcall NtGdiAlphaBlend(
        HDC a1,
        LONG a2,
        struct XDCOBJ *a3,
        int a4,
        XLATEOBJ *a5,
        HDC a6,
        LONG a7,
        struct XDCOBJ *a8,
        int a9,
        int a10,
        unsigned int a11,
        int a12)
{
  int v12; // ebx
  int v13; // edi
  LONG v14; // eax
  char v15; // cl
  LONG v16; // edi
  LONG left; // ecx
  LONG right; // edx
  int v19; // eax
  int v20; // ecx
  FIX v21; // esi
  int v22; // edi
  BOOL v23; // eax
  bool v24; // zf
  bool v25; // of
  int v26; // edi
  int v27; // ecx
  int v28; // eax
  LONG y; // ecx
  int v30; // esi
  int v31; // edx
  LONG v32; // eax
  LONG x; // edx
  int v34; // esi
  int v35; // edi
  struct BLTINFO *v36; // ebx
  int v37; // edx
  DC *v38; // edi
  _DWORD *v39; // eax
  LONG v40; // edx
  LONG v41; // esi
  bool v42; // cc
  ERECTL *v43; // ecx
  BOOL v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // esi
  char v49; // bl
  LONG v50; // edx
  HDC v51; // ecx
  int v52; // edi
  int v53; // edi
  LONG v54; // esi
  _DWORD *v55; // eax
  int v56; // edx
  int v57; // ecx
  int v58; // eax
  LONG v59; // esi
  int v60; // edi
  DC *v61; // ecx
  struct REGION *v62; // eax
  int v63; // esi
  LONG v64; // edi
  int v65; // eax
  _DWORD *v66; // eax
  LONG v67; // ecx
  int v69; // edx
  SURFOBJ *v70; // ebx
  SURFOBJ *v71; // eax
  struct BLTINFO *v72; // ebx
  unsigned int v73; // edx
  HDC v74; // ecx
  LONG v75; // edi
  int v76; // ecx
  LONG v77; // eax
  _DWORD *v78; // ebx
  LONG v79; // ecx
  SURFOBJ *v80; // eax
  int v81; // eax
  struct ECLIPOBJ *v82; // ecx
  int v83; // edx
  int v84; // edx
  int v85; // eax
  int v86; // edi
  struct _POINTL *v87; // ecx
  struct _DC_ATTR *v88; // eax
  LONG v89; // esi
  DC *v90; // ecx
  struct _DC_ATTR *UserAttr; // eax
  int v92; // esi
  LONG v94; // [esp+7Ch] [ebp-2A0h]
  LONG v95; // [esp+80h] [ebp-29Ch]
  int v96; // [esp+84h] [ebp-298h]
  int v97; // [esp+94h] [ebp-288h]
  int v98; // [esp+94h] [ebp-288h]
  struct SURFACE *v99; // [esp+94h] [ebp-288h]
  int v100; // [esp+98h] [ebp-284h]
  int v101; // [esp+98h] [ebp-284h]
  int v102; // [esp+A0h] [ebp-27Ch]
  unsigned int inited; // [esp+A0h] [ebp-27Ch]
  int v104; // [esp+A0h] [ebp-27Ch]
  int v105; // [esp+A0h] [ebp-27Ch]
  int v106; // [esp+A0h] [ebp-27Ch]
  struct ECLIPOBJ *DIB; // [esp+A0h] [ebp-27Ch]
  HDC v108; // [esp+A4h] [ebp-278h] BYREF
  char v109; // [esp+ABh] [ebp-271h]
  XLATEOBJ *pxlo; // [esp+ACh] [ebp-270h] BYREF
  DC *v111; // [esp+B0h] [ebp-26Ch] BYREF
  int v112; // [esp+B4h] [ebp-268h]
  int v113; // [esp+B8h] [ebp-264h]
  XLATEOBJ *v114; // [esp+BCh] [ebp-260h]
  int v115; // [esp+C0h] [ebp-25Ch]
  LONG v116; // [esp+C4h] [ebp-258h]
  struct _POINTL *v117; // [esp+C8h] [ebp-254h] BYREF
  int v118; // [esp+CCh] [ebp-250h]
  int v119; // [esp+D0h] [ebp-24Ch]
  struct XDCOBJ *v120; // [esp+D4h] [ebp-248h] BYREF
  int v121; // [esp+D8h] [ebp-244h] BYREF
  int v122; // [esp+DCh] [ebp-240h] BYREF
  int v123; // [esp+E0h] [ebp-23Ch] BYREF
  struct BLTINFO *v124; // [esp+E4h] [ebp-238h]
  LONG top; // [esp+E8h] [ebp-234h]
  LONG v126; // [esp+ECh] [ebp-230h]
  int v127; // [esp+F0h] [ebp-22Ch]
  int v128; // [esp+F4h] [ebp-228h]
  LONG v129; // [esp+F8h] [ebp-224h]
  int v130; // [esp+FCh] [ebp-220h]
  int v131; // [esp+100h] [ebp-21Ch]
  POINTL pptlSrc; // [esp+104h] [ebp-218h] BYREF
  int v133; // [esp+10Ch] [ebp-210h]
  struct XDCOBJ *v134; // [esp+110h] [ebp-20Ch]
  HDC v135; // [esp+114h] [ebp-208h]
  _DWORD v136[2]; // [esp+118h] [ebp-204h] BYREF
  _DWORD *v137; // [esp+120h] [ebp-1FCh] BYREF
  int v138; // [esp+124h] [ebp-1F8h]
  int v139; // [esp+128h] [ebp-1F4h]
  int v140; // [esp+12Ch] [ebp-1F0h] BYREF
  int v141; // [esp+130h] [ebp-1ECh]
  int v142; // [esp+134h] [ebp-1E8h]
  struct BLTINFO *v143; // [esp+138h] [ebp-1E4h] BYREF
  char v144; // [esp+13Ch] [ebp-1E0h]
  int v145; // [esp+140h] [ebp-1DCh]
  _DWORD v146[3]; // [esp+144h] [ebp-1D8h] BYREF
  _DWORD v147[3]; // [esp+150h] [ebp-1CCh] BYREF
  _DWORD v148[6]; // [esp+15Ch] [ebp-1C0h] BYREF
  _DWORD v149[6]; // [esp+174h] [ebp-1A8h] BYREF
  _DWORD v150[6]; // [esp+18Ch] [ebp-190h] BYREF
  _DWORD v151[6]; // [esp+1A4h] [ebp-178h] BYREF
  char v152; // [esp+1BCh] [ebp-160h]
  int v153; // [esp+1C0h] [ebp-15Ch]
  int v154; // [esp+1C4h] [ebp-158h]
  int v155; // [esp+1C8h] [ebp-154h]
  int v156; // [esp+1CCh] [ebp-150h]
  int v157; // [esp+1D4h] [ebp-148h]
  int v158; // [esp+1D8h] [ebp-144h]
  int v159; // [esp+1DCh] [ebp-140h]
  int v160; // [esp+1E0h] [ebp-13Ch]
  int v161; // [esp+1E4h] [ebp-138h]
  int v162; // [esp+1E8h] [ebp-134h]
  int v163; // [esp+1ECh] [ebp-130h]
  char v164; // [esp+1F0h] [ebp-12Ch]
  char v165; // [esp+1F1h] [ebp-12Bh]
  int v166; // [esp+1F4h] [ebp-128h]
  int v167; // [esp+1F8h] [ebp-124h]
  int v168; // [esp+1FCh] [ebp-120h]
  int v169; // [esp+200h] [ebp-11Ch]
  int v170; // [esp+204h] [ebp-118h]
  int v171; // [esp+208h] [ebp-114h]
  int v172; // [esp+20Ch] [ebp-110h]
  RECTL prclDest; // [esp+214h] [ebp-108h] BYREF
  struct _POINTL v174; // [esp+224h] [ebp-F8h] BYREF
  int v175; // [esp+22Ch] [ebp-F0h]
  char *v176; // [esp+230h] [ebp-ECh]
  RECTL v177; // [esp+234h] [ebp-E8h] BYREF
  _DWORD v178[33]; // [esp+244h] [ebp-D8h] BYREF
  struct _POINTFIX v179; // [esp+2C8h] [ebp-54h] BYREF
  FIX v180; // [esp+2D0h] [ebp-4Ch]
  int v181; // [esp+2D4h] [ebp-48h]
  int v182; // [esp+2D8h] [ebp-44h]
  FIX v183; // [esp+2DCh] [ebp-40h]
  FIX v184; // [esp+2E0h] [ebp-3Ch]
  int v185; // [esp+2E4h] [ebp-38h]
  struct _POINTL v186; // [esp+2E8h] [ebp-34h] BYREF
  int v187; // [esp+2F0h] [ebp-2Ch]
  char *v188; // [esp+2F4h] [ebp-28h]
  LONG v189; // [esp+2F8h] [ebp-24h]
  char *v190; // [esp+2FCh] [ebp-20h]
  POINTFIX pptfx; // [esp+300h] [ebp-1Ch] BYREF
  int v192; // [esp+308h] [ebp-14h]
  int v193; // [esp+30Ch] [ebp-10h]
  int v194; // [esp+310h] [ebp-Ch]
  int v195; // [esp+314h] [ebp-8h]

  v108 = a1;
  v115 = a4;
  v114 = a5;
  v135 = a6;
  v12 = 1;
  v129 = a7;
  v126 = a2;
  v120 = a8;
  v136[0] = a3;
  v121 = a9;
  v122 = a10;
  v102 = 1;
  if ( !(_BYTE)a11 && (a11 & 0xFE000000) == 0 )
  {
    if ( !a9 )
      return v12;
    v13 = v122;
    if ( !v122 )
      return v12;
    if ( v115 >= 0 && (int)v114 >= 0 && a9 >= 0 && v122 >= 0 )
    {
      v14 = a11 >> 8;
      v15 = BYTE1(a11);
      LOBYTE(v14) = BYTE1(a11) & 0x7F;
      pptlSrc.x = v14;
      BYTE1(a11) &= ~0x80u;
      v131 = v15 & 0x80;
      v111 = 0;
      v112 = 0;
      v113 = 0;
      XDCOBJ::vLock((XDCOBJ *)&v111, v108);
      if ( !v111 || (*((_DWORD *)v111 + 6) & 0x10000) != 0 )
      {
        EngSetLastError(6u);
        v12 = 0;
LABEL_170:
        v90 = v111;
        if ( v111 )
        {
          if ( v112 && (*((_BYTE *)v111 + 32) & 2) != 0 )
          {
            if ( !v113 )
            {
              UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v111);
              v90 = v111;
              if ( UserAttr )
              {
                DC::RestoreAttributes(v111, UserAttr);
                v90 = v111;
              }
            }
            *((_DWORD *)v90 + 8) &= ~2u;
            v112 = 0;
            v90 = v111;
          }
          v108 = 0;
          v92 = *(_DWORD *)v90;
          HmgDecrementExclusiveReferenceCountEx(v90, v113, &v108);
          if ( v108 )
            bDeleteDCInternalEx(v92, 0);
        }
        return v12;
      }
      v117 = 0;
      v118 = 0;
      v119 = 0;
      XDCOBJ::vLock((XDCOBJ *)&v117, v135);
      if ( !v117
        || (bSpDwmValidateSurface(v129, (struct XDCOBJ *)&v117, v120, v121, v13, v97, v100),
            v16 = v126,
            bSpDwmValidateSurface(v126, (struct XDCOBJ *)&v111, a3, v115, (int)v114, v98, v101),
            EXFORMOBJ::vQuickInit((EXFORMOBJ *)v146, (struct XDCOBJ *)&v111, 0x204u),
            EXFORMOBJ::vQuickInit((EXFORMOBJ *)v147, (struct XDCOBJ *)&v117, 0x204u),
            EXFORMOBJ::bRotationOrMirroring((EXFORMOBJ *)v147)) )
      {
        v35 = 0;
        EngSetLastError(0x57u);
        goto LABEL_159;
      }
      prclDest.top = (LONG)v120;
      left = v129;
      right = v121 + v129;
      prclDest.bottom = (LONG)v120 + v122;
      prclDest.left = v129;
      prclDest.right = v121 + v129;
      if ( (*(_BYTE *)(v147[0] + 56) & 0x43) != 0x43 )
      {
        bCvtPts1(v147[0], &prclDest, 2);
        right = prclDest.right;
        left = prclDest.left;
      }
      if ( v147[2] )
      {
        prclDest.left = left + 1;
        prclDest.right = right + 1;
      }
      ERECTL::vOrder((ERECTL *)&prclDest);
      v19 = EXFORMOBJ::bRotationOrMirroring((EXFORMOBJ *)v146);
      v20 = v16 + v115;
      v116 = v19;
      if ( v19 )
      {
        v190 = (char *)v114 + v136[0];
        v187 = v16 + v115;
        v186.x = v16;
        v186.y = v136[0];
        v188 = (char *)v136[0];
        v189 = v16;
        EXFORMOBJ::bXform((EXFORMOBJ *)v146, &v186, &v179, 3u);
        v21 = v180;
        if ( (*(_BYTE *)(v146[0] + 56) & 1) != 0 )
        {
          if ( v179.x > v180 )
          {
            v21 = v180 + 16;
            v182 += 16;
            v179.x += 16;
            v180 += 16;
          }
          v22 = v181;
          if ( v179.y > v183 )
          {
            v22 = v181 + 16;
            v179.y += 16;
            v181 += 16;
            v183 += 16;
          }
        }
        else
        {
          v22 = v181;
        }
        v184 = v21 + v182 - v179.x;
        v185 = v183 + v22 - v179.y;
        v123 = (v21 > v179.x) ^ (v21 <= v184);
        v23 = v22 > v179.y;
        v25 = __OFSUB__(v22, v185);
        v24 = v22 == v185;
        v26 = v123;
        v27 = v23 ^ ((v179.y - v183 < 0) ^ v25 | v24);
        if ( *(&v179.x + 2 * v123) > *(&v179.x + 2 * (v123 ^ 3)) )
          v26 = (v21 > v179.x) ^ (v21 <= v184) ^ 3;
        if ( *(&v179.y + 2 * v27) > *(&v179.y + 2 * (v27 ^ 3)) )
          v27 ^= 3u;
        v28 = v27;
        y = (*(&v179.y + 2 * v27) + 15) >> 4;
        v174.y = y;
        v30 = (*(&v179.y + 2 * (v28 ^ 3)) + 15) >> 4;
        v176 = (char *)v30;
        v31 = (*(&v179.x + 2 * (v26 ^ 3)) + 15) >> 4;
        v32 = (*(&v179.x + 2 * v26) + 15) >> 4;
        v174.x = v32;
        v175 = v31;
      }
      else
      {
        v174.y = v136[0];
        x = v16;
        v176 = (char *)v114 + v136[0];
        v174.x = v16;
        v175 = v16 + v115;
        if ( (*(_BYTE *)(v146[0] + 56) & 0x43) != 0x43 )
        {
          bCvtPts1(v146[0], &v174, 2);
          v20 = v175;
          x = v174.x;
        }
        if ( v146[2] )
        {
          v174.x = x + 1;
          v175 = v20 + 1;
        }
        ERECTL::vOrder((ERECTL *)&v174);
        v30 = (int)v176;
        v31 = v175;
        y = v174.y;
        v32 = v174.x;
      }
      if ( v32 == v31 || y == v30 )
      {
        v35 = 1;
        goto LABEL_159;
      }
      if ( (*((_DWORD *)v111 + 6) & 0xE0) != 0 )
        XDCOBJ::vAccumulate((XDCOBJ *)&v111, (struct ERECTL *)&v174);
      v152 = 0;
      v153 = 0;
      v158 = 0;
      v159 = 0;
      LOWORD(v160) = 256;
      v162 = 0;
      v163 = 0;
      v164 = 0;
      memset(v151, 0, sizeof(v151));
      v156 = 0;
      v154 = 0;
      v155 = 0;
      v166 = 0;
      v169 = 0;
      v167 = 0;
      v168 = 0;
      v172 = 0;
      v170 = 0;
      v171 = 0;
      v157 = 0;
      v161 = 0;
      v165 = 1;
      if ( !DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v151, &v111, (DC **)&v117, 0) )
      {
        v86 = XDCOBJ::bFullScreen((XDCOBJ *)&v117);
        v102 = XDCOBJ::bFullScreen((XDCOBJ *)&v111) | v86;
        goto LABEL_155;
      }
      v34 = *((_DWORD *)v111 + 126);
      v128 = v34;
      if ( !v34 )
      {
        v35 = 1;
        goto LABEL_156;
      }
      v35 = 0;
      v127 = *(_DWORD *)(v34 + 88);
      v130 = *((_DWORD *)v111 + 15);
      v36 = (struct BLTINFO *)v117[63].x;
      v124 = v36;
      if ( !v36 )
      {
        v35 = 1;
        goto LABEL_156;
      }
      if ( *((_DWORD *)v36 + 114) && ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *((_DWORD *)v36 + 114)
        || !_SurfaceAccessCheck(v36)
        || ((*(_BYTE *)(v34 + 76) & 8) != 0 || *(_DWORD *)(v34 + 144)) && (*(_WORD *)(v34 + 66) & 0x200) != 0
        || !_SurfaceAccessCheck((_DWORD *)v34) )
      {
        EngSetLastError(6u);
        goto LABEL_156;
      }
      v37 = 1;
      v109 = HIBYTE(a11) & 1;
      if ( (a11 & 0x1000000) != 0 && !bIsSourceBGRA(v99) )
      {
        EngSetLastError(0x57u);
        v12 = 0;
LABEL_150:
        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v151);
        goto LABEL_160;
      }
      v186 = v174;
      v187 = v175;
      v188 = v176;
      v38 = v111;
      if ( !ERECTL::bOffsetAdd((ERECTL *)&v174, (const struct _POINTL *)v111 + (v37 & *((_DWORD *)v111 + 7)) + 131, v37)
        || !ERECTL::bOffsetAdd((ERECTL *)&prclDest, &v117[(v117[3].y & 1) + 131], 1) )
      {
        EngSetLastError(0x216u);
        v12 = 0;
        goto LABEL_150;
      }
      v39 = (_DWORD *)*((_DWORD *)v36 + 7);
      top = (LONG)v39;
      if ( *((_WORD *)v36 + 32) == 1 && v39 && ((unsigned int)&loc_20000 & v39[6]) != 0 )
      {
        v40 = v39[459];
        if ( prclDest.left < v40 )
          goto LABEL_66;
        v41 = v39[460];
        if ( prclDest.top < v41 || prclDest.right > v40 + *((_DWORD *)v36 + 8) )
          goto LABEL_66;
        v42 = prclDest.bottom <= v41 + *((_DWORD *)v36 + 9);
      }
      else
      {
        if ( prclDest.left < 0 || prclDest.top < 0 || prclDest.right > *((_DWORD *)v36 + 8) )
          goto LABEL_66;
        v42 = prclDest.bottom <= *((_DWORD *)v36 + 9);
      }
      if ( v42 )
      {
        pxlo = 0;
LABEL_67:
        if ( v36 != (struct BLTINFO *)v128
          || (v177 = prclDest,
              ERECTL::operator*=(&v177.left, &v174.x),
              v44 = ERECTL::bEmpty(v43),
              v38 = v111,
              v24 = !v44,
              v45 = 1,
              !v24) )
        {
          v45 = (int)pxlo;
        }
        if ( v45 )
        {
          EngSetLastError(0x57u);
          v35 = 0;
          goto LABEL_156;
        }
        v46 = 1;
        if ( BYTE2(a11) != 0xFF || v109 || (pptlSrc.x & 1) != 0 )
        {
          v52 = 1;
        }
        else
        {
          v47 = *((_DWORD *)v38 + 255);
          v48 = v136[0];
          v49 = *(_BYTE *)(v47 + 235);
          v50 = v126;
          v51 = v108;
          v96 = v122;
          *(_BYTE *)(v47 + 235) = 3;
          v52 = GreStretchBltInternal(v51, v50, v48, v115, v114, v135, v129, v120, v121, v96, 13369376, -1, 0);
          v102 = v52;
          v46 = 0;
          *(_BYTE *)(*((_DWORD *)v111 + 255) + 235) = v49;
          v36 = v124;
        }
        if ( (v46 & v52) != 0 )
        {
          v53 = *((_DWORD *)v36 + 22);
          v123 = 0;
          v54 = v117[7].y;
          v122 = 0;
          pxlo = 0;
          v121 = 0;
          v120 = 0;
          pptlSrc.x = (LONG)gppalRGB;
          v55 = (_DWORD *)v117[127].y;
          v56 = v55[50];
          v57 = v55[49];
          v58 = v55[51];
          v115 = v56;
          inited = EXLATEOBJ::bInitXlateObj(&v123, 0, 0, v53, v127, v54, v130, v58, v57, v56, 0);
          v108 = (HDC)v123;
          v95 = v54;
          v94 = v54;
          v59 = pptlSrc.x;
          v104 = EXLATEOBJ::bInitXlateObj(
                   &pxlo,
                   0,
                   0,
                   v53,
                   pptlSrc.x,
                   v94,
                   v95,
                   *(_DWORD *)(v117[127].y + 204),
                   *(_DWORD *)(v117[127].y + 196),
                   v115,
                   0) & inited;
          v60 = v130;
          v114 = pxlo;
          v105 = EXLATEOBJ::bInitXlateObj(
                   &v121,
                   0,
                   0,
                   v127,
                   v59,
                   v130,
                   v130,
                   *(_DWORD *)(v117[127].y + 204),
                   *(_DWORD *)(v117[127].y + 196),
                   v115,
                   0) & v104;
          v106 = EXLATEOBJ::bInitXlateObj(
                   &v120,
                   0,
                   0,
                   v59,
                   v127,
                   v60,
                   v60,
                   *(_DWORD *)(v117[127].y + 204),
                   *(_DWORD *)(v117[127].y + 196),
                   v115,
                   0) & v105;
          if ( DC::prgnRao(v111) )
            v62 = DC::prgnRao(v61);
          else
            v62 = DC::prgnVisSnap(v61);
          v178[17] = 0;
          v178[18] = 0;
          v178[28] = 1;
          v178[30] = 0;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v178, v62, (struct ERECTL *)&v174, 0);
          if ( v178[1] == v178[3] || v178[2] == v178[4] )
          {
            v12 = 1;
            goto LABEL_147;
          }
          v63 = v128;
          v143 = 0;
          v144 = 0;
          v145 = 0;
          v64 = *(_DWORD *)(v128 + 28);
          v126 = v64;
          if ( v131 )
          {
            v65 = *(_DWORD *)(*((_DWORD *)v111 + 255) + 148);
            if ( (v65 & 1) != 0 && (v65 & 9) != 9 )
            {
              v148[1] = *((_DWORD *)v36 + 8);
              v148[2] = *((_DWORD *)v36 + 9);
              v148[0] = *((_DWORD *)v36 + 15);
              v66 = (_DWORD *)*((_DWORD *)v36 + 22);
              v148[3] = 0;
              v148[5] = 0;
              v148[4] = *v66;
              SURFMEM::bCreateDIB((SURFMEM *)&v143, (struct _DEVBITMAPINFO *)v148, 0, 0, 0, 0, 0, 0, 1, 0, 0);
              if ( !v143 )
                goto LABEL_133;
              v177.left = 0;
              v177.top = 0;
              v136[0] = 0;
              v136[1] = 0;
              v24 = (*((_DWORD *)v36 + 18) & 0x400) == 0;
              v67 = *((_DWORD *)v36 + 9);
              v177.right = *((_DWORD *)v36 + 8);
              v177.bottom = v67;
              if ( !(v24
                   ? EngCopyBits(
                       (SURFOBJ *)((char *)v143 + 16),
                       (SURFOBJ *)((char *)v36 + 16),
                       0,
                       0,
                       &v177,
                       (POINTL *)v136)
                   : (*(int (__stdcall **)(char *, int, _DWORD, _DWORD, RECTL *, _DWORD *))(top + 1976))(
                       (char *)v143 + 16,
                       (int)v36 + 16,
                       0,
                       0,
                       &v177,
                       v136)) )
                goto LABEL_133;
              v69 = *((_DWORD *)v143 + 15);
              if ( (unsigned int)(v69 - 1) > 5 )
                goto LABEL_133;
              funcs_4CED4[v69 - 1](v143);
              v36 = v143;
              v124 = v143;
            }
          }
          v140 = 0;
          LOBYTE(v141) = 0;
          v142 = 0;
          v137 = 0;
          LOBYTE(v138) = 0;
          v139 = 0;
          if ( v116 )
          {
            v149[1] = v175 - v174.x;
            v149[2] = &v176[-v174.y];
            v149[3] = 0;
            v149[0] = 6;
            v149[5] = 0;
            v149[4] = *(_DWORD *)gppalRGB;
            DIB = (struct ECLIPOBJ *)(SURFMEM::bCreateDIB(
                                        (SURFMEM *)&v140,
                                        (struct _DEVBITMAPINFO *)v149,
                                        0,
                                        0,
                                        0,
                                        0,
                                        0,
                                        0,
                                        1,
                                        0,
                                        0) & v106);
            if ( !DIB )
              goto LABEL_131;
            if ( !v109 )
            {
              v150[1] = prclDest.right - prclDest.left;
              v150[2] = prclDest.bottom - prclDest.top;
              v150[3] = 0;
              v150[5] = 0;
              v150[0] = 6;
              v150[4] = *(_DWORD *)gppalRGB;
              DIB = (struct ECLIPOBJ *)SURFMEM::bCreateDIB(
                                         (SURFMEM *)&v137,
                                         (struct _DEVBITMAPINFO *)v150,
                                         0,
                                         0,
                                         0,
                                         0,
                                         0,
                                         0,
                                         1,
                                         0,
                                         0);
              if ( DIB )
              {
                v116 = prclDest.left;
                pptlSrc.x = prclDest.left;
                top = prclDest.top;
                pptlSrc.y = prclDest.top;
                if ( !ERECTL::bOffsetSubtract((ERECTL *)&prclDest, &pptlSrc, 1) )
                {
                  EngSetLastError(0x57u);
LABEL_132:
                  SURFMEM::~SURFMEM((SURFMEM *)&v137);
                  SURFMEM::~SURFMEM((SURFMEM *)&v140);
LABEL_133:
                  SURFMEM::~SURFMEM((SURFMEM *)&v143);
                  v12 = 0;
LABEL_147:
                  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v120);
                  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v121);
                  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
                  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v122);
                  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v123);
                  goto LABEL_150;
                }
                if ( prclDest.right > prclDest.left
                  && prclDest.bottom > prclDest.top
                  && v116 <= *((_DWORD *)v36 + 8)
                  && top <= *((_DWORD *)v36 + 9) )
                {
                  v70 = (SURFOBJ *)((char *)v36 + 16);
                  if ( v137 )
                    v71 = (SURFOBJ *)(v137 + 4);
                  else
                    v71 = 0;
                  EngCopyBits(v71, v70, 0, pxlo, &prclDest, &pptlSrc);
                }
                v72 = (struct BLTINFO *)v137;
                v116 = 0;
                v124 = (struct BLTINFO *)v137;
                v73 = v137[12];
                v74 = (HDC)(v73 + v137[13] * v137[9]);
                v108 = v74;
                if ( (HDC)v73 != v74 )
                {
                  v75 = v116;
                  do
                  {
                    if ( v75 >= prclDest.top && v75 < prclDest.bottom )
                    {
                      v76 = *((_DWORD *)v72 + 8);
                      v116 = 0;
                      v131 = v73;
                      top = 4 * v76 + v73 >= v73 ? (unsigned int)(4 * v76) >> 2 : 0;
                      if ( top )
                      {
                        v77 = v116;
                        v78 = (_DWORD *)v73;
                        v79 = top;
                        do
                        {
                          if ( v77 >= prclDest.left && v77 < prclDest.right )
                            *v78 |= 0xFF000000;
                          ++v77;
                          ++v78;
                        }
                        while ( v77 != v79 );
                        v72 = (struct BLTINFO *)v137;
                      }
                      v74 = v108;
                    }
                    v73 += *((_DWORD *)v72 + 13);
                    ++v75;
                  }
                  while ( (HDC)v73 != v74 );
                  v64 = v126;
                  v124 = v72;
                }
                HIBYTE(a11) |= 1u;
                v114 = xloIdent;
              }
            }
            RtlFillMemoryUlong(*(PVOID *)(v140 + 44), *(_DWORD *)(v140 + 40), 0);
            if ( !DIB )
            {
LABEL_131:
              EngSetLastError(8u);
              goto LABEL_132;
            }
            pptfx.y = v179.y - 16 * v186.y;
            pptfx.x = v179.x - 16 * v186.x;
            v193 = v181 - 16 * v186.y;
            v192 = v180 - 16 * v186.x;
            v195 = v183 - 16 * v186.y;
            v194 = v182 - 16 * v186.x;
            if ( v140 )
              v80 = (SURFOBJ *)(v140 + 16);
            else
              v80 = 0;
            EngPlgBlt(v80, v124 != 0 ? (SURFOBJ *)((char *)v124 + 16) : 0, 0, 0, v114, 0, 0, &pptfx, &prclDest, 0, 3u);
            v81 = EXLATEOBJ::bInitXlateObj(
                    &v122,
                    0,
                    0,
                    gppalRGB,
                    v127,
                    0,
                    v130,
                    *(_DWORD *)(v117[127].y + 204),
                    *(_DWORD *)(v117[127].y + 196),
                    v115,
                    0);
            prclDest.left = 0;
            prclDest.top = 0;
            v36 = (struct BLTINFO *)v140;
            v63 = v128;
            v106 = v81;
            v108 = (HDC)v122;
            v114 = xloIdent;
            prclDest.right = v175 - v174.x;
            prclDest.bottom = (LONG)&v176[-v174.y];
          }
          v82 = (struct ECLIPOBJ *)v106;
          if ( v106 )
          {
            ++*(_DWORD *)(v63 + 56);
            v83 = *((_DWORD *)v111 + 9);
            v116 = v117[4].y;
            if ( v83 == v116 || XDCOBJ::bRedirHooked((XDCOBJ *)&v111) && *(_DWORD *)(v84 + 2316) == v116 )
            {
              if ( (*((_BYTE *)v111 + 24) & 0xE0) != 0 )
              {
                v186 = v174;
                v187 = v175;
                v188 = v176;
                XDCOBJ::vAccumulateTight((XDCOBJ *)&v111, v82, &v186.x);
                v64 = v126;
                v63 = v128;
              }
              v133 = v121;
              pptlSrc.y = (LONG)v114;
              v134 = v120;
              pptlSrc.x = a11;
              if ( v175 - v174.x == prclDest.right - prclDest.left
                && &v176[-v174.y] == (char *)(prclDest.bottom - prclDest.top) )
              {
                BYTE1(pptlSrc.x) = BYTE1(a11) & 0xFE;
              }
              if ( (*(_DWORD *)(v63 + 72) & 0x10000) != 0 )
                v85 = (*(int (__stdcall **)(int, unsigned int, _DWORD *, HDC, struct _POINTL *, RECTL *, POINTL *))(v64 + 2184))(
                        v63 + 16,
                        v36 != 0 ? (unsigned int)v36 + 16 : 0,
                        v178,
                        v108,
                        &v174,
                        &prclDest,
                        &pptlSrc);
              else
                v85 = EngAlphaBlend(
                        (SURFOBJ *)(v63 + 16),
                        v36 != 0 ? (SURFOBJ *)((char *)v36 + 16) : 0,
                        (CLIPOBJ *)v178,
                        (XLATEOBJ *)v108,
                        (RECTL *)&v174,
                        &prclDest,
                        (BLENDOBJ *)&pptlSrc);
              v35 = v85;
              goto LABEL_145;
            }
            EngSetLastError(0x57u);
          }
          else
          {
            EngSetLastError(6u);
          }
          v35 = 0;
LABEL_145:
          SURFMEM::~SURFMEM((SURFMEM *)&v137);
          SURFMEM::~SURFMEM((SURFMEM *)&v140);
          SURFMEM::~SURFMEM((SURFMEM *)&v143);
          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v120);
          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v121);
          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v122);
          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v123);
LABEL_156:
          DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v151);
LABEL_159:
          v12 = v35;
LABEL_160:
          v87 = v117;
          if ( v117 )
          {
            if ( v118 && (v117[4].x & 2) != 0 )
            {
              if ( !v119 )
              {
                v88 = XDCOBJ::GetUserAttr((XDCOBJ *)&v117);
                v87 = v117;
                if ( v88 )
                {
                  DC::RestoreAttributes((DC *)v117, v88);
                  v87 = v117;
                }
              }
              v87[4].x &= ~2u;
              v118 = 0;
              v87 = v117;
            }
            v108 = 0;
            v89 = v87->x;
            HmgDecrementExclusiveReferenceCountEx(v87, v119, &v108);
            if ( v108 )
              bDeleteDCInternalEx(v89, 0);
          }
          goto LABEL_170;
        }
LABEL_155:
        v35 = v102;
        goto LABEL_156;
      }
LABEL_66:
      pxlo = (XLATEOBJ *)1;
      goto LABEL_67;
    }
  }
  EngSetLastError(0x57u);
  return 0;
}
