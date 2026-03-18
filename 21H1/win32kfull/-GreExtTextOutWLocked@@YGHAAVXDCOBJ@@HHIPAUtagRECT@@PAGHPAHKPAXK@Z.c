/*
 * XREFs of ?GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z @ 0x61F50
 * Callers:
 *     ?ExtTextOutRect@@YGHAAVXDCOBJ@@PAUtagRECT@@@Z @ 0x53A9C (-ExtTextOutRect@@YGHAAVXDCOBJ@@PAUtagRECT@@@Z.c)
 *     _GrePolyTextOutW@16 @ 0x564DC (_GrePolyTextOutW@16.c)
 *     ?GreBatchTextOut@@YGHAAVXDCOBJ@@PAU_BATCHTEXTOUT@@K@Z @ 0x615F0 (-GreBatchTextOut@@YGHAAVXDCOBJ@@PAU_BATCHTEXTOUT@@K@Z.c)
 *     _GreExtTextOutWInternal@40 @ 0x78958 (_GreExtTextOutWInternal@40.c)
 * Callees:
 *     ?bDpiScaledSurface@DC@@QBEHXZ @ 0x11CEA (-bDpiScaledSurface@DC@@QBEHXZ.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ?bOpaqueArea@ESTROBJ@@QAEHPAU_POINTFIX@@PAU_RECTL@@@Z @ 0x65208 (-bOpaqueArea@ESTROBJ@@QAEHPAU_POINTFIX@@PAU_RECTL@@@Z.c)
 *     ?vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z @ 0x65290 (-vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z.c)
 *     ?bTightenRao@DC@@QAEHXZ @ 0x7A1A2 (-bTightenRao@DC@@QAEHXZ.c)
 *     ??_5ERECTL@@QAEXABU_RECTL@@@Z @ 0x93A0E (--_5ERECTL@@QAEXABU_RECTL@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ??YERECTL@@QAEXABU_RECTL@@@Z @ 0xA93D0 (--YERECTL@@QAEXABU_RECTL@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _lCvt@12 @ 0xEE304 (_lCvt@12.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     ??0ECLIPOBJ@@QAE@XZ @ 0xF5B49 (--0ECLIPOBJ@@QAE@XZ.c)
 *     ??1XEPATHOBJ@@QAE@XZ @ 0xF6DBB (--1XEPATHOBJ@@QAE@XZ.c)
 *     ??0XEPATHOBJ@@QAE@AAVXDCOBJ@@@Z @ 0x1E448D (--0XEPATHOBJ@@QAE@AAVXDCOBJ@@@Z.c)
 *     ?bTextOutSimpleFill@EPATHOBJ@@QAEHAAVXDCOBJ@@AAVRFONTOBJ@@PAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x1E5583 (-bTextOutSimpleFill@EPATHOBJ@@QAEHAAVXDCOBJ@@AAVRFONTOBJ@@PAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@P.c)
 *     ?bTextOutSimpleStroke1@EPATHOBJ@@QAEHAAVXDCOBJ@@AAVRFONTOBJ@@PAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@K@Z @ 0x1E5662 (-bTextOutSimpleStroke1@EPATHOBJ@@QAEHAAVXDCOBJ@@AAVRFONTOBJ@@PAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ.c)
 *     ?bProxyDrvTextOut@@YGHAAVXDCOBJ@@PAVSURFACE@@AAVESTROBJ@@AAVECLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@AAVRFONTOBJ@@PAVPDEVOBJ@@K4@Z @ 0x1F86ED (-bProxyDrvTextOut@@YGHAAVXDCOBJ@@PAVSURFACE@@AAVESTROBJ@@AAVECLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@.c)
 *     ?pdcoAA@SURFACE@@QAEXPAVXDCOBJ@@@Z @ 0x1F8E7A (-pdcoAA@SURFACE@@QAEXPAVXDCOBJ@@@Z.c)
 *     ?vEudcOpaqueArea@ESTROBJ@@QAEXPAU_POINTFIX@@H@Z @ 0x1F8EFF (-vEudcOpaqueArea@ESTROBJ@@QAEXPAU_POINTFIX@@H@Z.c)
 *     ?dtorHelper@RFONTOBJ@@QAEXXZ @ 0x207AAB (-dtorHelper@RFONTOBJ@@QAEXXZ.c)
 *     ?TextOutBitBlt@@YGXPAVSURFACE@@AAVRFONTOBJ@@PAU_SURFOBJ@@2PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@6PAU_BRUSHOBJ@@6K@Z @ 0x2109B2 (-TextOutBitBlt@@YGXPAVSURFACE@@AAVRFONTOBJ@@PAU_SURFOBJ@@2PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@.c)
 *     ?UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z @ 0x210A97 (-UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z @ 0x210CB8 (-UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z.c)
 *     ?bAddPolygon@EPATHOBJ@@QAEHPAVEXFORMOBJ@@PAU_POINTL@@H@Z @ 0x221FE9 (-bAddPolygon@EPATHOBJ@@QAEHPAVEXFORMOBJ@@PAU_POINTL@@H@Z.c)
 *     ?bAddRectToPath@@YGHAAVEPATHOBJ@@PAU_RECTL@@@Z @ 0x22202D (-bAddRectToPath@@YGHAAVEPATHOBJ@@PAU_RECTL@@@Z.c)
 *     ?vMopUp@TXTCLEANUP@@QAEXXZ @ 0x2221B6 (-vMopUp@TXTCLEANUP@@QAEXXZ.c)
 *     ?bExtraRectsToPath@ESTROBJ@@QAEHAAVEPATHOBJ@@@Z @ 0x223E25 (-bExtraRectsToPath@ESTROBJ@@QAEHAAVEPATHOBJ@@@Z.c)
 *     ?bLinkedTextToPath@ESTROBJ@@QAEHAAVEPATHOBJ@@AAVXDCOBJ@@@Z @ 0x22419E (-bLinkedTextToPath@ESTROBJ@@QAEHAAVEPATHOBJ@@AAVXDCOBJ@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QAEHAAVEPATHOBJ@@@Z @ 0x22438F (-bTextToPathWorkhorse@ESTROBJ@@QAEHAAVEPATHOBJ@@@Z.c)
 */

BOOL __userpurge GreExtTextOutWLocked@<eax>(
        ERECTL *a1@<edx>,
        struct XDCOBJ *a2@<ecx>,
        LONG a3,
        int a4,
        ERECTL **a5,
        unsigned __int16 *a6,
        struct tagRECT *a7,
        unsigned __int16 *a8,
        int a9,
        int *a10,
        unsigned int a11,
        void *a12,
        unsigned int a13)
{
  LONG v13; // ebx
  ERECTL **v15; // edx
  struct XDCOBJ *v16; // edi
  unsigned int v18; // ecx
  DC *v19; // esi
  int v20; // eax
  FLONG v21; // edx
  struct _POINTL *v22; // eax
  int v23; // eax
  int v24; // eax
  _DWORD *v25; // eax
  int v26; // ecx
  int v27; // ecx
  char *v28; // edx
  char *v29; // esi
  struct ESTROBJ *v30; // ecx
  LONG v31; // edx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  LONG v36; // ecx
  int v37; // ecx
  int v38; // edx
  int v39; // esi
  int v40; // ecx
  int v41; // eax
  int v42; // ecx
  struct EXFORMOBJ *v43; // ecx
  int v44; // ecx
  DC *v45; // ecx
  int v46; // esi
  char *v47; // eax
  struct ESTROBJ *v48; // eax
  ERECTL *v49; // esi
  struct DC *v50; // eax
  LONG left; // ecx
  int v52; // ecx
  int v53; // eax
  DC *v54; // ecx
  LONG v55; // esi
  char *v56; // eax
  DC *v57; // edx
  int v58; // eax
  struct _POINTL *v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // ecx
  int v63; // eax
  int v64; // eax
  int v65; // eax
  DC *v66; // edx
  unsigned __int16 *v67; // eax
  LONG v68; // ecx
  LONG v69; // edx
  LONG v70; // eax
  RECTL *p_rclBkGround; // esi
  bool v72; // cc
  FLONG flColorType; // eax
  ERECTL *i; // esi
  unsigned __int16 *v75; // ecx
  int *v76; // ebx
  struct EXFORMOBJ *v77; // ecx
  int v78; // eax
  int v79; // eax
  unsigned __int16 *v80; // ecx
  int v81; // eax
  LONG v82; // edx
  int v83; // eax
  BOOL v84; // esi
  int v85; // edx
  int v86; // eax
  struct REGION *v87; // edx
  DC *v88; // ecx
  int v89; // ebx
  int v90; // eax
  char *right; // esi
  int bottom; // edx
  ERECTL *top; // eax
  SURFACE *v94; // ecx
  int v95; // eax
  int v96; // eax
  unsigned __int16 *v97; // edx
  int v98; // esi
  int v99; // edi
  int v100; // eax
  struct XDCOBJ *v101; // edi
  struct _POINTL *pvRbrush; // eax
  struct _POINTL *v103; // esi
  HSURF v104; // eax
  HDEV v105; // edx
  struct _SURFOBJ *v106; // esi
  LONG v107; // edx
  int v108; // eax
  int *v109; // eax
  BOOL (__stdcall *v110)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // eax
  struct EXFORMOBJ *v111; // ecx
  SURFACE *v112; // esi
  __int16 v113; // cx
  HSURF iUniq; // eax
  HDEV v115; // ecx
  struct _SURFOBJ *v116; // ecx
  LONG v117; // edx
  SURFACE *v118; // esi
  struct XDCOBJ *v119; // ecx
  int v120; // eax
  unsigned int v121; // ecx
  PKTHREAD CurrentThread; // esi
  int v123; // eax
  int *ThreadWin32Thread; // eax
  int v125; // eax
  int v126; // eax
  BOOL (__stdcall *v127)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // ecx
  int v128; // edx
  struct _POINTL *v129; // eax
  bool v130; // zf
  int *v131; // eax
  int v132; // eax
  int v133; // eax
  struct XDCOBJ *v134; // ecx
  int v135; // eax
  _DWORD *v136; // edx
  _DWORD *v137; // edx
  int v138; // eax
  int v139; // edi
  int *v140; // eax
  int v141; // eax
  ERECTL *v142; // ecx
  unsigned __int16 *v143; // edx
  DHPDEV v144; // edi
  SURFACE *v145; // eax
  HSURF v146; // edx
  int v147; // ecx
  LONG v148; // ebx
  int v149; // edi
  HSURF v150; // eax
  HDEV v151; // ecx
  DHPDEV v152; // eax
  struct _SURFOBJ *v153; // ecx
  void (__stdcall *v154)(_DWORD); // esi
  struct SURFACE *v155; // [esp+30h] [ebp-370h]
  struct RFONTOBJ *v156; // [esp+34h] [ebp-36Ch]
  struct _XLATEOBJ *v157; // [esp+44h] [ebp-35Ch]
  struct _RECTL *v158; // [esp+48h] [ebp-358h]
  struct _POINTL *v159; // [esp+4Ch] [ebp-354h]
  unsigned int v160; // [esp+50h] [ebp-350h]
  unsigned int v161; // [esp+54h] [ebp-34Ch]
  unsigned int v162; // [esp+54h] [ebp-34Ch]
  unsigned int v163; // [esp+54h] [ebp-34Ch]
  unsigned int v164; // [esp+54h] [ebp-34Ch]
  struct EPATHOBJ *v165; // [esp+58h] [ebp-348h]
  struct _RECTL *v166; // [esp+5Ch] [ebp-344h]
  int v167; // [esp+64h] [ebp-33Ch]
  struct _BRUSHOBJ v168; // [esp+68h] [ebp-338h] BYREF
  struct _POINTL *v169; // [esp+74h] [ebp-32Ch]
  struct ESTROBJ *v170; // [esp+78h] [ebp-328h]
  SURFACE *v171; // [esp+7Ch] [ebp-324h]
  struct _POINTL *v172; // [esp+80h] [ebp-320h]
  struct _POINTL *v173; // [esp+84h] [ebp-31Ch]
  ERECTL *dhpdev; // [esp+88h] [ebp-318h] BYREF
  struct XDCOBJ *v175; // [esp+8Ch] [ebp-314h]
  LONG v176; // [esp+90h] [ebp-310h]
  struct _XLATEOBJ *v177; // [esp+94h] [ebp-30Ch]
  int *p_x; // [esp+98h] [ebp-308h]
  unsigned __int16 *v179[2]; // [esp+9Ch] [ebp-304h] BYREF
  void (__stdcall *v180)(_DWORD); // [esp+A4h] [ebp-2FCh]
  HDEV v181; // [esp+A8h] [ebp-2F8h] BYREF
  int v182; // [esp+ACh] [ebp-2F4h]
  PATHMEMOBJ *(__thiscall *v183)(PATHMEMOBJ *__hidden); // [esp+B0h] [ebp-2F0h]
  void (__thiscall *v184)(PATHMEMOBJ *__hidden); // [esp+B4h] [ebp-2ECh]
  _DWORD v185[3]; // [esp+B8h] [ebp-2E8h] BYREF
  unsigned int v186; // [esp+C4h] [ebp-2DCh]
  int v187[2]; // [esp+C8h] [ebp-2D8h] BYREF
  int v188; // [esp+D0h] [ebp-2D0h]
  struct XDCOBJ *v189; // [esp+D4h] [ebp-2CCh]
  struct XDCOBJ *v190; // [esp+D8h] [ebp-2C8h] BYREF
  void *v191; // [esp+DCh] [ebp-2C4h]
  unsigned int v192[2]; // [esp+E0h] [ebp-2C0h] BYREF
  int v193; // [esp+E8h] [ebp-2B8h]
  HSURF hsurf; // [esp+160h] [ebp-240h] BYREF
  struct _SURFOBJ *v195; // [esp+164h] [ebp-23Ch]
  HDEV hdev; // [esp+168h] [ebp-238h]
  struct _SURFOBJ *cx; // [esp+16Ch] [ebp-234h]
  struct _RECTL v198; // [esp+170h] [ebp-230h] BYREF
  char *v199; // [esp+180h] [ebp-220h] BYREF
  struct ESTROBJ *v200; // [esp+184h] [ebp-21Ch]
  char *v201; // [esp+188h] [ebp-218h]
  struct ESTROBJ *v202; // [esp+18Ch] [ebp-214h]
  struct _RECTL v203; // [esp+190h] [ebp-210h] BYREF
  struct _SURFOBJ v204; // [esp+1A0h] [ebp-200h] BYREF
  int v205; // [esp+1E4h] [ebp-1BCh]
  int v206; // [esp+1E8h] [ebp-1B8h]
  int v207; // [esp+210h] [ebp-190h]
  int v208; // [esp+218h] [ebp-188h]
  STROBJ pstro; // [esp+220h] [ebp-180h] BYREF
  int v210; // [esp+250h] [ebp-150h]
  int v211; // [esp+25Ch] [ebp-144h]
  int v212; // [esp+260h] [ebp-140h]
  int v213; // [esp+28Ch] [ebp-114h]
  _BYTE v214[80]; // [esp+290h] [ebp-110h] BYREF
  int v215; // [esp+2E0h] [ebp-C0h]
  int v216; // [esp+300h] [ebp-A0h]
  struct _POINTL v217; // [esp+334h] [ebp-6Ch] BYREF
  LONG v218; // [esp+33Ch] [ebp-64h]
  LONG v219; // [esp+340h] [ebp-60h]
  LONG v220; // [esp+344h] [ebp-5Ch]
  LONG v221; // [esp+348h] [ebp-58h]
  int v222; // [esp+34Ch] [ebp-54h]
  SURFACE *v223; // [esp+350h] [ebp-50h]
  struct _POINTL v224; // [esp+354h] [ebp-4Ch] BYREF
  _BYTE v225[40]; // [esp+374h] [ebp-2Ch] BYREF
  unsigned int v226; // [esp+3ACh] [ebp+Ch]

  v179[0] = a6;
  v13 = 128;
  p_x = (int *)a8;
  v15 = a5;
  v16 = a2;
  v191 = a10;
  dhpdev = a1;
  v175 = a2;
  v168.pvRbrush = a5;
  v188 = 0;
  v167 = 128;
  v186 = 2 * ((a4 & 0x10) != 0) + 2;
  if ( (*(_BYTE *)(*(_DWORD *)a2 + 172) & 1) != 0 && (a4 & 4) != 0 )
    goto LABEL_7;
  if ( (*(_DWORD *)(*(_DWORD *)a2 + 24) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    return 0;
  }
  v187[0] = a4 & 0x2000;
  if ( (a4 & 0x2000) != 0 && !p_x )
  {
LABEL_7:
    EngSetLastError(0x57u);
    return 0;
  }
  v18 = a4 & 0xFFFFC36F;
  v226 = a4 & 0xFFFFC36F;
  if ( !a5 )
  {
    v18 &= 0xFFFFFFF9;
LABEL_14:
    v226 = v18;
    goto LABEL_15;
  }
  if ( *a5 == a5[2] || a5[1] == a5[3] )
  {
    a5[3] = (ERECTL *)a3;
    a5[1] = (ERECTL *)a3;
    a5[2] = a1;
    *a5 = a1;
    if ( (v18 & 6) == 2 )
    {
      v15 = 0;
      v18 &= ~2u;
      v168.pvRbrush = 0;
      goto LABEL_14;
    }
  }
LABEL_15:
  v19 = *(DC **)v16;
  if ( *(_DWORD *)v16 && (!v18 || v15 && (v18 & 0xFFFFFFF9) == 0) )
  {
    v20 = *((_DWORD *)v19 + 43) & 1;
    if ( !v20 || (v18 & 4) == 0 )
    {
      v171 = 0;
      hsurf = 0;
      v195 = 0;
      hdev = 0;
      cx = 0;
      if ( v20 )
      {
        v21 = 0;
        v22 = 0;
        v169 = 0;
        v168.flColorType = 0;
        v170 = 0;
        v181 = 0;
        v180 = 0;
        v176 = 0;
      }
      else
      {
        v23 = *((_DWORD *)v19 + 7) & 1;
        v169 = (struct _POINTL *)*((_DWORD *)v19 + 2 * v23 + 262);
        v21 = *((_DWORD *)v19 + 2 * v23 + 263);
        v22 = v169;
        v181 = (HDEV)v21;
        v180 = (void (__stdcall *)(_DWORD))v21;
        v176 = v21;
        v13 = 128;
        v168.flColorType = v21;
        v170 = (struct ESTROBJ *)v21;
      }
      v177 = (struct _XLATEOBJ *)v22;
      v172 = (struct _POINTL *)(16 * (_DWORD)v22);
      v24 = *((_DWORD *)v19 + 255);
      v173 = (struct _POINTL *)(16 * v21);
      v185[1] = *(_DWORD *)(v24 + 228);
      v185[2] = *(_DWORD *)(*((_DWORD *)v19 + 255) + 148) & 1;
      if ( (*(_DWORD *)(*((_DWORD *)v19 + 255) + 340) & 0x1E000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)v185, v16, 0x204u, 0);
        LOBYTE(v18) = v226;
        v170 = (struct ESTROBJ *)v181;
        v180 = (void (__stdcall *)(_DWORD))v176;
        v25 = (_DWORD *)v185[0];
      }
      else
      {
        v25 = (_DWORD *)((char *)v19 + 240);
        v185[0] = (char *)v19 + 240;
      }
      v189 = 0;
      v190 = 0;
      v183 = PATHMEMOBJ::PATHMEMOBJ;
      v184 = PATHMEMOBJ::~PATHMEMOBJ;
      if ( !v168.pvRbrush )
        goto LABEL_69;
      v26 = v18 & 2;
      v130 = v26 == 0;
      v181 = (HDEV)v26;
      v27 = v25[14];
      v13 = 8 * !v130 + 128;
      v167 = v13;
      v198.left = v13;
      if ( (v27 & 2) != 0 )
      {
        v28 = (char *)v177 + ((v25[12] + 8) >> 4) + *(_DWORD *)v168.pvRbrush;
        v199 = v28;
        v29 = (char *)v177 + ((v25[12] + 8) >> 4) + *((_DWORD *)v168.pvRbrush + 2);
        v201 = v29;
        v200 = (struct ESTROBJ *)((char *)v170 + ((v25[13] + 8) >> 4) + *((_DWORD *)v168.pvRbrush + 1));
        v170 = v200;
        v30 = (struct ESTROBJ *)((char *)v180 + *((_DWORD *)v168.pvRbrush + 3) + ((*(_DWORD *)(v185[0] + 52) + 8) >> 4));
        v202 = v30;
      }
      else
      {
        v31 = *(_DWORD *)v168.pvRbrush;
        if ( (v27 & 1) != 0 )
        {
          v32 = lCvt(*(_DWORD *)v185[0], v25[1], *(_DWORD *)v168.pvRbrush);
          v199 = (char *)v177 + ((v32 + *(_DWORD *)(v185[0] + 48) + 8) >> 4);
          v33 = lCvt(*(_DWORD *)v185[0], *(_DWORD *)(v185[0] + 4), *((_DWORD *)v168.pvRbrush + 2));
          v201 = (char *)v177 + ((v33 + *(_DWORD *)(v185[0] + 48) + 8) >> 4);
          v34 = lCvt(*(_DWORD *)(v185[0] + 24), *(_DWORD *)(v185[0] + 28), *((_DWORD *)v168.pvRbrush + 1));
          v200 = (struct ESTROBJ *)(v168.flColorType + ((v34 + *(_DWORD *)(v185[0] + 52) + 8) >> 4));
          v35 = lCvt(*(_DWORD *)(v185[0] + 24), *(_DWORD *)(v185[0] + 28), *((_DWORD *)v168.pvRbrush + 3));
          v29 = v201;
          v28 = v199;
          v30 = (struct ESTROBJ *)(v168.flColorType + ((*(_DWORD *)(v185[0] + 52) + 8 + v35) >> 4));
          v202 = v30;
          v170 = v200;
        }
        else
        {
          v36 = *((_DWORD *)v168.pvRbrush + 1);
          v217.y = *((_DWORD *)v168.pvRbrush + 3);
          v220 = *((_DWORD *)v168.pvRbrush + 2);
          v219 = v36;
          v221 = v36;
          v217.x = v31;
          v218 = v31;
          EXFORMOBJ::bXform((EXFORMOBJ *)v185, &v217, (struct _POINTFIX *)&v217, 3u);
          v222 = v217.x + v220 - v218;
          v180 = (void (__stdcall *)(_DWORD))v222;
          v223 = (SURFACE *)(v217.y + v221 - v219);
          v176 = (LONG)v223;
          v37 = (v218 > v217.x) ^ (v218 <= v220);
          v38 = *(&v217.x + 2 * v37);
          v39 = *(&v220 + 2 * v37);
          if ( v38 > v39 )
            v38 += 15;
          else
            v39 += 15;
          v28 = (char *)v169 + (v38 >> 4);
          v29 = (char *)v169 + (v39 >> 4);
          v201 = v29;
          v199 = v28;
          v40 = (v219 > v217.y) ^ (v219 <= v221);
          v41 = *(&v217.y + 2 * v40);
          v42 = *(&v221 + 2 * v40);
          if ( v41 > v42 )
            v41 += 15;
          else
            v42 += 15;
          v16 = v175;
          v30 = (struct ESTROBJ *)(v168.flColorType + (v42 >> 4));
          v202 = v30;
          v200 = (struct ESTROBJ *)(v168.flColorType + (v41 >> 4));
          v170 = v200;
          if ( (v226 & 4) != 0 )
          {
            v183((PATHMEMOBJ *)v192);
            if ( v193 && EPATHOBJ::bAddPolygon((EPATHOBJ *)v192, v43, &v217, (int)v43) )
            {
              v44 = *(_DWORD *)v175;
              memset(&v203, 0, sizeof(v203));
              v203.top = 16 * (*(_DWORD *)(v44 + 1036) - v168.flColorType);
              v203.bottom = 16 * (*(_DWORD *)(v44 + 1044) - v168.flColorType);
              v182 = 0;
              RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v181, (struct EPATHOBJ *)v192, 1u, &v203);
              if ( v181 )
              {
                *(_DWORD *)(*(_DWORD *)v175 + 1144) = v181;
                v45 = *(DC **)v16;
                v189 = v16;
                v190 = v16;
                if ( DC::bTightenRao(v45) )
                  v226 &= ~4u;
              }
              if ( v182 == 1 )
                RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v181);
            }
            v46 = v226 & 4;
            v184((PATHMEMOBJ *)v192);
            v30 = v202;
            v28 = v199;
            v13 = v46 == 0 ? v198.left : 0;
            a7 = v46 == 0 ? a7 : 0;
            v170 = v200;
            v226 &= -(v46 == 0);
            v29 = v201;
          }
          else
          {
            if ( !v181 )
              goto LABEL_50;
            v13 = v13 & 0xFFFFFFF5 | 2;
            v217.x += (LONG)v172;
            v218 += (LONG)v172;
            v220 += (LONG)v172;
            v180 = (void (__stdcall *)(_DWORD))((char *)v180 + (_DWORD)v172);
            v217.y += (LONG)v173;
            v219 += (LONG)v173;
            v222 = (int)v180;
            v221 += (LONG)v173;
            v16 = v175;
            v223 = (SURFACE *)((char *)v173 + v176);
          }
        }
      }
      v167 = v13;
LABEL_50:
      if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)v16 + 1020) + 148) & 1) != 0 )
      {
        ++v28;
        ++v29;
        v199 = v28;
        v201 = v29;
      }
      if ( (int)v28 > (int)v29 )
      {
        v47 = v28;
        v28 = v29;
        v29 = v47;
        v199 = v28;
        v201 = v47;
      }
      v48 = v170;
      if ( (int)v170 > (int)v30 )
      {
        v170 = v30;
        v200 = v30;
        v30 = v48;
        v202 = v48;
      }
      if ( (v13 & 0xA) != 0 )
      {
        if ( hsurf == (HSURF)hdev || v195 == cx )
        {
          hsurf = (HSURF)v28;
          v195 = (struct _SURFOBJ *)v170;
          hdev = (HDEV)v29;
LABEL_68:
          cx = (struct _SURFOBJ *)v30;
          goto LABEL_69;
        }
        if ( (int)v28 < (int)hsurf )
          hsurf = (HSURF)v28;
        if ( (int)v170 < (int)v195 )
          v195 = (struct _SURFOBJ *)v170;
        if ( (int)v29 > (int)hdev )
          hdev = (HDEV)v29;
        if ( (int)v30 > (int)cx )
          goto LABEL_68;
      }
LABEL_69:
      v169 = (struct _POINTL *)1;
      v49 = 0;
      v177 = 0;
      v168.iSolidColor = 0;
      v215 = 0;
      v170 = 0;
      v181 = (HDEV)GreAcquireSemaphore;
      if ( !a7 )
        goto LABEL_160;
      v50 = *(struct DC **)v16;
      v176 = 0;
      left = *((_DWORD *)v50 + 43) & 1;
      v130 = (*((_DWORD *)v50 + 6) & 0x4000) == 0;
      v198.left = left;
      if ( !v130 )
      {
        v176 = *((_DWORD *)v50 + 126);
        SURFACE::bUnMap((SURFACE *)v176, 0, v50);
        left = v198.left;
      }
      if ( RFONTOBJ::bInit((RFONTOBJ *)&v168, v16, left, v186) )
        ((void (__thiscall *)(_DWORD))v181)(*(_DWORD *)(v168.iSolidColor + 548));
      if ( v176 )
        SURFACE::Map(v176, 0, *(_DWORD *)v16);
      if ( !v168.iSolidColor )
      {
        v13 = 0;
        v169 = (struct _POINTL *)1;
        v167 = 0;
LABEL_160:
        if ( ((unsigned __int8)v171 & 1) != 0 )
        {
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v16 + 1020) + 8) += v211;
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v16 + 1020) + 12) += v212;
        }
        v75 = *(unsigned __int16 **)v16;
        v180 = (void (__stdcall *)(_DWORD))Win32FreePool;
        if ( (v75[86] & 1) != 0 )
        {
          v76 = (v226 & 4) == 0 ? (int *)v13 : 0;
          p_x = v76;
          XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v192, v16);
          if ( !v193 )
          {
LABEL_185:
            XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v192);
LABEL_423:
            if ( (v215 & 0x801) != 0 )
            {
              if ( (v215 & 1) != 0 )
                FreeTmpBuffer(v210);
              v154 = v180;
              if ( (v215 & 0x800) != 0 )
                v180(v216);
            }
            else
            {
              v154 = v180;
            }
            if ( v168.iSolidColor )
            {
              if ( (*(_BYTE *)(v168.iSolidColor + 708) & 0x81) != 0 )
                RFONTOBJ::dtorHelper((RFONTOBJ *)&v168);
              if ( *(_DWORD *)(v168.iSolidColor + 624) )
              {
                v154(*(_DWORD *)(v168.iSolidColor + 624));
                *(_DWORD *)(v168.iSolidColor + 628) = 0;
                *(_DWORD *)(v168.iSolidColor + 624) = 0;
              }
              EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_DWORD *)(v168.iSolidColor + 548));
              GreReleaseSemaphoreInternal(*(_DWORD *)(v168.iSolidColor + 548));
            }
            if ( v189 )
              TXTCLEANUP::vMopUp((TXTCLEANUP *)&v190);
            return v76 != 0;
          }
          if ( ((unsigned __int8)v76 & 8) != 0 )
          {
            v78 = bAddRectToPath(v165, v166);
            v76 = v78 != 0 ? p_x : 0;
          }
          if ( ((unsigned __int8)v76 & 2) != 0 )
            v76 = EPATHOBJ::bAddPolygon((EPATHOBJ *)v192, v77, &v217, (int)v77) != 0 ? v76 : 0;
          if ( ((unsigned __int8)v76 & 0x10) != 0 )
            v76 = EPATHOBJ::bAddPolygon((EPATHOBJ *)v192, v77, &v224, (int)v77) != 0 ? v76 : 0;
          if ( ((unsigned __int8)v76 & 1) != 0 && (!v177 || bAddRectToPath(v165, v166)) )
          {
            if ( (v215 & 0x1400) != 0 )
              v79 = ESTROBJ::bLinkedTextToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)v192, v77);
            else
              v79 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)v192);
            if ( !v79 )
            {
LABEL_182:
              v76 = 0;
              goto LABEL_183;
            }
            if ( v49 && !ERECTL::bEmpty(v49) )
            {
              while ( bAddRectToPath(v165, v166) )
              {
                v49 = (ERECTL *)((char *)v49 + 16);
                if ( ERECTL::bEmpty(v49) )
                  goto LABEL_183;
              }
              goto LABEL_182;
            }
          }
LABEL_183:
          if ( ((unsigned __int8)v76 & 4) != 0 )
            v76 = ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)v192) != 0 ? v76 : 0;
          goto LABEL_185;
        }
        if ( hsurf != (HSURF)hdev && v195 != cx )
        {
          if ( (v75[12] & 0xE0) != 0 )
          {
            ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v192);
            v179[0] = *(unsigned __int16 **)v175;
            v80 = &v179[0][4 * (*((_DWORD *)v179[0] + 7) & 1)];
            v81 = *((_DWORD *)v80 + 262);
            v82 = (LONG)hdev - v81;
            v203.left = (LONG)hsurf - v81;
            v83 = *((_DWORD *)v80 + 263);
            v75 = v179[0];
            v203.right = v82;
            v203.top = (LONG)v195 - v83;
            v203.bottom = (LONG)cx - v83;
            if ( (v179[0][12] & 0x20) != 0 )
            {
              ERECTL::operator|=(&v203);
              v16 = v175;
              v75 = *(unsigned __int16 **)v175;
            }
            else
            {
              v16 = v175;
            }
            if ( *((char *)v75 + 24) < 0 )
            {
              ERECTL::operator|=(&v203);
              v75 = *(unsigned __int16 **)v16;
            }
          }
          v84 = v188 || (v226 & 4) != 0;
          v85 = *((_DWORD *)v75 + 291);
          if ( !v85 || (v75[14] & 2) == 0 || (v130 = !DC::bDpiScaledSurface((DC *)v75), v86 = v85, v130) )
            v86 = *((_DWORD *)v75 + 289);
          if ( v86 )
          {
            if ( !v85 || (v75[14] & 2) == 0 || !DC::bDpiScaledSurface((DC *)v75) )
              v87 = (struct REGION *)*((_DWORD *)v75 + 289);
          }
          else if ( !*((_DWORD *)v75 + 290) || (v75[14] & 2) == 0 || !DC::bDpiScaledSurface((DC *)v75) )
          {
            v87 = (struct REGION *)*((_DWORD *)v75 + 288);
          }
          v205 = 0;
          v206 = 0;
          v207 = 1;
          v208 = 0;
          XCLIPOBJ::vSetup((XCLIPOBJ *)&v204, v87, (struct ERECTL *)&hsurf, v84);
          v168.pvRbrush = v204.hsurf;
          hsurf = v204.hsurf;
          dhpdev = (ERECTL *)v204.dhpdev;
          v195 = (struct _SURFOBJ *)v204.dhpdev;
          hdev = v204.hdev;
          cx = (struct _SURFOBJ *)v204.sizlBitmap.cx;
          if ( v204.hsurf != (HSURF)v204.hdev && v204.dhpdev != (DHPDEV)v204.sizlBitmap.cx )
          {
            v88 = *(DC **)v16;
            v130 = (*(_DWORD *)(*(_DWORD *)v16 + 24) & 0xE0) == 0;
            v179[0] = *(unsigned __int16 **)(*(_DWORD *)v16 + 24);
            v89 = v167;
            if ( !v130 )
            {
              v198.left = (LONG)v168.pvRbrush;
              v198.top = (LONG)v204.dhpdev;
              v198.right = (LONG)v204.hdev;
              v198.bottom = v204.sizlBitmap.cx;
              v90 = *((_DWORD *)v88 + 7) & 1;
              v198.left = (LONG)v168.pvRbrush - *((_DWORD *)v88 + 2 * v90 + 262);
              right = (char *)v204.hdev - *((_DWORD *)v88 + 2 * v90 + 262);
              v168.pvRbrush = (PVOID)v198.left;
              v198.right = (LONG)right;
              v198.top = (LONG)dhpdev - *((_DWORD *)v88 + 2 * v90 + 263);
              bottom = v204.sizlBitmap.cx - *((_DWORD *)v88 + 2 * v90 + 263);
              dhpdev = (ERECTL *)v198.top;
              v89 = v167;
              v198.bottom = bottom;
              if ( ((int)v179[0] & 0x40) != 0 )
              {
                v179[0] = *((unsigned __int16 **)v88 + 278);
                if ( v179[0] == *((unsigned __int16 **)v88 + 280) || *((_DWORD *)v88 + 279) == *((_DWORD *)v88 + 281) )
                {
                  *((_DWORD *)v88 + 278) = v168.pvRbrush;
                  *((_DWORD *)v88 + 279) = v198.top;
                  *((_DWORD *)v88 + 280) = v198.right;
                  *((_DWORD *)v88 + 281) = v198.bottom;
                }
                else
                {
                  if ( (int)v168.pvRbrush >= (int)v179[0] )
                  {
                    top = dhpdev;
                  }
                  else
                  {
                    *((_DWORD *)v88 + 278) = v168.pvRbrush;
                    bottom = v198.bottom;
                    right = (char *)v198.right;
                    top = (ERECTL *)v198.top;
                  }
                  if ( (int)top < *((_DWORD *)v88 + 279) )
                  {
                    *((_DWORD *)v88 + 279) = top;
                    bottom = v198.bottom;
                    right = (char *)v198.right;
                  }
                  if ( (int)right > *((_DWORD *)v88 + 280) )
                  {
                    *((_DWORD *)v88 + 280) = right;
                    bottom = v198.bottom;
                  }
                  if ( bottom > *((_DWORD *)v88 + 281) )
                    *((_DWORD *)v88 + 281) = bottom;
                }
                dhpdev = *(ERECTL **)(*(_DWORD *)v16 + 1172);
                if ( dhpdev )
                {
                  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v187);
                  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v187);
                  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v179);
                  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v179);
                  if ( v187[0]
                    && v179[0]
                    && (RGNOBJ::vSet((RGNOBJ *)v179, &v198),
                        RGNOBJ::bMerge((RGNOBJ *)v187, (struct RGNOBJ *)&dhpdev, (struct RGNOBJ *)v179, 0xEu)) )
                  {
                    RGNOBJ::vSwap((RGNOBJ *)&dhpdev, (struct RGNOBJ *)v187);
                    v16 = v175;
                    *(_DWORD *)(*(_DWORD *)v175 + 1172) = dhpdev;
                  }
                  else
                  {
                    v16 = v175;
                  }
                  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v179);
                  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v179);
                  if ( v179[1] == (unsigned __int16 *)1 )
                    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v179);
                  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v187);
                  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v187);
                  if ( v187[1] == 1 )
                    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v187);
                }
              }
            }
            v94 = *(SURFACE **)(*(_DWORD *)v16 + 504);
            v171 = v94;
            if ( v94 )
            {
              if ( (*((_BYTE *)v94 + 76) & 8) == 0 && !*((_DWORD *)v94 + 36) || (*((_WORD *)v94 + 33) & 0x200) == 0 )
              {
                v95 = *((_DWORD *)v94 + 18);
                if ( (v95 & 0x800) != 0 )
                {
                  v96 = UserSurfaceAccessCheck(*((_DWORD *)v94 + 113));
                }
                else
                {
                  if ( (v95 & 0x10000000) == 0 )
                    goto LABEL_247;
                  v96 = UserScreenAccessCheck();
                }
                if ( v96 )
                {
                  v94 = v171;
LABEL_247:
                  v97 = *(unsigned __int16 **)v16;
                  v98 = *((_DWORD *)v94 + 22);
                  v168.flColorType = *((_DWORD *)v94 + 7);
                  v99 = *((_DWORD *)v97 + 15);
                  v176 = *((_DWORD *)v97 + 12);
                  v172 = (struct _POINTL *)(v97 + 684);
                  v173 = (struct _POINTL *)(v97 + 730);
                  p_x = 0;
                  v168.pvRbrush = v97;
                  if ( (v176 & 0x10000000) != 0 )
                  {
                    *(_DWORD *)(*((_DWORD *)v97 + 255) + 184) |= 4u;
                    --v172[10].x;
                    v97 = *(unsigned __int16 **)v175;
                    p_x = &v169->x;
                    v168.pvRbrush = v97;
                  }
                  v100 = *((_DWORD *)v97 + 59) | *(_DWORD *)(*((_DWORD *)v97 + 255) + 184);
                  if ( (v100 & 0xC) != 0 )
                  {
                    if ( (v100 & 4) != 0 )
                    {
                      EBRUSHOBJ::vInitBrush(v172, v97, gpbrText, v99, v98, v94, p_x);
                      v94 = v171;
                      v97 = *(unsigned __int16 **)v175;
                    }
                    if ( ((*((_BYTE *)v97 + 236) | *(_BYTE *)(*((_DWORD *)v97 + 255) + 184)) & 8) != 0 )
                    {
                      EBRUSHOBJ::vInitBrush(v173, v97, gpbrBackground, v99, v98, v94, ((unsigned int)v176 >> 15) & 1);
                      v101 = v175;
                      v97 = *(unsigned __int16 **)v175;
                    }
                    else
                    {
                      v101 = v175;
                    }
                    v94 = v171;
                    *(_DWORD *)(*((_DWORD *)v97 + 255) + 184) &= 0xFFFFFFF3;
                    *(_DWORD *)(*(_DWORD *)v101 + 236) &= 0xFFFFFFF3;
                    pvRbrush = *(struct _POINTL **)v101;
                  }
                  else
                  {
                    v101 = v175;
                    pvRbrush = (struct _POINTL *)v168.pvRbrush;
                  }
                  v103 = pvRbrush + 147;
                  v169 = pvRbrush + 147;
                  if ( (v89 & 0x1A) == 0 )
                    goto LABEL_292;
                  if ( (v89 & 8) != 0 && v199 != v201 && v200 != v202 )
                  {
                    v104 = hsurf;
                    if ( (int)hsurf <= (int)v199 )
                      v104 = (HSURF)v199;
                    v105 = hdev;
                    v204.hsurf = v104;
                    v168.pvRbrush = hdev;
                    if ( (int)hdev >= (int)v201 )
                    {
                      v105 = (HDEV)v201;
                      v168.pvRbrush = v201;
                    }
                    v106 = v195;
                    v204.hdev = v105;
                    if ( (int)v195 <= (int)v200 )
                      v106 = (struct _SURFOBJ *)v200;
                    v107 = (LONG)cx;
                    v204.dhpdev = (DHPDEV)v106;
                    if ( (int)cx >= (int)v202 )
                      v107 = (LONG)v202;
                    v204.sizlBitmap.cx = v107;
                    if ( (int)v104 >= (int)v168.pvRbrush || (int)v106 >= v107 )
                    {
                      v103 = v169;
                    }
                    else
                    {
                      ++*((_DWORD *)v94 + 14);
                      dhpdev = (ERECTL *)v225;
                      v108 = *((_DWORD *)v94 + 7);
                      p_x = 0;
                      v198.left = 0;
                      v168.pvRbrush = 0;
                      if ( (*(_DWORD *)(v108 + 24) & 0x8080) == 0x8080 && v168.iSolidColor )
                      {
                        v109 = (int *)UMPDReleaseRFONTSem(
                                        (struct RFONTOBJ *)&v198,
                                        (struct UMPDOBJ *)&v168.pvRbrush,
                                        (unsigned int *)&dhpdev,
                                        (unsigned int *)v165,
                                        (int **)v166);
                        v94 = v171;
                        p_x = v109;
                      }
                      if ( (*((_BYTE *)v94 + 72) & 1) != 0 )
                        v110 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_DWORD *)v94 + 7) + 1972);
                      else
                        v110 = EngBitBlt;
                      v103 = v169;
                      v110(
                        (SURFOBJ *)((char *)v94 + 16),
                        0,
                        0,
                        (CLIPOBJ *)&v204,
                        0,
                        (RECTL *)&v204.hsurf,
                        0,
                        0,
                        (BRUSHOBJ *)v173,
                        v169,
                        61680);
                      if ( p_x )
                      {
                        UMPDAcquireRFONTSem(
                          (struct RFONTOBJ *)v198.left,
                          (struct UMPDOBJ *)v168.pvRbrush,
                          (unsigned int)dhpdev,
                          (unsigned int)v165,
                          &v166->left);
                        if ( dhpdev )
                        {
                          if ( dhpdev != (ERECTL *)v225 )
                            v180(dhpdev);
                        }
                      }
                    }
                    v204.hsurf = hsurf;
                    v204.dhpdev = (DHPDEV)v195;
                    v204.hdev = hdev;
                    v204.sizlBitmap.cx = (LONG)cx;
                  }
                  if ( (v89 & 0x12) != 0 )
                  {
                    v183((PATHMEMOBJ *)v192);
                    if ( !v193 )
                      goto LABEL_291;
                    if ( (v89 & 2) != 0 )
                    {
                      v89 = EPATHOBJ::bAddPolygon((EPATHOBJ *)v192, v111, &v217, (int)v111) != 0 ? v89 : 0;
                      v167 = v89;
                    }
                    if ( (v89 & 0x10) != 0 )
                    {
                      v89 = EPATHOBJ::bAddPolygon((EPATHOBJ *)v192, v111, &v224, (int)v111) != 0 ? v89 : 0;
                      v167 = v89;
                    }
                    if ( (v89 & 0x12) != 0 )
                    {
                      v159 = v103;
                      v112 = v171;
                      v89 = EPATHOBJ::bTextOutSimpleFill(
                              (EPATHOBJ *)v192,
                              v101,
                              (struct RFONTOBJ *)&v168,
                              (struct PDEVOBJ *)&v168.flColorType,
                              v171,
                              (struct _CLIPOBJ *)&v204,
                              (struct _BRUSHOBJ *)v173,
                              v159,
                              v160,
                              v161) != 0
                          ? v89
                          : 0;
                      v167 = v89;
                      v184((PATHMEMOBJ *)v192);
                    }
                    else
                    {
LABEL_291:
                      v112 = v171;
                      v184((PATHMEMOBJ *)v192);
                    }
                  }
                  else
                  {
LABEL_292:
                    v112 = v171;
                  }
                  if ( (v89 & 1) == 0 )
                  {
LABEL_416:
                    if ( (v89 & 4) != 0 )
                    {
                      v183((PATHMEMOBJ *)v192);
                      if ( v193
                        && ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)v192)
                        && EPATHOBJ::bTextOutSimpleFill(
                             (EPATHOBJ *)v192,
                             v175,
                             (struct RFONTOBJ *)&v168,
                             (struct PDEVOBJ *)&v168.flColorType,
                             v112,
                             (struct _CLIPOBJ *)&v204,
                             (struct _BRUSHOBJ *)v172,
                             v169,
                             v160,
                             v164) )
                      {
                        v76 = (int *)v167;
                        v184((PATHMEMOBJ *)v192);
                      }
                      else
                      {
                        v76 = 0;
                        v184((PATHMEMOBJ *)v192);
                      }
                      goto LABEL_423;
                    }
                    goto LABEL_422;
                  }
                  dhpdev = 0;
                  if ( v188 )
                  {
                    v113 = -257;
                    v89 |= (*(_DWORD *)(v168.iSolidColor + 712) & 0x8000) != 0 ? 64 : 32;
                    v167 = v89;
                  }
                  else
                  {
                    v113 = v176;
                  }
                  if ( v177 && (v113 & 0x100) == 0 )
                  {
                    iUniq = hsurf;
                    if ( (int)hsurf <= (signed int)v177->iUniq )
                      iUniq = (HSURF)v177->iUniq;
                    v198.left = *(_DWORD *)&v177->iSrcType;
                    v115 = hdev;
                    v204.hsurf = iUniq;
                    v168.pvRbrush = hdev;
                    if ( (int)hdev >= v198.left )
                    {
                      v115 = (HDEV)v198.left;
                      v168.pvRbrush = (PVOID)v198.left;
                    }
                    v204.hdev = v115;
                    v198.left = v177->flXlate;
                    v116 = v195;
                    if ( (int)v195 <= v198.left )
                      v116 = (struct _SURFOBJ *)v198.left;
                    v198.left = v177->cEntries;
                    v117 = (LONG)cx;
                    v204.dhpdev = (DHPDEV)v116;
                    if ( (int)cx >= v198.left )
                      v117 = v198.left;
                    v204.sizlBitmap.cx = v117;
                    if ( (int)iUniq < (int)v168.pvRbrush && (int)v116 < v117 )
                    {
                      ++*((_DWORD *)v112 + 14);
                      TextOutBitBlt(
                        v155,
                        v156,
                        &v204,
                        v116,
                        (struct _CLIPOBJ *)&v204.hsurf,
                        v157,
                        v158,
                        v173,
                        v169,
                        (struct _BRUSHOBJ *)v116,
                        (struct _POINTL *)v165,
                        (unsigned int)v166);
                    }
                    v204.hsurf = hsurf;
                    v204.dhpdev = (DHPDEV)v195;
                    v204.hdev = hdev;
                    v204.sizlBitmap.cx = (LONG)cx;
                    v177 = 0;
                  }
                  if ( v170 && *(_DWORD *)(v168.flColorType + 1424) != 4 )
                  {
                    dhpdev = v170;
                    v170 = 0;
                  }
                  if ( (v89 & 0x20) != 0 )
                  {
                    if ( (v215 & 0x1400) != 0 )
                    {
                      v118 = v171;
                      if ( !bProxyDrvTextOut(
                              (struct XDCOBJ *)&pstro,
                              (struct SURFACE *)&v204,
                              0,
                              0,
                              (struct _RECTL *)v172,
                              (struct _RECTL *)v173,
                              (struct _BRUSHOBJ *)v169,
                              &v168,
                              (struct _POINTL *)&v168.flColorType,
                              *(struct RFONTOBJ **)(*(_DWORD *)v101 + 48),
                              (struct PDEVOBJ *)&hsurf,
                              (unsigned int)v165,
                              v166) )
                      {
                        LOBYTE(v89) = 0;
                        v167 = 0;
                      }
                      goto LABEL_398;
                    }
                    v183((PATHMEMOBJ *)v192);
                    if ( v193 )
                    {
                      if ( (v215 & 0x1400) != 0 )
                        v120 = ESTROBJ::bLinkedTextToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)v192, v119);
                      else
                        v120 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)v192);
                      v118 = v171;
                      if ( v120 )
                      {
                        if ( !EPATHOBJ::bTextOutSimpleStroke1(
                                (EPATHOBJ *)v192,
                                v101,
                                (struct RFONTOBJ *)&v168,
                                (struct PDEVOBJ *)&v168.flColorType,
                                v171,
                                (struct _CLIPOBJ *)&v204,
                                (struct _BRUSHOBJ *)v172,
                                v169,
                                v121) )
                        {
                          LOBYTE(v89) = 0;
                          v167 = 0;
                          v184((PATHMEMOBJ *)v192);
LABEL_398:
                          v142 = dhpdev;
                          if ( dhpdev )
                          {
                            v143 = (unsigned __int16 *)v204.hsurf;
                            v144 = v204.dhpdev;
                            v181 = v204.hdev;
                            v145 = (SURFACE *)v204.sizlBitmap.cx;
                            ++*((_DWORD *)v118 + 14);
                            v179[0] = v143;
                            v198.left = (LONG)v144;
                            v176 = (LONG)v145;
                            if ( !ERECTL::bEmpty(v142) )
                            {
                              v148 = v198.left;
                              v149 = v147 + 4;
                              do
                              {
                                v150 = *(HSURF *)(v149 - 4);
                                if ( (int)v146 > (int)v150 )
                                  v150 = v146;
                                v151 = *(HDEV *)(v149 + 4);
                                v204.hsurf = v150;
                                if ( (int)v181 < (int)v151 )
                                  v151 = v181;
                                v204.hdev = v151;
                                if ( (int)v150 < (int)v151 )
                                {
                                  v152 = *(DHPDEV *)v149;
                                  if ( v148 > *(_DWORD *)v149 )
                                    v152 = (DHPDEV)v148;
                                  v153 = *(struct _SURFOBJ **)(v149 + 8);
                                  v204.dhpdev = v152;
                                  if ( v176 < (int)v153 )
                                    v153 = (struct _SURFOBJ *)v176;
                                  v204.sizlBitmap.cx = (LONG)v153;
                                  if ( (int)v152 < (int)v153 )
                                    TextOutBitBlt(
                                      v155,
                                      v156,
                                      &v204,
                                      v153,
                                      (struct _CLIPOBJ *)&v204.hsurf,
                                      v157,
                                      v158,
                                      v172,
                                      v169,
                                      (struct _BRUSHOBJ *)v153,
                                      (struct _POINTL *)v165,
                                      (unsigned int)v166);
                                }
                                v149 += 16;
                              }
                              while ( !ERECTL::bEmpty((ERECTL *)(v149 - 4)) );
                              LOBYTE(v89) = v167;
                              v144 = (DHPDEV)v198.left;
                            }
                            v204.hdev = v181;
                            v204.hsurf = v146;
                            v204.dhpdev = v144;
                            v204.sizlBitmap.cx = v176;
                          }
                          v112 = v171;
                          goto LABEL_416;
                        }
LABEL_327:
                        v184((PATHMEMOBJ *)v192);
                        goto LABEL_398;
                      }
                    }
                    else
                    {
                      v118 = v171;
                    }
                    LOBYTE(v89) = 0;
                    v167 = 0;
                    goto LABEL_327;
                  }
                  v198.left = (LONG)KeGetCurrentThread;
                  CurrentThread = KeGetCurrentThread();
                  v123 = IsThreadCrossSessionAttached();
                  p_x = (int *)PsGetThreadWin32Thread;
                  if ( !v123
                    && (ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread)) != 0
                    && (v125 = *ThreadWin32Thread) != 0 )
                  {
                    v126 = *(_DWORD *)(v125 + 168);
                    v118 = v171;
                  }
                  else
                  {
                    v118 = v171;
                    v126 = *((_DWORD *)v171 + 17);
                  }
                  if ( v126 )
                    SURFACE::pdcoAA(v118, 0);
                  if ( (*((_BYTE *)v118 + 72) & 8) != 0 )
                    v127 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*((_DWORD *)v118 + 7) + 1992);
                  else
                    v127 = EngTextOut;
                  v168.pvRbrush = v127;
                  if ( v127 == SpTextOut || v127 == BmpDevTextOut )
                  {
                    if ( (*(_DWORD *)(v168.iSolidColor + 12) & 0x10010000) != 0 )
                    {
                      *((_DWORD *)v118 + 17) = v101;
                      v179[0] = (unsigned __int16 *)((int (*)(void))v198.left)();
                      if ( !IsThreadCrossSessionAttached() )
                      {
                        v131 = (int *)((int (__stdcall *)(unsigned __int16 *))p_x)(v179[0]);
                        if ( v131 )
                        {
                          v132 = *v131;
                          if ( v132 )
                            *(_DWORD *)(v132 + 168) = v101;
                        }
                      }
                    }
                  }
                  else
                  {
                    v128 = *(_DWORD *)(v168.iSolidColor + 12);
                    if ( (v128 & 0x10000) != 0 )
                    {
                      v129 = *(struct _POINTL **)v101;
                      v130 = (v128 & 0x10000000) != 0 ? (v129[6].y & 0x4000) == 0 : (v129[6].x & 0x1000000) == 0;
                      if ( v130 )
                      {
                        if ( v127 != EngTextOut )
                          SURFACE::pdcoAA(v118, v101);
                        v168.pvRbrush = SpTextOut;
                      }
                    }
                  }
                  if ( (v89 & 0x40) != 0 )
                  {
                    if ( (v215 & 0x1400) == 0 )
                    {
                      v183((PATHMEMOBJ *)v192);
                      if ( !v193
                        || ((v215 & 0x1400) == 0
                          ? (v135 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)v192))
                          : (v135 = ESTROBJ::bLinkedTextToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)v192, v134)),
                            !v135
                         || v192[1] > 1
                         && !EPATHOBJ::bTextOutSimpleFill(
                               (EPATHOBJ *)v192,
                               v101,
                               (struct RFONTOBJ *)&v168,
                               (struct PDEVOBJ *)&v168.flColorType,
                               v118,
                               (struct _CLIPOBJ *)&v204,
                               (struct _BRUSHOBJ *)v172,
                               v169,
                               v160,
                               v162)) )
                      {
                        LOBYTE(v89) = 0;
                        v167 = 0;
                      }
                      v184((PATHMEMOBJ *)v192);
                      goto LABEL_394;
                    }
                    v133 = bProxyDrvTextOut(
                             (struct XDCOBJ *)&pstro,
                             (struct SURFACE *)&v204,
                             0,
                             0,
                             (struct _RECTL *)v172,
                             (struct _RECTL *)v173,
                             (struct _BRUSHOBJ *)v169,
                             &v168,
                             (struct _POINTL *)&v168.flColorType,
                             *(struct RFONTOBJ **)(*(_DWORD *)v101 + 48),
                             (struct PDEVOBJ *)&hsurf,
                             (unsigned int)v165,
                             v166);
                    goto LABEL_377;
                  }
                  ++*((_DWORD *)v118 + 14);
                  if ( (v89 & 4) == 0 )
                  {
                    if ( (v215 & 0x1400) == 0 )
                    {
                      if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v101 + 36) + 24) & 0x8080) == 0x80
                        && !*(_DWORD *)(v168.iSolidColor + 64) )
                      {
                        v179[0] = (unsigned __int16 *)ghsemPrintKView;
                        ((void (*)(void))v181)();
                        v136 = (_DWORD *)gpPrintKViewList;
                        if ( gpPrintKViewList )
                        {
                          do
                          {
                            if ( *v136 == *(_DWORD *)(*(_DWORD *)(v168.iSolidColor + 84) + 56) )
                              ++v136[2];
                            v136 = (_DWORD *)v136[5];
                          }
                          while ( v136 );
                        }
                        SEMOBJ::vUnlock((SEMOBJ *)v179);
                      }
                      v89 = ((int (__stdcall *)(char *, STROBJ *, ULONG, struct _SURFOBJ *, struct ESTROBJ *, struct _XLATEOBJ *, struct _POINTL *, struct _POINTL *, struct _POINTL *, int))v168.pvRbrush)(
                              (char *)v118 + 16,
                              &pstro,
                              v168.iSolidColor,
                              &v204,
                              v170,
                              v177,
                              v172,
                              v173,
                              v169,
                              3341) != 0
                          ? v89
                          : 0;
                      v167 = v89;
                      if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v101 + 36) + 24) & 0x8080) == 0x80
                        && !*(_DWORD *)(v168.iSolidColor + 64) )
                      {
                        v179[0] = (unsigned __int16 *)ghsemPrintKView;
                        ((void (*)(void))v181)();
                        v137 = (_DWORD *)gpPrintKViewList;
                        if ( gpPrintKViewList )
                        {
                          do
                          {
                            if ( *v137 == *(_DWORD *)(*(_DWORD *)(v168.iSolidColor + 84) + 56) )
                            {
                              v138 = v137[2];
                              if ( v138 )
                                v137[2] = v138 - 1;
                            }
                            v137 = (_DWORD *)v137[5];
                          }
                          while ( v137 );
                        }
                        SEMOBJ::vUnlock((SEMOBJ *)v179);
                      }
                      goto LABEL_394;
                    }
                    v133 = bProxyDrvTextOut(
                             (struct XDCOBJ *)&pstro,
                             (struct SURFACE *)&v204,
                             v170,
                             (struct ECLIPOBJ *)v177,
                             (struct _RECTL *)v172,
                             (struct _RECTL *)v173,
                             (struct _BRUSHOBJ *)v169,
                             &v168,
                             (struct _POINTL *)&v168.flColorType,
                             0,
                             (struct PDEVOBJ *)&hsurf,
                             (unsigned int)v165,
                             v166);
LABEL_377:
                    if ( !v133 )
                    {
                      LOBYTE(v89) = 0;
                      v167 = 0;
                    }
                    goto LABEL_394;
                  }
                  v183((PATHMEMOBJ *)v192);
                  if ( !v193 || !ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)v192) )
                    goto LABEL_373;
                  if ( (v215 & 0x1400) != 0 )
                  {
                    if ( !bProxyDrvTextOut(
                            (struct XDCOBJ *)&pstro,
                            (struct SURFACE *)&v204,
                            v170,
                            (struct ECLIPOBJ *)v177,
                            (struct _RECTL *)v172,
                            (struct _RECTL *)v173,
                            (struct _BRUSHOBJ *)v169,
                            &v168,
                            0,
                            0,
                            (struct PDEVOBJ *)&hsurf,
                            (unsigned int)v165,
                            v166) )
                    {
                      LOBYTE(v89) = 0;
                      v167 = 0;
                      v184((PATHMEMOBJ *)v192);
LABEL_394:
                      *((_DWORD *)v118 + 17) = 0;
                      v139 = ((int (*)(void))v198.left)();
                      if ( !IsThreadCrossSessionAttached() )
                      {
                        v140 = (int *)((int (__stdcall *)(int))p_x)(v139);
                        if ( v140 )
                        {
                          v141 = *v140;
                          if ( v141 )
                            *(_DWORD *)(v141 + 168) = 0;
                        }
                      }
                      goto LABEL_398;
                    }
                  }
                  else if ( !((int (__stdcall *)(char *, STROBJ *, ULONG, struct _SURFOBJ *, struct ESTROBJ *, struct _XLATEOBJ *, struct _POINTL *, struct _POINTL *, struct _POINTL *, int))v168.pvRbrush)(
                               (char *)v118 + 16,
                               &pstro,
                               v168.iSolidColor,
                               &v204,
                               v170,
                               v177,
                               v172,
                               v173,
                               v169,
                               3341) )
                  {
                    goto LABEL_373;
                  }
                  if ( EPATHOBJ::bTextOutSimpleFill(
                         (EPATHOBJ *)v192,
                         v101,
                         (struct RFONTOBJ *)&v168,
                         (struct PDEVOBJ *)&v168.flColorType,
                         v118,
                         (struct _CLIPOBJ *)&v204,
                         (struct _BRUSHOBJ *)v172,
                         v169,
                         v160,
                         v163) )
                  {
LABEL_374:
                    v89 &= ~4u;
                    v167 = v89;
                    v184((PATHMEMOBJ *)v192);
                    goto LABEL_394;
                  }
LABEL_373:
                  v89 = 0;
                  goto LABEL_374;
                }
              }
            }
          }
        }
LABEL_422:
        v76 = (int *)v167;
        goto LABEL_423;
      }
      v188 = *(_DWORD *)(v168.iSolidColor + 60) & 2;
      if ( !v188 || (v130 = (*(_DWORD *)(v168.iSolidColor + 712) & 0x8000) == 0, v169 = 0, !v130) )
        v169 = (struct _POINTL *)1;
      v52 = *(_DWORD *)(*(_DWORD *)v16 + 1020);
      v171 = (SURFACE *)(*(_DWORD *)(*(_DWORD *)v16 + 1556) | *(_DWORD *)(v52 + 280) & 0x11F);
      if ( ((unsigned __int8)v171 & 1) != 0 )
      {
        v53 = *(_DWORD *)(v52 + 184);
        if ( (v53 & 0x200) == 0 )
        {
          *(_DWORD *)(v52 + 184) = v53 | 0x100;
          v54 = *(DC **)v16;
          v198.left = (LONG)v172 + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v16 + 1020) + 8);
          v186 = v198.left;
          v55 = *(_DWORD *)(*((_DWORD *)v54 + 255) + 12);
          v56 = (char *)v198.left;
          goto LABEL_95;
        }
        *(_DWORD *)(v52 + 184) = v53 & 0xFFFFFDFF;
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v16 + 1020) + 184) |= 0x100u;
        v57 = *(DC **)v16;
        v130 = (*(_DWORD *)(v185[0] + 56) & 2) == 0;
        v186 = *(_DWORD *)(v185[0] + 56);
        v58 = *((_DWORD *)v57 + 255);
        if ( v130 )
        {
          v59 = (struct _POINTL *)(v58 + 236);
          if ( (v186 & 1) != 0 )
          {
            v60 = lCvt(*(_DWORD *)v185[0], *(_DWORD *)(v185[0] + 4), v59->x);
            v198.left = *(_DWORD *)(v185[0] + 48) + v60;
            v61 = lCvt(
                    *(_DWORD *)(v185[0] + 24),
                    *(_DWORD *)(v185[0] + 28),
                    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v16 + 1020) + 240));
            v198.top = *(_DWORD *)(v185[0] + 52) + v61;
          }
          else
          {
            EXFORMOBJ::bXform((EXFORMOBJ *)v185, v59, (struct _POINTFIX *)&v198, 1u);
          }
        }
        else
        {
          v198.left = *(_DWORD *)(v185[0] + 48) + 16 * *(_DWORD *)(v58 + 236);
          v198.top = *(_DWORD *)(v185[0] + 52) + 16 * *(_DWORD *)(*((_DWORD *)v57 + 255) + 240);
        }
        v62 = *(_DWORD *)(*(_DWORD *)v16 + 1020);
        *(_DWORD *)(v62 + 8) = v198.left;
        *(_DWORD *)(v62 + 12) = v198.top;
      }
      else
      {
        v63 = *(_DWORD *)(v185[0] + 56);
        if ( (v63 & 2) != 0 )
        {
          v56 = (char *)&v172[2 * (int)dhpdev] + *(_DWORD *)(v185[0] + 48);
          v198.left = (LONG)v56;
          v55 = 16 * a3 + *(_DWORD *)(v185[0] + 52);
          goto LABEL_95;
        }
        if ( (v63 & 1) != 0 )
        {
          v64 = lCvt(*(_DWORD *)v185[0], *(_DWORD *)(v185[0] + 4), dhpdev);
          v198.left = (LONG)v172 + *(_DWORD *)(v185[0] + 48) + v64;
          v65 = lCvt(*(_DWORD *)(v185[0] + 24), *(_DWORD *)(v185[0] + 28), a3);
          v55 = *(_DWORD *)(v185[0] + 52) + v65;
          v56 = (char *)v198.left;
          goto LABEL_95;
        }
        v198.top = a3;
        v198.left = (LONG)dhpdev;
        EXFORMOBJ::bXform((EXFORMOBJ *)v185, (struct _POINTL *)&v198, (struct _POINTFIX *)&v198, 1u);
      }
      v56 = (char *)v172 + v198.left;
      v55 = v198.top;
      v198.left += (LONG)v172;
LABEL_95:
      v66 = *(DC **)v16;
      v198.top = (LONG)v173 + v55;
      ESTROBJ::vInit(
        (ESTROBJ *)&pstro,
        v179[0],
        (int)a7,
        v16,
        (struct RFONTOBJ *)&v168,
        (struct EXFORMOBJ *)v185,
        p_x,
        v187[0],
        *((_DWORD *)v66 + 390),
        *(_DWORD *)(*((_DWORD *)v66 + 255) + 288),
        *(_DWORD *)(*((_DWORD *)v66 + 255) + 292),
        *(_DWORD *)(*((_DWORD *)v66 + 255) + 296),
        (int)v56,
        (int)v173 + v55,
        (unsigned int)v171,
        0,
        v191,
        a11);
      if ( (v215 & 4) == 0 )
      {
        v13 = 0;
        v167 = 0;
LABEL_158:
        v49 = v170;
        goto LABEL_160;
      }
      v67 = (unsigned __int16 *)ESTROBJ::bOpaqueArea((ESTROBJ *)&pstro, (struct _POINTFIX *)&v224, &pstro.rclBkGround);
      v68 = pstro.rclBkGround.left;
      v69 = pstro.rclBkGround.right;
      v179[0] = v67;
      if ( (*(_DWORD *)(v168.iSolidColor + 12) & 0x10000000) != 0 )
      {
        v68 = pstro.rclBkGround.left - 1;
        v69 = pstro.rclBkGround.right + 1;
        --pstro.rclBkGround.left;
        ++pstro.rclBkGround.right;
      }
      if ( (v215 & 0x1400) != 0 )
      {
        ESTROBJ::vEudcOpaqueArea((ESTROBJ *)&pstro, (struct _POINTFIX *)&v224, (int)v67);
        v69 = pstro.rclBkGround.right;
        v68 = pstro.rclBkGround.left;
      }
      if ( hsurf == (HSURF)hdev || v195 == cx )
      {
        v195 = (struct _SURFOBJ *)pstro.rclBkGround.top;
        v70 = pstro.rclBkGround.bottom;
        hsurf = (HSURF)v68;
        hdev = (HDEV)v69;
      }
      else
      {
        if ( v68 < (int)hsurf )
          hsurf = (HSURF)v68;
        if ( pstro.rclBkGround.top < (int)v195 )
          v195 = (struct _SURFOBJ *)pstro.rclBkGround.top;
        if ( v69 > (int)hdev )
          hdev = (HDEV)v69;
        v70 = pstro.rclBkGround.bottom;
        if ( pstro.rclBkGround.bottom <= (int)cx )
        {
LABEL_112:
          if ( a9 == 2 )
          {
            if ( !v179[0] )
            {
              p_rclBkGround = &pstro.rclBkGround;
              v177 = (struct _XLATEOBJ *)&pstro.rclBkGround;
              goto LABEL_116;
            }
            v13 |= 0x10u;
            v167 = v13;
          }
          p_rclBkGround = 0;
LABEL_116:
          if ( v68 >= v69 || (v168.flColorType = 0, pstro.rclBkGround.top >= v70) )
            v168.flColorType = 1;
          if ( (v13 & 8) != 0 && (int)v199 <= v68 && (int)v201 >= v69 && (int)v200 <= pstro.rclBkGround.top )
          {
            v72 = (int)v202 < v70;
            flColorType = v168.flColorType;
            if ( !v72 && !v168.flColorType )
            {
              p_rclBkGround = (RECTL *)&v199;
              v13 &= ~8u;
              v177 = (struct _XLATEOBJ *)&v199;
              v167 = v13;
              goto LABEL_129;
            }
          }
          else
          {
            flColorType = v168.flColorType;
          }
          if ( !p_rclBkGround )
          {
            if ( flColorType )
            {
LABEL_134:
              if ( ((unsigned __int8)v171 & 0xA0) != 0 )
              {
                if ( v213 )
                {
                  v170 = (struct ESTROBJ *)v214;
                  for ( i = (ERECTL *)v214; !ERECTL::bEmpty(i); i = (ERECTL *)((char *)i + 16) )
                    ERECTL::operator+=(i);
                }
                else
                {
                  v13 |= 4u;
                  v170 = 0;
                  v167 = v13;
                }
              }
              if ( (v226 & 4) != 0 )
              {
                if ( (int)v199 > (int)hsurf )
                  goto LABEL_146;
                if ( (int)v201 >= (int)hdev && (int)v200 <= (int)v195 && (int)v202 >= (int)cx )
                {
                  v49 = v170;
                  LOBYTE(v226) = -5;
                  goto LABEL_160;
                }
                if ( (int)v199 > (int)hsurf )
LABEL_146:
                  hsurf = (HSURF)v199;
                if ( (int)v200 > (int)v195 )
                  v195 = (struct _SURFOBJ *)v200;
                if ( (int)v201 < (int)hdev )
                  hdev = (HDEV)v201;
                if ( (int)v202 < (int)cx )
                  cx = (struct _SURFOBJ *)v202;
                if ( (int)hdev < (int)hsurf )
                {
                  v49 = v170;
                  hsurf = (HSURF)hdev;
                  goto LABEL_160;
                }
                if ( (int)cx < (int)v195 )
                {
                  v49 = v170;
                  v195 = cx;
                  goto LABEL_160;
                }
              }
              goto LABEL_158;
            }
LABEL_133:
            v13 |= 1u;
            v167 = v13;
            goto LABEL_134;
          }
LABEL_129:
          if ( p_rclBkGround->left >= p_rclBkGround->right || p_rclBkGround->top >= p_rclBkGround->bottom )
            goto LABEL_134;
          goto LABEL_133;
        }
      }
      cx = (struct _SURFOBJ *)v70;
      goto LABEL_112;
    }
  }
  v76 = 0;
  return v76 != 0;
}
