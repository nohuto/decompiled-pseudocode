/*
 * XREFs of ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C00AC7E0
 * Callers:
 *     GrePolyTextOutW @ 0x1C009994C (GrePolyTextOutW.c)
 *     GreExtTextOutWInternal @ 0x1C009A950 (GreExtTextOutWInternal.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C009CEFC (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C00AE050 (-GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z.c)
 * Callees:
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C0005FBC (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C0006E3C (-vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x1C00240F8 (-dtorHelper@RFONTOBJ@@QEAAXXZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C0068488 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00690E4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C0069D0C (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C00875B0 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C009ECF8 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C00A0B70 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A2CC0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00A8720 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00A9250 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z @ 0x1C00ADB04 (-bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z.c)
 *     bFToL @ 0x1C00F05F8 (bFToL.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C00F5EAC (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     ?pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z @ 0x1C010B2A8 (-pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C011C2E8 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0139B3C (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0139B9C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     ?bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0285B08 (-bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIP.c)
 *     ?bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C0285C68 (-bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_C.c)
 *     ?bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z @ 0x1C02BA98C (-bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z.c)
 *     ?bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z @ 0x1C02BAA04 (-bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vMopUp@TXTCLEANUP@@QEAAXXZ @ 0x1C02BABC4 (-vMopUp@TXTCLEANUP@@QEAAXXZ.c)
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02BC580 (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C02BC974 (-bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02BCB98 (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 */

__int64 __fastcall GreExtTextOutWLocked(
        struct XDCOBJ *a1,
        LONG a2,
        LONG a3,
        int a4,
        struct tagRECT *a5,
        unsigned __int16 *a6,
        unsigned int a7,
        int *a8,
        unsigned int a9,
        void *a10,
        unsigned int a11)
{
  __int64 v11; // r11
  struct tagRECT *v12; // rbx
  unsigned int v14; // r14d
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // edi
  __int64 v19; // rdx
  int v20; // eax
  unsigned int v21; // esi
  int v22; // r13d
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // r10
  int v26; // r12d
  __int64 v27; // rax
  __int64 v28; // r13
  __int64 v29; // rcx
  int v30; // r13d
  int v31; // r12d
  LONG v32; // r8d
  LONG v33; // edx
  LONG v34; // eax
  LONG v35; // ecx
  SURFACE *p_rclBkGround; // r12
  struct DC *v37; // r8
  BOOL v38; // ebx
  __int64 v39; // rcx
  __int64 v40; // r13
  int v41; // eax
  unsigned int v42; // ebx
  int v43; // r8d
  __int64 v44; // rdx
  int v45; // eax
  int v46; // ebx
  int left; // r9d
  int right; // r10d
  int v49; // eax
  LONG v50; // ebx
  __int64 v51; // r8
  int v52; // r9d
  __int64 v53; // rcx
  int v54; // eax
  LONG v55; // edx
  int v56; // eax
  __int64 v57; // rcx
  int v58; // r10d
  unsigned int v59; // ebx
  __int64 v60; // rdx
  __int64 v61; // rax
  struct REGION *v62; // rdx
  RECTL rclBounds; // xmm2
  __int64 v64; // rdx
  __m128i v65; // xmm0
  __int64 v66; // rcx
  __int64 v67; // rsi
  int v68; // r8d
  __int64 v69; // rax
  int v70; // r9d
  int v71; // r10d
  int v72; // r8d
  __int64 v73; // rsi
  int v74; // eax
  int v75; // eax
  __int64 v76; // rdx
  struct _POINTL *v77; // r9
  __int64 v78; // rbx
  unsigned int v79; // r12d
  __int64 v80; // r11
  __int64 v81; // rdi
  struct _BRUSHOBJ *v82; // r13
  BOOL v83; // r10d
  __int64 v84; // rax
  struct _POINTL *v85; // rbx
  int bottom; // r11d
  struct _SURFOBJ *v87; // r8
  int top; // edi
  struct _SURFOBJ *v89; // r9
  struct _RECTL *v90; // r13
  struct _BRUSHOBJ *v91; // r12
  struct _RECTL *v92; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v98; // rax
  __int64 v99; // rcx
  BOOL (__stdcall *v100)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // rbx
  struct _BRUSHOBJ *v101; // r12
  __int64 v102; // rcx
  struct _KTHREAD *v103; // rdi
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 *v107; // rax
  __int64 v108; // rax
  __int64 v109; // rcx
  int v111; // ecx
  __int64 v112; // rax
  LONG v113; // ecx
  __m128i si128; // xmm1
  LONG v115; // eax
  LONG v116; // r10d
  LONG v117; // edx
  int v118; // eax
  __int64 v119; // rcx
  __int64 v120; // r12
  __int64 v121; // rbx
  int v122; // eax
  __int64 v123; // rcx
  __int64 v124; // r8
  LONG v125; // edx
  __int64 v126; // r12
  __int64 v127; // rcx
  __int64 v128; // r8
  __int64 v129; // rcx
  __int64 v130; // rcx
  int v131; // eax
  LONG v132; // ecx
  LONG v133; // eax
  int v134; // r10d
  int v135; // r11d
  unsigned __int64 v136; // rcx
  int v137; // r13d
  int v138; // r12d
  unsigned __int64 v139; // rcx
  int v140; // r8d
  int v141; // edx
  struct EXFORMOBJ *v142; // rdx
  int v143; // r9d
  __int64 v144; // rcx
  __int64 v145; // rax
  int v146; // ebx
  char v147; // al
  unsigned int v148; // eax
  LONG v149; // eax
  LONG v150; // eax
  LONG v151; // r9d
  int v152; // r8d
  __int64 v153; // rdx
  __int64 v154; // r8
  ERECTL *i; // rdx
  unsigned int *v156; // rdx
  __int64 v157; // rdx
  unsigned int v158; // eax
  char v159; // bl
  struct EXFORMOBJ *v160; // rdx
  struct XDCOBJ *v161; // r8
  int v162; // r9d
  int v163; // eax
  struct _RECTL *v164; // rbx
  bool v165; // zf
  struct EXFORMOBJ *v166; // rdx
  int v167; // r9d
  int v168; // eax
  int v169; // eax
  LONG iUniq; // ecx
  LONG v171; // eax
  signed int flXlate; // edx
  unsigned __int64 cEntries; // r8
  struct XDCOBJ *v174; // r8
  int v175; // eax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v178; // rcx
  __int64 CurrentThreadProcess; // rax
  struct XDCOBJ *v180; // r8
  int v181; // eax
  int v182; // eax
  __int64 j; // rdx
  __int64 k; // rdx
  int v185; // eax
  __int64 v186; // rax
  int v187; // ebx
  __int64 v188; // rcx
  __int64 v189; // rax
  RECTL v190; // xmm6
  LONG *p_top; // r13
  LONG v192; // edx
  LONG *v193; // rcx
  struct _SURFOBJ *v194; // r8
  struct _SURFOBJ *v195; // r9
  LONG v196; // ecx
  LONG v197; // eax
  LONG v198; // ecx
  LONG v199; // eax
  struct _XLATEOBJ *v200; // [rsp+28h] [rbp-E8h]
  struct _POINTL *v201; // [rsp+38h] [rbp-D8h]
  struct _POINTL *v202; // [rsp+38h] [rbp-D8h]
  struct _POINTL *v203; // [rsp+38h] [rbp-D8h]
  struct _POINTL *v204; // [rsp+38h] [rbp-D8h]
  struct _POINTL *v205; // [rsp+38h] [rbp-D8h]
  struct _POINTL *v206; // [rsp+40h] [rbp-D0h]
  unsigned int v207; // [rsp+48h] [rbp-C8h]
  unsigned int v208; // [rsp+58h] [rbp-B8h]
  __int64 v209; // [rsp+90h] [rbp-80h] BYREF
  struct _BRUSHOBJ *v210; // [rsp+98h] [rbp-78h] BYREF
  struct _BRUSHOBJ *v211; // [rsp+A0h] [rbp-70h]
  struct _POINTL *v212; // [rsp+A8h] [rbp-68h]
  __int64 v213; // [rsp+B0h] [rbp-60h] BYREF
  int v214; // [rsp+B8h] [rbp-58h] BYREF
  struct _XLATEOBJ *v215; // [rsp+C0h] [rbp-50h]
  struct _RECTL *v216; // [rsp+C8h] [rbp-48h]
  int v217; // [rsp+D0h] [rbp-40h] BYREF
  struct _BRUSHOBJ *v218; // [rsp+D4h] [rbp-3Ch] BYREF
  LONG v219; // [rsp+DCh] [rbp-34h] BYREF
  int v220[4]; // [rsp+E0h] [rbp-30h] BYREF
  struct _RECTL v221; // [rsp+F0h] [rbp-20h] BYREF
  BOOL v222; // [rsp+100h] [rbp-10h]
  int v223; // [rsp+104h] [rbp-Ch]
  struct _XLATEOBJ v224; // [rsp+108h] [rbp-8h] BYREF
  struct _RECTL *v225; // [rsp+120h] [rbp+10h] BYREF
  int v226; // [rsp+128h] [rbp+18h] BYREF
  int v227; // [rsp+12Ch] [rbp+1Ch] BYREF
  unsigned __int16 *v228; // [rsp+130h] [rbp+20h] BYREF
  int *v229; // [rsp+138h] [rbp+28h] BYREF
  _QWORD v230[2]; // [rsp+140h] [rbp+30h] BYREF
  _QWORD v231[2]; // [rsp+150h] [rbp+40h] BYREF
  __int64 v232; // [rsp+160h] [rbp+50h] BYREF
  int v233; // [rsp+168h] [rbp+58h]
  _BYTE v234[8]; // [rsp+170h] [rbp+60h] BYREF
  __int64 v235; // [rsp+178h] [rbp+68h]
  PATHOBJ v236; // [rsp+1F0h] [rbp+E0h] BYREF
  __int64 v237; // [rsp+1F8h] [rbp+E8h]
  PATHOBJ ppo; // [rsp+270h] [rbp+160h] BYREF
  __int64 v239; // [rsp+278h] [rbp+168h]
  PATHOBJ v240; // [rsp+2F0h] [rbp+1E0h] BYREF
  __int64 v241; // [rsp+2F8h] [rbp+1E8h]
  _BYTE v242[8]; // [rsp+370h] [rbp+260h] BYREF
  __int64 v243; // [rsp+378h] [rbp+268h]
  PATHOBJ v244; // [rsp+3F0h] [rbp+2E0h] BYREF
  __int64 v245; // [rsp+3F8h] [rbp+2E8h]
  PATHOBJ v246; // [rsp+470h] [rbp+360h] BYREF
  __int64 v247; // [rsp+478h] [rbp+368h]
  struct _RECTL rclBkGround; // [rsp+4F0h] [rbp+3E0h] BYREF
  struct _RECTL v249; // [rsp+500h] [rbp+3F0h] BYREF
  void *v250[2]; // [rsp+510h] [rbp+400h] BYREF
  struct _CLIPOBJ v251; // [rsp+520h] [rbp+410h] BYREF
  __int64 v252; // [rsp+570h] [rbp+460h]
  int v253; // [rsp+578h] [rbp+468h]
  int v254; // [rsp+5A0h] [rbp+490h]
  __int64 v255; // [rsp+5B0h] [rbp+4A0h]
  struct _RECTL v256; // [rsp+5C0h] [rbp+4B0h] BYREF
  STROBJ pstro; // [rsp+5D0h] [rbp+4C0h] BYREF
  __int64 v258; // [rsp+610h] [rbp+500h]
  int v259; // [rsp+620h] [rbp+510h]
  int v260; // [rsp+624h] [rbp+514h]
  int v261; // [rsp+650h] [rbp+540h]
  _BYTE v262[100]; // [rsp+654h] [rbp+544h] BYREF
  int v263; // [rsp+6B8h] [rbp+5A8h]
  __int64 v264; // [rsp+6D8h] [rbp+5C8h]
  struct _POINTL v265; // [rsp+710h] [rbp+600h] BYREF
  LONG v266; // [rsp+718h] [rbp+608h]
  LONG v267; // [rsp+71Ch] [rbp+60Ch]
  LONG v268; // [rsp+720h] [rbp+610h]
  LONG v269; // [rsp+724h] [rbp+614h]
  int v270; // [rsp+728h] [rbp+618h]
  int v271; // [rsp+72Ch] [rbp+61Ch]
  struct _POINTL v272; // [rsp+730h] [rbp+620h] BYREF

  v11 = 0LL;
  v12 = a5;
  v228 = a6;
  v250[0] = a10;
  v14 = 128;
  v15 = 4;
  HIDWORD(v218) = a3;
  if ( (a4 & 0x10) == 0 )
    v15 = 2;
  LODWORD(v218) = a2;
  v16 = *(_QWORD *)a1;
  LODWORD(v210) = v15;
  v229 = a8;
  v222 = 0;
  v17 = *(_DWORD *)(v16 + 248);
  v223 = 0;
  if ( (v17 & 1) != 0 && (a4 & 4) != 0 )
    goto LABEL_237;
  if ( (*(_DWORD *)(v16 + 36) & 0x10000) == 0 )
  {
    LODWORD(v212) = a4 & 0x2000;
    if ( (a4 & 0x2000) != 0 && !a8 )
    {
LABEL_237:
      EngSetLastError(0x57u);
      return 0LL;
    }
    v18 = a4 & 0xFFFFC36F;
    if ( a5 )
    {
      if ( a5->left == a5->right || a5->top == a5->bottom )
      {
        a5->right = a2;
        a5->left = a2;
        a5->bottom = a3;
        a5->top = a3;
        if ( (a4 & 6) == 2 )
        {
          v12 = 0LL;
          v18 = a4 & 0xFFFFC36D;
        }
      }
    }
    else
    {
      v18 = a4 & 0xFFFFC369;
    }
    v19 = *(_QWORD *)a1;
    if ( !*(_QWORD *)a1 || v18 && (!v12 || (v18 & 0xFFFFFFF9) != 0) )
      return 0;
    v20 = *(_DWORD *)(v19 + 248) & 1;
    if ( v20 )
    {
      if ( (v18 & 4) != 0 )
        return 0;
    }
    LOBYTE(v21) = 0;
    rclBkGround = 0LL;
    if ( v20 )
    {
      v26 = 0;
      v217 = 0;
      v216 = 0LL;
      v22 = 0;
      v214 = 0;
      LODWORD(v23) = 0;
      LODWORD(v24) = 0;
      LODWORD(v224.pulXlate) = 0;
      LODWORD(v25) = 0;
      LODWORD(v215) = 0;
    }
    else
    {
      v225 = *(struct _RECTL **)(v19 + 8LL * (*(_DWORD *)(v19 + 40) & 1) + 1016);
      v22 = (int)v225;
      v224.pulXlate = (ULONG *)((unsigned __int64)v225 >> 32);
      v23 = (unsigned __int64)v225 >> 32;
      v24 = (unsigned __int64)v225 >> 32;
      v25 = (unsigned __int64)v225 >> 32;
      v26 = (int)v225;
      v215 = (struct _XLATEOBJ *)((unsigned __int64)v225 >> 32);
      v214 = HIDWORD(v225);
      v216 = v225;
      v217 = (int)v225;
    }
    v211 = (struct _BRUSHOBJ *)(unsigned int)(16 * v23);
    v27 = *(_QWORD *)(v19 + 976);
    v28 = (unsigned int)(16 * v22);
    v213 = v28;
    *(_DWORD *)&v224.iSrcType = *(_DWORD *)(v27 + 208);
    v224.cEntries = *(_DWORD *)(*(_QWORD *)(v19 + 976) + 108LL) & 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v19 + 976) + 340LL) & 0x1E000) != 0 )
    {
      EXFORMOBJ::vInit((EXFORMOBJ *)&v224, a1, 0x204u, 0);
      LODWORD(v24) = v224.pulXlate;
      v11 = 0LL;
      LODWORD(v25) = (_DWORD)v215;
    }
    else
    {
      *(_QWORD *)&v224.iUniq = v19 + 320;
    }
    v225 = 0LL;
    if ( !v12 )
    {
LABEL_33:
      p_rclBkGround = 0LL;
      v215 = 0LL;
      v216 = 0LL;
      v209 = 0LL;
      v263 = 0;
      if ( !a7 )
        goto LABEL_84;
      v37 = *(struct DC **)a1;
      v38 = (*(_DWORD *)(*(_QWORD *)a1 + 248LL) & 1) != 0;
      if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0 )
      {
        p_rclBkGround = (SURFACE *)*((_QWORD *)v37 + 62);
        SURFACE::bUnMap(p_rclBkGround, 0LL, v37);
      }
      if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v209, a1, v38, (unsigned int)v210) )
        GreAcquireSemaphore(*(_QWORD *)(v209 + 504));
      if ( p_rclBkGround )
        SURFACE::Map(p_rclBkGround);
      if ( !v209 )
        goto LABEL_289;
      v223 = *(_DWORD *)(v209 + 88) & 2;
      v222 = v223 && (*(_DWORD *)(v209 + 716) & 0x8000) == 0;
      v39 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
      v21 = *(_DWORD *)(*(_QWORD *)a1 + 1736LL) | *(_DWORD *)(v39 + 272) & 0x11F;
      if ( *(_BYTE *)(*(_QWORD *)a1 + 1736LL) & 1 | *(_BYTE *)(v39 + 272) & 1 )
      {
        v118 = *(_DWORD *)(v39 + 152);
        if ( (v118 & 0x200) == 0 )
        {
          v152 = (int)v211;
          *(_DWORD *)(v39 + 152) = v118 | 0x100;
          v153 = *(_QWORD *)a1;
          v42 = v28 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 8LL);
          LODWORD(v210) = v42;
          v43 = *(_DWORD *)(*(_QWORD *)(v153 + 976) + 12LL) + v152;
LABEL_46:
          v44 = *(_QWORD *)a1;
          HIDWORD(v210) = v43;
          ESTROBJ::vInit(
            (ESTROBJ *)&pstro,
            v228,
            a7,
            a1,
            (struct RFONTOBJ *)&v209,
            (unsigned int **)&v224,
            (__m128i *)v229,
            (int)v212,
            *(_DWORD *)(v44 + 1740),
            *(_DWORD *)(*(_QWORD *)(v44 + 976) + 280LL),
            *(_DWORD *)(*(_QWORD *)(v44 + 976) + 284LL),
            *(_DWORD *)(*(_QWORD *)(v44 + 976) + 288LL),
            v42,
            v43,
            v21,
            0LL,
            v250[0],
            a11);
          if ( (v263 & 4) != 0 )
          {
            v45 = ESTROBJ::bOpaqueArea((ESTROBJ *)&pstro, (struct _POINTFIX *)&v272, &pstro.rclBkGround);
            v46 = v45;
            left = pstro.rclBkGround.left;
            right = pstro.rclBkGround.right;
            if ( (*(_DWORD *)(v209 + 12) & 0x10000000) != 0 )
            {
              left = pstro.rclBkGround.left - 1;
              right = pstro.rclBkGround.right + 1;
              --pstro.rclBkGround.left;
              ++pstro.rclBkGround.right;
            }
            if ( (v263 & 0x1400) != 0 )
            {
              ESTROBJ::vEudcOpaqueArea((ESTROBJ *)&pstro, (struct _POINTFIX *)&v272, v45);
              right = pstro.rclBkGround.right;
              left = pstro.rclBkGround.left;
            }
            if ( rclBkGround.left == rclBkGround.right || rclBkGround.top == rclBkGround.bottom )
            {
              rclBkGround = pstro.rclBkGround;
            }
            else
            {
              if ( left < rclBkGround.left )
                rclBkGround.left = left;
              if ( pstro.rclBkGround.top < rclBkGround.top )
                rclBkGround.top = pstro.rclBkGround.top;
              if ( right > rclBkGround.right )
                rclBkGround.right = right;
              if ( pstro.rclBkGround.bottom > rclBkGround.bottom )
                rclBkGround.bottom = pstro.rclBkGround.bottom;
            }
            if ( a9 == 2 )
            {
              if ( !v46 )
              {
                p_rclBkGround = (SURFACE *)&pstro.rclBkGround;
                v215 = (struct _XLATEOBJ *)&pstro.rclBkGround;
LABEL_64:
                if ( left >= right || pstro.rclBkGround.top >= pstro.rclBkGround.bottom )
                {
                  v49 = 1;
                  v11 = 0LL;
                }
                else
                {
                  v11 = 0LL;
                  v49 = 0;
                }
                v50 = v249.left;
                if ( (v14 & 8) == 0
                  || v249.left > left
                  || v249.right < right
                  || v249.bottom < pstro.rclBkGround.bottom
                  || v249.top > pstro.rclBkGround.top
                  || v49 )
                {
                  if ( !p_rclBkGround )
                  {
                    if ( v49 )
                      goto LABEL_77;
                    goto LABEL_76;
                  }
                }
                else
                {
                  p_rclBkGround = (SURFACE *)&v249;
                  v14 &= ~8u;
                  v215 = (struct _XLATEOBJ *)&v249;
                }
                if ( *(_DWORD *)p_rclBkGround >= *((_DWORD *)p_rclBkGround + 2)
                  || *((_DWORD *)p_rclBkGround + 1) >= *((_DWORD *)p_rclBkGround + 3) )
                {
                  goto LABEL_77;
                }
LABEL_76:
                v14 |= 1u;
LABEL_77:
                if ( (v21 & 0xA0) != 0 )
                {
                  if ( v261 )
                  {
                    v216 = (struct _RECTL *)v262;
                    for ( i = (ERECTL *)v262; !ERECTL::bEmpty(i); i = (ERECTL *)(v157 + 16) )
                      ERECTL::operator+=((unsigned int *)&rclBkGround, v156);
                    v11 = 0LL;
                  }
                  else
                  {
                    v216 = 0LL;
                    v14 |= 4u;
                  }
                }
                if ( (v18 & 4) != 0 )
                {
                  if ( v50 > rclBkGround.left
                    || v249.right < rclBkGround.right
                    || v249.top > rclBkGround.top
                    || v249.bottom < rclBkGround.bottom )
                  {
                    ERECTL::operator*=(&rclBkGround.left, &v249.left);
                    v11 = 0LL;
                  }
                  else
                  {
                    LOBYTE(v18) = -5;
                  }
                }
LABEL_84:
                if ( (v21 & 1) != 0 )
                {
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 8LL) += v259;
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 12LL) += v260;
                }
                v51 = *(_QWORD *)a1;
                if ( (*(_DWORD *)(*(_QWORD *)a1 + 248LL) & 1) != 0 )
                {
                  v158 = 0;
                  if ( (v18 & 4) == 0 )
                    v158 = v14;
                  v14 = v158;
                  v159 = v158;
                  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v234, a1);
                  if ( v235 )
                  {
                    if ( (v159 & 8) != 0 && !(unsigned int)bAddRectToPath((struct EPATHOBJ *)v234, &v249) )
                      v14 = 0;
                    if ( (v14 & 2) != 0 && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)v234, v160, &v265, v162) )
                      v14 = 0;
                    if ( (v14 & 0x10) != 0 && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)v234, v160, &v272, v162) )
                      v14 = 0;
                    if ( (v14 & 1) != 0
                      && (!p_rclBkGround
                       || (unsigned int)bAddRectToPath((struct EPATHOBJ *)v234, (struct _RECTL *)p_rclBkGround)) )
                    {
                      if ( (v263 & 0x1400) != 0 )
                        v163 = ESTROBJ::bLinkedTextToPath(&pstro, (struct EPATHOBJ *)v234, v161);
                      else
                        v163 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)v234);
                      if ( v163 )
                      {
                        v164 = v216;
                        if ( v216 )
                        {
                          while ( !ERECTL::bEmpty((ERECTL *)v164) )
                          {
                            if ( !(unsigned int)bAddRectToPath((struct EPATHOBJ *)v234, v164) )
                              goto LABEL_313;
                            ++v164;
                          }
                        }
                      }
                      else
                      {
LABEL_313:
                        v14 = 0;
                      }
                    }
                    if ( (v14 & 4) != 0
                      && !(unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)v234) )
                    {
                      v14 = 0;
                    }
                  }
                  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v234);
                  v59 = 1;
                  goto LABEL_162;
                }
                if ( rclBkGround.left == rclBkGround.right || rclBkGround.top == rclBkGround.bottom )
                  goto LABEL_161;
                v52 = *(_DWORD *)(v51 + 36);
                if ( (v52 & 0xE0) != 0 )
                {
                  v53 = *(_DWORD *)(v51 + 40) & 1;
                  v221 = rclBkGround;
                  v54 = *(_DWORD *)(v51 + 8 * v53 + 1016);
                  v55 = rclBkGround.left - v54;
                  v221.right = rclBkGround.right - v54;
                  v56 = *(_DWORD *)(v51 + 8 * v53 + 1020);
                  v57 = v51;
                  v221.top = rclBkGround.top - v56;
                  v221.bottom = rclBkGround.bottom - v56;
                  v221.left = v55;
                  if ( (v52 & 0x20) != 0 )
                  {
                    ERECTL::operator|=((_DWORD *)(v51 + 1064), &v221);
                    v57 = *(_QWORD *)a1;
                  }
                  v51 = v57;
                  if ( (*(_DWORD *)(v57 + 36) & 0x80u) != 0 )
                  {
                    ERECTL::operator|=((_DWORD *)(v57 + 1096), &v221);
                    v51 = *(_QWORD *)a1;
                  }
                }
                if ( v223 || (v18 & 4) != 0 )
                {
                  v59 = 1;
                  v58 = 1;
                }
                else
                {
                  v58 = v11;
                  v59 = 1;
                }
                v60 = *(_QWORD *)(v51 + 1152);
                if ( !v60
                  || (*(_DWORD *)(v51 + 40) & 2) == 0
                  || (v165 = (unsigned int)DC::bDpiScaledSurface((DC *)v51) == 0, v61 = v60, v165) )
                {
                  v61 = *(_QWORD *)(v51 + 1136);
                }
                if ( v61 )
                {
                  if ( !v60 || (*(_DWORD *)(v51 + 40) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface((DC *)v51) )
                    v62 = *(struct REGION **)(v51 + 1136);
                }
                else
                {
                  v62 = DC::prgnVisSnap((DC *)v51);
                }
                v252 = v11;
                v253 = v11;
                v254 = 1;
                v255 = v11;
                XCLIPOBJ::vSetup((XCLIPOBJ *)&v251, v62, (struct ERECTL *)&rclBkGround, v58);
                rclBounds = v251.rclBounds;
                v64 = (unsigned int)_mm_cvtsi128_si32((__m128i)v251.rclBounds);
                v65 = _mm_srli_si128((__m128i)v251.rclBounds, 8);
                rclBkGround = v251.rclBounds;
                v251.rclBounds.left = v64;
                if ( (_DWORD)v64 == _mm_cvtsi128_si32(v65)
                  || _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rclBounds, 4)) == _mm_cvtsi128_si32(
                                                                                   _mm_srli_si128(
                                                                                     (__m128i)rclBounds,
                                                                                     12)) )
                {
                  goto LABEL_162;
                }
                v66 = *(_QWORD *)a1;
                v67 = *(_QWORD *)a1;
                v68 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
                if ( (v68 & 0xE0) != 0 )
                {
                  *(RECTL *)v250 = rclBounds;
                  v69 = *(_DWORD *)(v66 + 40) & 1;
                  v64 = (unsigned int)(v64 - *(_DWORD *)(v66 + 8 * v69 + 1016));
                  LODWORD(v250[0]) = v64;
                  v70 = rclBounds.right - *(_DWORD *)(v66 + 8 * v69 + 1016);
                  LODWORD(v250[1]) = v70;
                  v71 = rclBounds.top - *(_DWORD *)(v66 + 8 * v69 + 1020);
                  HIDWORD(v250[0]) = v71;
                  HIDWORD(v250[1]) = rclBounds.bottom - *(_DWORD *)(v66 + 8 * v69 + 1020);
                  if ( (v68 & 0x40) != 0 )
                  {
                    v72 = *(_DWORD *)(v66 + 1080);
                    if ( v72 == *(_DWORD *)(v66 + 1088) || *(_DWORD *)(v66 + 1084) == *(_DWORD *)(v66 + 1092) )
                    {
                      *(_OWORD *)(v66 + 1080) = *(_OWORD *)v250;
                    }
                    else
                    {
                      if ( (int)v64 < v72 )
                      {
                        *(_DWORD *)(v66 + 1080) = v64;
                        v70 = (int)v250[1];
                        v71 = HIDWORD(v250[0]);
                      }
                      if ( v71 < *(_DWORD *)(v66 + 1084) )
                      {
                        *(_DWORD *)(v66 + 1084) = v71;
                        v70 = (int)v250[1];
                      }
                      if ( v70 > *(_DWORD *)(v66 + 1088) )
                        *(_DWORD *)(v66 + 1088) = v70;
                      if ( SHIDWORD(v250[1]) > *(_DWORD *)(v66 + 1092) )
                        *(_DWORD *)(v66 + 1092) = HIDWORD(v250[1]);
                    }
                    v67 = *(_QWORD *)a1;
                    v224.pulXlate = *(ULONG **)(*(_QWORD *)a1 + 1168LL);
                    if ( v224.pulXlate )
                    {
                      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v231);
                      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v231);
                      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v230);
                      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v230);
                      if ( v231[0] )
                      {
                        if ( v230[0] )
                        {
                          RGNOBJ::vSet((RGNOBJ *)v230, (struct _RECTL *)v250);
                          if ( RGNOBJ::bMerge(
                                 (RGNOBJ *)v231,
                                 (struct RGNOBJ *)&v224.pulXlate,
                                 (struct RGNOBJ *)v230,
                                 0xEu) )
                          {
                            RGNOBJ::vSwap((RGNOBJ *)&v224.pulXlate, (struct RGNOBJ *)v231);
                            *(_QWORD *)(*(_QWORD *)a1 + 1168LL) = v224.pulXlate;
                          }
                        }
                      }
                      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v230);
                      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v231);
                      v67 = *(_QWORD *)a1;
                    }
                  }
                }
                v73 = *(_QWORD *)(v67 + 496);
                if ( !v73
                  || ((*(_DWORD *)(v73 + 116) & 8) != 0 || *(_QWORD *)(v73 + 224))
                  && (v66 = 512LL, (*(_WORD *)(v73 + 102) & 0x200) != 0) )
                {
LABEL_162:
                  if ( (v263 & 0x801) != 0 )
                  {
                    if ( (v263 & 1) != 0 )
                      FreeTmpBuffer(v258);
                    if ( (v263 & 0x800) != 0 )
                      Win32FreePool(v264);
                  }
                  if ( v209 )
                  {
                    if ( (*(_DWORD *)(v209 + 712) & 0x81) != 0 )
                      RFONTOBJ::dtorHelper((RFONTOBJ *)&v209);
                    v109 = *(_QWORD *)(v209 + 616);
                    if ( v109 )
                    {
                      Win32FreePool(v109);
                      *(_QWORD *)(v209 + 624) = 0LL;
                      *(_QWORD *)(v209 + 616) = 0LL;
                    }
                    EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(v209 + 504));
                    GreReleaseSemaphoreInternal(*(_QWORD *)(v209 + 504));
                  }
                  if ( v225 )
                    TXTCLEANUP::vMopUp((TXTCLEANUP *)&v225);
                  if ( v14 )
                    return v59;
                  return 0;
                }
                v74 = *(_DWORD *)(v73 + 112);
                if ( (v74 & 0x800) != 0 )
                {
                  v75 = UserSurfaceAccessCheck(*(_QWORD *)(v73 + 648));
                }
                else
                {
                  if ( (v74 & 0x10000000) == 0 )
                    goto LABEL_123;
                  v75 = UserScreenAccessCheck(v66, v64);
                }
                if ( !v75 )
                  goto LABEL_162;
LABEL_123:
                v76 = *(_QWORD *)a1;
                v77 = (struct _POINTL *)v76;
                v78 = *(_QWORD *)(v73 + 128);
                v213 = *(_QWORD *)(v73 + 48);
                v79 = *(_DWORD *)(v76 + 72);
                v80 = v76 + 1456;
                v81 = *(_QWORD *)(v76 + 88);
                v82 = (struct _BRUSHOBJ *)(v76 + 1592);
                v211 = (struct _BRUSHOBJ *)(v76 + 1456);
                v83 = 0;
                v210 = (struct _BRUSHOBJ *)(v76 + 1592);
                if ( (v79 & 0x10000000) != 0 )
                {
                  v83 = !v222;
                  *(_DWORD *)(*(_QWORD *)(v76 + 976) + 152LL) |= 4u;
                  --*(_DWORD *)(v76 + 1580);
                  v76 = *(_QWORD *)a1;
                  v77 = *(struct _POINTL **)a1;
                }
                v84 = *(_QWORD *)(v76 + 976);
                if ( ((*(_BYTE *)(v76 + 316) | *(_BYTE *)(v84 + 152)) & 0xC) != 0 )
                {
                  if ( ((*(_BYTE *)(v76 + 316) | *(_BYTE *)(v84 + 152)) & 4) != 0 )
                  {
                    EBRUSHOBJ::vInitBrush(v80, v76, gpbrText, v81, v78, v73, v83);
                    v76 = *(_QWORD *)a1;
                  }
                  if ( ((*(_BYTE *)(v76 + 316) | *(_BYTE *)(*(_QWORD *)(v76 + 976) + 152LL)) & 8) != 0 )
                  {
                    EBRUSHOBJ::vInitBrush(v82, v76, gpbrBackground, v81, v78, v73, (v79 >> 15) & 1);
                    v76 = *(_QWORD *)a1;
                  }
                  *(_DWORD *)(*(_QWORD *)(v76 + 976) + 152LL) &= 0xFFFFFFF3;
                  *(_DWORD *)(*(_QWORD *)a1 + 316LL) &= 0xFFFFFFF3;
                  v77 = *(struct _POINTL **)a1;
                }
                v85 = v77 + 147;
                v212 = v77 + 147;
                if ( (v14 & 0x1A) != 0 )
                {
                  if ( (v14 & 8) == 0 || ERECTL::bEmpty((ERECTL *)&v249) )
                  {
                    bottom = rclBkGround.bottom;
                    LODWORD(v87) = rclBkGround.right;
                    top = rclBkGround.top;
                    v89 = (struct _SURFOBJ *)(unsigned int)rclBkGround.left;
                  }
                  else
                  {
                    v89 = (struct _SURFOBJ *)(unsigned int)rclBkGround.left;
                    v113 = v249.left;
                    rclBkGround.left = (int)v89;
                    if ( (int)v89 > v249.left )
                      v113 = (int)v89;
                    si128 = _mm_load_si128((const __m128i *)&rclBkGround);
                    v115 = v249.right;
                    v116 = v249.top;
                    v87 = (struct _SURFOBJ *)(unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(si128, 8));
                    top = _mm_cvtsi128_si32(_mm_srli_si128(si128, 4));
                    v251.rclBounds.left = v113;
                    rclBkGround.right = (int)v87;
                    if ( (int)v87 < v249.right )
                      v115 = (int)v87;
                    rclBkGround.top = top;
                    v251.rclBounds.right = v115;
                    if ( top > v249.top )
                      v116 = top;
                    v117 = v249.bottom;
                    bottom = _mm_cvtsi128_si32(_mm_srli_si128(_mm_load_si128((const __m128i *)&rclBkGround), 12));
                    v251.rclBounds.top = v116;
                    rclBkGround.bottom = bottom;
                    if ( bottom < v249.bottom )
                      v117 = bottom;
                    v251.rclBounds.bottom = v117;
                    if ( v113 < v115 && v116 < v117 )
                    {
                      ++*(_DWORD *)(v73 + 92);
                      TextOutBitBlt(
                        (struct SURFACE *)v73,
                        (struct RFONTOBJ *)&v209,
                        v87,
                        v89,
                        &v251,
                        v200,
                        &v251.rclBounds,
                        v201,
                        v206,
                        v82,
                        v85,
                        v208);
                      bottom = rclBkGround.bottom;
                      LODWORD(v87) = rclBkGround.right;
                      v89 = (struct _SURFOBJ *)(unsigned int)rclBkGround.left;
                      top = rclBkGround.top;
                    }
                    v251.rclBounds = rclBkGround;
                  }
                  if ( (v14 & 0x12) != 0 )
                  {
                    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                    if ( !v239 )
                      goto LABEL_343;
                    if ( (v14 & 2) != 0 && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v166, &v265, v167) )
                      v14 = 0;
                    if ( (v14 & 0x10) != 0 && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v166, &v272, v167) )
                      v14 = 0;
                    if ( (v14 & 0x12) != 0 )
                    {
                      v168 = EPATHOBJ::bTextOutSimpleFill(
                               &ppo,
                               a1,
                               (struct RFONTOBJ *)&v209,
                               (struct PDEVOBJ *)&v213,
                               (struct SURFACE *)v73,
                               &v251,
                               v82,
                               v85,
                               (unsigned int)v206,
                               v207);
                      v90 = 0LL;
                      if ( !v168 )
                        v14 = 0;
                    }
                    else
                    {
LABEL_343:
                      v90 = 0LL;
                    }
                    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                    bottom = rclBkGround.bottom;
                    LODWORD(v87) = rclBkGround.right;
                    v89 = (struct _SURFOBJ *)(unsigned int)rclBkGround.left;
                    top = rclBkGround.top;
LABEL_129:
                    if ( (v14 & 1) == 0 )
                    {
                      v101 = v211;
LABEL_160:
                      if ( (v14 & 4) == 0 )
                      {
LABEL_161:
                        v59 = 1;
                        goto LABEL_162;
                      }
                      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v246);
                      if ( !v247
                        || !(unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)&v246)
                        || !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                            &v246,
                                            a1,
                                            (struct RFONTOBJ *)&v209,
                                            (struct PDEVOBJ *)&v213,
                                            (struct SURFACE *)v73,
                                            &v251,
                                            v101,
                                            v85,
                                            (unsigned int)v206,
                                            v207) )
                      {
                        v14 = 0;
                      }
                      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v246);
                      v59 = 1;
                      goto LABEL_162;
                    }
                    if ( v223 )
                    {
                      LOWORD(v79) = -257;
                      v169 = 64;
                      if ( (*(_DWORD *)(v209 + 716) & 0x8000) == 0 )
                        v169 = 32;
                      v14 |= v169;
                    }
                    if ( v215 && (v79 & 0x100) == 0 )
                    {
                      iUniq = v215->iUniq;
                      v171 = *(_DWORD *)&v215->iSrcType;
                      flXlate = v215->flXlate;
                      if ( (int)v89 > (signed int)v215->iUniq )
                        iUniq = (int)v89;
                      v91 = v210;
                      v251.rclBounds.left = iUniq;
                      if ( (int)v87 < v171 )
                        v171 = (int)v87;
                      cEntries = v215->cEntries;
                      v251.rclBounds.right = v171;
                      if ( top > flXlate )
                        flXlate = top;
                      v251.rclBounds.top = flXlate;
                      if ( bottom < (int)cEntries )
                        cEntries = (unsigned int)bottom;
                      v251.rclBounds.bottom = cEntries;
                      if ( iUniq < v171 && flXlate < (int)cEntries )
                      {
                        ++*(_DWORD *)(v73 + 92);
                        TextOutBitBlt(
                          (struct SURFACE *)v73,
                          (struct RFONTOBJ *)&v209,
                          (struct _SURFOBJ *)cEntries,
                          v89,
                          &v251,
                          v200,
                          &v251.rclBounds,
                          v201,
                          v206,
                          v91,
                          v85,
                          v208);
                      }
                      v251.rclBounds = rclBkGround;
                      v215 = 0LL;
                    }
                    else
                    {
                      v91 = v210;
                    }
                    v92 = v216;
                    if ( v216 && *(_DWORD *)(v213 + 2140) != 4 )
                    {
                      v90 = v216;
                      v216 = 0LL;
                    }
                    if ( (v14 & 0x20) == 0 )
                    {
                      CurrentThread = KeGetCurrentThread();
                      if ( (!(unsigned __int8)KeIsAttachedProcess(v92)
                         || (CurrentProcess = PsGetCurrentProcess(v95, v94, v96),
                             ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                             CurrentThreadProcess = PsGetCurrentThreadProcess(v178),
                             ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
                        && (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) != 0LL
                        && (v98 = *ThreadWin32Thread) != 0 )
                      {
                        v99 = *(_QWORD *)(v98 + 304);
                      }
                      else
                      {
                        v99 = *(_QWORD *)(v73 + 104);
                      }
                      if ( v99 )
                        SURFACE::pdcoAA((SURFACE *)v73, 0LL);
                      if ( (*(_DWORD *)(v73 + 112) & 8) != 0 )
                        v100 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*(_QWORD *)(v73 + 48) + 2872LL);
                      else
                        v100 = EngTextOut;
                      if ( (char *)v100 == (char *)SpTextOut || (char *)v100 == (char *)BmpDevTextOut )
                      {
                        if ( (*(_DWORD *)(v209 + 12) & 0x10010000) != 0 )
                          SURFACE::pdcoAA((SURFACE *)v73, a1);
                      }
                      else
                      {
                        v111 = *(_DWORD *)(v209 + 12);
                        if ( (v111 & 0x10000) == 0 )
                          goto LABEL_147;
                        v112 = *(_QWORD *)a1;
                        if ( (v111 & 0x10000000) != 0 )
                        {
                          if ( (*(_DWORD *)(v112 + 76) & 0x4000) != 0 )
                            goto LABEL_147;
                        }
                        else if ( (*(_DWORD *)(v112 + 72) & 0x1000000) != 0 )
                        {
                          goto LABEL_147;
                        }
                        if ( v100 != EngTextOut )
                          SURFACE::pdcoAA((SURFACE *)v73, a1);
                        v100 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))SpTextOut;
                      }
LABEL_147:
                      if ( (v14 & 0x40) == 0 )
                      {
                        ++*(_DWORD *)(v73 + 92);
                        if ( (v14 & 4) == 0 )
                        {
                          if ( (v263 & 0x1400) == 0 )
                          {
                            if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 40LL) & 0x8080) == 0x80
                              && !*(_DWORD *)(v209 + 92) )
                            {
                              v228 = (unsigned __int16 *)ghsemPrintKView;
                              GreAcquireSemaphore(ghsemPrintKView);
                              for ( j = gpPrintKViewList; j; j = *(_QWORD *)(j + 32) )
                              {
                                if ( *(_QWORD *)j == *(_QWORD *)(*(_QWORD *)(v209 + 128) + 80LL) )
                                  ++*(_DWORD *)(j + 12);
                              }
                              SEMOBJ::vUnlock((SEMOBJ *)&v228);
                            }
                            v207 = 3341;
                            v206 = v212;
                            v201 = (struct _POINTL *)v91;
                            v101 = v211;
                            v200 = v215;
                            if ( !((unsigned int (__fastcall *)(__int64, STROBJ *, __int64, struct _CLIPOBJ *, struct _RECTL *))v100)(
                                    v73 + 24,
                                    &pstro,
                                    v209,
                                    &v251,
                                    v216) )
                              v14 = 0;
                            v102 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
                            if ( (*(_DWORD *)(v102 + 40) & 0x8080) == 0x80 && !*(_DWORD *)(v209 + 92) )
                            {
                              v229 = (int *)ghsemPrintKView;
                              GreAcquireSemaphore(ghsemPrintKView);
                              for ( k = gpPrintKViewList; k; k = *(_QWORD *)(k + 32) )
                              {
                                if ( *(_QWORD *)k == *(_QWORD *)(*(_QWORD *)(v209 + 128) + 80LL) )
                                {
                                  v185 = *(_DWORD *)(k + 12);
                                  if ( v185 )
                                    *(_DWORD *)(k + 12) = v185 - 1;
                                }
                              }
                              SEMOBJ::vUnlock((SEMOBJ *)&v229);
                            }
                            v85 = v212;
                            goto LABEL_155;
                          }
                          v85 = v212;
                          v202 = (struct _POINTL *)v91;
                          v101 = v211;
                          v131 = bProxyDrvTextOut(
                                   a1,
                                   (struct SURFACE *)v73,
                                   (struct ESTROBJ *)&pstro,
                                   &v251,
                                   v216,
                                   (struct _RECTL *)v215,
                                   v211,
                                   (struct _BRUSHOBJ *)v202,
                                   v212,
                                   (struct RFONTOBJ *)&v209,
                                   (struct PDEVOBJ *)&v213,
                                   0,
                                   &rclBkGround);
LABEL_234:
                          if ( !v131 )
                            v14 = 0;
                          goto LABEL_155;
                        }
                        PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v244);
                        if ( v245
                          && (unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)&v244) )
                        {
                          if ( (v263 & 0x1400) != 0 )
                          {
                            v85 = v212;
                            v205 = (struct _POINTL *)v91;
                            v101 = v211;
                            if ( (unsigned int)bProxyDrvTextOut(
                                                 a1,
                                                 (struct SURFACE *)v73,
                                                 (struct ESTROBJ *)&pstro,
                                                 &v251,
                                                 v216,
                                                 (struct _RECTL *)v215,
                                                 v211,
                                                 (struct _BRUSHOBJ *)v205,
                                                 v212,
                                                 (struct RFONTOBJ *)&v209,
                                                 0LL,
                                                 0,
                                                 &rclBkGround) )
                            {
LABEL_399:
                              if ( (unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                                   &v244,
                                                   a1,
                                                   (struct RFONTOBJ *)&v209,
                                                   (struct PDEVOBJ *)&v213,
                                                   (struct SURFACE *)v73,
                                                   &v251,
                                                   v101,
                                                   v85,
                                                   (unsigned int)v206,
                                                   v207) )
                                goto LABEL_403;
                            }
                          }
                          else
                          {
                            v207 = 3341;
                            v206 = v212;
                            v201 = (struct _POINTL *)v91;
                            v101 = v211;
                            v200 = v215;
                            v182 = ((__int64 (__fastcall *)(__int64, STROBJ *, __int64, struct _CLIPOBJ *, struct _RECTL *))v100)(
                                     v73 + 24,
                                     &pstro,
                                     v209,
                                     &v251,
                                     v216);
                            v85 = v212;
                            if ( v182 )
                              goto LABEL_399;
                          }
                        }
                        else
                        {
                          v101 = v211;
                          v85 = v212;
                        }
                        v14 = 0;
LABEL_403:
                        v14 &= ~4u;
                        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v244);
LABEL_155:
                        *(_QWORD *)(v73 + 104) = 0LL;
                        v103 = KeGetCurrentThread();
                        if ( !(unsigned __int8)KeIsAttachedProcess(v102)
                          || (v186 = PsGetCurrentProcess(v105, v104, v106),
                              v187 = PsGetProcessSessionIdEx(v186),
                              v189 = PsGetCurrentThreadProcess(v188),
                              v165 = v187 == (unsigned int)PsGetProcessSessionIdEx(v189),
                              v85 = v212,
                              v165) )
                        {
                          v107 = (__int64 *)PsGetThreadWin32Thread(v103);
                          if ( v107 )
                          {
                            v108 = *v107;
                            if ( v108 )
                              *(_QWORD *)(v108 + 304) = 0LL;
                          }
                        }
                        goto LABEL_159;
                      }
                      if ( (v263 & 0x1400) != 0 )
                      {
                        v85 = v212;
                        v204 = (struct _POINTL *)v91;
                        v101 = v211;
                        v131 = bProxyDrvTextOut(
                                 a1,
                                 (struct SURFACE *)v73,
                                 (struct ESTROBJ *)&pstro,
                                 &v251,
                                 0LL,
                                 0LL,
                                 v211,
                                 (struct _BRUSHOBJ *)v204,
                                 v212,
                                 (struct RFONTOBJ *)&v209,
                                 (struct PDEVOBJ *)&v213,
                                 *(_DWORD *)(*(_QWORD *)a1 + 72LL),
                                 &rclBkGround);
                        goto LABEL_234;
                      }
                      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v236);
                      if ( v237 )
                      {
                        if ( (v263 & 0x1400) != 0 )
                          v181 = ESTROBJ::bLinkedTextToPath(&pstro, (struct EPATHOBJ *)&v236, v180);
                        else
                          v181 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)&v236);
                        v85 = v212;
                        v101 = v211;
                        if ( v181
                          && (v236.cCurves <= 1
                           || (unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                              &v236,
                                              a1,
                                              (struct RFONTOBJ *)&v209,
                                              (struct PDEVOBJ *)&v213,
                                              (struct SURFACE *)v73,
                                              &v251,
                                              v211,
                                              v212,
                                              (unsigned int)v206,
                                              v207)) )
                        {
                          goto LABEL_392;
                        }
                      }
                      else
                      {
                        v85 = v212;
                        v101 = v211;
                      }
                      v14 = 0;
LABEL_392:
                      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v236);
                      goto LABEL_155;
                    }
                    if ( (v263 & 0x1400) != 0 )
                    {
                      v203 = (struct _POINTL *)v91;
                      v101 = v211;
                      if ( !(unsigned int)bProxyDrvTextOut(
                                            a1,
                                            (struct SURFACE *)v73,
                                            (struct ESTROBJ *)&pstro,
                                            &v251,
                                            0LL,
                                            0LL,
                                            v211,
                                            (struct _BRUSHOBJ *)v203,
                                            v85,
                                            (struct RFONTOBJ *)&v209,
                                            (struct PDEVOBJ *)&v213,
                                            *(_DWORD *)(*(_QWORD *)a1 + 72LL),
                                            &rclBkGround) )
                        v14 = 0;
                      goto LABEL_159;
                    }
                    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v240);
                    if ( v241 )
                    {
                      if ( (v263 & 0x1400) != 0 )
                        v175 = ESTROBJ::bLinkedTextToPath(&pstro, (struct EPATHOBJ *)&v240, v174);
                      else
                        v175 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)&v240);
                      v101 = v211;
                      if ( v175
                        && (unsigned int)EPATHOBJ::bTextOutSimpleStroke1(
                                           &v240,
                                           a1,
                                           (struct RFONTOBJ *)&v209,
                                           (struct PDEVOBJ *)&v213,
                                           (struct SURFACE *)v73,
                                           &v251,
                                           v211,
                                           v85,
                                           (unsigned int)v206) )
                      {
                        goto LABEL_374;
                      }
                    }
                    else
                    {
                      v101 = v211;
                    }
                    v14 = 0;
LABEL_374:
                    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v240);
LABEL_159:
                    if ( v90 )
                    {
                      v190 = v251.rclBounds;
                      ++*(_DWORD *)(v73 + 92);
                      p_top = &v90->top;
                      v221 = v190;
                      while ( !ERECTL::bEmpty((ERECTL *)(p_top - 1)) )
                      {
                        v196 = *v193;
                        v197 = p_top[1];
                        if ( (int)v195 > v196 )
                          v196 = (int)v195;
                        v251.rclBounds.left = v196;
                        if ( v192 < v197 )
                          v197 = v192;
                        v251.rclBounds.right = v197;
                        if ( v196 < v197 )
                        {
                          v198 = *p_top;
                          v199 = p_top[2];
                          if ( (int)v194 > *p_top )
                            v198 = (int)v194;
                          v251.rclBounds.top = v198;
                          if ( v190.bottom < v199 )
                            v199 = v190.bottom;
                          v251.rclBounds.bottom = v199;
                          if ( v198 < v199 )
                            TextOutBitBlt(
                              (struct SURFACE *)v73,
                              (struct RFONTOBJ *)&v209,
                              v194,
                              v195,
                              &v251,
                              v200,
                              &v251.rclBounds,
                              v201,
                              v206,
                              v101,
                              v85,
                              v208);
                        }
                        p_top += 4;
                      }
                      v251.rclBounds = v190;
                    }
                    goto LABEL_160;
                  }
                }
                else
                {
                  bottom = rclBkGround.bottom;
                  LODWORD(v87) = rclBkGround.right;
                  top = rclBkGround.top;
                  v89 = (struct _SURFOBJ *)(unsigned int)rclBkGround.left;
                }
                v90 = 0LL;
                goto LABEL_129;
              }
              v14 |= 0x10u;
            }
            p_rclBkGround = (SURFACE *)v215;
            goto LABEL_64;
          }
LABEL_289:
          p_rclBkGround = (SURFACE *)v215;
          v11 = 0LL;
          v14 = 0;
          goto LABEL_84;
        }
        *(_DWORD *)(v39 + 152) = v118 & 0xFFFFFDFF;
        v119 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
        *(_DWORD *)(v119 + 152) |= 0x100u;
        v120 = *(_QWORD *)&v224.iUniq;
        v121 = *(_QWORD *)a1;
        v122 = *(_DWORD *)(*(_QWORD *)&v224.iUniq + 32LL);
        if ( (v122 & 2) != 0 )
        {
          LODWORD(v210) = *(_DWORD *)(*(_QWORD *)&v224.iUniq + 24LL) + 16 * *(_DWORD *)(*(_QWORD *)(v121 + 976) + 216LL);
          HIDWORD(v210) = *(_DWORD *)(*(_QWORD *)&v224.iUniq + 28LL) + 16 * *(_DWORD *)(*(_QWORD *)(v121 + 976) + 220LL);
        }
        else if ( (v122 & 1) != 0 )
        {
          HIDWORD(v218) = 0;
          bFToL(v119, (char *)&v218 + 4, 0LL);
          LODWORD(v210) = *(_DWORD *)(v120 + 24) + HIDWORD(v218);
          LODWORD(v218) = 0;
          bFToL((unsigned int)v210, &v218, v154);
          HIDWORD(v210) = *(_DWORD *)(v120 + 28) + (_DWORD)v218;
        }
        else
        {
          EXFORMOBJ::bXform(
            (EXFORMOBJ *)&v224,
            (struct _POINTL *)(*(_QWORD *)(v121 + 976) + 216LL),
            (struct _POINTFIX *)&v210,
            1uLL);
          v121 = *(_QWORD *)a1;
        }
        *(_QWORD *)(*(_QWORD *)(v121 + 976) + 8LL) = v210;
        v42 = v28 + (_DWORD)v210;
        v43 = (_DWORD)v211 + HIDWORD(v210);
      }
      else
      {
        v40 = *(_QWORD *)&v224.iUniq;
        v41 = *(_DWORD *)(*(_QWORD *)&v224.iUniq + 32LL);
        if ( (v41 & 2) != 0 )
        {
          v42 = v213 + 16 * (_DWORD)v218 + *(_DWORD *)(*(_QWORD *)&v224.iUniq + 24LL);
          LODWORD(v210) = v42;
          v43 = (_DWORD)v211 + 16 * HIDWORD(v218) + *(_DWORD *)(*(_QWORD *)&v224.iUniq + 28LL);
          goto LABEL_46;
        }
        if ( (v41 & 1) != 0 )
        {
          v214 = 0;
          bFToL(v39, &v214, 0LL);
          v42 = v213 + v214 + *(_DWORD *)(v40 + 24);
          v219 = 0;
          LODWORD(v210) = v42;
          bFToL(v123, &v219, v124);
          v43 = (_DWORD)v211 + v219 + *(_DWORD *)(v40 + 28);
          goto LABEL_46;
        }
        v210 = v218;
        EXFORMOBJ::bXform((EXFORMOBJ *)&v224, (struct _POINTL *)&v210, (struct _POINTFIX *)&v210, 1uLL);
        v42 = v213 + (_DWORD)v210;
        v43 = (_DWORD)v211 + HIDWORD(v210);
      }
      LODWORD(v210) = v42;
      goto LABEL_46;
    }
    v220[0] = v18 & 2;
    v14 = 136;
    if ( (v18 & 2) == 0 )
      v14 = 128;
    v219 = v14;
    v29 = *(unsigned int *)(*(_QWORD *)&v224.iUniq + 32LL);
    if ( (v29 & 2) != 0 )
    {
      v30 = v12->left + v26 + ((*(_DWORD *)(*(_QWORD *)&v224.iUniq + 24LL) + 8) >> 4);
      v249.left = v30;
      v31 = v12->right + (_DWORD)v216 + ((*(_DWORD *)(*(_QWORD *)&v224.iUniq + 24LL) + 8) >> 4);
      v249.right = v31;
      v32 = v24 + v12->top + ((*(_DWORD *)(*(_QWORD *)&v224.iUniq + 28LL) + 8) >> 4);
      v249.top = v32;
      v33 = v25 + v12->bottom + ((*(_DWORD *)(*(_QWORD *)&v224.iUniq + 28LL) + 8) >> 4);
      v249.bottom = v33;
      goto LABEL_23;
    }
    v125 = v12->left;
    if ( (v29 & 1) != 0 )
    {
      v217 = 0;
      bFToL(v29, &v217, 0LL);
      v126 = *(_QWORD *)&v224.iUniq;
      v30 = (_DWORD)v216 + ((*(_DWORD *)(*(_QWORD *)&v224.iUniq + 24LL) + v217 + 8) >> 4);
      v249.left = v30;
      v226 = 0;
      bFToL(v127, &v226, v128);
      LODWORD(v126) = *(_DWORD *)(v126 + 24) + v226 + 8;
      v227 = 0;
      v31 = (_DWORD)v216 + ((int)v126 >> 4);
      v249.right = v31;
      bFToL(v129, &v227, 0LL);
      v249.top = v214 + ((v227 + 8 + *(_DWORD *)(*(_QWORD *)&v224.iUniq + 28LL)) >> 4);
      v219 = v249.top;
      v220[0] = 0;
      bFToL(v130, v220, 0LL);
      v32 = v219;
      v33 = v214 + ((v220[0] + 8 + *(_DWORD *)(*(_QWORD *)&v224.iUniq + 28LL)) >> 4);
      v249.bottom = v33;
    }
    else
    {
      v132 = v12->top;
      v265.y = v12->bottom;
      v133 = v12->right;
      v267 = v132;
      v269 = v132;
      v265.x = v125;
      v266 = v125;
      v268 = v133;
      EXFORMOBJ::bXform((EXFORMOBJ *)&v224, &v265, (struct _POINTFIX *)&v265, 3uLL);
      v134 = v265.x + v268 - v266;
      v135 = v265.y + v269 - v267;
      v270 = v134;
      v271 = v135;
      v136 = (v266 > v265.x) ^ (unsigned __int64)(v266 <= v268);
      v137 = *(&v265.x + 2 * v136);
      v138 = *(&v268 + 2 * v136);
      if ( v137 > v138 )
        v137 += 15;
      else
        v138 += 15;
      v30 = v217 + (v137 >> 4);
      v31 = v217 + (v138 >> 4);
      v249.right = v31;
      v249.left = v30;
      v139 = (v267 > v265.y) ^ (unsigned __int64)(v267 <= v269);
      v140 = *(&v265.y + 2 * v139);
      v141 = *(&v269 + 2 * v139);
      if ( v140 > v141 )
        v140 += 15;
      else
        v141 += 15;
      v32 = v214 + (v140 >> 4);
      v33 = v214 + (v141 >> 4);
      v249.top = v32;
      v249.bottom = v33;
      if ( (v18 & 4) != 0 )
      {
        PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v242);
        if ( v243 && (unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)v242, v142, &v265, v143) )
        {
          v144 = *(_QWORD *)a1;
          v256 = 0LL;
          v256.top = 16 * (*(_DWORD *)(v144 + 1004) - v214);
          v256.bottom = 16 * (*(_DWORD *)(v144 + 1012) - v214);
          v233 = 0;
          RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v232, (struct EPATHOBJ *)v242, 1u, &v256);
          if ( v232 )
          {
            v145 = *(_QWORD *)a1;
            v225 = (struct _RECTL *)a1;
            *(_QWORD *)(v145 + 1112) = v232;
            if ( (unsigned int)DC::bTightenRao(*(DC **)a1) )
              LOBYTE(v18) = v18 & 0xFB;
          }
          if ( v233 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v232);
        }
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v242);
        v33 = v249.bottom;
        v11 = 0LL;
        v31 = v249.right;
        v146 = v18 & 4;
        v32 = v249.top;
        v14 = 0;
        if ( (v18 & 4) == 0 )
          v14 = v219;
        v147 = 0;
        v30 = v249.left;
        if ( (v18 & 4) == 0 )
          v147 = v18;
        LOBYTE(v18) = v147;
        v148 = 0;
        if ( !v146 )
          v148 = a7;
        a7 = v148;
LABEL_23:
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 108LL) & 1) != 0 )
        {
          ++v30;
          ++v31;
          v249.left = v30;
          v249.right = v31;
        }
        if ( v30 > v31 )
        {
          v149 = v30;
          v249.left = v31;
          v30 = v31;
          v249.right = v149;
          v31 = v149;
        }
        if ( v32 > v33 )
        {
          v150 = v32;
          v249.top = v33;
          v32 = v33;
          v249.bottom = v150;
          v33 = v150;
        }
        if ( (v14 & 0xA) != 0 )
        {
          v34 = rclBkGround.left;
          v35 = rclBkGround.right;
          if ( rclBkGround.left != rclBkGround.right )
          {
            v151 = rclBkGround.top;
            if ( rclBkGround.top != rclBkGround.bottom )
            {
              if ( v30 < rclBkGround.left )
                v34 = v30;
              LODWORD(v28) = v213;
              rclBkGround.left = v34;
              if ( v32 < rclBkGround.top )
                v151 = v32;
              rclBkGround.top = v151;
              if ( v31 > rclBkGround.right )
                v35 = v31;
              rclBkGround.right = v35;
              if ( v33 > rclBkGround.bottom )
                rclBkGround.bottom = v33;
              goto LABEL_33;
            }
          }
          rclBkGround = v249;
        }
        LODWORD(v28) = v213;
        goto LABEL_33;
      }
      if ( v220[0] )
      {
        v265.x += v213;
        v265.y += (int)v211;
        v14 = v14 & 0xFFFFFFF5 | 2;
        v266 += v213;
        v268 += v213;
        v269 += (int)v211;
        v267 += (int)v211;
        v271 = (_DWORD)v211 + v135;
        v270 = v213 + v134;
      }
    }
    v11 = 0LL;
    goto LABEL_23;
  }
  EngSetLastError(6u);
  return 0LL;
}
