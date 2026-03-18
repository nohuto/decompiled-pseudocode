/*
 * XREFs of NtGdiAlphaBlend @ 0x1C007EE80
 * Callers:
 *     BltIcon @ 0x1C0063C80 (BltIcon.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C024CA20 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C024E90C (xxxRealDrawMenuItem.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreStretchBltInternal @ 0x1C0019A20 (GreStretchBltInternal.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C001A554 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C001ACC8 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C0071268 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C0075490 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0077C50 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0077CC0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00783D0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C007CD30 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00843B8 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0085AA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     bCvtPts1 @ 0x1C0086360 (bCvtPts1.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C008A108 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     EngCopyBits @ 0x1C00D10E0 (EngCopyBits.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C00EA320 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00EA4AC (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00FEC0C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C011B8F8 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0149594 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C01495EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ?bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C026F3D8 (-bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026FA74 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0278E94 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     EngPlgBlt @ 0x1C028CE10 (EngPlgBlt.c)
 */

__int64 __fastcall NtGdiAlphaBlend(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v11; // edi
  struct ECLIPOBJ *v12; // rdx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v14; // rax
  DC *v15; // rdx
  int v16; // ecx
  struct _DC_ATTR *v17; // rax
  int v18; // r14d
  char *v19; // rbx
  int v20; // esi
  char *v21; // rcx
  int v22; // eax
  float v23; // xmm4_4
  LONG left; // edi
  LONG top; // r9d
  LONG right; // edx
  LONG bottom; // r8d
  int v28; // r9d
  int v29; // edi
  int v30; // edx
  int v31; // ecx
  int v32; // eax
  int v33; // ebx
  __int64 v34; // r8
  struct ECLIPOBJ *v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // r14
  __int64 v38; // rsi
  __int64 v39; // rdi
  int v40; // eax
  int v41; // eax
  __int64 v42; // rax
  int v43; // ecx
  int v44; // edx
  int *v45; // rcx
  __int64 v46; // r11
  __int64 v47; // r10
  int *v48; // rcx
  __int64 v49; // r10
  __int64 v50; // r9
  LONG v51; // r9d
  __int64 v52; // r10
  LONG v53; // r8d
  LONG v54; // edi
  bool v55; // zf
  _DWORD *v56; // rax
  int v57; // edi
  int v58; // eax
  int v59; // ebx
  __int64 v60; // rdi
  _DWORD *v61; // rax
  __int64 v62; // r13
  __int64 v63; // rax
  int v64; // edx
  __int64 v65; // rax
  int v66; // ecx
  unsigned int v67; // r12d
  __int64 v68; // r11
  unsigned int i; // r9d
  int v70; // eax
  _DWORD *XlateObject; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  int v74; // edx
  __int64 v75; // rax
  int v76; // ecx
  unsigned int v77; // r12d
  __int64 v78; // r11
  unsigned int n; // r9d
  int v80; // eax
  XLATEOBJ *v81; // rax
  XLATEOBJ *v82; // r12
  int v83; // edi
  int v84; // edi
  __int64 v85; // rcx
  __int64 v86; // rax
  int v87; // edx
  __int64 v88; // rax
  int v89; // ecx
  unsigned int v90; // r13d
  __int64 v91; // r11
  unsigned int j; // r9d
  int v93; // eax
  XLATEOBJ *v94; // rax
  XLATEOBJ *v95; // r13
  __int64 v96; // rcx
  __int64 v97; // rax
  int v98; // edx
  __int64 v99; // rax
  int v100; // ecx
  int v101; // eax
  __int64 v102; // rax
  unsigned int v103; // r10d
  unsigned int v104; // r8d
  int v105; // eax
  XLATEOBJ *v106; // rax
  XLATEOBJ *v107; // r14
  __int64 v108; // rdi
  int v109; // eax
  __int64 v110; // rdx
  __int64 v111; // rax
  struct REGION *v112; // rdx
  __int64 v113; // r9
  __int64 v114; // rbx
  HDC v115; // rsi
  struct ECLIPOBJ *v116; // rdx
  __int64 v117; // rdi
  BOOL (__stdcall *v118)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rax
  __int64 v119; // rdx
  __int64 cEntries; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rcx
  unsigned int v124; // esi
  struct _DC_ATTR *v125; // rax
  __int64 v126; // rbx
  struct _DC_ATTR *v127; // rax
  __int64 v128; // rbx
  int v130; // eax
  __int64 v131; // rdx
  SURFACE **v132; // r8
  int v133; // r8d
  int v134; // edx
  HDC v135; // rcx
  __int64 v136; // rax
  char v137; // di
  int v138; // eax
  int v139; // edi
  unsigned int CurrentProcessId; // eax
  __int32 v141; // eax
  __int32 v142; // eax
  FIX x; // r9d
  FIX v144; // r8d
  FIX y; // r11d
  FIX v146; // ecx
  int v147; // r10d
  __int64 v148; // r8
  __int64 v149; // rdi
  unsigned int v150; // eax
  __int64 v151; // r8
  int v152; // edx
  __int64 v153; // rax
  int v154; // eax
  _DWORD *v155; // rcx
  ULONG v156; // ecx
  LONG v157; // ecx
  int v158; // r9d
  __int64 v159; // rax
  __int64 v160; // rax
  unsigned int v161; // eax
  __int64 v162; // r8
  __int64 v163; // r10
  unsigned int v164; // eax
  __int64 v165; // r8
  __int64 v166; // r10
  _DWORD *v167; // rdx
  int v168; // eax
  int v169; // ecx
  unsigned int v170; // eax
  __int64 v171; // rax
  __int64 v172; // rax
  unsigned int v173; // eax
  __int64 v174; // r8
  __int64 v175; // r10
  unsigned int v176; // eax
  __int64 v177; // r8
  __int64 v178; // r10
  XLATEOBJ *v179; // rdx
  int v180; // eax
  int v181; // ecx
  unsigned int v182; // eax
  __int64 v183; // rax
  __int64 v184; // rax
  unsigned int v185; // eax
  __int64 v186; // r8
  __int64 v187; // r10
  unsigned int v188; // eax
  __int64 v189; // r8
  __int64 v190; // r10
  XLATEOBJ *v191; // rdx
  int v192; // eax
  int v193; // ecx
  unsigned int v194; // eax
  __int64 v195; // rax
  __int64 v196; // rax
  unsigned int v197; // eax
  __int64 v198; // r9
  __int64 v199; // r11
  unsigned int v200; // eax
  __int64 v201; // r9
  __int64 v202; // r11
  XLATEOBJ *v203; // rdx
  int v204; // eax
  int v205; // ecx
  unsigned int v206; // eax
  __int64 *v207; // rax
  int v209; // edx
  int v210; // r9d
  ULONG v211; // ecx
  SURFOBJ *v212; // rcx
  LONG v213; // r10d
  _DWORD *v214; // rcx
  _DWORD *v215; // r11
  __int64 v216; // rdi
  _DWORD *v217; // r9
  LONG v218; // r8d
  unsigned __int64 v219; // rdx
  _DWORD *v220; // rax
  unsigned __int64 v221; // rdx
  __int64 k; // rax
  _DWORD *v223; // r8
  unsigned __int64 v224; // rdx
  SURFOBJ *v225; // rdx
  SURFOBJ *v226; // rcx
  int inited; // eax
  __int64 v228; // r8
  ULONG v229; // ecx
  __int64 v230; // rcx
  int v231; // ebx
  POINTL *pptlBrushOrg; // [rsp+30h] [rbp-D0h]
  POINTFIX *pptfx; // [rsp+38h] [rbp-C8h]
  RECTL *prcl; // [rsp+40h] [rbp-C0h]
  POINTL *pptl; // [rsp+48h] [rbp-B8h]
  int v236; // [rsp+70h] [rbp-90h]
  int v237; // [rsp+70h] [rbp-90h]
  int v238; // [rsp+70h] [rbp-90h]
  int DIB; // [rsp+70h] [rbp-90h]
  int v241; // [rsp+74h] [rbp-8Ch]
  int v242; // [rsp+78h] [rbp-88h]
  int v243; // [rsp+78h] [rbp-88h]
  int v244; // [rsp+78h] [rbp-88h]
  int v245; // [rsp+78h] [rbp-88h]
  int v246; // [rsp+7Ch] [rbp-84h]
  int v247; // [rsp+7Ch] [rbp-84h]
  int v248; // [rsp+7Ch] [rbp-84h]
  int v249; // [rsp+7Ch] [rbp-84h]
  int v250; // [rsp+80h] [rbp-80h]
  int v251; // [rsp+80h] [rbp-80h]
  int v252; // [rsp+80h] [rbp-80h]
  int v253; // [rsp+80h] [rbp-80h]
  __int64 v254; // [rsp+88h] [rbp-78h]
  POINTFIX v255; // [rsp+88h] [rbp-78h]
  char v256; // [rsp+90h] [rbp-70h]
  struct ECLIPOBJ *v257; // [rsp+98h] [rbp-68h] BYREF
  __int64 v258; // [rsp+A0h] [rbp-60h]
  DC *v259; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v260; // [rsp+B0h] [rbp-50h]
  int v261; // [rsp+B8h] [rbp-48h] BYREF
  int v262; // [rsp+BCh] [rbp-44h] BYREF
  __int64 v263; // [rsp+C0h] [rbp-40h]
  int v264; // [rsp+C8h] [rbp-38h]
  XLATEOBJ *v265; // [rsp+D0h] [rbp-30h] BYREF
  XLATEOBJ *v266; // [rsp+D8h] [rbp-28h] BYREF
  HDC v267; // [rsp+E0h] [rbp-20h] BYREF
  XLATEOBJ *pxlo; // [rsp+E8h] [rbp-18h]
  int v269; // [rsp+F0h] [rbp-10h]
  __int64 v270; // [rsp+F8h] [rbp-8h]
  XLATEOBJ *v271; // [rsp+100h] [rbp+0h] BYREF
  HDC v272; // [rsp+108h] [rbp+8h]
  int v273; // [rsp+110h] [rbp+10h]
  HDC v274; // [rsp+118h] [rbp+18h] BYREF
  HDC v275; // [rsp+120h] [rbp+20h]
  char *v276; // [rsp+128h] [rbp+28h] BYREF
  int v277; // [rsp+130h] [rbp+30h]
  int v278; // [rsp+134h] [rbp+34h]
  __int64 v279; // [rsp+138h] [rbp+38h] BYREF
  char v280; // [rsp+140h] [rbp+40h]
  int v281; // [rsp+144h] [rbp+44h]
  __int64 v282; // [rsp+148h] [rbp+48h] BYREF
  char v283; // [rsp+150h] [rbp+50h]
  int v284; // [rsp+154h] [rbp+54h]
  __int64 v285; // [rsp+158h] [rbp+58h] BYREF
  char v286; // [rsp+160h] [rbp+60h]
  int v287; // [rsp+164h] [rbp+64h]
  POINTL pptlSrc; // [rsp+168h] [rbp+68h] BYREF
  _DWORD *v289; // [rsp+170h] [rbp+70h]
  __int64 v290; // [rsp+178h] [rbp+78h] BYREF
  char *v291; // [rsp+180h] [rbp+80h] BYREF
  int v292; // [rsp+188h] [rbp+88h]
  int v293; // [rsp+18Ch] [rbp+8Ch]
  struct PALETTE *v294; // [rsp+190h] [rbp+90h] BYREF
  __int64 v295; // [rsp+198h] [rbp+98h] BYREF
  __int64 v296; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v297; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v298; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v299; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v300; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 m; // [rsp+1C8h] [rbp+C8h]
  __int64 v302; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v303; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v304; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v305; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v306; // [rsp+1F0h] [rbp+F0h] BYREF
  struct PALETTE *v307; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v308; // [rsp+200h] [rbp+100h] BYREF
  __int64 v309; // [rsp+208h] [rbp+108h] BYREF
  __int64 v310; // [rsp+210h] [rbp+110h] BYREF
  _DWORD v311[4]; // [rsp+218h] [rbp+118h] BYREF
  __int64 v312; // [rsp+228h] [rbp+128h]
  __int64 v313; // [rsp+230h] [rbp+130h]
  _DWORD v314[4]; // [rsp+238h] [rbp+138h] BYREF
  __int64 v315; // [rsp+248h] [rbp+148h]
  __int64 v316; // [rsp+250h] [rbp+150h]
  _DWORD v317[4]; // [rsp+258h] [rbp+158h] BYREF
  __int64 v318; // [rsp+268h] [rbp+168h]
  __int64 v319; // [rsp+270h] [rbp+170h]
  RECTL v320; // [rsp+280h] [rbp+180h] BYREF
  __m128i v321; // [rsp+290h] [rbp+190h]
  int v322; // [rsp+2A0h] [rbp+1A0h] BYREF
  HDC v323; // [rsp+2A8h] [rbp+1A8h]
  XLATEOBJ *v324; // [rsp+2B0h] [rbp+1B0h]
  XLATEOBJ *v325; // [rsp+2B8h] [rbp+1B8h]
  _OWORD v326[2]; // [rsp+2C0h] [rbp+1C0h] BYREF
  __int64 v327; // [rsp+2E0h] [rbp+1E0h]
  __int64 v328; // [rsp+2E8h] [rbp+1E8h]
  char v329; // [rsp+2F0h] [rbp+1F0h]
  int v330; // [rsp+2F4h] [rbp+1F4h]
  __int64 v331; // [rsp+2F8h] [rbp+1F8h]
  __int64 v332; // [rsp+300h] [rbp+200h]
  int v333; // [rsp+308h] [rbp+208h]
  __int64 v334; // [rsp+310h] [rbp+210h]
  __int64 v335; // [rsp+318h] [rbp+218h]
  __int16 v336; // [rsp+320h] [rbp+220h]
  __int64 v337; // [rsp+328h] [rbp+228h]
  __int64 v338; // [rsp+330h] [rbp+230h]
  __int16 v339; // [rsp+338h] [rbp+238h]
  __int64 v340; // [rsp+340h] [rbp+240h]
  __int64 v341; // [rsp+348h] [rbp+248h]
  __int64 v342; // [rsp+350h] [rbp+250h]
  __int64 v343; // [rsp+358h] [rbp+258h]
  __int128 v344; // [rsp+360h] [rbp+260h]
  __int64 v345; // [rsp+370h] [rbp+270h]
  __m128i v346; // [rsp+380h] [rbp+280h] BYREF
  __int64 v347; // [rsp+390h] [rbp+290h]
  RECTL prclDest; // [rsp+3A0h] [rbp+2A0h] BYREF
  __m128i v349; // [rsp+3B0h] [rbp+2B0h] BYREF
  __int64 v350; // [rsp+3C0h] [rbp+2C0h] BYREF
  int v351; // [rsp+3C8h] [rbp+2C8h]
  int v352; // [rsp+3CCh] [rbp+2CCh]
  _BYTE v353[4]; // [rsp+3D0h] [rbp+2D0h] BYREF
  int v354; // [rsp+3D4h] [rbp+2D4h]
  int v355; // [rsp+3D8h] [rbp+2D8h]
  int v356; // [rsp+3DCh] [rbp+2DCh]
  int v357; // [rsp+3E0h] [rbp+2E0h]
  __int64 v358; // [rsp+420h] [rbp+320h]
  int v359; // [rsp+428h] [rbp+328h]
  int v360; // [rsp+450h] [rbp+350h]
  __int64 v361; // [rsp+460h] [rbp+360h]
  struct _POINTFIX v362; // [rsp+470h] [rbp+370h] BYREF
  FIX v363; // [rsp+478h] [rbp+378h]
  int v364; // [rsp+47Ch] [rbp+37Ch]
  int v365; // [rsp+480h] [rbp+380h]
  FIX v366; // [rsp+484h] [rbp+384h]
  FIX v367; // [rsp+488h] [rbp+388h]
  int v368; // [rsp+48Ch] [rbp+38Ch]
  struct _POINTL v369; // [rsp+490h] [rbp+390h] BYREF
  int v370; // [rsp+498h] [rbp+398h]
  int v371; // [rsp+49Ch] [rbp+39Ch]
  int v372; // [rsp+4A0h] [rbp+3A0h]
  int v373; // [rsp+4A4h] [rbp+3A4h]
  POINTFIX v374; // [rsp+4A8h] [rbp+3A8h] BYREF
  POINTFIX v375; // [rsp+4B0h] [rbp+3B0h]
  POINTFIX v376; // [rsp+4B8h] [rbp+3B8h]

  v11 = a4;
  v262 = a2;
  v261 = a3;
  v275 = a1;
  v272 = a6;
  if ( (_BYTE)a11 || (a11 & 0xFE000000) != 0 )
    goto LABEL_509;
  if ( !a9 || !a10 )
    return 1LL;
  if ( a4 < 0 || a5 < 0 || a9 < 0 || a10 < 0 )
  {
LABEL_509:
    EngSetLastError(0x57u);
    return 0LL;
  }
  v269 = BYTE1(a11) & 0x80;
  v264 = BYTE1(a11) & 0x7F;
  BYTE1(a11) &= ~0x80u;
  v258 = 0LL;
  v257 = (struct ECLIPOBJ *)HmgLockEx(a1, 1LL, 0LL);
  v12 = v257;
  if ( !v257 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_272;
  }
  if ( (*((_DWORD *)v257 + 11) & 2) == 0 )
  {
    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v257);
    if ( UserAttr && !DC::SaveAttributes(v257, UserAttr) )
    {
      _InterlockedDecrement((volatile signed __int32 *)v257 + 3);
      v257 = 0LL;
      goto LABEL_266;
    }
    *((_DWORD *)v257 + 11) |= 2u;
    v12 = v257;
    LODWORD(v258) = 1;
  }
  if ( (*((_DWORD *)v12 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v12);
LABEL_272:
    v12 = v257;
  }
  if ( v12 && (*((_DWORD *)v12 + 9) & 0x10000) == 0 )
  {
    LOBYTE(v12) = 1;
    v259 = 0LL;
    v260 = 0LL;
    v14 = HmgLockEx(v272, v12, 0LL);
    v259 = (DC *)v14;
    v15 = (DC *)v14;
    if ( !v14 )
    {
      if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
        PsGetWin32KFilterSet();
      goto LABEL_284;
    }
    v16 = HIDWORD(v260);
    if ( HIDWORD(v260) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v14 + 48) + 40LL) & 0x8000) == 0
        || (v139 = *(_DWORD *)(v14 + 2096),
            CurrentProcessId = (unsigned int)PsGetCurrentProcessId(),
            v15 = v259,
            v139 != (CurrentProcessId & 0xFFFFFFFC)) )
      {
        _InterlockedDecrement((volatile signed __int32 *)v15 + 3);
        goto LABEL_277;
      }
      v16 = HIDWORD(v260);
      v11 = a4;
    }
    if ( (*((_DWORD *)v15 + 11) & 2) != 0 )
    {
LABEL_25:
      if ( (*((_DWORD *)v15 + 130) & 4) == 0 )
      {
LABEL_26:
        if ( v15 )
        {
          bSpDwmValidateSurface((struct XDCOBJ *)&v259, a7, a8, a9, a10);
          bSpDwmValidateSurface((struct XDCOBJ *)&v257, v262, v261, v11, a5);
          v277 = *(_DWORD *)(*((_QWORD *)v257 + 122) + 208LL);
          v18 = *(_DWORD *)(*((_QWORD *)v257 + 122) + 108LL) & 1;
          v278 = v18;
          if ( (*(_DWORD *)(*((_QWORD *)v257 + 122) + 340LL) & 0x1E000) != 0 )
          {
            EXFORMOBJ::vInit((EXFORMOBJ *)&v276, (struct XDCOBJ *)&v257, 0x204u, 0);
            v18 = v278;
            v19 = v276;
          }
          else
          {
            v19 = (char *)v257 + 320;
            v276 = (char *)v257 + 320;
          }
          v292 = *(_DWORD *)(*((_QWORD *)v259 + 122) + 208LL);
          v20 = *(_DWORD *)(*((_QWORD *)v259 + 122) + 108LL) & 1;
          v293 = v20;
          if ( (*(_DWORD *)(*((_QWORD *)v259 + 122) + 340LL) & 0x1E000) != 0 )
          {
            EXFORMOBJ::vInit((EXFORMOBJ *)&v291, (struct XDCOBJ *)&v259, 0x204u, 0);
            v21 = v291;
            v18 = v278;
            v19 = v276;
            v20 = v293;
          }
          else
          {
            v21 = (char *)v259 + 320;
            v291 = (char *)v259 + 320;
          }
          v22 = *((_DWORD *)v21 + 8);
          if ( (v22 & 1) != 0 )
          {
            v23 = 0.0;
            if ( v20 || *(float *)v21 >= 0.0 && *((float *)v21 + 3) >= 0.0 )
            {
              left = a7;
              prclDest.left = a7;
              top = a8;
              right = a9 + a7;
              prclDest.top = a8;
              bottom = a10 + a8;
              prclDest.right = a9 + a7;
              prclDest.bottom = a10 + a8;
              if ( (v22 & 0x43) != 0x43 )
              {
                bCvtPts1(v21, &prclDest, 2LL);
                bottom = prclDest.bottom;
                right = prclDest.right;
                top = prclDest.top;
                left = prclDest.left;
              }
              if ( v20 )
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
              if ( (*((_DWORD *)v19 + 8) & 1) != 0 && (v18 || v23 <= *(float *)v19 && v23 <= *((float *)v19 + 3)) )
              {
                v28 = v261;
                v29 = v262 + a4;
                v30 = v262;
                v31 = v261 + a5;
                v349.m128i_i32[2] = v262 + a4;
                v349.m128i_i32[3] = v261 + a5;
                v349.m128i_i64[0] = __PAIR64__(v261, v262);
                v32 = *((_DWORD *)v19 + 8) & 0x43;
                v273 = 0;
                if ( (_BYTE)v32 != 67 )
                {
                  bCvtPts1(v19, &v349, 2LL);
                  v31 = v349.m128i_i32[3];
                  v28 = v349.m128i_i32[1];
                  v30 = v349.m128i_i32[0];
                  v29 = v349.m128i_i32[2];
                }
                if ( v18 )
                {
                  ++v30;
                  ++v29;
                  v349.m128i_i32[0] = v30;
                  v349.m128i_i32[2] = v29;
                }
                if ( v30 > v29 )
                {
                  v141 = v30;
                  v30 = v29;
                  v349.m128i_i32[0] = v29;
                  v29 = v141;
                  v349.m128i_i32[2] = v141;
                }
                v33 = a4;
                if ( v28 > v31 )
                {
                  v142 = v28;
                  v349.m128i_i32[1] = v31;
                  v28 = v31;
                  v349.m128i_i32[3] = v142;
                  v31 = v142;
                }
              }
              else
              {
                v33 = a4;
                v369.x = v262;
                v369.y = v261;
                v371 = v261;
                v372 = v262;
                v370 = v262 + a4;
                v273 = 1;
                v373 = v261 + a5;
                EXFORMOBJ::bXform((EXFORMOBJ *)&v276, &v369, &v362, 3uLL);
                x = v362.x;
                v144 = v363;
                if ( (*((_DWORD *)v276 + 8) & 1) != 0 )
                {
                  if ( v362.x > v363 )
                  {
                    x = v362.x + 16;
                    v144 = v363 + 16;
                    v365 += 16;
                    v362.x += 16;
                    v363 += 16;
                  }
                  y = v362.y;
                  v146 = v366;
                  v147 = v364;
                  if ( v362.y > v366 )
                  {
                    y = v362.y + 16;
                    v147 = v364 + 16;
                    v146 = v366 + 16;
                    v362.y += 16;
                    v366 += 16;
                    v364 += 16;
                  }
                }
                else
                {
                  v146 = v366;
                  v147 = v364;
                  y = v362.y;
                }
                v367 = v144 + v365 - x;
                v368 = v146 + v147 - y;
                v148 = (v144 <= v367) ^ (unsigned int)(v144 > x);
                v149 = (v147 <= v368) ^ (unsigned int)(v147 > y);
                v150 = v148 ^ 3;
                if ( *(&v362.x + 2 * v148) <= *(&v362.x + 2 * ((unsigned int)v148 ^ 3LL)) )
                  v150 = v148;
                v151 = v150;
                v152 = *(&v362.x + 2 * v150);
                v153 = (unsigned int)v149 ^ 3;
                if ( *(&v362.y + 2 * v149) <= *(&v362.y + 2 * ((unsigned int)v149 ^ 3LL)) )
                  v153 = (unsigned int)v149;
                v30 = (v152 + 15) >> 4;
                v349.m128i_i32[0] = v30;
                v28 = (*(&v362.y + 2 * v153) + 15) >> 4;
                v29 = (*(&v362.x + 2 * (v151 ^ 3)) + 15) >> 4;
                v31 = (*(&v362.y + 2 * ((unsigned int)v153 ^ 3LL)) + 15) >> 4;
                v349.m128i_i32[1] = v28;
                v349.m128i_i64[1] = __PAIR64__(v31, v29);
              }
              if ( v30 == v29 || v28 == v31 )
              {
                v59 = 1;
                goto LABEL_226;
              }
              if ( (*((_DWORD *)v257 + 9) & 0xE0) != 0 )
                XDCOBJ::vAccumulate((XDCOBJ *)&v257, (struct ERECTL *)&v349);
              v328 = 0LL;
              memset(v326, 0, sizeof(v326));
              v344 = 0LL;
              v329 = 0;
              v330 = 0;
              v335 = 0LL;
              v336 = 256;
              v338 = 0LL;
              v339 = 256;
              v327 = 0LL;
              v333 = 0;
              v331 = 0LL;
              v332 = 0LL;
              v340 = 0LL;
              v343 = 0LL;
              v341 = 0LL;
              v342 = 0LL;
              v345 = 0LL;
              v334 = 0LL;
              v337 = 0LL;
              if ( !(unsigned int)DEVLOCKBLTOBJ::bLock(
                                    (DEVLOCKBLTOBJ *)v326,
                                    (struct XDCOBJ *)&v257,
                                    (struct XDCOBJ *)&v259) )
              {
                v231 = XDCOBJ::bFullScreen((XDCOBJ *)&v259);
                v59 = XDCOBJ::bFullScreen((XDCOBJ *)&v257) | v231;
                goto LABEL_225;
              }
              v35 = v257;
              v36 = *((_QWORD *)v257 + 62);
              v270 = v36;
              if ( !v36
                || (v37 = *((_QWORD *)v257 + 11),
                    v38 = *(_QWORD *)(v36 + 128),
                    v254 = v37,
                    v39 = *((_QWORD *)v259 + 62),
                    (v263 = v39) == 0) )
              {
                v59 = 1;
                goto LABEL_225;
              }
              if ( *(_DWORD *)(v39 + 656) )
              {
                if ( ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v39 + 656) )
                  goto LABEL_505;
                v36 = v270;
              }
              v40 = *(_DWORD *)(v39 + 112);
              if ( (v40 & 0x800) != 0 )
              {
                v154 = UserSurfaceAccessCheck(*(_QWORD *)(v39 + 648));
              }
              else
              {
                if ( (v40 & 0x10000000) == 0 )
                {
LABEL_65:
                  if ( ((*(_DWORD *)(v36 + 116) & 8) != 0 || *(_QWORD *)(v36 + 224))
                    && (*(_WORD *)(v36 + 102) & 0x200) != 0 )
                  {
                    goto LABEL_505;
                  }
                  v41 = *(_DWORD *)(v36 + 112);
                  if ( (v41 & 0x800) != 0 )
                  {
                    v138 = UserSurfaceAccessCheck(*(_QWORD *)(v36 + 648));
                  }
                  else
                  {
                    if ( (v41 & 0x10000000) == 0 )
                    {
LABEL_69:
                      v256 = HIBYTE(a11) & 1;
                      if ( (a11 & 0x1000000) != 0 )
                      {
                        if ( *(_DWORD *)(v39 + 96) != 6
                          || (v42 = *(_QWORD *)(v39 + 128)) == 0
                          || (v43 = *(_DWORD *)(v42 + 24), (v43 & 8) == 0)
                          && ((v43 & 2) == 0
                           || (v155 = *(_DWORD **)(v42 + 112), *v155 != 16711680)
                           || v155[1] != 65280
                           || v155[2] != 255) )
                        {
                          v156 = 87;
LABEL_504:
                          EngSetLastError(v156);
                          v124 = 0;
                          goto LABEL_250;
                        }
                      }
                      v44 = _mm_cvtsi128_si32(v349);
                      v321 = v349;
                      v45 = (int *)((char *)v257 + 1024);
                      if ( (*((_DWORD *)v257 + 10) & 1) == 0 )
                        v45 = (int *)((char *)v257 + 1016);
                      v46 = *v45;
                      v349.m128i_i32[0] = v44;
                      if ( (unsigned __int64)(v46 + v44 + 0x80000000LL) > 0xFFFFFFFF )
                        goto LABEL_503;
                      if ( (unsigned __int64)(v46 + v349.m128i_i32[2] + 0x80000000LL) > 0xFFFFFFFF )
                        goto LABEL_503;
                      v47 = v45[1];
                      if ( (unsigned __int64)(v47 + v349.m128i_i32[1] + 0x80000000LL) > 0xFFFFFFFF
                        || (unsigned __int64)(v47 + v349.m128i_i32[3] + 0x80000000LL) > 0xFFFFFFFF )
                      {
                        goto LABEL_503;
                      }
                      v349.m128i_i32[0] = v46 + v44;
                      v349.m128i_i32[2] += *v45;
                      v349.m128i_i32[1] += v45[1];
                      v349.m128i_i32[3] += v45[1];
                      v48 = (int *)((char *)v259 + 1024);
                      if ( (*((_DWORD *)v259 + 10) & 1) == 0 )
                        v48 = (int *)((char *)v259 + 1016);
                      v49 = *v48;
                      if ( (unsigned __int64)(v49 + prclDest.left + 0x80000000LL) > 0xFFFFFFFF
                        || (unsigned __int64)(v49 + prclDest.right + 0x80000000LL) > 0xFFFFFFFF
                        || (v50 = v48[1], (unsigned __int64)(v50 + prclDest.top + 0x80000000LL) > 0xFFFFFFFF)
                        || (unsigned __int64)(v50 + prclDest.bottom + 0x80000000LL) > 0xFFFFFFFF )
                      {
LABEL_503:
                        v156 = 534;
                        goto LABEL_504;
                      }
                      v51 = v49 + prclDest.left;
                      v52 = v263;
                      prclDest.left = v51;
                      v53 = *v48 + prclDest.right;
                      prclDest.right = v53;
                      v36 = (unsigned int)(v48[1] + prclDest.top);
                      prclDest.top += v48[1];
                      v54 = v48[1] + prclDest.bottom;
                      prclDest.bottom = v54;
                      v55 = *(_WORD *)(v263 + 100) == 1;
                      v56 = *(_DWORD **)(v263 + 48);
                      v289 = v56;
                      if ( v55 && v56 && (v56[10] & 0x20000) != 0 )
                      {
                        v157 = v56[646];
                        if ( v51 < v157 )
                          goto LABEL_313;
                        v158 = v56[647];
                        if ( (int)v36 < v158
                          || v53 > *(_DWORD *)(v263 + 56) + v157
                          || v54 > v158 + *(_DWORD *)(v263 + 60) )
                        {
                          goto LABEL_313;
                        }
                      }
                      else if ( v51 < 0 || (int)v36 < 0 || v53 > *(_DWORD *)(v263 + 56) || v54 > *(_DWORD *)(v263 + 60) )
                      {
LABEL_313:
                        v34 = 1LL;
                        v57 = 1;
LABEL_91:
                        if ( v263 == v270 )
                        {
                          v320 = prclDest;
                          ERECTL::operator*=(&v320.left, v349.m128i_i32);
                          if ( !ERECTL::bEmpty((ERECTL *)&v320) )
                            goto LABEL_502;
                          v52 = v263;
                          v34 = 1LL;
                        }
                        if ( !v57 )
                        {
                          v58 = 1;
                          if ( v256 || BYTE2(a11) != 0xFF || (v264 & 1) != 0 )
                          {
                            v59 = 1;
                          }
                          else
                          {
                            v133 = v261;
                            v134 = v262;
                            v135 = v275;
                            v136 = *((_QWORD *)v257 + 122);
                            v137 = *(_BYTE *)(v136 + 215);
                            *(_BYTE *)(v136 + 215) = 3;
                            v59 = GreStretchBltInternal(
                                    v135,
                                    v134,
                                    v133,
                                    v33,
                                    a5,
                                    v272,
                                    a7,
                                    a8,
                                    a9,
                                    a10,
                                    13369376,
                                    -1,
                                    0);
                            v52 = v263;
                            v58 = 0;
                            v34 = 1LL;
                            v36 = *((_QWORD *)v257 + 122);
                            *(_BYTE *)(v36 + 215) = v137;
                          }
                          if ( (v58 & v59) == 0 )
                            goto LABEL_225;
                          v60 = *(_QWORD *)(v52 + 128);
                          v274 = 0LL;
                          v61 = (_DWORD *)*((_QWORD *)v259 + 122);
                          v62 = *((_QWORD *)v259 + 11);
                          v241 = v61[45];
                          v242 = v61[46];
                          v246 = v61[44];
                          if ( !v60 )
                          {
                            if ( !v38 )
                              goto LABEL_320;
                            if ( (*(_DWORD *)(v38 + 24) & 0x800) != 0 )
                            {
                              v159 = *(_QWORD *)(v37 + 80);
                              if ( !v159 || v159 == *(_QWORD *)(v37 + 72) )
                                goto LABEL_320;
                            }
                          }
                          if ( v38 || (*(_DWORD *)(v60 + 24) & 0x800) == 0 )
                            goto LABEL_99;
                          v160 = *(_QWORD *)(v37 + 80);
                          if ( !v160 )
                          {
LABEL_320:
                            v267 = (HDC)xloIdent;
                            v236 = 1;
                            goto LABEL_118;
                          }
                          if ( v160 == *(_QWORD *)(v37 + 72) )
                          {
                            v267 = (HDC)xloIdent;
                            v236 = 1;
                          }
                          else
                          {
LABEL_99:
                            if ( v60 && v38 )
                            {
                              v63 = *(_QWORD *)(v60 + 120);
                              if ( v63 == v60 )
                                v64 = *(_DWORD *)(v60 + 32);
                              else
                                v64 = *(_DWORD *)(v63 + 32);
                              v65 = *(_QWORD *)(v38 + 120);
                              if ( v65 == v38 )
                                v66 = *(_DWORD *)(v38 + 32);
                              else
                                v66 = *(_DWORD *)(v65 + 32);
                              if ( v64 == v66 )
                              {
                                v267 = (HDC)xloIdent;
                                v236 = 1;
                                goto LABEL_118;
                              }
                              v67 = *(_DWORD *)(v60 + 56);
                              v304 = v37;
                              v305 = v62;
                              v303 = v38;
                              v306 = ghsemPalette;
                              GreAcquireSemaphore(ghsemPalette);
                              v68 = *(_QWORD *)(v60 + 120);
                              for ( i = 0; i < 8; ++i )
                              {
                                if ( v68 == v60 )
                                  v70 = *(_DWORD *)(v60 + 32);
                                else
                                  v70 = *(_DWORD *)(v68 + 32);
                                if ( *((_DWORD *)&xlateTable + 8 * v67 + 4) == v70 )
                                {
                                  v161 = XEPALOBJ::ulTime((XEPALOBJ *)&v303);
                                  if ( *(_DWORD *)(v162 + v163 + 20) == v161 )
                                  {
                                    v164 = XEPALOBJ::ulTime((XEPALOBJ *)&v304);
                                    if ( *(_DWORD *)(v165 + v166 + 28) == v164 )
                                    {
                                      v167 = *(_DWORD **)(v165 + v166 + 8);
                                      v267 = (HDC)v167;
                                      if ( (v167[19] & 0x6000) == 0 )
                                      {
                                        v168 = v167[19] & 0x100;
                                        v250 = v168;
                                        v169 = v167[1] & 4;
                                        if ( v169 )
                                        {
                                          v250 = v167[19] & 0x100;
                                        }
                                        else if ( !v168 )
                                        {
                                          goto LABEL_342;
                                        }
                                        if ( v169 && v241 == v167[6] )
                                        {
                                          v170 = XEPALOBJ::ulTime((XEPALOBJ *)&v305);
                                          if ( *(_DWORD *)(v165 + v166 + 24) == v170 )
                                            goto LABEL_342;
                                          v168 = v250;
                                        }
                                        if ( v168 && v242 == v167[7] && v246 == v167[8] )
                                        {
LABEL_342:
                                          _InterlockedIncrement((volatile signed __int32 *)(v165 + v166));
                                          *(_DWORD *)(v60 + 56) = v67;
                                          SEMOBJ::vUnlock((SEMOBJ *)&v306);
                                          v236 = 1;
                                          goto LABEL_118;
                                        }
                                      }
                                    }
                                  }
                                }
                                v67 = ((_BYTE)v67 + 1) & 7;
                              }
                              if ( ghsemPalette )
                              {
                                EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                                GreReleaseSemaphoreInternal(ghsemPalette);
                              }
                            }
                            LODWORD(pptl) = 0;
                            LODWORD(prcl) = v241;
                            LODWORD(pptfx) = v246;
                            LODWORD(pptlBrushOrg) = v242;
                            XlateObject = CreateXlateObject(0LL, 0, v60, v38, v62, v37, pptlBrushOrg, pptfx, prcl, pptl);
                            v267 = (HDC)XlateObject;
                            if ( XlateObject )
                            {
                              if ( v60 && v38 && (XlateObject[19] & 0x200) == 0 )
                                EXLATEOBJ::vAddToCache(&v267, v60, v38, v62, v37);
                              v236 = 1;
                            }
                            else
                            {
                              v236 = 0;
                            }
                          }
LABEL_118:
                          v275 = v267;
                          v72 = *((_QWORD *)v259 + 122);
                          v247 = *(_DWORD *)(v72 + 176);
                          v243 = *(_DWORD *)(v72 + 184);
                          if ( (v60
                             || gppalRGB
                             && ((*((_DWORD *)gppalRGB + 6) & 0x800) == 0
                              || (v171 = *(_QWORD *)(v62 + 80)) != 0 && v171 != *(_QWORD *)(v62 + 72)))
                            && (gppalRGB
                             || (*(_DWORD *)(v60 + 24) & 0x800) == 0
                             || (v172 = *(_QWORD *)(v62 + 80)) != 0 && v172 != *(_QWORD *)(v62 + 72)) )
                          {
                            if ( !v60 || !gppalRGB )
                            {
LABEL_135:
                              LODWORD(pptl) = 0;
                              LODWORD(prcl) = v241;
                              LODWORD(pptfx) = v247;
                              LODWORD(pptlBrushOrg) = v243;
                              v81 = (XLATEOBJ *)CreateXlateObject(
                                                  0LL,
                                                  0,
                                                  v60,
                                                  gppalRGB,
                                                  v62,
                                                  v62,
                                                  pptlBrushOrg,
                                                  pptfx,
                                                  prcl,
                                                  pptl);
                              pxlo = v81;
                              v82 = v81;
                              v265 = v81;
                              if ( v81 )
                              {
                                if ( v60 && gppalRGB && (v81[3].flXlate & 0x200) == 0 )
                                  EXLATEOBJ::vAddToCache(&v265, v60, gppalRGB, v62, v62);
                                v83 = 1;
                              }
                              else
                              {
                                v83 = 0;
                              }
LABEL_141:
                              v84 = v236 & v83;
                              v237 = v84;
                              v272 = (HDC)v82;
                              v85 = *((_QWORD *)v259 + 122);
                              v248 = *(_DWORD *)(v85 + 176);
                              v244 = *(_DWORD *)(v85 + 184);
                              if ( !v38
                                && (!gppalRGB
                                 || (*((_DWORD *)gppalRGB + 6) & 0x800) != 0
                                 && ((v183 = *(_QWORD *)(v37 + 80)) == 0 || v183 == *(_QWORD *)(v37 + 72))) )
                              {
                                v95 = xloIdent;
                                v266 = xloIdent;
                                goto LABEL_163;
                              }
                              if ( !gppalRGB && (*(_DWORD *)(v38 + 24) & 0x800) != 0 )
                              {
                                v184 = *(_QWORD *)(v37 + 80);
                                if ( !v184 || v184 == *(_QWORD *)(v37 + 72) )
                                {
                                  v95 = xloIdent;
                                  v266 = xloIdent;
                                  v237 = v84;
                                  goto LABEL_163;
                                }
                              }
                              if ( v38 && gppalRGB )
                              {
                                v86 = *(_QWORD *)(v38 + 120);
                                if ( v86 == v38 )
                                  v87 = *(_DWORD *)(v38 + 32);
                                else
                                  v87 = *(_DWORD *)(v86 + 32);
                                v88 = *((_QWORD *)gppalRGB + 15);
                                if ( (struct PALETTE *)v88 == gppalRGB )
                                  v89 = *((_DWORD *)gppalRGB + 8);
                                else
                                  v89 = *(_DWORD *)(v88 + 32);
                                if ( v87 == v89 )
                                {
                                  v95 = xloIdent;
                                  v266 = xloIdent;
                                  v237 = v84;
                                  goto LABEL_163;
                                }
                                if ( gppalRGB )
                                {
                                  v90 = *(_DWORD *)(v38 + 56);
                                  v295 = v37;
                                  v296 = v37;
                                  v294 = gppalRGB;
                                  v297 = ghsemPalette;
                                  GreAcquireSemaphore(ghsemPalette);
                                  v91 = *(_QWORD *)(v38 + 120);
                                  for ( j = 0; j < 8; ++j )
                                  {
                                    if ( v91 == v38 )
                                      v93 = *(_DWORD *)(v38 + 32);
                                    else
                                      v93 = *(_DWORD *)(v91 + 32);
                                    if ( *((_DWORD *)&xlateTable + 8 * v90 + 4) == v93 )
                                    {
                                      v185 = XEPALOBJ::ulTime((XEPALOBJ *)&v294);
                                      if ( *(_DWORD *)(v186 + v187 + 20) == v185 )
                                      {
                                        v188 = XEPALOBJ::ulTime((XEPALOBJ *)&v295);
                                        if ( *(_DWORD *)(v189 + v190 + 28) == v188 )
                                        {
                                          v191 = *(XLATEOBJ **)(v189 + v190 + 8);
                                          v266 = v191;
                                          if ( (v191[3].flXlate & 0x6000) == 0 )
                                          {
                                            v192 = v191[3].flXlate & 0x100;
                                            v252 = v192;
                                            v193 = v191->flXlate & 4;
                                            if ( v193 )
                                            {
                                              v252 = v191[3].flXlate & 0x100;
                                            }
                                            else if ( !v192 )
                                            {
                                              goto LABEL_399;
                                            }
                                            if ( v193 && v241 == v191[1].iUniq )
                                            {
                                              v194 = XEPALOBJ::ulTime((XEPALOBJ *)&v296);
                                              if ( *(_DWORD *)(v189 + v190 + 24) == v194 )
                                                goto LABEL_399;
                                              v192 = v252;
                                            }
                                            if ( v192 && v244 == v191[1].flXlate && v248 == *(_DWORD *)&v191[1].iSrcType )
                                            {
LABEL_399:
                                              _InterlockedIncrement((volatile signed __int32 *)(v189 + v190));
                                              *(_DWORD *)(v38 + 56) = v90;
                                              SEMOBJ::vUnlock((SEMOBJ *)&v297);
                                              v82 = v265;
                                              v95 = v266;
                                              pxlo = v265;
                                              goto LABEL_163;
                                            }
                                          }
                                        }
                                      }
                                    }
                                    v90 = ((_BYTE)v90 + 1) & 7;
                                  }
                                  if ( ghsemPalette )
                                  {
                                    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                                    GreReleaseSemaphoreInternal(ghsemPalette);
                                  }
                                }
                              }
                              LODWORD(pptl) = 0;
                              LODWORD(prcl) = v241;
                              LODWORD(pptfx) = v248;
                              LODWORD(pptlBrushOrg) = v244;
                              v94 = (XLATEOBJ *)CreateXlateObject(
                                                  0LL,
                                                  0,
                                                  v38,
                                                  gppalRGB,
                                                  v37,
                                                  v37,
                                                  pptlBrushOrg,
                                                  pptfx,
                                                  prcl,
                                                  pptl);
                              v266 = v94;
                              v95 = v94;
                              if ( v94 )
                              {
                                if ( v38 && gppalRGB && (v94[3].flXlate & 0x200) == 0 )
                                  EXLATEOBJ::vAddToCache(&v266, v38, gppalRGB, v37, v37);
                              }
                              else
                              {
                                v237 = 0;
                              }
LABEL_163:
                              v96 = *((_QWORD *)v259 + 122);
                              v249 = *(_DWORD *)(v96 + 176);
                              v245 = *(_DWORD *)(v96 + 184);
                              if ( (gppalRGB
                                 || v38
                                 && ((*(_DWORD *)(v38 + 24) & 0x800) == 0
                                  || (v195 = *(_QWORD *)(v37 + 80)) != 0 && v195 != *(_QWORD *)(v37 + 72)))
                                && (v38
                                 || (*((_DWORD *)gppalRGB + 6) & 0x800) == 0
                                 || (v196 = *(_QWORD *)(v37 + 80)) != 0 && v196 != *(_QWORD *)(v37 + 72)) )
                              {
                                if ( !gppalRGB || !v38 )
                                {
LABEL_180:
                                  LODWORD(pptl) = 0;
                                  LODWORD(prcl) = v241;
                                  LODWORD(pptfx) = v249;
                                  LODWORD(pptlBrushOrg) = v245;
                                  v106 = (XLATEOBJ *)CreateXlateObject(
                                                       0LL,
                                                       0,
                                                       (__int64)gppalRGB,
                                                       v38,
                                                       v37,
                                                       v37,
                                                       pptlBrushOrg,
                                                       pptfx,
                                                       prcl,
                                                       pptl);
                                  v271 = v106;
                                  v107 = v106;
                                  if ( v106 )
                                  {
                                    v108 = v254;
                                    if ( gppalRGB && v38 && (v106[3].flXlate & 0x200) == 0 )
                                      EXLATEOBJ::vAddToCache(&v271, gppalRGB, v38, v254, v254);
                                    v109 = 1;
                                    goto LABEL_186;
                                  }
                                  v109 = 0;
LABEL_429:
                                  v108 = v254;
LABEL_186:
                                  v238 = v109 & v237;
                                  v110 = *((_QWORD *)v257 + 144);
                                  if ( v110
                                    && (*((_DWORD *)v257 + 10) & 2) != 0
                                    && (unsigned int)DC::bDpiScaledSurface(v257) )
                                  {
                                    v111 = v110;
                                  }
                                  else
                                  {
                                    v111 = *((_QWORD *)v257 + 142);
                                  }
                                  if ( v111 )
                                  {
                                    if ( !v110
                                      || (*((_DWORD *)v257 + 10) & 2) == 0
                                      || !(unsigned int)DC::bDpiScaledSurface(v257) )
                                    {
                                      v112 = (struct REGION *)*((_QWORD *)v257 + 142);
                                    }
                                  }
                                  else
                                  {
                                    v112 = DC::prgnVisSnap(v257);
                                  }
                                  v358 = 0LL;
                                  v359 = 0;
                                  v360 = 1;
                                  v361 = 0LL;
                                  XCLIPOBJ::vSetup((XCLIPOBJ *)v353, v112, (struct ERECTL *)&v349, 0);
                                  if ( v354 == v356 || v355 == v357 )
                                  {
                                    v124 = 1;
LABEL_249:
                                    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v271);
                                    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v266);
                                    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v265);
                                    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v274);
                                    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v267);
LABEL_250:
                                    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v326, v131, v132);
LABEL_227:
                                    if ( v259 )
                                    {
                                      if ( (_DWORD)v260 && (*((_DWORD *)v259 + 11) & 2) != 0 )
                                      {
                                        if ( !HIDWORD(v260) )
                                        {
                                          v125 = XDCOBJ::GetUserAttr((XDCOBJ *)&v259);
                                          if ( v125 )
                                            DC::RestoreAttributes(v259, v125);
                                        }
                                        *((_DWORD *)v259 + 11) &= ~2u;
                                        LODWORD(v260) = 0;
                                      }
                                      v262 = 0;
                                      v126 = *(_QWORD *)v259;
                                      HmgDecrementExclusiveReferenceCountEx(v259, HIDWORD(v260), &v262);
                                      if ( v262 )
                                        bDeleteDCInternalEx(v126, 0LL);
                                    }
                                    goto LABEL_236;
                                  }
                                  v113 = v270;
                                  v285 = 0LL;
                                  v286 = 0;
                                  v287 = 0;
                                  v114 = *(_QWORD *)(v270 + 48);
                                  if ( v269 )
                                  {
                                    v130 = *(_DWORD *)(*((_QWORD *)v257 + 122) + 108LL);
                                    if ( (v130 & 1) != 0 && (v130 & 9) != 9 )
                                    {
                                      v311[1] = *(_DWORD *)(v263 + 56);
                                      v311[2] = *(_DWORD *)(v263 + 60);
                                      v311[0] = *(_DWORD *)(v263 + 96);
                                      v207 = *(__int64 **)(v263 + 128);
                                      v311[3] = 0;
                                      v313 = 0LL;
                                      v312 = *v207;
                                      SURFMEM::bCreateDIB(
                                        (SURFMEM *)&v285,
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
                                      if ( !v285 )
                                        goto LABEL_481;
                                      v350 = 0LL;
                                      v290 = 0LL;
                                      v55 = (*(_DWORD *)(v263 + 112) & 0x400) == 0;
                                      v351 = *(_DWORD *)(v263 + 56);
                                      v352 = *(_DWORD *)(v263 + 60);
                                      if ( !(v55
                                           ? ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, __int64 *, __int64 *))EngCopyBits)(
                                               v285 + 24,
                                               v263 + 24,
                                               0LL,
                                               0LL,
                                               &v350,
                                               &v290)
                                           : (*((unsigned int (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64 *, __int64 *))v289
                                              + 355))(
                                               v285 + 24,
                                               v263 + 24,
                                               0LL,
                                               0LL,
                                               &v350,
                                               &v290)) )
                                        goto LABEL_481;
                                      v209 = *(_DWORD *)(v285 + 96);
                                      if ( (unsigned int)(v209 - 1) > 5 )
                                        goto LABEL_481;
                                      ((void (*)(void))(&apfnMirror)[v209])();
                                      v113 = v270;
                                      v263 = v285;
                                    }
                                  }
                                  v282 = 0LL;
                                  v283 = 0;
                                  v284 = 0;
                                  v279 = 0LL;
                                  v280 = 0;
                                  v281 = 0;
                                  if ( !v273 )
                                  {
                                    v115 = v272;
                                    goto LABEL_196;
                                  }
                                  v314[1] = v349.m128i_i32[2] - v349.m128i_i32[0];
                                  v314[2] = v349.m128i_i32[3] - v349.m128i_i32[1];
                                  v314[3] = 0;
                                  v316 = 0LL;
                                  v314[0] = 6;
                                  v315 = *(_QWORD *)gppalRGB;
                                  v210 = SURFMEM::bCreateDIB(
                                           (SURFMEM *)&v282,
                                           (struct _DEVBITMAPINFO *)v314,
                                           0LL,
                                           0LL,
                                           0,
                                           0LL,
                                           0LL,
                                           0,
                                           1,
                                           0,
                                           0) & v238;
                                  if ( v210 )
                                  {
                                    if ( !v256 )
                                    {
                                      v317[1] = prclDest.right - prclDest.left;
                                      v317[2] = prclDest.bottom - prclDest.top;
                                      v317[3] = 0;
                                      v319 = 0LL;
                                      v317[0] = 6;
                                      v318 = *(_QWORD *)gppalRGB;
                                      DIB = SURFMEM::bCreateDIB(
                                              (SURFMEM *)&v279,
                                              (struct _DEVBITMAPINFO *)v317,
                                              0LL,
                                              0LL,
                                              0,
                                              0LL,
                                              0LL,
                                              0,
                                              1,
                                              0,
                                              0);
                                      v210 = DIB;
                                      if ( DIB )
                                      {
                                        v269 = prclDest.left;
                                        pptlSrc.x = prclDest.left;
                                        v264 = prclDest.top;
                                        pptlSrc.y = prclDest.top;
                                        if ( !(unsigned int)ERECTL::bOffsetSubtract((ERECTL *)&prclDest, &pptlSrc, 1) )
                                        {
                                          v211 = 87;
LABEL_480:
                                          EngSetLastError(v211);
                                          SURFMEM::~SURFMEM((SURFMEM *)&v279);
                                          SURFMEM::~SURFMEM((SURFMEM *)&v282);
LABEL_481:
                                          SURFMEM::~SURFMEM((SURFMEM *)&v285);
                                          v124 = 0;
                                          goto LABEL_249;
                                        }
                                        if ( prclDest.right > prclDest.left
                                          && prclDest.bottom > prclDest.top
                                          && v269 <= *(_DWORD *)(v263 + 56)
                                          && v264 <= *(_DWORD *)(v263 + 60) )
                                        {
                                          v212 = (SURFOBJ *)(v279 + 24);
                                          if ( !v279 )
                                            v212 = 0LL;
                                          EngCopyBits(v212, (SURFOBJ *)(v263 + 24), 0LL, pxlo, &prclDest, &pptlSrc);
                                        }
                                        v213 = 0;
                                        v263 = v279;
                                        v214 = *(_DWORD **)(v279 + 80);
                                        v215 = (_DWORD *)((char *)v214 + *(_DWORD *)(v279 + 60) * *(_DWORD *)(v279 + 88));
                                        if ( v214 != v215 )
                                        {
                                          v216 = v279;
                                          do
                                          {
                                            if ( v213 >= prclDest.top && v213 < prclDest.bottom )
                                            {
                                              v217 = v214;
                                              v218 = 0;
                                              v219 = *(int *)(v216 + 56);
                                              v220 = &v214[v219];
                                              v221 = (v219 * 4) >> 2;
                                              if ( v214 > v220 )
                                                v221 = 0LL;
                                              if ( v221 )
                                              {
                                                for ( k = 0LL; k != v221; ++k )
                                                {
                                                  if ( v218 >= prclDest.left && v218 < prclDest.right )
                                                    *v217 |= 0xFF000000;
                                                  ++v218;
                                                  ++v217;
                                                }
                                                v216 = v279;
                                              }
                                            }
                                            ++v213;
                                            v214 = (_DWORD *)((char *)v214 + *(int *)(v216 + 88));
                                          }
                                          while ( v214 != v215 );
                                          v263 = v216;
                                          v108 = v254;
                                        }
                                        HIBYTE(a11) |= 1u;
                                        v210 = DIB;
                                        v272 = (HDC)xloIdent;
                                      }
                                    }
                                    v223 = *(_DWORD **)(v282 + 72);
                                    v224 = (unsigned __int64)*(unsigned int *)(v282 + 64) >> 2;
                                    if ( v224 )
                                    {
                                      if ( ((unsigned __int8)v223 & 4) == 0 )
                                        goto LABEL_476;
                                      *v223 = 0;
                                      if ( --v224 )
                                      {
                                        ++v223;
LABEL_476:
                                        memset(v223, 0, 8 * (v224 >> 1));
                                        v108 = v254;
                                        if ( (v224 & 1) != 0 )
                                          v223[v224 - 1] = 0;
                                      }
                                    }
                                  }
                                  if ( v210 )
                                  {
                                    `vector constructor iterator'(
                                      &v374,
                                      8uLL,
                                      3uLL,
                                      (void *(*)(void *))EPOINTFIX::EPOINTFIX);
                                    v255.x = v362.x - 16 * v321.m128i_i32[0];
                                    v255.y = v362.y - 16 * v321.m128i_i32[1];
                                    v374 = v255;
                                    v255.x = v363 - 16 * v321.m128i_i32[0];
                                    v255.y = v364 - 16 * v321.m128i_i32[1];
                                    v375 = v255;
                                    v255.x = v365 - 16 * v321.m128i_i32[0];
                                    v255.y = v366 - 16 * v321.m128i_i32[1];
                                    v376 = v255;
                                    v225 = (SURFOBJ *)(v263 + 24);
                                    if ( !v263 )
                                      v225 = 0LL;
                                    if ( v282 )
                                      v226 = (SURFOBJ *)(v282 + 24);
                                    else
                                      v226 = 0LL;
                                    EngPlgBlt(
                                      v226,
                                      v225,
                                      0LL,
                                      0LL,
                                      (XLATEOBJ *)v272,
                                      0LL,
                                      0LL,
                                      &v374,
                                      &prclDest,
                                      0LL,
                                      3u);
                                    v347 = 0LL;
                                    inited = EXLATEOBJ::bInitXlateObj(
                                               &v274,
                                               0LL,
                                               0LL,
                                               gppalRGB,
                                               v38,
                                               0LL,
                                               v108,
                                               *(_DWORD *)(*((_QWORD *)v259 + 122) + 184LL),
                                               *(_DWORD *)(*((_QWORD *)v259 + 122) + 176LL),
                                               v241,
                                               0);
                                    v115 = (HDC)xloIdent;
                                    v238 = inited;
                                    v275 = v274;
                                    v263 = v282;
                                    prclDest.right = v349.m128i_i32[2] - v349.m128i_i32[0];
                                    prclDest.bottom = v349.m128i_i32[3] - v349.m128i_i32[1];
                                    *(_QWORD *)&prclDest.left = 0LL;
                                    `vector destructor iterator'(&v374, 8uLL, 3uLL, (void (*)(void *))vSrcCopyDummy);
                                    v113 = v270;
                                    v82 = pxlo;
LABEL_196:
                                    if ( v238 )
                                    {
                                      ++*(_DWORD *)(v113 + 92);
                                      v116 = v257;
                                      v117 = *((_QWORD *)v257 + 6);
                                      if ( v117 == *((_QWORD *)v259 + 6)
                                        || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)&v257)
                                        && *(_QWORD *)(v117 + 3520) == v228 )
                                      {
                                        if ( (*((_DWORD *)v116 + 9) & 0xE0) != 0 )
                                        {
                                          v346 = v349;
                                          XDCOBJ::vAccumulateTight((XDCOBJ *)&v257, v116, (struct ERECTL *)&v346);
                                          v113 = v270;
                                        }
                                        v322 = a11;
                                        v323 = v115;
                                        v324 = v95;
                                        v325 = v107;
                                        if ( v349.m128i_i32[2] - v349.m128i_i32[0] == prclDest.right - prclDest.left
                                          && v349.m128i_i32[3] - v349.m128i_i32[1] == prclDest.bottom - prclDest.top )
                                        {
                                          BYTE1(v322) = BYTE1(a11) & 0xFE;
                                        }
                                        if ( (*(_DWORD *)(v113 + 112) & 0x10000) != 0 )
                                          v118 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(v114 + 3256);
                                        else
                                          v118 = EngAlphaBlend;
                                        if ( v263 )
                                          v119 = v263 + 24;
                                        else
                                          v119 = 0LL;
                                        v59 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *, HDC, __m128i *, RECTL *, int *))v118)(
                                                v113 + 24,
                                                v119,
                                                v353,
                                                v275,
                                                &v349,
                                                &prclDest,
                                                &v322);
                                        goto LABEL_208;
                                      }
                                      v229 = 87;
                                    }
                                    else
                                    {
                                      v229 = 6;
                                    }
                                    EngSetLastError(v229);
                                    v59 = 0;
LABEL_208:
                                    SURFMEM::~SURFMEM((SURFMEM *)&v279);
                                    SURFMEM::~SURFMEM((SURFMEM *)&v282);
                                    SURFMEM::~SURFMEM((SURFMEM *)&v285);
                                    if ( v107 )
                                    {
                                      cEntries = (int)v107[1].cEntries;
                                      if ( (int)cEntries >= 0 )
                                      {
                                        _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
                                        v82 = v265;
                                        v95 = v266;
                                      }
                                      else if ( (_DWORD)cEntries == -1 )
                                      {
                                        FreeThreadBufferWithTag(v107);
                                      }
                                    }
                                    if ( v95 )
                                    {
                                      v121 = (int)v95[1].cEntries;
                                      if ( (int)v121 >= 0 )
                                      {
                                        _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v121);
                                        v82 = v265;
                                      }
                                      else if ( (_DWORD)v121 == -1 )
                                      {
                                        FreeThreadBufferWithTag(v95);
                                      }
                                    }
                                    if ( v82 )
                                    {
                                      v122 = (int)v82[1].cEntries;
                                      if ( (int)v122 >= 0 )
                                      {
                                        _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v122);
                                      }
                                      else if ( (_DWORD)v122 == -1 )
                                      {
                                        FreeThreadBufferWithTag(v82);
                                      }
                                    }
                                    if ( v274 )
                                    {
                                      v230 = *((int *)v274 + 9);
                                      if ( (int)v230 < 0 )
                                      {
                                        if ( (_DWORD)v230 == -1 )
                                          FreeThreadBufferWithTag(v274);
                                      }
                                      else
                                      {
                                        _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v230);
                                      }
                                    }
                                    if ( v267 )
                                    {
                                      v123 = *((int *)v267 + 9);
                                      if ( (int)v123 >= 0 )
                                      {
                                        _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v123);
                                      }
                                      else if ( (_DWORD)v123 == -1 )
                                      {
                                        FreeThreadBufferWithTag(v267);
                                      }
                                    }
                                    goto LABEL_225;
                                  }
                                  v211 = 8;
                                  goto LABEL_480;
                                }
                                v97 = *((_QWORD *)gppalRGB + 15);
                                if ( (struct PALETTE *)v97 == gppalRGB )
                                  v98 = *((_DWORD *)gppalRGB + 8);
                                else
                                  v98 = *(_DWORD *)(v97 + 32);
                                v99 = *(_QWORD *)(v38 + 120);
                                if ( v99 == v38 )
                                  v100 = *(_DWORD *)(v38 + 32);
                                else
                                  v100 = *(_DWORD *)(v99 + 32);
                                if ( v98 != v100 )
                                {
                                  v101 = *((_DWORD *)gppalRGB + 14);
                                  v299 = v37;
                                  v300 = v37;
                                  v298 = v38;
                                  v264 = v101;
                                  v302 = ghsemPalette;
                                  GreAcquireSemaphore(ghsemPalette);
                                  v102 = *((_QWORD *)gppalRGB + 15);
                                  v103 = 0;
                                  v104 = v264;
                                  for ( m = v102; ; v102 = m )
                                  {
                                    if ( (struct PALETTE *)v102 == gppalRGB )
                                      v105 = *((_DWORD *)gppalRGB + 8);
                                    else
                                      v105 = *(_DWORD *)(v102 + 32);
                                    if ( *((_DWORD *)&xlateTable + 8 * v104 + 4) == v105 )
                                    {
                                      v197 = XEPALOBJ::ulTime((XEPALOBJ *)&v298);
                                      if ( *(_DWORD *)(v198 + v199 + 20) == v197 )
                                      {
                                        v200 = XEPALOBJ::ulTime((XEPALOBJ *)&v299);
                                        if ( *(_DWORD *)(v201 + v202 + 28) == v200 )
                                        {
                                          v203 = *(XLATEOBJ **)(v201 + v202 + 8);
                                          v271 = v203;
                                          if ( (v203[3].flXlate & 0x6000) == 0 )
                                          {
                                            v204 = v203[3].flXlate & 0x100;
                                            v253 = v204;
                                            v205 = v203->flXlate & 4;
                                            if ( v205 )
                                            {
                                              v253 = v203[3].flXlate & 0x100;
                                            }
                                            else if ( !v204 )
                                            {
                                              goto LABEL_427;
                                            }
                                            if ( v205 && v241 == v203[1].iUniq )
                                            {
                                              v206 = XEPALOBJ::ulTime((XEPALOBJ *)&v300);
                                              if ( *(_DWORD *)(v201 + v202 + 24) == v206 )
                                                goto LABEL_427;
                                              v204 = v253;
                                            }
                                            if ( v204 && v245 == v203[1].flXlate && v249 == *(_DWORD *)&v203[1].iSrcType )
                                            {
LABEL_427:
                                              _InterlockedIncrement((volatile signed __int32 *)(v201 + v202));
                                              *((_DWORD *)gppalRGB + 14) = v104;
                                              SEMOBJ::vUnlock((SEMOBJ *)&v302);
                                              v82 = v265;
                                              v95 = v266;
                                              v109 = 1;
                                              v107 = v271;
                                              pxlo = v265;
                                              goto LABEL_429;
                                            }
                                          }
                                        }
                                      }
                                    }
                                    ++v103;
                                    v104 = ((_BYTE)v104 + 1) & 7;
                                    if ( v103 >= 8 )
                                      break;
                                  }
                                  if ( ghsemPalette )
                                  {
                                    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                                    GreReleaseSemaphoreInternal(ghsemPalette);
                                  }
                                  goto LABEL_180;
                                }
                              }
                              v107 = xloIdent;
                              v271 = xloIdent;
                              v109 = 1;
                              goto LABEL_429;
                            }
                            v73 = *(_QWORD *)(v60 + 120);
                            if ( v73 == v60 )
                              v74 = *(_DWORD *)(v60 + 32);
                            else
                              v74 = *(_DWORD *)(v73 + 32);
                            v75 = *((_QWORD *)gppalRGB + 15);
                            if ( (struct PALETTE *)v75 == gppalRGB )
                              v76 = *((_DWORD *)gppalRGB + 8);
                            else
                              v76 = *(_DWORD *)(v75 + 32);
                            if ( v74 != v76 )
                            {
                              if ( gppalRGB )
                              {
                                v77 = *(_DWORD *)(v60 + 56);
                                v308 = v62;
                                v309 = v62;
                                v307 = gppalRGB;
                                v310 = ghsemPalette;
                                GreAcquireSemaphore(ghsemPalette);
                                v78 = *(_QWORD *)(v60 + 120);
                                for ( n = 0; n < 8; ++n )
                                {
                                  if ( v78 == v60 )
                                    v80 = *(_DWORD *)(v60 + 32);
                                  else
                                    v80 = *(_DWORD *)(v78 + 32);
                                  if ( *((_DWORD *)&xlateTable + 8 * v77 + 4) == v80 )
                                  {
                                    v173 = XEPALOBJ::ulTime((XEPALOBJ *)&v307);
                                    if ( *(_DWORD *)(v174 + v175 + 20) == v173 )
                                    {
                                      v176 = XEPALOBJ::ulTime((XEPALOBJ *)&v308);
                                      if ( *(_DWORD *)(v177 + v178 + 28) == v176 )
                                      {
                                        v179 = *(XLATEOBJ **)(v177 + v178 + 8);
                                        v265 = v179;
                                        if ( (v179[3].flXlate & 0x6000) == 0 )
                                        {
                                          v180 = v179[3].flXlate & 0x100;
                                          v251 = v180;
                                          v181 = v179->flXlate & 4;
                                          if ( v181 )
                                          {
                                            v251 = v179[3].flXlate & 0x100;
                                          }
                                          else if ( !v180 )
                                          {
                                            goto LABEL_370;
                                          }
                                          if ( v181 && v241 == v179[1].iUniq )
                                          {
                                            v182 = XEPALOBJ::ulTime((XEPALOBJ *)&v309);
                                            if ( *(_DWORD *)(v177 + v178 + 24) == v182 )
                                              goto LABEL_370;
                                            v180 = v251;
                                          }
                                          if ( v180 && v243 == v179[1].flXlate && v247 == *(_DWORD *)&v179[1].iSrcType )
                                          {
LABEL_370:
                                            _InterlockedIncrement((volatile signed __int32 *)(v177 + v178));
                                            *(_DWORD *)(v60 + 56) = v77;
                                            SEMOBJ::vUnlock((SEMOBJ *)&v310);
                                            v82 = v265;
                                            v83 = 1;
                                            pxlo = v265;
                                            goto LABEL_141;
                                          }
                                        }
                                      }
                                    }
                                  }
                                  v77 = ((_BYTE)v77 + 1) & 7;
                                }
                                if ( ghsemPalette )
                                {
                                  EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                                  GreReleaseSemaphoreInternal(ghsemPalette);
                                }
                              }
                              goto LABEL_135;
                            }
                          }
                          v82 = xloIdent;
                          v83 = 1;
                          pxlo = xloIdent;
                          v265 = xloIdent;
                          goto LABEL_141;
                        }
LABEL_502:
                        EngSetLastError(0x57u);
                        v59 = 0;
LABEL_225:
                        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v326, v36, (SURFACE **)v34);
LABEL_226:
                        v124 = v59;
                        goto LABEL_227;
                      }
                      v34 = 1LL;
                      v57 = 0;
                      goto LABEL_91;
                    }
                    v138 = UserScreenAccessCheck(512LL, v36);
                  }
                  if ( v138 )
                    goto LABEL_69;
LABEL_505:
                  EngSetLastError(6u);
                  v59 = 0;
                  goto LABEL_225;
                }
                v154 = UserScreenAccessCheck(v35, v36);
              }
              if ( !v154 )
                goto LABEL_505;
              v36 = v270;
              goto LABEL_65;
            }
          }
        }
LABEL_278:
        v59 = 0;
        EngSetLastError(0x57u);
        goto LABEL_226;
      }
      DC::vMarkTransformDirty(v15);
LABEL_284:
      v15 = v259;
      goto LABEL_26;
    }
    if ( v16 )
    {
LABEL_24:
      *((_DWORD *)v15 + 11) |= 2u;
      v15 = v259;
      LODWORD(v260) = 1;
      goto LABEL_25;
    }
    v17 = XDCOBJ::GetUserAttr((XDCOBJ *)&v259);
    if ( !v17 || DC::SaveAttributes(v259, v17) )
    {
      v15 = v259;
      goto LABEL_24;
    }
    _InterlockedDecrement((volatile signed __int32 *)v259 + 3);
LABEL_277:
    v259 = 0LL;
    goto LABEL_278;
  }
LABEL_266:
  EngSetLastError(6u);
  v124 = 0;
LABEL_236:
  if ( v257 )
  {
    if ( (_DWORD)v258 && (*((_DWORD *)v257 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v258) )
      {
        v127 = XDCOBJ::GetUserAttr((XDCOBJ *)&v257);
        if ( v127 )
          DC::RestoreAttributes(v257, v127);
      }
      *((_DWORD *)v257 + 11) &= ~2u;
      LODWORD(v258) = 0;
    }
    v261 = 0;
    v128 = *(_QWORD *)v257;
    HmgDecrementExclusiveReferenceCountEx(v257, HIDWORD(v258), &v261);
    if ( v261 )
      bDeleteDCInternalEx(v128, 0LL);
  }
  return v124;
}
