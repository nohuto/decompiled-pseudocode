/*
 * XREFs of GreSetDIBitsToDeviceInternal @ 0x1C0076650
 * Callers:
 *     NtGdiSetDIBitsToDeviceInternal @ 0x1C00667B0 (NtGdiSetDIBitsToDeviceInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C0074590 (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsInternal @ 0x1C01174DC (GreSetDIBitsInternal.c)
 * Callees:
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C001ACC8 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vGetSurfaceBoundsRect@@YAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0075398 (-vGetSurfaceBoundsRect@@YAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C0075490 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C0075AB4 (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?SaveAttributesHelper@XDCOBJ@@AEAAHXZ @ 0x1C0076604 (-SaveAttributesHelper@XDCOBJ@@AEAAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0077C50 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C007A780 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C007BFD0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C007CD30 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     bCvtPts1 @ 0x1C0086360 (bCvtPts1.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C008A108 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     GreDereferenceObject @ 0x1C00AFA30 (GreDereferenceObject.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C010D2DC (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C011B8C0 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012AF7C (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C013FEDC (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026FA74 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C026FAB0 (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C029BA9C (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C029E3D4 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z @ 0x1C02BD5DC (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02BD698 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02BF8D8 (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z @ 0x1C02C0E08 (-bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z.c)
 *     ?vScale@EPOINTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C02C0E40 (-vScale@EPOINTL@@QEAAXAEBVPOINTFL@@@Z.c)
 */

__int64 __fastcall GreSetDIBitsToDeviceInternal(
        HDC a1,
        __int64 a2,
        __int32 a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        void *a10,
        unsigned int *a11,
        unsigned int a12,
        unsigned int a13,
        unsigned int a14,
        int a15,
        __int64 a16)
{
  void *v17; // rbx
  int v18; // r15d
  int v21; // esi
  DC *v22; // r9
  __int64 v23; // rbx
  unsigned int v24; // edx
  __int64 v25; // rbx
  __int64 v26; // r11
  int v27; // r10d
  unsigned int v28; // eax
  __int64 v29; // rsi
  unsigned int v30; // r12d
  unsigned int v31; // r15d
  unsigned __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned int v34; // r12d
  __int64 v35; // rbx
  unsigned int v36; // edx
  int v37; // r14d
  __int64 v38; // rsi
  char *v39; // rcx
  int v40; // ebx
  unsigned int v41; // eax
  int v42; // ecx
  int v43; // edx
  int v44; // r8d
  __int32 v45; // eax
  int v46; // edx
  __int32 v47; // ecx
  __int64 v48; // rdx
  __int64 v49; // r8
  DC *v50; // r9
  __int64 v51; // r13
  __int64 v52; // rcx
  unsigned int v53; // r12d
  __int64 v54; // r14
  struct PALETTE *v55; // rdi
  unsigned int v56; // r8d
  __int64 v57; // rcx
  char *v58; // rdx
  char v59; // al
  signed __int32 v60; // ecx
  __int64 v61; // r8
  __int64 v62; // rax
  __int64 XlateObject; // rax
  int v64; // edi
  DC *v65; // rsi
  int *v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rdx
  __int32 v69; // r12d
  int v70; // r14d
  int v71; // r13d
  int v72; // r15d
  __int64 v73; // rdi
  struct REGION *v74; // rax
  struct ECLIPOBJ *v75; // rdx
  __int64 v76; // r13
  __int64 v77; // r15
  __int64 v78; // r10
  __int64 v79; // r11
  __int64 v80; // rsi
  __int64 v81; // r9
  int v82; // edx
  __m128i v83; // xmm1
  int v84; // r8d
  int v85; // ecx
  int v86; // edx
  int v87; // ecx
  int v88; // r8d
  int v89; // ecx
  int v90; // r12d
  __int32 v91; // esi
  int v92; // r14d
  __int32 v93; // r9d
  __int32 v94; // r10d
  DC *v95; // rsi
  int v96; // eax
  BOOL v97; // ecx
  int v98; // eax
  BOOL (__stdcall *v99)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  __int64 v100; // rdx
  __int64 v101; // rax
  DC *v102; // rcx
  __int64 v103; // rbx
  __int64 v104; // rcx
  struct _KTHREAD *v105; // rdi
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 *v109; // rax
  __int64 v110; // rax
  __int64 v111; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v113; // rcx
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v118; // rax
  __int64 v119; // rbx
  unsigned int v121; // ecx
  __int32 v122; // ecx
  int v123; // r9d
  int v124; // eax
  int v125; // edx
  int v126; // r8d
  struct REGION *v127; // rax
  struct ECLIPOBJ *v128; // rdx
  unsigned int v129; // r15d
  __int64 v130; // r14
  __int64 v131; // r13
  __m128i v132; // xmm6
  struct _SURFOBJ *v133; // r11
  int v134; // ecx
  int v135; // r12d
  __int32 v136; // esi
  unsigned int v137; // r15d
  __int32 v138; // r9d
  __int32 v139; // r10d
  DC *v140; // rsi
  int v141; // eax
  BOOL v142; // ecx
  int v143; // eax
  BOOL (__stdcall *v144)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  __int64 v145; // rdx
  int v146; // eax
  __int64 v147; // rbx
  struct _DC_ATTR *UserAttr; // rax
  struct _DC_ATTR *v149; // rax
  int v150; // r8d
  unsigned int v151; // ecx
  unsigned int v152; // r9d
  ULONG v153; // ecx
  unsigned __int64 v154; // rcx
  unsigned __int64 v155; // rcx
  ULONG v156; // ecx
  DC **v157; // rcx
  bool v158; // zf
  int v159; // eax
  unsigned int *v160; // r12
  int Xlate; // eax
  __int64 v162; // r8
  __int64 v163; // rax
  _DWORD *v164; // rax
  _DWORD *v165; // rax
  float v166; // xmm1_4
  BOOL (__stdcall *v167)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rax
  __int64 v168; // rdx
  float v169; // xmm1_4
  BOOL (__stdcall *v170)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rax
  __int64 v171; // rdx
  __int64 v172; // rax
  int v173; // ebx
  __int64 v174; // rcx
  __int64 v175; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v178; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v180; // rdx
  __int64 v181; // rax
  __int64 v182; // rdx
  HSURF *v183; // rdi
  struct SURFACE *v184; // rax
  HSURF v185; // rsi
  struct SURFACE *v186; // rbx
  char v187; // bl
  __int64 v188; // rdx
  __int64 v189; // r8
  __int64 v190; // r9
  __int64 v191; // rax
  __int64 v192; // rax
  int v193; // [rsp+20h] [rbp-E0h]
  unsigned int v194; // [rsp+60h] [rbp-A0h]
  unsigned int v195; // [rsp+64h] [rbp-9Ch]
  unsigned int v196; // [rsp+68h] [rbp-98h]
  unsigned int v197; // [rsp+6Ch] [rbp-94h]
  DC *v198; // [rsp+70h] [rbp-90h] BYREF
  __int64 v199; // [rsp+78h] [rbp-88h]
  int v200; // [rsp+80h] [rbp-80h]
  unsigned int v201; // [rsp+90h] [rbp-70h]
  int v202; // [rsp+94h] [rbp-6Ch]
  DC *v203; // [rsp+98h] [rbp-68h] BYREF
  __int64 v204; // [rsp+A0h] [rbp-60h]
  int v205; // [rsp+A8h] [rbp-58h]
  unsigned int v206; // [rsp+ACh] [rbp-54h]
  unsigned int v207; // [rsp+B0h] [rbp-50h]
  int v208; // [rsp+B4h] [rbp-4Ch]
  unsigned int v209; // [rsp+B8h] [rbp-48h]
  unsigned int v210; // [rsp+BCh] [rbp-44h]
  unsigned int v211; // [rsp+C0h] [rbp-40h]
  __int64 v212; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v213; // [rsp+D0h] [rbp-30h]
  __int64 v214; // [rsp+D8h] [rbp-28h]
  __int64 v215; // [rsp+E0h] [rbp-20h]
  XLATEOBJ *v216; // [rsp+E8h] [rbp-18h]
  __int64 v217; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v218; // [rsp+F8h] [rbp-8h]
  int v219; // [rsp+108h] [rbp+8h]
  int v220; // [rsp+10Ch] [rbp+Ch]
  DC *v221; // [rsp+110h] [rbp+10h] BYREF
  __int64 v222; // [rsp+118h] [rbp+18h]
  __int16 v223; // [rsp+120h] [rbp+20h]
  __int64 v224; // [rsp+128h] [rbp+28h]
  __int64 v225; // [rsp+130h] [rbp+30h]
  HDC v226; // [rsp+138h] [rbp+38h]
  int v227; // [rsp+140h] [rbp+40h]
  char v228[4]; // [rsp+144h] [rbp+44h] BYREF
  __int64 v229; // [rsp+148h] [rbp+48h] BYREF
  int v230; // [rsp+150h] [rbp+50h]
  __int32 v231; // [rsp+160h] [rbp+60h] BYREF
  int v232; // [rsp+164h] [rbp+64h]
  int v233; // [rsp+168h] [rbp+68h]
  int v234; // [rsp+16Ch] [rbp+6Ch]
  int v235; // [rsp+170h] [rbp+70h] BYREF
  int v236; // [rsp+174h] [rbp+74h]
  int v237; // [rsp+178h] [rbp+78h] BYREF
  __int64 v238; // [rsp+180h] [rbp+80h]
  XLATEOBJ *v239; // [rsp+188h] [rbp+88h] BYREF
  void *v240; // [rsp+190h] [rbp+90h]
  int v241; // [rsp+198h] [rbp+98h] BYREF
  int v242; // [rsp+19Ch] [rbp+9Ch] BYREF
  DC *v243[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  int v244; // [rsp+1B0h] [rbp+B0h] BYREF
  __int32 v245; // [rsp+1B4h] [rbp+B4h]
  unsigned int v246; // [rsp+1B8h] [rbp+B8h] BYREF
  int v247; // [rsp+1BCh] [rbp+BCh]
  unsigned int *v248[2]; // [rsp+1C0h] [rbp+C0h]
  __int64 v249; // [rsp+1D0h] [rbp+D0h] BYREF
  char v250; // [rsp+1D8h] [rbp+D8h]
  int v251; // [rsp+1DCh] [rbp+DCh]
  float v252[2]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v253; // [rsp+1E8h] [rbp+E8h]
  float v254[2]; // [rsp+1F0h] [rbp+F0h] BYREF
  int v255; // [rsp+1F8h] [rbp+F8h] BYREF
  int v256; // [rsp+1FCh] [rbp+FCh]
  int v257; // [rsp+200h] [rbp+100h]
  int v258; // [rsp+204h] [rbp+104h]
  int v259; // [rsp+208h] [rbp+108h] BYREF
  int v260; // [rsp+20Ch] [rbp+10Ch]
  int v261; // [rsp+210h] [rbp+110h]
  int v262; // [rsp+214h] [rbp+114h]
  _DWORD v263[2]; // [rsp+218h] [rbp+118h] BYREF
  _DWORD v264[2]; // [rsp+220h] [rbp+120h] BYREF
  _DWORD v265[4]; // [rsp+228h] [rbp+128h] BYREF
  DC *v266[2]; // [rsp+238h] [rbp+138h] BYREF
  DC *v267[2]; // [rsp+248h] [rbp+148h] BYREF
  DC *v268[2]; // [rsp+258h] [rbp+158h] BYREF
  char *v269; // [rsp+268h] [rbp+168h] BYREF
  int v270; // [rsp+270h] [rbp+170h]
  int v271; // [rsp+274h] [rbp+174h]
  __int64 v272; // [rsp+278h] [rbp+178h] BYREF
  __int64 v273; // [rsp+280h] [rbp+180h] BYREF
  __int64 v274; // [rsp+288h] [rbp+188h] BYREF
  __int64 v275; // [rsp+290h] [rbp+190h] BYREF
  struct _RECTL v276; // [rsp+298h] [rbp+198h] BYREF
  __int128 v277; // [rsp+2A8h] [rbp+1A8h] BYREF
  __int128 v278; // [rsp+2B8h] [rbp+1B8h] BYREF
  struct _RECTL v279; // [rsp+2C8h] [rbp+1C8h] BYREF
  __m128i v280; // [rsp+2E0h] [rbp+1E0h] BYREF
  __m128i v281; // [rsp+2F0h] [rbp+1F0h] BYREF
  __m128i v282; // [rsp+300h] [rbp+200h] BYREF
  __m128i v283; // [rsp+310h] [rbp+210h] BYREF
  __m128i v284; // [rsp+320h] [rbp+220h] BYREF
  __m128i v285; // [rsp+330h] [rbp+230h] BYREF
  _BYTE v286[4]; // [rsp+340h] [rbp+240h] BYREF
  __int128 v287; // [rsp+344h] [rbp+244h]
  __int64 v288; // [rsp+390h] [rbp+290h]
  int v289; // [rsp+398h] [rbp+298h]
  int v290; // [rsp+3C0h] [rbp+2C0h]
  __int64 v291; // [rsp+3D0h] [rbp+2D0h]
  _BYTE v292[4]; // [rsp+3E0h] [rbp+2E0h] BYREF
  __int128 v293; // [rsp+3E4h] [rbp+2E4h]
  __int64 v294; // [rsp+430h] [rbp+330h]
  int v295; // [rsp+438h] [rbp+338h]
  int v296; // [rsp+460h] [rbp+360h]
  __int64 v297; // [rsp+470h] [rbp+370h]
  unsigned int v298; // [rsp+548h] [rbp+448h]

  v17 = a10;
  v18 = a2;
  v208 = a6;
  v238 = a16;
  LOBYTE(v21) = -1;
  v200 = a2;
  LOBYTE(a2) = 1;
  v204 = 0LL;
  v206 = a4;
  v240 = a10;
  v203 = (DC *)HmgLockEx(a1, a2, 0LL);
  v22 = v203;
  if ( !v203 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_275;
  }
  if ( (*((_DWORD *)v203 + 11) & 2) == 0 )
  {
    if ( !XDCOBJ::SaveAttributesHelper((XDCOBJ *)&v203) )
    {
      _InterlockedDecrement((volatile signed __int32 *)v203 + 3);
      v22 = 0LL;
      v203 = 0LL;
      goto LABEL_6;
    }
    *((_DWORD *)v203 + 11) |= 2u;
    v22 = v203;
    LODWORD(v204) = 1;
  }
  if ( (*((_DWORD *)v22 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v22);
LABEL_275:
    v22 = v203;
  }
  if ( !v22 )
    goto LABEL_11;
  v21 = *(_DWORD *)(*((_QWORD *)v22 + 122) + 108LL);
LABEL_6:
  if ( v22 )
  {
    if ( (_DWORD)v204 && (*((_DWORD *)v22 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v204) )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v203);
        if ( UserAttr )
          DC::RestoreAttributes(v203, UserAttr);
        v22 = v203;
      }
      *((_DWORD *)v22 + 11) &= ~2u;
      v22 = v203;
      LODWORD(v204) = 0;
    }
    v235 = 0;
    v23 = *(_QWORD *)v22;
    HmgDecrementExclusiveReferenceCountEx(v22, HIDWORD(v204), &v235);
    if ( v235 )
      bDeleteDCInternalEx(v23, 0LL);
    v17 = v240;
  }
LABEL_11:
  if ( (v21 & 1) != 0 )
    v200 = a4 + v18 - 1;
  if ( !a11 )
    goto LABEL_305;
  if ( !v17 )
    goto LABEL_305;
  if ( a12 > 2 )
    goto LABEL_305;
  v24 = a14;
  if ( a14 < 0x28 )
    goto LABEL_305;
  v25 = *a11;
  if ( (unsigned int)v25 < 0x28 )
    goto LABEL_305;
  v26 = a11[1];
  v207 = v26;
  if ( (int)v26 <= 0 )
    goto LABEL_305;
  v27 = a11[2];
  v205 = v27;
  if ( !v27 )
    goto LABEL_305;
  v28 = a11[4];
  v29 = *((unsigned __int16 *)a11 + 7);
  v30 = 0;
  v31 = a11[8];
  v212 = 0LL;
  v213 = 0LL;
  v215 = 0LL;
  v214 = 0LL;
  v201 = v28;
  v248[0] = (unsigned int *)((char *)a11 + v25);
  if ( v27 < 0 )
  {
    LODWORD(v215) = 1;
    if ( v28 > 0xC )
      goto LABEL_305;
    v150 = 7225;
    if ( !_bittest(&v150, v28) )
      goto LABEL_305;
    v27 = -v27;
    v205 = v27;
  }
  v211 = 0;
  v210 = 0;
  v209 = 0;
  v227 = 0;
  if ( v28 == 3 )
  {
    if ( a14 < 0x34 )
      goto LABEL_305;
    if ( a12 == 1 )
      a12 = 0;
    if ( (_DWORD)v29 == 16 )
    {
      LODWORD(v212) = 4;
    }
    else
    {
      if ( (_DWORD)v29 != 32 )
        goto LABEL_305;
      LODWORD(v212) = 6;
    }
    v211 = a11[10];
    v151 = v29 * v26;
    v210 = a11[11];
    v152 = a11[12];
    v248[0] = a11 + 10;
    v209 = v152;
    v197 = 0;
    v195 = 2;
    v196 = 512;
    if ( (unsigned __int64)(v29 * v26) > 0xFFFFFFFF || v151 + 31 < v151 )
    {
LABEL_269:
      v153 = 534;
LABEL_306:
      EngSetLastError(v153);
      return 0LL;
    }
    v194 = a9;
    v32 = a9 * (unsigned __int64)(((v151 + 31) >> 3) & 0x1FFFFFFC);
    if ( v32 <= 0xFFFFFFFF )
    {
      v28 = v201;
      v202 = a8;
      goto LABEL_28;
    }
LABEL_268:
    HIDWORD(v213) = -1;
    goto LABEL_269;
  }
  if ( !v28 )
  {
    if ( (unsigned int)v29 > 8 )
    {
LABEL_175:
      if ( a12 == 1 )
        a12 = 0;
      v197 = 0;
      v196 = 512;
      if ( (_DWORD)v29 == 32 )
      {
        LODWORD(v212) = 6;
LABEL_179:
        v195 = 8;
        goto LABEL_180;
      }
      if ( (_DWORD)v29 != 16 )
      {
        if ( (_DWORD)v29 != 24 )
          goto LABEL_305;
        LODWORD(v212) = 5;
        goto LABEL_179;
      }
      LODWORD(v212) = 4;
      v211 = 31744;
      v210 = 992;
      v209 = 31;
      v195 = 2;
LABEL_180:
      v121 = v29 * v26;
      if ( (unsigned __int64)(v29 * v26) > 0xFFFFFFFF || v121 + 31 < v121 )
        goto LABEL_269;
      v194 = a9;
      v32 = a9 * (unsigned __int64)(((v121 + 31) >> 3) & 0x1FFFFFFC);
      if ( v32 <= 0xFFFFFFFF )
      {
        v28 = v201;
        v202 = a8;
        goto LABEL_28;
      }
      goto LABEL_268;
    }
    switch ( (_DWORD)v29 )
    {
      case 1:
        LODWORD(v212) = 1;
        v30 = 2;
        break;
      case 4:
        LODWORD(v212) = 2;
        v30 = 16;
        break;
      case 8:
        LODWORD(v212) = 3;
        v30 = 256;
        break;
      default:
        goto LABEL_175;
    }
    v197 = v30;
    v195 = 1;
    v196 = 1024;
    goto LABEL_180;
  }
  if ( v28 != 10 )
  {
    if ( v28 == 1 )
      goto LABEL_25;
    if ( v28 == 2 )
      goto LABEL_255;
    if ( v28 == 12 )
    {
      DCOBJ::DCOBJ((DCOBJ *)v268, a1);
      if ( v268[0] && (unsigned int)DC::bIsCMYKColor(v268[0]) )
      {
        XDCOBJ::vUnlockFast((XDCOBJ *)v268);
        v24 = a14;
        v28 = v201;
        v27 = v205;
        LODWORD(v26) = v207;
LABEL_255:
        if ( (_DWORD)v29 != 4 )
          goto LABEL_305;
        LODWORD(v212) = 7;
        v30 = 16;
        v197 = 16;
        v195 = 1;
        v196 = 1024;
        v194 = v27;
        v227 = 1;
LABEL_257:
        v202 = 0;
        goto LABEL_27;
      }
      EngSetLastError(0x57u);
      if ( !v268[0] )
        return 0LL;
      v157 = v268;
    }
    else
    {
      if ( v28 != 11 )
      {
        if ( v28 == 4 )
        {
          LODWORD(v212) = 9;
        }
        else
        {
          if ( v28 != 5 )
            goto LABEL_305;
          LODWORD(v212) = 10;
        }
        v194 = a9;
        v197 = 0;
        v195 = 8;
        v196 = 512;
        goto LABEL_257;
      }
      DCOBJ::DCOBJ((DCOBJ *)v267, a1);
      if ( v267[0] && (unsigned int)DC::bIsCMYKColor(v267[0]) )
      {
        XDCOBJ::vUnlockFast((XDCOBJ *)v267);
        v24 = a14;
        v27 = v205;
        LODWORD(v26) = v207;
LABEL_25:
        if ( (_DWORD)v29 == 8 )
        {
          v195 = 1;
          LODWORD(v212) = 8;
          v30 = 256;
          v197 = 256;
          v202 = 0;
          v28 = v201;
          v196 = 1024;
          v194 = v27;
          v227 = 1;
LABEL_27:
          LODWORD(v32) = a11[5];
LABEL_28:
          HIDWORD(v213) = v32;
          goto LABEL_29;
        }
LABEL_305:
        v153 = 87;
        goto LABEL_306;
      }
      EngSetLastError(0x57u);
      if ( !v267[0] )
        return 0LL;
      v157 = v267;
    }
LABEL_318:
    XDCOBJ::vUnlockFast((XDCOBJ *)v157);
    return 0LL;
  }
  DCOBJ::DCOBJ((DCOBJ *)v266, a1);
  if ( !v266[0] || !(unsigned int)DC::bIsCMYKColor(v266[0]) )
    goto LABEL_295;
  switch ( (_DWORD)v29 )
  {
    case 1:
      LODWORD(v212) = 1;
      v30 = 2;
      goto LABEL_288;
    case 4:
      LODWORD(v212) = 2;
      v30 = 16;
      goto LABEL_288;
    case 8:
      LODWORD(v212) = 3;
      v30 = 256;
LABEL_288:
      v195 = 1;
      v196 = 1024;
      goto LABEL_289;
  }
  if ( (_DWORD)v29 != 32 )
  {
LABEL_295:
    v156 = 87;
    goto LABEL_296;
  }
  LODWORD(v212) = 6;
  v195 = 16;
  v196 = 512;
LABEL_289:
  v154 = v29 * v207;
  v197 = v30;
  if ( v154 > 0xFFFFFFFF || (int)v154 + 31 < (unsigned int)v154 )
    goto LABEL_294;
  v194 = a9;
  v155 = a9 * (unsigned __int64)(((unsigned int)(v154 + 31) >> 3) & 0x1FFFFFFC);
  if ( v155 > 0xFFFFFFFF )
  {
    HIDWORD(v213) = -1;
LABEL_294:
    v156 = 534;
LABEL_296:
    EngSetLastError(v156);
    if ( !v266[0] )
      return 0LL;
    v157 = v266;
    goto LABEL_318;
  }
  HIDWORD(v213) = v155;
  XDCOBJ::vUnlockFast((XDCOBJ *)v266);
  LODWORD(v32) = HIDWORD(v213);
  v24 = a14;
  v28 = v201;
  v27 = v205;
  LODWORD(v26) = v207;
  v202 = a8;
LABEL_29:
  v33 = v24 - (unsigned int)v25;
  v298 = v33;
  if ( v31 )
  {
    if ( v31 > v30 )
      v31 = v30;
  }
  else
  {
    v31 = v30;
  }
  if ( a13 < (unsigned int)v32 )
    goto LABEL_305;
  v34 = v194;
  HIDWORD(v212) = v26;
  if ( v28 - 4 <= 1 )
    LODWORD(v213) = v27;
  else
    LODWORD(v213) = v194;
  v35 = 0LL;
  LOBYTE(v33) = 1;
  v199 = 0LL;
  v198 = (DC *)HmgLockEx(a1, v33, 0LL);
  if ( v198 )
  {
    if ( (*((_DWORD *)v198 + 11) & 2) == 0 )
    {
      if ( !XDCOBJ::SaveAttributesHelper((XDCOBJ *)&v198) )
      {
        _InterlockedDecrement((volatile signed __int32 *)v198 + 3);
        v198 = 0LL;
        goto LABEL_321;
      }
      *((_DWORD *)v198 + 11) |= 2u;
      LODWORD(v199) = 1;
    }
    if ( (*((_DWORD *)v198 + 130) & 4) != 0 )
      DC::vMarkTransformDirty(v198);
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  if ( v198 && (*((_DWORD *)v198 + 9) & 0x10000) == 0 )
  {
    v36 = a11[4];
    v37 = v200;
    v38 = *((_QWORD *)v198 + 6);
    v244 = v200;
    v245 = a3;
    if ( v36 - 4 <= 1 && (!(unsigned int)XDCOBJ::bSupportsPassthroughImage((XDCOBJ *)&v198, v36) || a12 || v238) )
    {
      v34 = 0;
      v194 = 0;
    }
    if ( a15 )
    {
      v270 = *(_DWORD *)(*((_QWORD *)v198 + 122) + 208LL);
      v271 = *(_DWORD *)(*((_QWORD *)v198 + 122) + 108LL) & 1;
      if ( (*(_DWORD *)(*((_QWORD *)v198 + 122) + 340LL) & 0x1E000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v269, (struct XDCOBJ *)&v198, 0x204u, 0);
        v39 = v269;
      }
      else
      {
        v39 = (char *)v198 + 320;
        v269 = (char *)v198 + 320;
      }
      v40 = *((_DWORD *)v39 + 8);
      if ( (v39[32] & 0x43) != 0x43 )
      {
        bCvtPts1(v39, &v244, 1LL);
        a3 = v245;
        v37 = v244;
      }
      if ( v34 && a11[4] - 4 <= 1 )
      {
        v158 = (v40 & 1) == 0;
        v35 = 0LL;
        if ( v158 )
          v34 = 0;
        v194 = v34;
      }
      else
      {
        v35 = 0LL;
      }
    }
    v41 = v206;
    v42 = a5;
    v246 = v206;
    v43 = *((_DWORD *)v198 + 130);
    v247 = a5;
    if ( (v43 & 1) != 0 && (v43 & 2) == 0 )
    {
      v274 = *(_QWORD *)((char *)v198 + 524);
      EPOINTL::vScale((EPOINTL *)&v246, (const struct POINTFL *)&v274);
      v42 = v247;
      v41 = v246;
    }
    v44 = v41 + v37;
    v281.m128i_i64[0] = __PAIR64__(a3, v37);
    v45 = v42 + a3;
    v281.m128i_i32[3] = v42 + a3;
    v46 = v44;
    v281.m128i_i32[2] = v44;
    v47 = v42 + a3;
    if ( v37 > v44 )
    {
      v46 = v37;
      v281.m128i_i32[0] = v44;
      v281.m128i_i32[2] = v37;
      v37 = v44;
    }
    if ( a3 > v45 )
    {
      v47 = a3;
      v281.m128i_i32[1] = v45;
      v281.m128i_i32[3] = a3;
      a3 = v45;
    }
    if ( v37 == v46 || a3 == v47 || !v34 )
      goto LABEL_169;
    if ( (*((_DWORD *)v198 + 9) & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)&v198, (struct ERECTL *)&v281);
    v221 = 0LL;
    v222 = 0LL;
    v223 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v217, (struct XDCOBJ *)&v198, 0);
    v50 = v198;
    v51 = *((_QWORD *)v198 + 62);
    v253 = v51;
    if ( !v51 )
    {
LABEL_119:
      v102 = v221;
      if ( !v221 || !HIBYTE(v223) )
      {
LABEL_155:
        if ( (v219 & 0x1000) != 0 )
        {
          GreDecLockCount();
          v219 &= ~0x1000u;
          CurrentThread = KeGetCurrentThread();
          if ( !(unsigned __int8)KeIsAttachedProcess(v113)
            || (CurrentProcess = PsGetCurrentProcess(v115, v114, v116),
                ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                CurrentThreadProcess = PsGetCurrentThreadProcess(v178),
                ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
            {
              v118 = *ThreadWin32Thread;
              if ( v118 )
              {
                *(_QWORD *)(v118 + 320) = 0LL;
                *(_QWORD *)(v118 + 312) = 0LL;
              }
            }
          }
        }
        else
        {
          if ( (v219 & 0x800000) == 0 )
            goto LABEL_161;
          GreDecLockCount();
          v219 &= ~0x800000u;
        }
        v102 = v221;
LABEL_161:
        if ( v217 )
        {
          EtwTraceGreLockReleaseSemaphore(L"hsemTrg", v217);
          GreReleaseSemaphoreInternal(v217);
          v102 = v221;
        }
        if ( (v219 & 8) != 0 )
          v219 &= ~8u;
        if ( v218 )
        {
          EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v218);
          GreReleaseSemaphoreInternal(v218);
          v102 = v221;
        }
        if ( v225 )
        {
          v243[1] = 0LL;
          XDCOBJ::vLock((XDCOBJ *)v243, v226);
          LOBYTE(v180) = 5;
          v181 = HmgShareLock(v224, v180);
          LOBYTE(v182) = 5;
          v183 = (HSURF *)v181;
          v184 = (struct SURFACE *)HmgShareLock(v225, v182);
          v185 = *v183;
          v186 = v184;
          DC::pSurface(v243[0], v184);
          DEC_SHARE_REF_CNT(v183);
          DEC_SHARE_REF_CNT(v186);
          GreDereferenceObject(v185);
          v187 = 0;
          v226 = 0LL;
          v224 = 0LL;
          *((_DWORD *)v243[0] + 9) |= v220;
          if ( (*((_DWORD *)v243[0] + 9) & 0x200) != 0 )
          {
            if ( !(unsigned int)GreGetLockCount()
              && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
            {
              GreAcquireSemaphoreSharedInternal(ghsemGreLock, v188, v189, v190);
              EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
              v187 = 1;
            }
            DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v228);
            LOBYTE(v193) = 5;
            v191 = HmgShareUnlockRemoveObject(v225, 0LL, 0LL, 0LL, v193);
            if ( v191 )
              SURFACE::bDeleteSurface(v191, 0LL, 1LL);
            *((_QWORD *)v243[0] + 63) = 0LL;
            DC::vClearRendering(v243[0]);
            v225 = 0LL;
            EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
            GreReleaseSemaphoreInternal(ghsemDCVisRgn);
            if ( v187 )
            {
              EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
              GreReleaseSemaphoreInternal(ghsemGreLock);
            }
          }
          else
          {
            LOBYTE(v193) = 5;
            v192 = HmgShareUnlockRemoveObject(v225, 0LL, 0LL, 0LL, v193);
            if ( v192 )
              SURFACE::bDeleteSurface(v192, 0LL, 1LL);
            *((_QWORD *)v243[0] + 63) = 0LL;
            v225 = 0LL;
          }
          if ( v243[0] )
            XDCOBJ::vUnlockFast((XDCOBJ *)v243);
          v243[0] = 0LL;
          EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
          GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
          v102 = v221;
        }
        if ( v102 )
        {
          if ( (_BYTE)v223 )
          {
            *((_DWORD *)v102 + 10) &= ~2u;
            v102 = v221;
            LOBYTE(v223) = 0;
          }
          if ( v102 )
          {
            if ( (_DWORD)v222 && (*((_DWORD *)v102 + 11) & 2) != 0 )
            {
              XDCOBJ::RestoreAttributesHelper((XDCOBJ *)&v221);
              *((_DWORD *)v221 + 11) &= ~2u;
              v102 = v221;
              LODWORD(v222) = 0;
            }
            v242 = 0;
            v147 = *(_QWORD *)v102;
            HmgDecrementExclusiveReferenceCountEx(v102, HIDWORD(v222), &v242);
            if ( v242 )
              bDeleteDCInternalEx(v147, 0LL);
          }
        }
        goto LABEL_169;
      }
      v103 = *((_QWORD *)v221 + 6);
      if ( (v219 & 0x1000) != 0 )
      {
        if ( (v219 & 0x400) != 0 )
        {
          bUnHookRedir((struct XDCOBJ *)&v221);
          v219 &= ~0x400u;
          v102 = v221;
        }
        if ( (v219 & 0x2000) != 0 )
        {
          bUnHookBmpDrv((struct XDCOBJ *)&v221);
          v219 &= ~0x2000u;
          v102 = v221;
        }
        if ( v102 && HIBYTE(v223) && (v219 & 0x1000) != 0 )
        {
          if ( (*((_DWORD *)v102 + 11) & 1) == 0 && *((_QWORD *)v102 + 62) )
          {
            SURFACE::bUnMap(*((SURFACE **)v102 + 62), &v217, v102);
            v102 = v221;
          }
          *((_DWORD *)v102 + 11) &= ~1u;
          v102 = v221;
          if ( (*((_DWORD *)v221 + 9) & 0x4000) != 0 && *((_QWORD *)v221 + 59) && *((_DWORD *)v221 + 122) )
          {
            GreUpdateSpriteDevLockEnd((struct XDCOBJ *)&v221, v219 & 0x400000);
            v102 = v221;
          }
        }
        if ( (v219 & 0x10) != 0 )
        {
          *((_DWORD *)v102 + 9) &= ~0x4000u;
          DC::pSurface(v221, *(struct SURFACE **)(v103 + 2552));
          v102 = v221;
        }
        if ( !v102 )
          goto LABEL_154;
        if ( HIBYTE(v223) && (v219 & 0x1000) != 0 && (*((_DWORD *)v102 + 9) & 0x200) != 0 )
        {
          GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn, v48, v49, v50);
          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
          if ( !v224 )
            DC::vClearRendering(v221);
          if ( (*((_DWORD *)v221 + 9) & 0x4000) == 0 )
          {
            v105 = KeGetCurrentThread();
            if ( !(unsigned __int8)KeIsAttachedProcess(v104)
              || (v172 = PsGetCurrentProcess(v107, v106, v108),
                  v173 = PsGetProcessSessionIdEx(v172),
                  v175 = PsGetCurrentThreadProcess(v174),
                  v173 == (unsigned int)PsGetProcessSessionIdEx(v175)) )
            {
              v109 = (__int64 *)PsGetThreadWin32Thread(v105);
              if ( v109 )
              {
                v110 = *v109;
                if ( v110 )
                  *(_DWORD *)(v110 + 328) &= ~1u;
              }
            }
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
          GreReleaseSemaphoreInternal(ghsemDCVisRgn);
          v102 = v221;
        }
      }
      if ( v102 )
      {
        if ( (_BYTE)v223 )
        {
          *((_DWORD *)v102 + 10) &= ~2u;
          v102 = v221;
          LOBYTE(v223) = 0;
        }
        if ( v102 )
        {
          if ( (_DWORD)v222 && (*((_DWORD *)v102 + 11) & 2) != 0 )
          {
            XDCOBJ::RestoreAttributesHelper((XDCOBJ *)&v221);
            *((_DWORD *)v221 + 11) &= ~2u;
            LODWORD(v222) = 0;
            v102 = v221;
          }
          v237 = 0;
          v111 = *(_QWORD *)v102;
          HmgDecrementExclusiveReferenceCountEx(v102, HIDWORD(v222), &v237);
          if ( v237 )
            bDeleteDCInternalEx(v111, 0LL);
        }
      }
LABEL_154:
      v102 = 0LL;
      v221 = 0LL;
      goto LABEL_155;
    }
    v52 = v238;
    if ( !v238 )
    {
      v52 = *(_QWORD *)(*((_QWORD *)v198 + 122) + 248LL);
      v238 = v52;
    }
    v53 = *((_DWORD *)v198 + 30);
    if ( (v53 & 0x10000000) != 0 && (!v52 || v201 - 10 > 2) )
      v53 = v53 & 0xFFFFFFF | 0x20000000;
    v54 = *(_QWORD *)(v51 + 128);
    v230 = 0;
    v229 = 0LL;
    v55 = (struct PALETTE *)*((_QWORD *)v198 + 11);
    if ( v55 != ppalDefault )
      *(_QWORD *)(v51 + 176) = *(_QWORD *)v55;
    v200 = 1;
    v236 = 0;
    v216 = 0LL;
    v239 = 0LL;
    if ( !a12 )
    {
      if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v229, v195, v197, 0LL, v211, v210, v209, v196, 1) )
        goto LABEL_346;
      if ( !v31 )
        goto LABEL_219;
      if ( v298 >= 4 * v31 )
      {
        if ( v201 - 10 <= 2 )
        {
          XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v229, v248[0], v56, v31);
        }
        else
        {
          v57 = *(_QWORD *)(v229 + 112);
          if ( v31 > *(_DWORD *)(v229 + 28) )
            v31 = *(_DWORD *)(v229 + 28);
          if ( v31 )
          {
            v58 = (char *)v248[0] + 1;
            do
            {
              *(_BYTE *)(v57 + 3) = 0;
              v57 += 4LL;
              v59 = *(v58 - 1);
              v58 += 4;
              *(_BYTE *)(v57 - 2) = v59;
              *(_BYTE *)(v57 - 4) = *(v58 - 3);
              *(_BYTE *)(v57 - 3) = *(v58 - 4);
              --v31;
            }
            while ( v31 );
          }
          v60 = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
          *(_DWORD *)(v229 + 32) = v60;
          v61 = v229;
          v62 = *(_QWORD *)(v229 + 120);
          if ( v62 == v229 )
          {
LABEL_77:
            XlateObject = CreateXlateObject(v238, v53, v61, v54, v55, v55, 0, 0, 0xFFFFFF, 0);
            v239 = (XLATEOBJ *)XlateObject;
            v35 = XlateObject;
            if ( XlateObject )
            {
              v216 = (XLATEOBJ *)XlateObject;
LABEL_79:
              v64 = v200;
LABEL_80:
              v249 = 0LL;
              v250 = 0;
              v251 = 0;
              SURFMEM::bCreateDIB((SURFMEM *)&v249, (struct _DEVBITMAPINFO *)&v212, v240, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
              if ( !v64 || !v249 )
              {
                v34 = 0;
                goto LABEL_114;
              }
              *(_DWORD *)(v249 + 92) = 0;
              if ( (v219 & 1) != 0 )
              {
                v65 = v198;
                v66 = (int *)((char *)v198 + 1024);
                if ( (*((_DWORD *)v198 + 10) & 1) == 0 )
                  v66 = (int *)((char *)v198 + 1016);
                v67 = *v66;
                if ( (unsigned __int64)(v67 + v281.m128i_i32[0] + 0x80000000LL) <= 0xFFFFFFFF
                  && (unsigned __int64)(v67 + v281.m128i_i32[2] + 0x80000000LL) <= 0xFFFFFFFF )
                {
                  v68 = v66[1];
                  if ( (unsigned __int64)(v68 + v281.m128i_i32[1] + 0x80000000LL) <= 0xFFFFFFFF
                    && (unsigned __int64)(v68 + v281.m128i_i32[3] + 0x80000000LL) <= 0xFFFFFFFF )
                  {
                    v69 = v67 + v281.m128i_i32[0];
                    v281.m128i_i32[0] += v67;
                    v70 = *v66 + v281.m128i_i32[2];
                    v71 = v66[1] + v281.m128i_i32[1];
                    *(__int64 *)((char *)v281.m128i_i64 + 4) = __PAIR64__(v70, v71);
                    v72 = v66[1] + v281.m128i_i32[3];
                    v281.m128i_i32[3] = v72;
                    if ( v236 )
                    {
                      v163 = v229;
                      if ( v229 )
                      {
                        INC_SHARE_REF_CNT(v229);
                        v163 = v229;
                      }
                      *(_QWORD *)(v249 + 128) = v163;
                      v65 = v198;
                      v72 = v281.m128i_i32[3];
                      v70 = v281.m128i_i32[2];
                      v71 = v281.m128i_i32[1];
                      v69 = v281.m128i_i32[0];
                    }
                    v280.m128i_i32[0] = v208;
                    v73 = *(_QWORD *)(v253 + 48);
                    v280.m128i_i32[2] = v206 + v208;
                    v280.m128i_i32[3] = v205 - a7;
                    v280.m128i_i32[1] = v205 - a5 - a7;
                    if ( v227 )
                    {
                      if ( DC::prgnRao(v65) )
                        v74 = DC::prgnRao(v65);
                      else
                        v74 = DC::prgnVisSnap(v65);
                      v290 = 1;
                      v288 = 0LL;
                      v289 = 0;
                      v291 = 0LL;
                      XCLIPOBJ::vSetup((XCLIPOBJ *)v286, v74, (struct ERECTL *)&v281, 0);
                      if ( (_DWORD)v287 != DWORD2(v287) && DWORD1(v287) != HIDWORD(v287) )
                      {
                        if ( (*((_DWORD *)v198 + 9) & 0xE0) != 0 )
                        {
                          v277 = v287;
                          XDCOBJ::vAccumulateTight((XDCOBJ *)&v198, v75, (struct ERECTL *)&v277);
                        }
                        v76 = v253;
                        v77 = v249;
                        ++*(_DWORD *)(v253 + 92);
                        if ( v77 )
                        {
                          v78 = v77 + 56;
                          v79 = v77 + 60;
                          v80 = v77 + 48;
                          v81 = v77 + 112;
                        }
                        else
                        {
                          v80 = 24LL;
                          v78 = 32LL;
                          v79 = 36LL;
                          v81 = 88LL;
                        }
                        v82 = 0;
                        v83 = v281;
                        v84 = 0;
                        v284 = v281;
                        v255 = 0;
                        v256 = 0;
                        if ( *(int *)(v76 + 112) < 0 )
                        {
                          v164 = *(_DWORD **)(v76 + 48);
                          if ( v164 )
                          {
                            if ( (v164[10] & 0x20000) != 0 )
                            {
                              v82 = v164[646];
                              v84 = v164[647];
                              v255 = v82;
                              v256 = v84;
                            }
                          }
                        }
                        v85 = v82 + *(_DWORD *)(v76 + 56);
                        v260 = 0;
                        v257 = v85;
                        v86 = 0;
                        v87 = v84 + *(_DWORD *)(v76 + 60);
                        v259 = 0;
                        v88 = 0;
                        v258 = v87;
                        if ( *(int *)v81 < 0 )
                        {
                          v165 = *(_DWORD **)v80;
                          if ( *(_QWORD *)v80 )
                          {
                            if ( (v165[10] & 0x20000) != 0 )
                            {
                              v86 = v165[646];
                              v88 = v165[647];
                              v259 = v86;
                              v260 = v88;
                            }
                          }
                        }
                        v261 = v86 + *(_DWORD *)v78;
                        v262 = v88 + *(_DWORD *)v79;
                        v89 = *((_DWORD *)v198 + 130);
                        v208 = v89;
                        v90 = v89 & 1;
                        if ( (v89 & 1) != 0 && (v89 & 2) == 0 )
                        {
                          v166 = 1.0 / *((float *)v198 + 132);
                          v252[0] = 1.0 / *((float *)v198 + 131);
                          v252[1] = v166;
                          ERECTL::vScale((ERECTL *)&v255, (const struct POINTFL *)v252);
                          ERECTL::vScale((ERECTL *)&v284, (const struct POINTFL *)v252);
                          v83 = v284;
                        }
                        v282 = v83;
                        v91 = v280.m128i_i32[0] - _mm_cvtsi128_si32(v83);
                        v92 = v280.m128i_i32[1] - _mm_cvtsi128_si32(_mm_srli_si128(v83, 4));
                        ERECTL::operator*=(&v282, &v255);
                        v282.m128i_i32[0] += v91;
                        v282.m128i_i32[2] += v91;
                        v282.m128i_i32[1] += v92;
                        v282.m128i_i32[3] += v92;
                        ERECTL::operator*=(&v282, &v259);
                        v93 = v282.m128i_i32[0];
                        v94 = v282.m128i_i32[1];
                        v284.m128i_i32[0] = v282.m128i_i32[0] - v91;
                        v284.m128i_i32[1] = v282.m128i_i32[1] - v92;
                        v284.m128i_i32[2] = v282.m128i_i32[2] - v91;
                        v284.m128i_i32[3] = v282.m128i_i32[3] - v92;
                        if ( v282.m128i_i32[0] - v91 < v282.m128i_i32[2] - v91
                          && v282.m128i_i32[1] - v92 < v282.m128i_i32[3] - v92 )
                        {
                          v95 = v198;
                          if ( v90 && (v208 & 2) == 0 )
                          {
                            v275 = *(_QWORD *)((char *)v198 + 524);
                            ERECTL::vScale((ERECTL *)&v284, (const struct POINTFL *)&v275);
                            v93 = v282.m128i_i32[0];
                            v94 = v282.m128i_i32[1];
                          }
                          v280 = v282;
                          v281 = v284;
                          v96 = *((_DWORD *)v95 + 130);
                          v97 = (v96 & 1) != 0 && (v96 & 2) == 0;
                          v98 = *(_DWORD *)(v76 + 112);
                          if ( v97 )
                          {
                            if ( (v98 & 2) != 0 )
                              v167 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v73 + 2848);
                            else
                              v167 = EngStretchBlt;
                            v168 = v77 + 24;
                            if ( !v77 )
                              v168 = 0LL;
                            ((void (__fastcall *)(__int64, __int64, _QWORD, _BYTE *, XLATEOBJ *, _QWORD, _QWORD, __m128i *, __m128i *, _QWORD, int))v167)(
                              v76 + 24,
                              v168,
                              0LL,
                              v286,
                              v216,
                              0LL,
                              0LL,
                              &v281,
                              &v280,
                              0LL,
                              3);
                          }
                          else
                          {
                            v263[0] = v93;
                            v263[1] = v94;
                            if ( (v98 & 0x400) != 0 )
                              v99 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v73 + 2840);
                            else
                              v99 = EngCopyBits;
                            if ( v77 )
                              v100 = v77 + 24;
                            else
                              v100 = 0LL;
                            ((void (__fastcall *)(__int64, __int64, _BYTE *, XLATEOBJ *, __m128i *, _DWORD *))v99)(
                              v76 + 24,
                              v100,
                              v286,
                              v216,
                              &v281,
                              v263);
                          }
                        }
                      }
                    }
                    else
                    {
                      v265[2] = v207;
                      v206 = v205 - v202 - v194;
                      v265[1] = v206;
                      v265[0] = 0;
                      v265[3] = v205 - v202;
                      *(__m128i *)v248 = v280;
                      ERECTL::operator*=(&v280, v265);
                      if ( v280.m128i_i32[0] != v280.m128i_i32[2] && v280.m128i_i32[1] != v280.m128i_i32[3] )
                      {
                        v122 = v280.m128i_i32[0] - LODWORD(v248[0]);
                        v123 = *((_DWORD *)v65 + 130);
                        v124 = v280.m128i_i32[2] - LODWORD(v248[1]);
                        v125 = v280.m128i_i32[1] - HIDWORD(v248[0]);
                        v126 = v280.m128i_i32[3] - HIDWORD(v248[1]);
                        v231 = v280.m128i_i32[0] - LODWORD(v248[0]);
                        v233 = v280.m128i_i32[2] - LODWORD(v248[1]);
                        v232 = v280.m128i_i32[1] - HIDWORD(v248[0]);
                        v234 = v280.m128i_i32[3] - HIDWORD(v248[1]);
                        if ( (v123 & 1) != 0 && (v123 & 2) == 0 )
                        {
                          v272 = *(_QWORD *)((char *)v65 + 524);
                          ERECTL::vScale((ERECTL *)&v231, (const struct POINTFL *)&v272);
                          v126 = v234;
                          v124 = v233;
                          v125 = v232;
                          v122 = v231;
                        }
                        v281.m128i_i32[0] = v122 + v69;
                        v281.m128i_i32[1] = v125 + v71;
                        v281.m128i_i32[3] = v126 + v72;
                        v281.m128i_i32[2] = v124 + v70;
                        if ( v122 + v69 != v124 + v70 && v125 + v71 != v126 + v72 )
                        {
                          v127 = DC::prgnRao(v65) ? DC::prgnRao(v65) : DC::prgnVisSnap(v65);
                          v296 = 1;
                          v294 = 0LL;
                          v295 = 0;
                          v297 = 0LL;
                          XCLIPOBJ::vSetup((XCLIPOBJ *)v292, v127, (struct ERECTL *)&v281, 0);
                          if ( (_DWORD)v293 != DWORD2(v293) && DWORD1(v293) != HIDWORD(v293) )
                          {
                            if ( (*((_DWORD *)v198 + 9) & 0xE0) != 0 )
                            {
                              v278 = v293;
                              XDCOBJ::vAccumulateTight((XDCOBJ *)&v198, v128, (struct ERECTL *)&v278);
                            }
                            if ( v201 - 4 <= 1 )
                            {
                              v129 = v206;
                              v280.m128i_i32[3] += v206 - v280.m128i_i32[1];
                              v280.m128i_i32[1] = v206;
                            }
                            else
                            {
                              v280.m128i_i32[3] -= v206;
                              v129 = v280.m128i_i32[1] - v206;
                              v280.m128i_i32[1] -= v206;
                            }
                            v130 = v253;
                            v131 = v249;
                            ++*(_DWORD *)(v253 + 92);
                            v132 = v281;
                            v285 = v281;
                            vGetSurfaceBoundsRect((struct _SURFOBJ *)(v130 + 24), &v276);
                            vGetSurfaceBoundsRect(v133, &v279);
                            v134 = *((_DWORD *)v198 + 130);
                            v208 = v134;
                            v135 = v134 & 1;
                            if ( (v134 & 1) != 0 && (v134 & 2) == 0 )
                            {
                              v169 = 1.0 / *((float *)v198 + 132);
                              v254[0] = 1.0 / *((float *)v198 + 131);
                              v254[1] = v169;
                              ERECTL::vScale((ERECTL *)&v276, (const struct POINTFL *)v254);
                              ERECTL::vScale((ERECTL *)&v285, (const struct POINTFL *)v254);
                              v132 = v285;
                            }
                            v283 = v132;
                            v136 = v280.m128i_i32[0] - _mm_cvtsi128_si32(v132);
                            v137 = v129 - _mm_cvtsi128_si32(_mm_srli_si128(v132, 4));
                            ERECTL::operator*=(&v283, &v276);
                            v283.m128i_i32[0] += v136;
                            v283.m128i_i32[2] += v136;
                            v283.m128i_i32[1] += v137;
                            v283.m128i_i32[3] += v137;
                            ERECTL::operator*=(&v283, &v279);
                            v138 = v283.m128i_i32[0];
                            v139 = v283.m128i_i32[1];
                            v285.m128i_i32[0] = v283.m128i_i32[0] - v136;
                            v285.m128i_i32[1] = v283.m128i_i32[1] - v137;
                            v285.m128i_i32[2] = v283.m128i_i32[2] - v136;
                            v285.m128i_i32[3] = v283.m128i_i32[3] - v137;
                            if ( v283.m128i_i32[0] - v136 < v283.m128i_i32[2] - v136
                              && (int)(v283.m128i_i32[1] - v137) < (int)(v283.m128i_i32[3] - v137) )
                            {
                              v140 = v198;
                              if ( v135 && (v208 & 2) == 0 )
                              {
                                v273 = *(_QWORD *)((char *)v198 + 524);
                                ERECTL::vScale((ERECTL *)&v285, (const struct POINTFL *)&v273);
                                v138 = v283.m128i_i32[0];
                                v139 = v283.m128i_i32[1];
                              }
                              v280 = v283;
                              v281 = v285;
                              v141 = *((_DWORD *)v140 + 130);
                              v142 = (v141 & 1) != 0 && (v141 & 2) == 0;
                              v143 = *(_DWORD *)(v130 + 112);
                              if ( v142 )
                              {
                                if ( (v143 & 2) != 0 )
                                  v170 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v73 + 2848);
                                else
                                  v170 = EngStretchBlt;
                                v171 = v131 + 24;
                                if ( !v131 )
                                  v171 = 0LL;
                                v146 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _BYTE *, XLATEOBJ *, _QWORD, _QWORD, __m128i *, __m128i *, _QWORD, int))v170)(
                                         v130 + 24,
                                         v171,
                                         0LL,
                                         v292,
                                         v216,
                                         0LL,
                                         0LL,
                                         &v281,
                                         &v280,
                                         0LL,
                                         3);
                              }
                              else
                              {
                                v264[0] = v138;
                                v264[1] = v139;
                                v144 = (v143 & 0x400) != 0
                                     ? *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v73 + 2840)
                                     : EngCopyBits;
                                v145 = v131 ? v131 + 24 : 0LL;
                                v146 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *, XLATEOBJ *, __m128i *, _DWORD *))v144)(
                                         v130 + 24,
                                         v145,
                                         v292,
                                         v216,
                                         &v281,
                                         v264);
                              }
                              if ( !v146 )
                              {
                                v34 = 0;
                                goto LABEL_114;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              v34 = v194;
LABEL_114:
              SURFMEM::~SURFMEM((SURFMEM *)&v249);
              if ( v35 )
              {
                v101 = *(int *)(v35 + 36);
                if ( (int)v101 >= 0 )
                {
                  _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v101);
                }
                else if ( (_DWORD)v101 == -1 )
                {
                  FreeThreadBufferWithTag(v35);
                }
              }
              PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v229);
              goto LABEL_119;
            }
LABEL_346:
            v64 = 0;
            goto LABEL_80;
          }
          *(_DWORD *)(v62 + 32) = v60;
        }
LABEL_219:
        v61 = v229;
        goto LABEL_77;
      }
LABEL_348:
      EngSetLastError(0x57u);
      v64 = 0;
      goto LABEL_80;
    }
    if ( a12 == 1 )
    {
      if ( v298 >= 2 * (unsigned __int64)v31 )
      {
        v160 = v248[0];
        Xlate = EXLATEOBJ::bMakeXlate(&v239, v248[0], v55, v51, v31, v197);
        v35 = (__int64)v239;
        if ( !Xlate )
        {
          v64 = 0;
          goto LABEL_80;
        }
        v216 = v239;
        if ( gbMultiMonMismatchColor
          && (*(_DWORD *)(v38 + 40) & 1) != 0
          && PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v229, v195, v197, 0LL, v211, v210, v209, v196, 1) )
        {
          v162 = *(_QWORD *)(v51 + 128);
          if ( !v162 )
            v162 = *(_QWORD *)(v38 + 1808);
          XEPALOBJ::vGetEntriesFrom(&v229, v55, v162, v160, v31);
          v236 = 1;
        }
        goto LABEL_79;
      }
      goto LABEL_348;
    }
    v159 = *(_DWORD *)(v51 + 96);
    if ( v159 != (_DWORD)v212 )
    {
      if ( v159 == 2 )
      {
        if ( (_DWORD)v212 == 7 )
          goto LABEL_342;
      }
      else if ( v159 == 3 && (_DWORD)v212 == 8 )
      {
        goto LABEL_342;
      }
      EngSetLastError(0x57u);
      goto LABEL_346;
    }
LABEL_342:
    v216 = xloIdent;
    goto LABEL_79;
  }
LABEL_321:
  EngSetLastError(0x57u);
  v34 = 0;
LABEL_169:
  if ( v198 )
  {
    if ( (_DWORD)v199 && (*((_DWORD *)v198 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v199) )
      {
        v149 = XDCOBJ::GetUserAttr((XDCOBJ *)&v198);
        if ( v149 )
          DC::RestoreAttributes(v198, v149);
      }
      *((_DWORD *)v198 + 11) &= ~2u;
      LODWORD(v199) = 0;
    }
    v241 = 0;
    v119 = *(_QWORD *)v198;
    HmgDecrementExclusiveReferenceCountEx(v198, HIDWORD(v199), &v241);
    if ( v241 )
      bDeleteDCInternalEx(v119, 0LL);
  }
  return v34;
}
