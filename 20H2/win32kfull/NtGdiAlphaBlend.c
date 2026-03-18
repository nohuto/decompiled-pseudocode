/*
 * XREFs of NtGdiAlphaBlend @ 0x1C00AA350
 * Callers:
 *     BltIcon @ 0x1C0092070 (BltIcon.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C024B418 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C024D304 (xxxRealDrawMenuItem.c)
 * Callees:
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00993B8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     EngCopyBits @ 0x1C009C350 (EngCopyBits.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009D358 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C009D498 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     GreStretchBltInternal @ 0x1C009E23C (GreStretchBltInternal.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C009ECF8 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     bCvtPts1 @ 0x1C009F8A0 (bCvtPts1.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C00A0B70 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A2CC0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00A37B0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A4450 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A81F0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00B180C (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00B3D30 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C00E6580 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00E670C (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00F8FAC (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C011C2E8 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C014BB84 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C014BBDC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C026D074 (--1SEMOBJ@@QEAA@XZ.c)
 *     ?bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C026DDB8 (-bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026E454 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0277924 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     EngPlgBlt @ 0x1C028B9B0 (EngPlgBlt.c)
 */

__int64 __fastcall NtGdiAlphaBlend(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        POINTL a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  unsigned int v13; // r14d
  DC *v14; // rdx
  struct _DC_ATTR *v15; // rax
  struct _DC_ATTR *v16; // rax
  __int64 v17; // rbx
  __int64 v19; // rax
  DC *v20; // rdx
  int v21; // ecx
  int v22; // edi
  unsigned int CurrentProcessId; // eax
  struct _DC_ATTR *UserAttr; // rax
  struct _DC_ATTR *v25; // rax
  __int64 v26; // rsi
  int v27; // r12d
  char *v28; // rsi
  int v29; // r15d
  char *v30; // rcx
  int v31; // edi
  float v32; // xmm4_4
  LONG left; // edx
  LONG top; // r9d
  LONG right; // eax
  LONG bottom; // r8d
  int v37; // r15d
  int v38; // edx
  int v39; // r9d
  int v40; // edi
  int v41; // ecx
  int v42; // eax
  __int32 v43; // eax
  __int32 v44; // eax
  FIX x; // r9d
  FIX v46; // r8d
  FIX y; // r11d
  FIX v48; // ecx
  int v49; // r10d
  __int64 v50; // r8
  __int64 v51; // rdi
  unsigned int v52; // eax
  __int64 v53; // r8
  int v54; // edx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r8
  DC *v58; // rcx
  __int64 v59; // rdi
  __int64 v60; // r13
  __int64 v61; // r12
  __int64 v62; // rsi
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  __int64 v67; // rax
  int v68; // ecx
  _DWORD *v69; // rcx
  ULONG v70; // ecx
  int v71; // edx
  int *v72; // rcx
  __int64 v73; // r11
  __int64 v74; // r10
  int *v75; // rcx
  __int64 v76; // r10
  __int64 v77; // r9
  int v78; // r9d
  LONG v79; // r8d
  LONG v80; // edi
  _DWORD *v81; // rax
  int v82; // ecx
  int v83; // r9d
  bool v84; // cc
  int v85; // edi
  int v86; // eax
  int v87; // edx
  HDC v88; // rcx
  __int64 v89; // rax
  char v90; // di
  __int64 v91; // rdi
  _DWORD *v92; // rax
  __int64 v93; // r15
  unsigned int v94; // ecx
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  int v98; // edx
  __int64 v99; // rax
  int v100; // ecx
  int v101; // eax
  HDC v102; // rax
  unsigned int v103; // r11d
  int v104; // eax
  unsigned int v105; // eax
  __int64 v106; // r8
  __int64 v107; // r10
  unsigned int v108; // eax
  __int64 v109; // r8
  __int64 v110; // r10
  _DWORD *v111; // rdx
  int v112; // r9d
  unsigned int v113; // eax
  _DWORD *XlateObject; // rax
  __int64 v115; // rcx
  __int64 v116; // rax
  XLATEOBJ *v117; // r12
  int v118; // edi
  __int64 v119; // rax
  __int64 v120; // rax
  int v121; // edx
  __int64 v122; // rax
  int v123; // ecx
  unsigned int v124; // r12d
  XLATEOBJ *v125; // rax
  unsigned int v126; // r11d
  int v127; // eax
  unsigned int v128; // eax
  __int64 v129; // r8
  __int64 v130; // r10
  unsigned int v131; // eax
  __int64 v132; // r8
  __int64 v133; // r10
  XLATEOBJ *v134; // rdx
  int v135; // r9d
  unsigned int v136; // eax
  XLATEOBJ *v137; // rax
  int v138; // edi
  __int64 v139; // rsi
  __int64 v140; // rcx
  __int64 v141; // rax
  XLATEOBJ *v142; // r15
  __int64 v143; // rax
  __int64 v144; // rax
  int v145; // edx
  __int64 v146; // rax
  int v147; // ecx
  unsigned int v148; // r15d
  __int64 v149; // rax
  unsigned int v150; // r11d
  int v151; // eax
  unsigned int v152; // eax
  __int64 v153; // r8
  __int64 v154; // r10
  unsigned int v155; // eax
  __int64 v156; // r8
  __int64 v157; // r10
  XLATEOBJ *v158; // rdx
  int v159; // r9d
  unsigned int v160; // eax
  XLATEOBJ *v161; // rax
  __int64 v162; // rcx
  __int64 v163; // rax
  XLATEOBJ *v164; // rsi
  int v165; // edi
  __int64 v166; // rax
  __int64 v167; // rax
  int v168; // edx
  __int64 v169; // rax
  int v170; // ecx
  int v171; // eax
  __int64 v172; // rax
  unsigned int v173; // r11d
  int v174; // eax
  unsigned int v175; // eax
  __int64 v176; // r8
  __int64 v177; // r10
  unsigned int v178; // eax
  __int64 v179; // r8
  __int64 v180; // r10
  XLATEOBJ *v181; // rdx
  int v182; // r9d
  unsigned int v183; // eax
  XLATEOBJ *v184; // rax
  int v185; // edi
  __int64 v186; // rdx
  __int64 v187; // rax
  struct REGION *v188; // rdx
  __int64 v189; // r13
  int v190; // eax
  _DWORD *v191; // r14
  __int64 *v192; // rax
  bool v193; // zf
  int v195; // edx
  LONG v196; // edi
  ULONG v197; // ecx
  SURFOBJ *v198; // rcx
  LONG v199; // r10d
  _DWORD *v200; // r9
  _DWORD *v201; // r11
  _DWORD *v202; // r13
  _DWORD *v203; // rdx
  LONG v204; // ecx
  __int64 v205; // rdi
  unsigned __int64 v206; // r8
  _DWORD *v207; // rax
  unsigned __int64 v208; // r8
  _DWORD *v209; // r8
  unsigned __int64 v210; // rdx
  __int64 v211; // rdx
  SURFACE **v212; // r8
  SURFOBJ *v213; // rdx
  SURFOBJ *v214; // rcx
  int inited; // eax
  __int64 v216; // r9
  DC *v217; // r8
  struct ECLIPOBJ *v218; // rdx
  struct ECLIPOBJ **v219; // rdi
  ULONG v220; // ecx
  BOOL (__stdcall *v221)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rax
  _DWORD *v222; // rdx
  __int64 cEntries; // rax
  __int64 v224; // rax
  __int64 v225; // rax
  __int64 v226; // rcx
  int v227; // ecx
  __int64 v228; // rdx
  SURFACE **v229; // r8
  __int64 v230; // rdx
  SURFACE **v231; // r8
  __int64 v232; // rdx
  SURFACE **v233; // r8
  __int64 v234; // rdx
  SURFACE **v235; // r8
  int v236; // r14d
  int v238; // [rsp+70h] [rbp-90h]
  int v239; // [rsp+70h] [rbp-90h]
  int v240; // [rsp+74h] [rbp-8Ch]
  unsigned int v241; // [rsp+78h] [rbp-88h]
  unsigned int v242; // [rsp+78h] [rbp-88h]
  unsigned int v243; // [rsp+78h] [rbp-88h]
  unsigned int v244; // [rsp+78h] [rbp-88h]
  int v245; // [rsp+7Ch] [rbp-84h]
  unsigned int v246; // [rsp+7Ch] [rbp-84h]
  unsigned int v247; // [rsp+7Ch] [rbp-84h]
  int v248; // [rsp+7Ch] [rbp-84h]
  char v249; // [rsp+80h] [rbp-80h]
  DC *v250; // [rsp+88h] [rbp-78h] BYREF
  __int64 v251; // [rsp+90h] [rbp-70h]
  DC *v252; // [rsp+98h] [rbp-68h] BYREF
  __int64 v253; // [rsp+A0h] [rbp-60h]
  int v254; // [rsp+A8h] [rbp-58h] BYREF
  int v255; // [rsp+ACh] [rbp-54h] BYREF
  XLATEOBJ *v256; // [rsp+B0h] [rbp-50h] BYREF
  XLATEOBJ *v257; // [rsp+B8h] [rbp-48h] BYREF
  POINTFIX v258; // [rsp+C0h] [rbp-40h]
  int DIB; // [rsp+C8h] [rbp-38h]
  __int64 i; // [rsp+D0h] [rbp-30h]
  _DWORD *v261; // [rsp+D8h] [rbp-28h]
  XLATEOBJ *v262; // [rsp+E0h] [rbp-20h] BYREF
  HDC v263; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v264; // [rsp+F0h] [rbp-10h]
  XLATEOBJ *pxlo; // [rsp+F8h] [rbp-8h]
  POINTL pptlSrc; // [rsp+100h] [rbp+0h] BYREF
  HDC v267; // [rsp+108h] [rbp+8h]
  HDC v268; // [rsp+110h] [rbp+10h] BYREF
  __int64 v269; // [rsp+118h] [rbp+18h]
  char *v270; // [rsp+120h] [rbp+20h] BYREF
  int v271; // [rsp+128h] [rbp+28h]
  int v272; // [rsp+12Ch] [rbp+2Ch]
  __int64 v273; // [rsp+130h] [rbp+30h] BYREF
  char v274; // [rsp+138h] [rbp+38h]
  int v275; // [rsp+13Ch] [rbp+3Ch]
  __int64 v276; // [rsp+140h] [rbp+40h] BYREF
  char v277; // [rsp+148h] [rbp+48h]
  int v278; // [rsp+14Ch] [rbp+4Ch]
  _DWORD *v279; // [rsp+150h] [rbp+50h] BYREF
  char v280; // [rsp+158h] [rbp+58h]
  int v281; // [rsp+15Ch] [rbp+5Ch]
  __int64 v282; // [rsp+160h] [rbp+60h]
  __int64 v283; // [rsp+168h] [rbp+68h] BYREF
  char *v284; // [rsp+170h] [rbp+70h] BYREF
  int v285; // [rsp+178h] [rbp+78h]
  int v286; // [rsp+17Ch] [rbp+7Ch]
  struct PALETTE *v287; // [rsp+180h] [rbp+80h] BYREF
  __int64 v288; // [rsp+188h] [rbp+88h] BYREF
  __int64 v289; // [rsp+190h] [rbp+90h] BYREF
  __int64 v290; // [rsp+198h] [rbp+98h] BYREF
  __int64 v291; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v292; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v293; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v294; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v295; // [rsp+1C0h] [rbp+C0h] BYREF
  _DWORD *v296; // [rsp+1C8h] [rbp+C8h]
  __int64 v297; // [rsp+1D0h] [rbp+D0h]
  __int64 v298; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v299; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v300; // [rsp+1E8h] [rbp+E8h] BYREF
  struct PALETTE *v301; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v302; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v303; // [rsp+200h] [rbp+100h] BYREF
  __int64 v304; // [rsp+208h] [rbp+108h] BYREF
  _DWORD v305[4]; // [rsp+210h] [rbp+110h] BYREF
  __int64 v306; // [rsp+220h] [rbp+120h]
  __int64 v307; // [rsp+228h] [rbp+128h]
  _DWORD v308[4]; // [rsp+230h] [rbp+130h] BYREF
  __int64 v309; // [rsp+240h] [rbp+140h]
  __int64 v310; // [rsp+248h] [rbp+148h]
  _DWORD v311[4]; // [rsp+250h] [rbp+150h] BYREF
  __int64 v312; // [rsp+260h] [rbp+160h]
  __int64 v313; // [rsp+268h] [rbp+168h]
  RECTL v314; // [rsp+270h] [rbp+170h] BYREF
  __m128i v315; // [rsp+280h] [rbp+180h]
  int v316; // [rsp+290h] [rbp+190h] BYREF
  XLATEOBJ *v317; // [rsp+298h] [rbp+198h]
  XLATEOBJ *v318; // [rsp+2A0h] [rbp+1A0h]
  XLATEOBJ *v319; // [rsp+2A8h] [rbp+1A8h]
  __m128i v320; // [rsp+2B0h] [rbp+1B0h] BYREF
  _OWORD v321[2]; // [rsp+2C0h] [rbp+1C0h] BYREF
  __int64 v322; // [rsp+2E0h] [rbp+1E0h]
  __int64 v323; // [rsp+2E8h] [rbp+1E8h]
  char v324; // [rsp+2F0h] [rbp+1F0h]
  int v325; // [rsp+2F4h] [rbp+1F4h]
  int v326; // [rsp+318h] [rbp+218h]
  __int128 v327; // [rsp+320h] [rbp+220h]
  int v328; // [rsp+330h] [rbp+230h]
  __int64 v329; // [rsp+338h] [rbp+238h]
  __int64 v330; // [rsp+340h] [rbp+240h]
  __int16 v331; // [rsp+348h] [rbp+248h]
  __int64 v332; // [rsp+350h] [rbp+250h]
  __int64 v333; // [rsp+358h] [rbp+258h]
  __int16 v334; // [rsp+360h] [rbp+260h]
  __int64 v335; // [rsp+368h] [rbp+268h]
  __int128 v336; // [rsp+370h] [rbp+270h]
  __int64 v337; // [rsp+380h] [rbp+280h]
  __int64 v338; // [rsp+388h] [rbp+288h]
  __int64 v339; // [rsp+390h] [rbp+290h]
  __int64 v340; // [rsp+398h] [rbp+298h]
  __int64 v341; // [rsp+3A0h] [rbp+2A0h]
  RECTL prclDest; // [rsp+3B0h] [rbp+2B0h] BYREF
  __m128i v343; // [rsp+3C0h] [rbp+2C0h] BYREF
  __int64 v344; // [rsp+3D0h] [rbp+2D0h] BYREF
  int v345; // [rsp+3D8h] [rbp+2D8h]
  int v346; // [rsp+3DCh] [rbp+2DCh]
  _BYTE v347[4]; // [rsp+3E0h] [rbp+2E0h] BYREF
  int v348; // [rsp+3E4h] [rbp+2E4h]
  int v349; // [rsp+3E8h] [rbp+2E8h]
  int v350; // [rsp+3ECh] [rbp+2ECh]
  int v351; // [rsp+3F0h] [rbp+2F0h]
  __int64 v352; // [rsp+430h] [rbp+330h]
  int v353; // [rsp+438h] [rbp+338h]
  int v354; // [rsp+460h] [rbp+360h]
  __int64 v355; // [rsp+470h] [rbp+370h]
  struct _POINTFIX v356; // [rsp+480h] [rbp+380h] BYREF
  FIX v357; // [rsp+488h] [rbp+388h]
  int v358; // [rsp+48Ch] [rbp+38Ch]
  int v359; // [rsp+490h] [rbp+390h]
  FIX v360; // [rsp+494h] [rbp+394h]
  FIX v361; // [rsp+498h] [rbp+398h]
  int v362; // [rsp+49Ch] [rbp+39Ch]
  struct _POINTL v363; // [rsp+4A0h] [rbp+3A0h] BYREF
  int v364; // [rsp+4A8h] [rbp+3A8h]
  int v365; // [rsp+4ACh] [rbp+3ACh]
  int v366; // [rsp+4B0h] [rbp+3B0h]
  int v367; // [rsp+4B4h] [rbp+3B4h]
  POINTFIX pptfx; // [rsp+4B8h] [rbp+3B8h] BYREF
  POINTFIX v369; // [rsp+4C0h] [rbp+3C0h]
  POINTFIX v370; // [rsp+4C8h] [rbp+3C8h]

  pptlSrc = a6;
  LODWORD(i) = a3;
  v255 = a7;
  v13 = 1;
  LODWORD(v257) = a2;
  v254 = a8;
  v267 = a1;
  if ( (_BYTE)a11 || (a11 & 0xFE000000) != 0 )
    goto LABEL_487;
  if ( !a9 || !a10 )
    return 1LL;
  if ( a4 < 0 || a5 < 0 || a9 < 0 || a10 < 0 )
  {
LABEL_487:
    EngSetLastError(0x57u);
    return 0LL;
  }
  v258.x = BYTE1(a11) & 0x80;
  LODWORD(v256) = BYTE1(a11) & 0x7F;
  BYTE1(a11) &= ~0x80u;
  v251 = 0LL;
  v250 = (DC *)HmgLockEx(a1, 1LL, 0LL);
  v14 = v250;
  if ( !v250 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_31;
  }
  if ( (*((_DWORD *)v250 + 11) & 2) != 0 )
  {
LABEL_26:
    if ( (*((_DWORD *)v14 + 130) & 4) == 0 )
    {
LABEL_32:
      if ( !v14 || (*((_DWORD *)v14 + 9) & 0x10000) != 0 )
        goto LABEL_14;
      v252 = 0LL;
      v253 = 0LL;
      v19 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HmgLockEx)(pptlSrc, 1LL, 0LL);
      v252 = (DC *)v19;
      v20 = (DC *)v19;
      if ( v19 )
      {
        v21 = HIDWORD(v253);
        if ( HIDWORD(v253) )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v19 + 48) + 40LL) & 0x8000) == 0
            || (v22 = *(_DWORD *)(v19 + 2096),
                CurrentProcessId = (unsigned int)PsGetCurrentProcessId(),
                v20 = v252,
                v22 != (CurrentProcessId & 0xFFFFFFFC)) )
          {
            _InterlockedDecrement((volatile signed __int32 *)v20 + 3);
            goto LABEL_44;
          }
          v21 = HIDWORD(v253);
        }
        if ( (*((_DWORD *)v20 + 11) & 2) == 0 )
        {
          if ( !v21 )
          {
            UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v252);
            if ( UserAttr && !DC::SaveAttributes(v252, UserAttr) )
            {
              _InterlockedDecrement((volatile signed __int32 *)v252 + 3);
LABEL_44:
              v252 = 0LL;
LABEL_45:
              v13 = 0;
              EngSetLastError(0x57u);
              goto LABEL_46;
            }
            v20 = v252;
          }
          *((_DWORD *)v20 + 11) |= 2u;
          v20 = v252;
          LODWORD(v253) = 1;
        }
        if ( (*((_DWORD *)v20 + 130) & 4) == 0 )
        {
LABEL_64:
          if ( !v20 )
            goto LABEL_45;
          bSpDwmValidateSurface((struct XDCOBJ *)&v252, v255, v254, a9, a10);
          bSpDwmValidateSurface((struct XDCOBJ *)&v250, a2, a3, a4, a5);
          v271 = *(_DWORD *)(*((_QWORD *)v250 + 122) + 208LL);
          v27 = *(_DWORD *)(*((_QWORD *)v250 + 122) + 108LL) & 1;
          v272 = v27;
          if ( (*(_DWORD *)(*((_QWORD *)v250 + 122) + 340LL) & 0x1E000) != 0 )
          {
            EXFORMOBJ::vInit((EXFORMOBJ *)&v270, (struct XDCOBJ *)&v250, 0x204u, 0);
            v27 = v272;
            v28 = v270;
          }
          else
          {
            v28 = (char *)v250 + 320;
            v270 = (char *)v250 + 320;
          }
          v285 = *(_DWORD *)(*((_QWORD *)v252 + 122) + 208LL);
          v29 = *(_DWORD *)(*((_QWORD *)v252 + 122) + 108LL) & 1;
          v286 = v29;
          if ( (*(_DWORD *)(*((_QWORD *)v252 + 122) + 340LL) & 0x1E000) != 0 )
          {
            EXFORMOBJ::vInit((EXFORMOBJ *)&v284, (struct XDCOBJ *)&v252, 0x204u, 0);
            v30 = v284;
            v27 = v272;
            v28 = v270;
            v29 = v286;
          }
          else
          {
            v30 = (char *)v252 + 320;
            v284 = (char *)v252 + 320;
          }
          v31 = *((_DWORD *)v30 + 8);
          if ( (v31 & 1) == 0 )
            goto LABEL_45;
          v32 = 0.0;
          if ( !v29 && (*(float *)v30 < 0.0 || *((float *)v30 + 3) < 0.0) )
            goto LABEL_45;
          left = v255;
          top = v254;
          right = v255 + a9;
          bottom = v254 + a10;
          prclDest.left = v255;
          prclDest.top = v254;
          prclDest.right = v255 + a9;
          prclDest.bottom = v254 + a10;
          if ( (v31 & 0x43) != 0x43 )
          {
            bCvtPts1((unsigned __int64)v30, &prclDest, 2LL);
            bottom = prclDest.bottom;
            right = prclDest.right;
            top = prclDest.top;
            left = prclDest.left;
          }
          if ( v29 )
          {
            ++left;
            ++right;
            prclDest.left = left;
            prclDest.right = right;
          }
          if ( left > right )
          {
            prclDest.left = right;
            prclDest.right = left;
          }
          if ( top > bottom )
          {
            prclDest.top = bottom;
            prclDest.bottom = top;
          }
          if ( (*((_DWORD *)v28 + 8) & 1) != 0 && (v27 || v32 <= *(float *)v28 && v32 <= *((float *)v28 + 3)) )
          {
            v37 = i;
            v38 = a2;
            v39 = i;
            v40 = a2 + a4;
            v41 = i + a5;
            v343.m128i_i32[2] = a2 + a4;
            v343.m128i_i32[3] = i + a5;
            v343.m128i_i64[0] = __PAIR64__(i, a2);
            v42 = *((_DWORD *)v28 + 8) & 0x43;
            DIB = 0;
            if ( (_BYTE)v42 != 67 )
            {
              bCvtPts1((unsigned __int64)v28, &v343, 2LL);
              v41 = v343.m128i_i32[3];
              v39 = v343.m128i_i32[1];
              v38 = v343.m128i_i32[0];
              v40 = v343.m128i_i32[2];
            }
            if ( v27 )
            {
              ++v38;
              ++v40;
              v343.m128i_i32[0] = v38;
              v343.m128i_i32[2] = v40;
            }
            if ( v38 > v40 )
            {
              v43 = v38;
              v38 = v40;
              v343.m128i_i32[0] = v40;
              v40 = v43;
              v343.m128i_i32[2] = v43;
            }
            if ( v39 > v41 )
            {
              v44 = v39;
              v343.m128i_i32[1] = v41;
              v39 = v41;
              v343.m128i_i32[3] = v44;
              v41 = v44;
            }
          }
          else
          {
            v37 = i;
            DIB = 1;
            v364 = a2 + a4;
            v363.x = a2;
            v367 = i + a5;
            v363.y = i;
            v365 = i;
            v366 = a2;
            EXFORMOBJ::bXform((EXFORMOBJ *)&v270, &v363, &v356, 3uLL);
            x = v356.x;
            v46 = v357;
            if ( (*((_DWORD *)v270 + 8) & 1) != 0 )
            {
              if ( v356.x > v357 )
              {
                x = v356.x + 16;
                v46 = v357 + 16;
                v359 += 16;
                v356.x += 16;
                v357 += 16;
              }
              y = v356.y;
              v48 = v360;
              v49 = v358;
              if ( v356.y > v360 )
              {
                y = v356.y + 16;
                v49 = v358 + 16;
                v48 = v360 + 16;
                v356.y += 16;
                v360 += 16;
                v358 += 16;
              }
            }
            else
            {
              v48 = v360;
              v49 = v358;
              y = v356.y;
            }
            v361 = v46 + v359 - x;
            v362 = v48 + v49 - y;
            v50 = (v46 > x) ^ (unsigned int)(v46 <= v361);
            v51 = (v49 > y) ^ (unsigned int)(v49 <= v362);
            v52 = v50 ^ 3;
            if ( *(&v356.x + 2 * v50) <= *(&v356.x + 2 * ((unsigned int)v50 ^ 3LL)) )
              v52 = v50;
            v53 = v52;
            v54 = *(&v356.x + 2 * v52);
            v55 = (unsigned int)v51 ^ 3;
            if ( *(&v356.y + 2 * v51) <= *(&v356.y + 2 * ((unsigned int)v51 ^ 3LL)) )
              v55 = (unsigned int)v51;
            v38 = (v54 + 15) >> 4;
            v343.m128i_i32[0] = v38;
            v39 = (*(&v356.y + 2 * v55) + 15) >> 4;
            v40 = (*(&v356.x + 2 * (v53 ^ 3)) + 15) >> 4;
            v41 = (*(&v356.y + 2 * ((unsigned int)v55 ^ 3LL)) + 15) >> 4;
            v343.m128i_i32[1] = v39;
            v343.m128i_i64[1] = __PAIR64__(v41, v40);
          }
          if ( v38 == v40 || v39 == v41 )
            goto LABEL_46;
          if ( (*((_DWORD *)v250 + 9) & 0xE0) != 0 )
            XDCOBJ::vAccumulate((XDCOBJ *)&v250, (struct ERECTL *)&v343);
          v323 = 0LL;
          memset(v321, 0, sizeof(v321));
          v327 = 0LL;
          v336 = 0LL;
          v324 = 0;
          v325 = 0;
          v326 = 0;
          v330 = 0LL;
          v331 = 256;
          v333 = 0LL;
          v334 = 256;
          v322 = 0LL;
          v328 = 0;
          v335 = 0LL;
          v337 = 0LL;
          v340 = 0LL;
          v338 = 0LL;
          v339 = 0LL;
          v329 = 0LL;
          v332 = 0LL;
          if ( (unsigned int)DEVLOCKBLTOBJ::bLock(
                               (DEVLOCKBLTOBJ *)v321,
                               (struct XDCOBJ *)&v250,
                               (struct XDCOBJ *)&v252,
                               0) )
          {
            v58 = v250;
            v59 = *((_QWORD *)v250 + 62);
            v269 = v59;
            if ( v59 )
            {
              v60 = *(_QWORD *)(v59 + 128);
              v61 = *((_QWORD *)v250 + 11);
              v297 = v60;
              v62 = *((_QWORD *)v252 + 62);
              v264 = v61;
              v261 = (_DWORD *)v62;
              if ( v62 )
              {
                if ( *(_DWORD *)(v62 + 656)
                  && ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v62 + 656) )
                {
                  goto LABEL_483;
                }
                v63 = *(_DWORD *)(v62 + 112);
                if ( (v63 & 0x800) != 0 )
                {
                  v64 = UserSurfaceAccessCheck(*(_QWORD *)(v62 + 648));
                }
                else
                {
                  if ( (v63 & 0x10000000) == 0 )
                  {
LABEL_120:
                    if ( (*(_DWORD *)(v59 + 116) & 8) == 0 && !*(_QWORD *)(v59 + 224)
                      || (*(_WORD *)(v59 + 102) & 0x200) == 0 )
                    {
                      v65 = *(_DWORD *)(v59 + 112);
                      if ( (v65 & 0x800) != 0 )
                      {
                        v66 = UserSurfaceAccessCheck(*(_QWORD *)(v59 + 648));
                      }
                      else
                      {
                        if ( (v65 & 0x10000000) == 0 )
                        {
LABEL_128:
                          v249 = HIBYTE(a11) & 1;
                          if ( (a11 & 0x1000000) != 0 )
                          {
                            if ( *(_DWORD *)(v62 + 96) != 6
                              || (v67 = *(_QWORD *)(v62 + 128)) == 0
                              || (v68 = *(_DWORD *)(v67 + 24), (v68 & 8) == 0)
                              && ((v68 & 2) == 0
                               || (v69 = *(_DWORD **)(v67 + 112), *v69 != 16711680)
                               || v69[1] != 65280
                               || v69[2] != 255) )
                            {
                              v70 = 87;
LABEL_482:
                              EngSetLastError(v70);
                              v13 = 0;
                              DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v321, v232, v233);
                              goto LABEL_46;
                            }
                          }
                          v71 = _mm_cvtsi128_si32(v343);
                          v315 = v343;
                          v72 = (int *)((char *)v250 + 1024);
                          if ( (*((_DWORD *)v250 + 10) & 1) == 0 )
                            v72 = (int *)((char *)v250 + 1016);
                          v73 = *v72;
                          v343.m128i_i32[0] = v71;
                          if ( (unsigned __int64)(v73 + v71 + 0x80000000LL) > 0xFFFFFFFF )
                            goto LABEL_481;
                          if ( (unsigned __int64)(v73 + v343.m128i_i32[2] + 0x80000000LL) > 0xFFFFFFFF )
                            goto LABEL_481;
                          v74 = v72[1];
                          if ( (unsigned __int64)(v74 + v343.m128i_i32[1] + 0x80000000LL) > 0xFFFFFFFF
                            || (unsigned __int64)(v74 + v343.m128i_i32[3] + 0x80000000LL) > 0xFFFFFFFF )
                          {
                            goto LABEL_481;
                          }
                          v343.m128i_i32[0] = v73 + v71;
                          v343.m128i_i32[2] += *v72;
                          v343.m128i_i32[1] += v72[1];
                          v343.m128i_i32[3] += v72[1];
                          v75 = (int *)((char *)v252 + 1024);
                          if ( (*((_DWORD *)v252 + 10) & 1) == 0 )
                            v75 = (int *)((char *)v252 + 1016);
                          v76 = *v75;
                          if ( (unsigned __int64)(v76 + prclDest.left + 0x80000000LL) > 0xFFFFFFFF
                            || (unsigned __int64)(v76 + prclDest.right + 0x80000000LL) > 0xFFFFFFFF
                            || (v77 = v75[1], (unsigned __int64)(v77 + prclDest.top + 0x80000000LL) > 0xFFFFFFFF)
                            || (unsigned __int64)(v77 + prclDest.bottom + 0x80000000LL) > 0xFFFFFFFF )
                          {
LABEL_481:
                            v70 = 534;
                            goto LABEL_482;
                          }
                          v78 = v76 + prclDest.left;
                          prclDest.left += v76;
                          v79 = *v75 + prclDest.right;
                          prclDest.right = v79;
                          v56 = (unsigned int)(v75[1] + prclDest.top);
                          prclDest.top += v75[1];
                          v80 = v75[1] + prclDest.bottom;
                          prclDest.bottom = v80;
                          v81 = *(_DWORD **)(v62 + 48);
                          v296 = v81;
                          if ( *(_WORD *)(v62 + 100) == 1 && v81 && (v81[10] & 0x20000) != 0 )
                          {
                            v82 = v81[646];
                            if ( v78 >= v82 )
                            {
                              v83 = v81[647];
                              if ( (int)v56 >= v83 && v79 <= *(_DWORD *)(v62 + 56) + v82 )
                              {
                                v84 = v80 <= v83 + *(_DWORD *)(v62 + 60);
                                goto LABEL_160;
                              }
                            }
                          }
                          else if ( v78 >= 0 && (int)v56 >= 0 && v79 <= *(_DWORD *)(v62 + 56) )
                          {
                            v84 = v80 <= *(_DWORD *)(v62 + 60);
LABEL_160:
                            v85 = 0;
                            if ( v84 )
                              goto LABEL_162;
                          }
                          v85 = 1;
LABEL_162:
                          if ( v62 == v269
                            && (v314 = prclDest,
                                ERECTL::operator*=(&v314.left, v343.m128i_i32),
                                !ERECTL::bEmpty((ERECTL *)&v314))
                            || v85 )
                          {
                            EngSetLastError(0x57u);
                            v13 = 0;
                            DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v321, v230, v231);
                            goto LABEL_46;
                          }
                          v57 = 1LL;
                          v86 = 1;
                          if ( BYTE2(a11) == 0xFF && !v249 && ((unsigned __int8)v256 & 1) == 0 )
                          {
                            v87 = (int)v257;
                            v88 = v267;
                            v89 = *((_QWORD *)v250 + 122);
                            v90 = *(_BYTE *)(v89 + 215);
                            *(_BYTE *)(v89 + 215) = 3;
                            v13 = GreStretchBltInternal(
                                    v88,
                                    v87,
                                    v37,
                                    a4,
                                    a5,
                                    *(HDC *)&pptlSrc,
                                    v255,
                                    v254,
                                    a9,
                                    a10,
                                    13369376,
                                    -1,
                                    0);
                            v86 = 0;
                            v57 = 1LL;
                            v56 = *((_QWORD *)v250 + 122);
                            *(_BYTE *)(v56 + 215) = v90;
                          }
                          if ( (v86 & v13) == 0 )
                            goto LABEL_485;
                          v91 = *(_QWORD *)(v62 + 128);
                          v268 = 0LL;
                          v92 = (_DWORD *)*((_QWORD *)v252 + 122);
                          v93 = *((_QWORD *)v252 + 11);
                          v240 = v92[45];
                          v94 = v92[44];
                          LODWORD(i) = v92[46];
                          v241 = v94;
                          if ( !v91 )
                          {
                            if ( !v60 )
                              goto LABEL_175;
                            if ( (*(_DWORD *)(v60 + 24) & 0x800) != 0 )
                            {
                              v95 = *(_QWORD *)(v61 + 80);
                              if ( !v95 || v95 == *(_QWORD *)(v61 + 72) )
                                goto LABEL_175;
                            }
                          }
                          if ( !v60 && (*(_DWORD *)(v91 + 24) & 0x800) != 0 )
                          {
                            v96 = *(_QWORD *)(v61 + 80);
                            if ( !v96 )
                            {
LABEL_175:
                              v263 = (HDC)xloIdent;
                              v238 = 1;
                              goto LABEL_219;
                            }
                            if ( v96 == *(_QWORD *)(v61 + 72) )
                            {
                              v263 = (HDC)xloIdent;
                              v238 = 1;
                              goto LABEL_219;
                            }
                          }
                          if ( v91 && v60 )
                          {
                            v97 = *(_QWORD *)(v91 + 120);
                            if ( v97 == v91 )
                              v98 = *(_DWORD *)(v91 + 32);
                            else
                              v98 = *(_DWORD *)(v97 + 32);
                            v99 = *(_QWORD *)(v60 + 120);
                            if ( v99 == v60 )
                              v100 = *(_DWORD *)(v60 + 32);
                            else
                              v100 = *(_DWORD *)(v99 + 32);
                            if ( v98 == v100 )
                            {
                              v263 = (HDC)xloIdent;
                              v238 = 1;
                              goto LABEL_219;
                            }
                            v101 = *(_DWORD *)(v91 + 56);
                            v298 = v61;
                            v299 = v93;
                            v294 = v60;
                            LODWORD(v257) = v101;
                            v300 = ghsemPalette;
                            GreAcquireSemaphore(ghsemPalette);
                            v102 = *(HDC *)(v91 + 120);
                            v103 = (unsigned int)v257;
                            v267 = v102;
                            v245 = 0;
                            while ( 1 )
                            {
                              if ( v102 == (HDC)v91 )
                                v104 = *(_DWORD *)(v91 + 32);
                              else
                                v104 = *((_DWORD *)v102 + 8);
                              if ( *((_DWORD *)&xlateTable + 8 * v103 + 4) == v104 )
                              {
                                v105 = XEPALOBJ::ulTime((XEPALOBJ *)&v294);
                                if ( *(_DWORD *)(v106 + v107 + 20) == v105 )
                                {
                                  v108 = XEPALOBJ::ulTime((XEPALOBJ *)&v298);
                                  if ( *(_DWORD *)(v109 + v110 + 28) == v108 )
                                  {
                                    v111 = *(_DWORD **)(v109 + v110 + 8);
                                    v263 = (HDC)v111;
                                    if ( (v111[19] & 0x6000) == 0 )
                                    {
                                      if ( (v112 = v111[19] & 0x100, (v111[1] & 4) == 0) && !v112
                                        || (v111[1] & 4) != 0
                                        && v240 == v111[6]
                                        && (v113 = XEPALOBJ::ulTime((XEPALOBJ *)&v299),
                                            *(_DWORD *)(v109 + v110 + 24) == v113)
                                        || v112 && (_DWORD)i == v111[7] && v241 == v111[8] )
                                      {
                                        _InterlockedIncrement((volatile signed __int32 *)(v109 + v110));
                                        *(_DWORD *)(v91 + 56) = v103;
                                        SEMOBJ::~SEMOBJ((SEMOBJ *)&v300);
                                        v238 = 1;
                                        goto LABEL_219;
                                      }
                                    }
                                  }
                                }
                              }
                              v103 = ((_BYTE)v103 + 1) & 7;
                              if ( (unsigned int)++v245 >= 8 )
                                break;
                              v102 = v267;
                            }
                            if ( ghsemPalette )
                            {
                              EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                              GreReleaseSemaphoreInternal(ghsemPalette);
                            }
                          }
                          XlateObject = CreateXlateObject(0LL, 0, v91, v60, v93, v61, i, v241, v240, 0);
                          v263 = (HDC)XlateObject;
                          if ( XlateObject )
                          {
                            if ( v91 && v60 && (XlateObject[19] & 0x200) == 0 )
                              EXLATEOBJ::vAddToCache(&v263, v91, v60, v93, v61);
                            v238 = 1;
                          }
                          else
                          {
                            v238 = 0;
                          }
LABEL_219:
                          v267 = v263;
                          v115 = *((_QWORD *)v252 + 122);
                          v246 = *(_DWORD *)(v115 + 176);
                          v242 = *(_DWORD *)(v115 + 184);
                          if ( !v91 )
                          {
                            if ( !gppalRGB )
                              goto LABEL_224;
                            if ( (*((_DWORD *)gppalRGB + 6) & 0x800) != 0 )
                            {
                              v116 = *(_QWORD *)(v93 + 80);
                              if ( !v116 || v116 == *(_QWORD *)(v93 + 72) )
                                goto LABEL_224;
                            }
                          }
                          if ( !gppalRGB && (*(_DWORD *)(v91 + 24) & 0x800) != 0 )
                          {
                            v119 = *(_QWORD *)(v93 + 80);
                            if ( !v119 )
                            {
LABEL_224:
                              v117 = xloIdent;
                              v118 = 1;
                              v256 = xloIdent;
                              goto LABEL_269;
                            }
                            if ( v119 == *(_QWORD *)(v93 + 72) )
                            {
                              v117 = xloIdent;
                              v118 = 1;
                              v256 = xloIdent;
                              goto LABEL_269;
                            }
                          }
                          if ( v91 && gppalRGB )
                          {
                            v120 = *(_QWORD *)(v91 + 120);
                            if ( v120 == v91 )
                              v121 = *(_DWORD *)(v91 + 32);
                            else
                              v121 = *(_DWORD *)(v120 + 32);
                            v122 = *((_QWORD *)gppalRGB + 15);
                            if ( (struct PALETTE *)v122 == gppalRGB )
                              v123 = *((_DWORD *)gppalRGB + 8);
                            else
                              v123 = *(_DWORD *)(v122 + 32);
                            if ( v121 == v123 )
                            {
                              v117 = xloIdent;
                              v118 = 1;
                              v256 = xloIdent;
                              goto LABEL_269;
                            }
                            if ( gppalRGB )
                            {
                              v124 = *(_DWORD *)(v91 + 56);
                              v302 = v93;
                              v303 = v93;
                              v301 = gppalRGB;
                              v304 = ghsemPalette;
                              GreAcquireSemaphore(ghsemPalette);
                              v125 = *(XLATEOBJ **)(v91 + 120);
                              v126 = 0;
                              for ( pxlo = v125; ; v125 = pxlo )
                              {
                                if ( v125 == (XLATEOBJ *)v91 )
                                  v127 = *(_DWORD *)(v91 + 32);
                                else
                                  v127 = *(_DWORD *)&v125[1].iSrcType;
                                if ( *((_DWORD *)&xlateTable + 8 * v124 + 4) == v127 )
                                {
                                  v128 = XEPALOBJ::ulTime((XEPALOBJ *)&v301);
                                  if ( *(_DWORD *)(v129 + v130 + 20) == v128 )
                                  {
                                    v131 = XEPALOBJ::ulTime((XEPALOBJ *)&v302);
                                    if ( *(_DWORD *)(v132 + v133 + 28) == v131 )
                                    {
                                      v134 = *(XLATEOBJ **)(v132 + v133 + 8);
                                      v256 = v134;
                                      if ( (v134[3].flXlate & 0x6000) == 0 )
                                      {
                                        if ( (v135 = v134[3].flXlate & 0x100, (v134->flXlate & 4) == 0) && !v135
                                          || (v134->flXlate & 4) != 0
                                          && v240 == v134[1].iUniq
                                          && (v136 = XEPALOBJ::ulTime((XEPALOBJ *)&v303),
                                              *(_DWORD *)(v132 + v133 + 24) == v136)
                                          || v135 && v242 == v134[1].flXlate && v246 == *(_DWORD *)&v134[1].iSrcType )
                                        {
                                          _InterlockedIncrement((volatile signed __int32 *)(v132 + v133));
                                          *(_DWORD *)(v91 + 56) = v124;
                                          SEMOBJ::~SEMOBJ((SEMOBJ *)&v304);
                                          v117 = v256;
                                          v118 = 1;
                                          goto LABEL_269;
                                        }
                                      }
                                    }
                                  }
                                }
                                ++v126;
                                v124 = ((_BYTE)v124 + 1) & 7;
                                if ( v126 >= 8 )
                                  break;
                              }
                              if ( ghsemPalette )
                              {
                                EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                                GreReleaseSemaphoreInternal(ghsemPalette);
                              }
                            }
                          }
                          v137 = (XLATEOBJ *)CreateXlateObject(
                                               0LL,
                                               0,
                                               v91,
                                               (__int64)gppalRGB,
                                               v93,
                                               v93,
                                               v242,
                                               v246,
                                               v240,
                                               0);
                          v256 = v137;
                          v117 = v137;
                          if ( v137 )
                          {
                            if ( v91 && gppalRGB && (v137[3].flXlate & 0x200) == 0 )
                              EXLATEOBJ::vAddToCache(&v256, v91, gppalRGB, v93, v93);
                            v118 = 1;
                          }
                          else
                          {
                            v118 = 0;
                          }
LABEL_269:
                          v138 = v238 & v118;
                          v139 = v264;
                          v239 = v138;
                          v140 = *((_QWORD *)v252 + 122);
                          pxlo = v117;
                          v247 = *(_DWORD *)(v140 + 176);
                          v243 = *(_DWORD *)(v140 + 184);
                          if ( v60
                            || gppalRGB
                            && ((*((_DWORD *)gppalRGB + 6) & 0x800) == 0
                             || (v141 = *(_QWORD *)(v264 + 80)) != 0 && v141 != *(_QWORD *)(v264 + 72)) )
                          {
                            if ( gppalRGB
                              || (*(_DWORD *)(v60 + 24) & 0x800) == 0
                              || (v143 = *(_QWORD *)(v264 + 80)) != 0 && v143 != *(_QWORD *)(v264 + 72) )
                            {
                              if ( v60 && gppalRGB )
                              {
                                v144 = *(_QWORD *)(v60 + 120);
                                if ( v144 == v60 )
                                  v145 = *(_DWORD *)(v60 + 32);
                                else
                                  v145 = *(_DWORD *)(v144 + 32);
                                v146 = *((_QWORD *)gppalRGB + 15);
                                if ( (struct PALETTE *)v146 == gppalRGB )
                                  v147 = *((_DWORD *)gppalRGB + 8);
                                else
                                  v147 = *(_DWORD *)(v146 + 32);
                                if ( v145 == v147 )
                                {
                                  v142 = xloIdent;
                                  v262 = xloIdent;
                                  v239 = v138;
                                  goto LABEL_319;
                                }
                                if ( gppalRGB )
                                {
                                  v148 = *(_DWORD *)(v60 + 56);
                                  v288 = v264;
                                  v289 = v264;
                                  v287 = gppalRGB;
                                  v290 = ghsemPalette;
                                  GreAcquireSemaphore(ghsemPalette);
                                  v149 = *(_QWORD *)(v60 + 120);
                                  v150 = 0;
                                  for ( i = v149; ; v149 = i )
                                  {
                                    if ( v149 == v60 )
                                      v151 = *(_DWORD *)(v60 + 32);
                                    else
                                      v151 = *(_DWORD *)(v149 + 32);
                                    if ( *((_DWORD *)&xlateTable + 8 * v148 + 4) == v151 )
                                    {
                                      v152 = XEPALOBJ::ulTime((XEPALOBJ *)&v287);
                                      if ( *(_DWORD *)(v153 + v154 + 20) == v152 )
                                      {
                                        v155 = XEPALOBJ::ulTime((XEPALOBJ *)&v288);
                                        if ( *(_DWORD *)(v156 + v157 + 28) == v155 )
                                        {
                                          v158 = *(XLATEOBJ **)(v156 + v157 + 8);
                                          v262 = v158;
                                          if ( (v158[3].flXlate & 0x6000) == 0 )
                                          {
                                            if ( (v159 = v158[3].flXlate & 0x100, (v158->flXlate & 4) == 0) && !v159
                                              || (v158->flXlate & 4) != 0
                                              && v240 == v158[1].iUniq
                                              && (v160 = XEPALOBJ::ulTime((XEPALOBJ *)&v289),
                                                  *(_DWORD *)(v156 + v157 + 24) == v160)
                                              || v159 && v243 == v158[1].flXlate && v247 == *(_DWORD *)&v158[1].iSrcType )
                                            {
                                              _InterlockedIncrement((volatile signed __int32 *)(v156 + v157));
                                              *(_DWORD *)(v60 + 56) = v148;
                                              SEMOBJ::~SEMOBJ((SEMOBJ *)&v290);
                                              v117 = v256;
                                              v142 = v262;
                                              goto LABEL_319;
                                            }
                                          }
                                        }
                                      }
                                    }
                                    ++v150;
                                    v148 = ((_BYTE)v148 + 1) & 7;
                                    if ( v150 >= 8 )
                                      break;
                                  }
                                  if ( ghsemPalette )
                                  {
                                    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                                    GreReleaseSemaphoreInternal(ghsemPalette);
                                  }
                                }
                              }
                              v161 = (XLATEOBJ *)CreateXlateObject(
                                                   0LL,
                                                   0,
                                                   v60,
                                                   (__int64)gppalRGB,
                                                   v139,
                                                   v139,
                                                   v243,
                                                   v247,
                                                   v240,
                                                   0);
                              v262 = v161;
                              v142 = v161;
                              if ( v161 )
                              {
                                if ( v60 && gppalRGB && (v161[3].flXlate & 0x200) == 0 )
                                  EXLATEOBJ::vAddToCache(&v262, v60, gppalRGB, v139, v139);
                                v239 = v138;
                              }
                              else
                              {
                                v239 = 0;
                              }
                            }
                            else
                            {
                              v142 = xloIdent;
                              v262 = xloIdent;
                              v239 = v138;
                            }
                          }
                          else
                          {
                            v142 = xloIdent;
                            v262 = xloIdent;
                          }
LABEL_319:
                          v162 = *((_QWORD *)v252 + 122);
                          v244 = *(_DWORD *)(v162 + 176);
                          LODWORD(i) = *(_DWORD *)(v162 + 184);
                          if ( !gppalRGB )
                          {
                            if ( !v60 )
                              goto LABEL_324;
                            if ( (*(_DWORD *)(v60 + 24) & 0x800) != 0 )
                            {
                              v163 = *(_QWORD *)(v139 + 80);
                              if ( !v163 || v163 == *(_QWORD *)(v139 + 72) )
                                goto LABEL_324;
                            }
                          }
                          if ( !v60 && (*((_DWORD *)gppalRGB + 6) & 0x800) != 0 )
                          {
                            v166 = *(_QWORD *)(v139 + 80);
                            if ( !v166 )
                            {
LABEL_324:
                              v164 = xloIdent;
                              v13 = 1;
                              v257 = xloIdent;
                              v165 = 1;
                              goto LABEL_368;
                            }
                            if ( v166 == *(_QWORD *)(v139 + 72) )
                            {
                              v164 = xloIdent;
                              v13 = 1;
                              v257 = xloIdent;
                              v165 = 1;
                              goto LABEL_368;
                            }
                          }
                          if ( gppalRGB && v60 )
                          {
                            v167 = *((_QWORD *)gppalRGB + 15);
                            if ( (struct PALETTE *)v167 == gppalRGB )
                              v168 = *((_DWORD *)gppalRGB + 8);
                            else
                              v168 = *(_DWORD *)(v167 + 32);
                            v169 = *(_QWORD *)(v60 + 120);
                            if ( v169 == v60 )
                              v170 = *(_DWORD *)(v60 + 32);
                            else
                              v170 = *(_DWORD *)(v169 + 32);
                            if ( v168 == v170 )
                            {
                              v164 = xloIdent;
                              v13 = 1;
                              v257 = xloIdent;
                              v165 = 1;
                              goto LABEL_368;
                            }
                            v171 = *((_DWORD *)gppalRGB + 14);
                            v292 = v139;
                            v293 = v139;
                            v291 = v60;
                            LODWORD(v257) = v171;
                            v295 = ghsemPalette;
                            GreAcquireSemaphore(ghsemPalette);
                            v172 = *((_QWORD *)gppalRGB + 15);
                            v173 = (unsigned int)v257;
                            v282 = v172;
                            v248 = 0;
                            while ( 1 )
                            {
                              if ( (struct PALETTE *)v172 == gppalRGB )
                                v174 = *((_DWORD *)gppalRGB + 8);
                              else
                                v174 = *(_DWORD *)(v172 + 32);
                              if ( *((_DWORD *)&xlateTable + 8 * v173 + 4) == v174 )
                              {
                                v175 = XEPALOBJ::ulTime((XEPALOBJ *)&v291);
                                if ( *(_DWORD *)(v176 + v177 + 20) == v175 )
                                {
                                  v178 = XEPALOBJ::ulTime((XEPALOBJ *)&v292);
                                  if ( *(_DWORD *)(v179 + v180 + 28) == v178 )
                                  {
                                    v181 = *(XLATEOBJ **)(v179 + v180 + 8);
                                    v257 = v181;
                                    if ( (v181[3].flXlate & 0x6000) == 0 )
                                    {
                                      if ( (v182 = v181[3].flXlate & 0x100, (v181->flXlate & 4) == 0) && !v182
                                        || (v181->flXlate & 4) != 0
                                        && v240 == v181[1].iUniq
                                        && (v183 = XEPALOBJ::ulTime((XEPALOBJ *)&v293),
                                            *(_DWORD *)(v179 + v180 + 24) == v183)
                                        || v182 && (_DWORD)i == v181[1].flXlate && v244 == *(_DWORD *)&v181[1].iSrcType )
                                      {
                                        _InterlockedIncrement((volatile signed __int32 *)(v179 + v180));
                                        *((_DWORD *)gppalRGB + 14) = v173;
                                        SEMOBJ::~SEMOBJ((SEMOBJ *)&v295);
                                        v117 = v256;
                                        v13 = 1;
                                        v142 = v262;
                                        v165 = 1;
                                        v164 = v257;
                                        goto LABEL_368;
                                      }
                                    }
                                  }
                                }
                              }
                              v173 = ((_BYTE)v173 + 1) & 7;
                              if ( (unsigned int)++v248 >= 8 )
                                break;
                              v172 = v282;
                            }
                            if ( ghsemPalette )
                            {
                              EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                              GreReleaseSemaphoreInternal(ghsemPalette);
                            }
                          }
                          v184 = (XLATEOBJ *)CreateXlateObject(
                                               0LL,
                                               0,
                                               (__int64)gppalRGB,
                                               v60,
                                               v139,
                                               v139,
                                               i,
                                               v244,
                                               v240,
                                               0);
                          v257 = v184;
                          v164 = v184;
                          if ( v184 )
                          {
                            if ( gppalRGB && v60 && (v184[3].flXlate & 0x200) == 0 )
                              EXLATEOBJ::vAddToCache(&v257, gppalRGB, v60, v264, v264);
                            v13 = 1;
                            v165 = 1;
                          }
                          else
                          {
                            v165 = 0;
                            v13 = 1;
                          }
LABEL_368:
                          v185 = v239 & v165;
                          v186 = *((_QWORD *)v250 + 144);
                          if ( v186 && (*((_DWORD *)v250 + 10) & 2) != 0 && (unsigned int)DC::bDpiScaledSurface(v250) )
                            v187 = v186;
                          else
                            v187 = *((_QWORD *)v250 + 142);
                          if ( v187 )
                          {
                            if ( !v186
                              || (*((_DWORD *)v250 + 10) & 2) == 0
                              || !(unsigned int)DC::bDpiScaledSurface(v250) )
                            {
                              v188 = (struct REGION *)*((_QWORD *)v250 + 142);
                            }
                          }
                          else
                          {
                            v188 = DC::prgnVisSnap(v250);
                          }
                          v352 = 0LL;
                          v353 = 0;
                          v354 = 1;
                          v355 = 0LL;
                          XCLIPOBJ::vSetup((XCLIPOBJ *)v347, v188, (struct ERECTL *)&v343, 0);
                          if ( v348 == v350 || v349 == v351 )
                            goto LABEL_430;
                          v279 = 0LL;
                          v280 = 0;
                          v281 = 0;
                          v189 = *(_QWORD *)(v269 + 48);
                          v282 = v189;
                          if ( v258.x && (v190 = *(_DWORD *)(*((_QWORD *)v250 + 122) + 108LL), (v190 & 1) != 0) )
                          {
                            v191 = v261;
                            if ( (v190 & 9) != 9 )
                            {
                              v305[1] = v261[14];
                              v305[2] = v261[15];
                              v305[0] = v261[24];
                              v192 = (__int64 *)*((_QWORD *)v261 + 16);
                              v305[3] = 0;
                              v307 = 0LL;
                              v306 = *v192;
                              SURFMEM::bCreateDIB(
                                (SURFMEM *)&v279,
                                (struct _DEVBITMAPINFO *)v305,
                                0LL,
                                0LL,
                                0,
                                0LL,
                                0LL,
                                0,
                                1,
                                0,
                                0);
                              if ( !v279 )
                                goto LABEL_429;
                              v193 = (v191[28] & 0x400) == 0;
                              v345 = v191[14];
                              v346 = v191[15];
                              v344 = 0LL;
                              v283 = 0LL;
                              if ( !(v193
                                   ? ((__int64 (__fastcall *)(_DWORD *, _DWORD *, _QWORD, _QWORD, __int64 *, __int64 *))EngCopyBits)(
                                       v279 + 6,
                                       v191 + 6,
                                       0LL,
                                       0LL,
                                       &v344,
                                       &v283)
                                   : (*((unsigned int (__fastcall **)(_DWORD *, _DWORD *, _QWORD, _QWORD, __int64 *, __int64 *))v296
                                      + 355))(
                                       v279 + 6,
                                       v191 + 6,
                                       0LL,
                                       0LL,
                                       &v344,
                                       &v283)) )
                                goto LABEL_429;
                              v195 = v279[24];
                              if ( (unsigned int)(v195 - 1) > 5 )
                                goto LABEL_429;
                              ((void (*)(void))(&apfnMirror)[v195])();
                              v191 = v279;
                              v261 = v279;
                            }
                          }
                          else
                          {
                            v191 = v261;
                          }
                          v276 = 0LL;
                          v277 = 0;
                          v278 = 0;
                          v273 = 0LL;
                          v274 = 0;
                          v275 = 0;
                          if ( !DIB )
                            goto LABEL_437;
                          v308[1] = v343.m128i_i32[2] - v343.m128i_i32[0];
                          v308[2] = v343.m128i_i32[3] - v343.m128i_i32[1];
                          v308[3] = 0;
                          v310 = 0LL;
                          v308[0] = 6;
                          v309 = *(_QWORD *)gppalRGB;
                          DIB = SURFMEM::bCreateDIB(
                                  (SURFMEM *)&v276,
                                  (struct _DEVBITMAPINFO *)v308,
                                  0LL,
                                  0LL,
                                  0,
                                  0LL,
                                  0LL,
                                  0,
                                  1,
                                  0,
                                  0) & v185;
                          if ( DIB )
                          {
                            if ( !v249 )
                            {
                              v311[1] = prclDest.right - prclDest.left;
                              v311[2] = prclDest.bottom - prclDest.top;
                              v311[3] = 0;
                              v313 = 0LL;
                              v311[0] = 6;
                              v312 = *(_QWORD *)gppalRGB;
                              DIB = SURFMEM::bCreateDIB(
                                      (SURFMEM *)&v273,
                                      (struct _DEVBITMAPINFO *)v311,
                                      0LL,
                                      0LL,
                                      0,
                                      0LL,
                                      0LL,
                                      0,
                                      1,
                                      0,
                                      0);
                              if ( DIB )
                              {
                                v196 = prclDest.left;
                                pptlSrc.x = prclDest.left;
                                v258.x = prclDest.top;
                                pptlSrc.y = prclDest.top;
                                if ( !(unsigned int)ERECTL::bOffsetSubtract((ERECTL *)&prclDest, &pptlSrc, 1) )
                                {
                                  v197 = 87;
LABEL_428:
                                  EngSetLastError(v197);
                                  SURFMEM::~SURFMEM((SURFMEM *)&v273);
                                  SURFMEM::~SURFMEM((SURFMEM *)&v276);
LABEL_429:
                                  SURFMEM::~SURFMEM((SURFMEM *)&v279);
                                  v13 = 0;
LABEL_430:
                                  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v257);
                                  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v262);
                                  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v256);
                                  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v268);
                                  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v263);
                                  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v321, v211, v212);
                                  goto LABEL_46;
                                }
                                if ( prclDest.right > prclDest.left
                                  && prclDest.bottom > prclDest.top
                                  && v196 <= v261[14]
                                  && v258.x <= v261[15] )
                                {
                                  v198 = (SURFOBJ *)(v273 + 24);
                                  if ( !v273 )
                                    v198 = 0LL;
                                  EngCopyBits(v198, (SURFOBJ *)(v261 + 6), 0LL, v117, &prclDest, &pptlSrc);
                                }
                                v199 = 0;
                                v261 = (_DWORD *)v273;
                                v200 = *(_DWORD **)(v273 + 80);
                                v201 = (_DWORD *)((char *)v200 + *(_DWORD *)(v273 + 60) * *(_DWORD *)(v273 + 88));
                                if ( v200 != v201 )
                                {
                                  v202 = (_DWORD *)v273;
                                  do
                                  {
                                    if ( v199 >= prclDest.top && v199 < prclDest.bottom )
                                    {
                                      v203 = v200;
                                      v204 = 0;
                                      v205 = 0LL;
                                      v206 = (int)v202[14];
                                      v207 = &v200[v206];
                                      v208 = (v206 * 4) >> 2;
                                      if ( v200 > v207 )
                                        v208 = 0LL;
                                      if ( v208 )
                                      {
                                        do
                                        {
                                          if ( v204 >= prclDest.left && v204 < prclDest.right )
                                            *v203 |= 0xFF000000;
                                          ++v204;
                                          ++v203;
                                          ++v205;
                                        }
                                        while ( v205 != v208 );
                                        v202 = (_DWORD *)v273;
                                      }
                                    }
                                    ++v199;
                                    v200 = (_DWORD *)((char *)v200 + (int)v202[22]);
                                  }
                                  while ( v200 != v201 );
                                  v261 = v202;
                                  v189 = v282;
                                }
                                HIBYTE(a11) |= 1u;
                                pxlo = xloIdent;
                              }
                            }
                            v209 = *(_DWORD **)(v276 + 72);
                            v210 = (unsigned __int64)*(unsigned int *)(v276 + 64) >> 2;
                            if ( v210 )
                            {
                              if ( ((unsigned __int8)v209 & 4) == 0 )
                                goto LABEL_424;
                              *v209 = 0;
                              if ( --v210 )
                              {
                                ++v209;
LABEL_424:
                                memset(v209, 0, 8 * (v210 >> 1));
                                if ( (v210 & 1) != 0 )
                                  v209[v210 - 1] = 0;
                              }
                            }
                          }
                          if ( !DIB )
                          {
                            v197 = 8;
                            goto LABEL_428;
                          }
                          `vector constructor iterator'(&pptfx, 8uLL, 3uLL, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
                          v258.x = v356.x - 16 * v315.m128i_i32[0];
                          v258.y = v356.y - 16 * v315.m128i_i32[1];
                          pptfx = v258;
                          v258.x = v357 - 16 * v315.m128i_i32[0];
                          v258.y = v358 - 16 * v315.m128i_i32[1];
                          v369 = v258;
                          v258.x = v359 - 16 * v315.m128i_i32[0];
                          v258.y = v360 - 16 * v315.m128i_i32[1];
                          v370 = v258;
                          v213 = (SURFOBJ *)(v261 + 6);
                          if ( !v261 )
                            v213 = 0LL;
                          if ( v276 )
                            v214 = (SURFOBJ *)(v276 + 24);
                          else
                            v214 = 0LL;
                          EngPlgBlt(v214, v213, 0LL, 0LL, pxlo, 0LL, 0LL, &pptfx, &prclDest, 0LL, 3u);
                          v341 = 0LL;
                          inited = EXLATEOBJ::bInitXlateObj(
                                     (__int64 *)&v268,
                                     0LL,
                                     0,
                                     (__int64)gppalRGB,
                                     v297,
                                     0LL,
                                     v264,
                                     *(_DWORD *)(*((_QWORD *)v252 + 122) + 184LL),
                                     *(_DWORD *)(*((_QWORD *)v252 + 122) + 176LL),
                                     v240,
                                     0);
                          v191 = (_DWORD *)v276;
                          v185 = inited;
                          *(_QWORD *)&prclDest.left = 0LL;
                          v267 = v268;
                          pxlo = xloIdent;
                          prclDest.right = v343.m128i_i32[2] - v343.m128i_i32[0];
                          prclDest.bottom = v343.m128i_i32[3] - v343.m128i_i32[1];
                          `vector destructor iterator'(&pptfx, 8uLL, 3uLL, (void (*)(void *))vSrcCopyDummy);
LABEL_437:
                          if ( v185 )
                          {
                            v216 = v269;
                            ++*(_DWORD *)(v269 + 92);
                            v217 = v250;
                            v218 = (struct ECLIPOBJ *)*((_QWORD *)v252 + 6);
                            v219 = (struct ECLIPOBJ **)*((_QWORD *)v250 + 6);
                            if ( v219 == (struct ECLIPOBJ **)v218
                              || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)&v250) && v219[440] == v218 )
                            {
                              if ( (*((_DWORD *)v217 + 9) & 0xE0) != 0 )
                              {
                                v320 = v343;
                                XDCOBJ::vAccumulateTight((XDCOBJ *)&v250, v218, &v320);
                                v216 = v269;
                              }
                              v316 = a11;
                              v317 = pxlo;
                              v318 = v142;
                              v319 = v164;
                              if ( v343.m128i_i32[2] - v343.m128i_i32[0] == prclDest.right - prclDest.left
                                && v343.m128i_i32[3] - v343.m128i_i32[1] == prclDest.bottom - prclDest.top )
                              {
                                BYTE1(v316) = BYTE1(a11) & 0xFE;
                              }
                              if ( (*(_DWORD *)(v216 + 112) & 0x10000) != 0 )
                                v221 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(v189 + 3256);
                              else
                                v221 = EngAlphaBlend;
                              v222 = v191 + 6;
                              if ( !v191 )
                                v222 = 0LL;
                              v13 = ((__int64 (__fastcall *)(__int64, _DWORD *, _BYTE *, HDC, __m128i *, RECTL *, int *))v221)(
                                      v216 + 24,
                                      v222,
                                      v347,
                                      v267,
                                      &v343,
                                      &prclDest,
                                      &v316);
                              goto LABEL_455;
                            }
                            v220 = 87;
                          }
                          else
                          {
                            v220 = 6;
                          }
                          EngSetLastError(v220);
                          v13 = 0;
LABEL_455:
                          SURFMEM::~SURFMEM((SURFMEM *)&v273);
                          SURFMEM::~SURFMEM((SURFMEM *)&v276);
                          SURFMEM::~SURFMEM((SURFMEM *)&v279);
                          if ( v164 )
                          {
                            cEntries = (int)v164[1].cEntries;
                            if ( (int)cEntries < 0 )
                            {
                              if ( (_DWORD)cEntries == -1 )
                                FreeThreadBufferWithTag(v164);
                            }
                            else
                            {
                              _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
                              v117 = v256;
                              v142 = v262;
                            }
                          }
                          if ( v142 )
                          {
                            v224 = (int)v142[1].cEntries;
                            if ( (int)v224 < 0 )
                            {
                              if ( (_DWORD)v224 == -1 )
                                FreeThreadBufferWithTag(v142);
                            }
                            else
                            {
                              _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v224);
                              v117 = v256;
                            }
                          }
                          if ( v117 )
                          {
                            v225 = (int)v117[1].cEntries;
                            if ( (int)v225 < 0 )
                            {
                              if ( (_DWORD)v225 == -1 )
                                FreeThreadBufferWithTag(v117);
                            }
                            else
                            {
                              _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v225);
                            }
                          }
                          if ( v268 )
                          {
                            v226 = *((int *)v268 + 9);
                            if ( (int)v226 < 0 )
                            {
                              if ( (_DWORD)v226 == -1 )
                                FreeThreadBufferWithTag(v268);
                            }
                            else
                            {
                              _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v226);
                            }
                          }
                          if ( v263 )
                          {
                            v227 = *((_DWORD *)v263 + 9);
                            if ( v227 >= 0 )
                            {
                              _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * *((int *)v263 + 9));
                              DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v321, v56, (SURFACE **)v57);
                              goto LABEL_46;
                            }
                            if ( v227 == -1 )
                            {
                              FreeThreadBufferWithTag(v263);
                              DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v321, v228, v229);
                              goto LABEL_46;
                            }
                          }
                          goto LABEL_485;
                        }
                        v66 = UserScreenAccessCheck(512LL, v56);
                      }
                      if ( v66 )
                        goto LABEL_128;
                    }
LABEL_483:
                    EngSetLastError(6u);
                    v13 = 0;
                    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v321, v234, v235);
                    goto LABEL_46;
                  }
                  v64 = UserScreenAccessCheck(v58, v56);
                }
                if ( !v64 )
                  goto LABEL_483;
                goto LABEL_120;
              }
            }
          }
          else
          {
            v236 = XDCOBJ::bFullScreen((XDCOBJ *)&v252);
            v13 = XDCOBJ::bFullScreen((XDCOBJ *)&v250) | v236;
          }
LABEL_485:
          DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v321, v56, (SURFACE **)v57);
LABEL_46:
          if ( v252 )
          {
            if ( (_DWORD)v253 && (*((_DWORD *)v252 + 11) & 2) != 0 )
            {
              if ( !HIDWORD(v253) )
              {
                v25 = XDCOBJ::GetUserAttr((XDCOBJ *)&v252);
                if ( v25 )
                  DC::RestoreAttributes(v252, v25);
              }
              *((_DWORD *)v252 + 11) &= ~2u;
              LODWORD(v253) = 0;
            }
            v255 = 0;
            v26 = *(_QWORD *)v252;
            HmgDecrementExclusiveReferenceCountEx(v252, HIDWORD(v253), &v255);
            if ( v255 )
              bDeleteDCInternalEx(v26, 0LL);
          }
          goto LABEL_15;
        }
        DC::vMarkTransformDirty(v20);
      }
      else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      {
        PsGetWin32KFilterSet();
      }
      v20 = v252;
      goto LABEL_64;
    }
    DC::vMarkTransformDirty(v14);
LABEL_31:
    v14 = v250;
    goto LABEL_32;
  }
  v15 = XDCOBJ::GetUserAttr((XDCOBJ *)&v250);
  if ( !v15 || DC::SaveAttributes(v250, v15) )
  {
    *((_DWORD *)v250 + 11) |= 2u;
    v14 = v250;
    LODWORD(v251) = 1;
    goto LABEL_26;
  }
  _InterlockedDecrement((volatile signed __int32 *)v250 + 3);
  v250 = 0LL;
LABEL_14:
  EngSetLastError(6u);
  v13 = 0;
LABEL_15:
  if ( v250 )
  {
    if ( (_DWORD)v251 && (*((_DWORD *)v250 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v251) )
      {
        v16 = XDCOBJ::GetUserAttr((XDCOBJ *)&v250);
        if ( v16 )
          DC::RestoreAttributes(v250, v16);
      }
      *((_DWORD *)v250 + 11) &= ~2u;
      LODWORD(v251) = 0;
    }
    v254 = 0;
    v17 = *(_QWORD *)v250;
    HmgDecrementExclusiveReferenceCountEx(v250, HIDWORD(v251), &v254);
    if ( v254 )
      bDeleteDCInternalEx(v17, 0LL);
  }
  return v13;
}
