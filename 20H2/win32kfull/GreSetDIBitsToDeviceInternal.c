/*
 * XREFs of GreSetDIBitsToDeviceInternal @ 0x1C00A16C0
 * Callers:
 *     NtGdiSetDIBitsToDeviceInternal @ 0x1C0095A10 (NtGdiSetDIBitsToDeviceInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C009FCF0 (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsInternal @ 0x1C0118A2C (GreSetDIBitsInternal.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C00936F4 (GreDereferenceObject.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00993B8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009D358 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     bCvtPts1 @ 0x1C009F8A0 (bCvtPts1.c)
 *     ?vGetSurfaceBoundsRect@@YAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C00A0B28 (-vGetSurfaceBoundsRect@@YAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C00A0B70 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C00A1194 (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00A1580 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?SaveAttributesHelper@XDCOBJ@@AEAAHXZ @ 0x1C00A1674 (-SaveAttributesHelper@XDCOBJ@@AEAAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A2CC0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00A5C40 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00A7490 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A81F0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C0102BAC (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C011C2B0 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012CEF8 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C0141F4C (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026E454 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C026E490 (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C029A64C (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C029CF84 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z @ 0x1C02BC07C (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02BC138 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02BE378 (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z @ 0x1C02BF8A8 (-bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z.c)
 *     ?vScale@EPOINTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C02BF8E0 (-vScale@EPOINTL@@QEAAXAEBVPOINTFL@@@Z.c)
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
  __int64 v48; // r13
  __int64 v49; // rcx
  unsigned int v50; // r12d
  __int64 v51; // r14
  struct PALETTE *v52; // rdi
  unsigned int v53; // r8d
  __int64 v54; // rcx
  char *v55; // rdx
  char v56; // al
  signed __int32 v57; // ecx
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 XlateObject; // rax
  int v61; // edi
  DC *v62; // rsi
  int *v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rdx
  __int32 v66; // r12d
  int v67; // r14d
  int v68; // r13d
  int v69; // r15d
  __int64 v70; // rdi
  struct REGION *v71; // rax
  struct ECLIPOBJ *v72; // rdx
  __int64 v73; // r13
  __int64 v74; // r15
  __int64 v75; // r10
  __int64 v76; // r11
  __int64 v77; // rsi
  __int64 v78; // r9
  int v79; // edx
  __m128i v80; // xmm1
  int v81; // r8d
  int v82; // ecx
  int v83; // edx
  int v84; // ecx
  int v85; // r8d
  int v86; // ecx
  int v87; // r12d
  __int32 v88; // esi
  int v89; // r14d
  __int32 v90; // r9d
  __int32 v91; // r10d
  DC *v92; // rsi
  int v93; // eax
  BOOL v94; // ecx
  int v95; // eax
  BOOL (__stdcall *v96)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  __int64 v97; // rdx
  __int64 v98; // rax
  DC *v99; // rcx
  __int64 v100; // rbx
  __int64 v101; // rcx
  struct _KTHREAD *v102; // rdi
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 *v106; // rax
  __int64 v107; // rax
  __int64 v108; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v110; // rcx
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v115; // rax
  __int64 v116; // rbx
  unsigned int v118; // ecx
  __int32 v119; // ecx
  int v120; // r9d
  int v121; // eax
  int v122; // edx
  int v123; // r8d
  struct REGION *v124; // rax
  struct ECLIPOBJ *v125; // rdx
  unsigned int v126; // r15d
  __int64 v127; // r14
  __int64 v128; // r13
  __m128i v129; // xmm6
  struct _SURFOBJ *v130; // r11
  int v131; // ecx
  int v132; // r12d
  __int32 v133; // esi
  unsigned int v134; // r15d
  __int32 v135; // r9d
  __int32 v136; // r10d
  DC *v137; // rsi
  int v138; // eax
  BOOL v139; // ecx
  int v140; // eax
  BOOL (__stdcall *v141)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  __int64 v142; // rdx
  int v143; // eax
  __int64 v144; // rbx
  struct _DC_ATTR *UserAttr; // rax
  struct _DC_ATTR *v146; // rax
  int v147; // r8d
  unsigned int v148; // ecx
  unsigned int v149; // r9d
  ULONG v150; // ecx
  unsigned __int64 v151; // rcx
  unsigned __int64 v152; // rcx
  ULONG v153; // ecx
  DC **v154; // rcx
  bool v155; // zf
  int v156; // eax
  unsigned int *v157; // r12
  int Xlate; // eax
  __int64 v159; // r8
  __int64 v160; // rax
  _DWORD *v161; // rax
  _DWORD *v162; // rax
  float v163; // xmm1_4
  BOOL (__stdcall *v164)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rax
  __int64 v165; // rdx
  float v166; // xmm1_4
  BOOL (__stdcall *v167)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rax
  __int64 v168; // rdx
  __int64 v169; // rax
  int v170; // ebx
  __int64 v171; // rcx
  __int64 v172; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v175; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v177; // rdx
  __int64 v178; // rax
  __int64 v179; // rdx
  HSURF *v180; // rdi
  struct SURFACE *v181; // rax
  HSURF v182; // rsi
  struct SURFACE *v183; // rbx
  char v184; // bl
  __int64 v185; // rax
  __int64 v186; // rax
  int v187; // [rsp+20h] [rbp-E0h]
  unsigned int v188; // [rsp+60h] [rbp-A0h]
  unsigned int v189; // [rsp+64h] [rbp-9Ch]
  unsigned int v190; // [rsp+68h] [rbp-98h]
  unsigned int v191; // [rsp+6Ch] [rbp-94h]
  DC *v192; // [rsp+70h] [rbp-90h] BYREF
  __int64 v193; // [rsp+78h] [rbp-88h]
  int v194; // [rsp+80h] [rbp-80h]
  unsigned int v195; // [rsp+90h] [rbp-70h]
  int v196; // [rsp+94h] [rbp-6Ch]
  DC *v197; // [rsp+98h] [rbp-68h] BYREF
  __int64 v198; // [rsp+A0h] [rbp-60h]
  int v199; // [rsp+A8h] [rbp-58h]
  unsigned int v200; // [rsp+ACh] [rbp-54h]
  unsigned int v201; // [rsp+B0h] [rbp-50h]
  int v202; // [rsp+B4h] [rbp-4Ch]
  unsigned int v203; // [rsp+B8h] [rbp-48h]
  unsigned int v204; // [rsp+BCh] [rbp-44h]
  unsigned int v205; // [rsp+C0h] [rbp-40h]
  __int64 v206; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v207; // [rsp+D0h] [rbp-30h]
  __int64 v208; // [rsp+D8h] [rbp-28h]
  __int64 v209; // [rsp+E0h] [rbp-20h]
  XLATEOBJ *v210; // [rsp+E8h] [rbp-18h]
  __int64 v211; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v212; // [rsp+F8h] [rbp-8h]
  int v213; // [rsp+108h] [rbp+8h]
  int v214; // [rsp+10Ch] [rbp+Ch]
  DC *v215; // [rsp+110h] [rbp+10h] BYREF
  __int64 v216; // [rsp+118h] [rbp+18h]
  __int16 v217; // [rsp+120h] [rbp+20h]
  __int64 v218; // [rsp+128h] [rbp+28h]
  __int64 v219; // [rsp+130h] [rbp+30h]
  HDC v220; // [rsp+138h] [rbp+38h]
  int v221; // [rsp+140h] [rbp+40h]
  char v222[4]; // [rsp+144h] [rbp+44h] BYREF
  __int64 v223; // [rsp+148h] [rbp+48h] BYREF
  int v224; // [rsp+150h] [rbp+50h]
  __int32 v225; // [rsp+160h] [rbp+60h] BYREF
  int v226; // [rsp+164h] [rbp+64h]
  int v227; // [rsp+168h] [rbp+68h]
  int v228; // [rsp+16Ch] [rbp+6Ch]
  int v229; // [rsp+170h] [rbp+70h] BYREF
  int v230; // [rsp+174h] [rbp+74h]
  int v231; // [rsp+178h] [rbp+78h] BYREF
  __int64 v232; // [rsp+180h] [rbp+80h]
  XLATEOBJ *v233; // [rsp+188h] [rbp+88h] BYREF
  void *v234; // [rsp+190h] [rbp+90h]
  int v235; // [rsp+198h] [rbp+98h] BYREF
  int v236; // [rsp+19Ch] [rbp+9Ch] BYREF
  DC *v237[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  int v238; // [rsp+1B0h] [rbp+B0h] BYREF
  __int32 v239; // [rsp+1B4h] [rbp+B4h]
  unsigned int v240; // [rsp+1B8h] [rbp+B8h] BYREF
  int v241; // [rsp+1BCh] [rbp+BCh]
  unsigned int *v242[2]; // [rsp+1C0h] [rbp+C0h]
  __int64 v243; // [rsp+1D0h] [rbp+D0h] BYREF
  char v244; // [rsp+1D8h] [rbp+D8h]
  int v245; // [rsp+1DCh] [rbp+DCh]
  float v246[2]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v247; // [rsp+1E8h] [rbp+E8h]
  float v248[2]; // [rsp+1F0h] [rbp+F0h] BYREF
  int v249; // [rsp+1F8h] [rbp+F8h] BYREF
  int v250; // [rsp+1FCh] [rbp+FCh]
  int v251; // [rsp+200h] [rbp+100h]
  int v252; // [rsp+204h] [rbp+104h]
  int v253; // [rsp+208h] [rbp+108h] BYREF
  int v254; // [rsp+20Ch] [rbp+10Ch]
  int v255; // [rsp+210h] [rbp+110h]
  int v256; // [rsp+214h] [rbp+114h]
  _DWORD v257[2]; // [rsp+218h] [rbp+118h] BYREF
  _DWORD v258[2]; // [rsp+220h] [rbp+120h] BYREF
  _DWORD v259[4]; // [rsp+228h] [rbp+128h] BYREF
  DC *v260[2]; // [rsp+238h] [rbp+138h] BYREF
  DC *v261[2]; // [rsp+248h] [rbp+148h] BYREF
  DC *v262[2]; // [rsp+258h] [rbp+158h] BYREF
  char *v263; // [rsp+268h] [rbp+168h] BYREF
  int v264; // [rsp+270h] [rbp+170h]
  int v265; // [rsp+274h] [rbp+174h]
  __int64 v266; // [rsp+278h] [rbp+178h] BYREF
  __int64 v267; // [rsp+280h] [rbp+180h] BYREF
  __int64 v268; // [rsp+288h] [rbp+188h] BYREF
  __int64 v269; // [rsp+290h] [rbp+190h] BYREF
  struct _RECTL v270; // [rsp+298h] [rbp+198h] BYREF
  __m128i v271; // [rsp+2A8h] [rbp+1A8h] BYREF
  __m128i v272; // [rsp+2B8h] [rbp+1B8h] BYREF
  struct _RECTL v273; // [rsp+2C8h] [rbp+1C8h] BYREF
  __m128i v274; // [rsp+2E0h] [rbp+1E0h] BYREF
  __m128i v275; // [rsp+2F0h] [rbp+1F0h] BYREF
  __m128i v276; // [rsp+300h] [rbp+200h] BYREF
  __m128i v277; // [rsp+310h] [rbp+210h] BYREF
  __m128i v278; // [rsp+320h] [rbp+220h] BYREF
  __m128i v279; // [rsp+330h] [rbp+230h] BYREF
  _BYTE v280[4]; // [rsp+340h] [rbp+240h] BYREF
  __m128i v281; // [rsp+344h] [rbp+244h]
  __int64 v282; // [rsp+390h] [rbp+290h]
  int v283; // [rsp+398h] [rbp+298h]
  int v284; // [rsp+3C0h] [rbp+2C0h]
  __int64 v285; // [rsp+3D0h] [rbp+2D0h]
  _BYTE v286[4]; // [rsp+3E0h] [rbp+2E0h] BYREF
  __m128i v287; // [rsp+3E4h] [rbp+2E4h]
  __int64 v288; // [rsp+430h] [rbp+330h]
  int v289; // [rsp+438h] [rbp+338h]
  int v290; // [rsp+460h] [rbp+360h]
  __int64 v291; // [rsp+470h] [rbp+370h]
  unsigned int v292; // [rsp+548h] [rbp+448h]

  v17 = a10;
  v18 = a2;
  v202 = a6;
  v232 = a16;
  LOBYTE(v21) = -1;
  v194 = a2;
  LOBYTE(a2) = 1;
  v198 = 0LL;
  v200 = a4;
  v234 = a10;
  v197 = (DC *)HmgLockEx(a1, a2, 0LL);
  v22 = v197;
  if ( !v197 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_275;
  }
  if ( (*((_DWORD *)v197 + 11) & 2) == 0 )
  {
    if ( !XDCOBJ::SaveAttributesHelper((XDCOBJ *)&v197) )
    {
      _InterlockedDecrement((volatile signed __int32 *)v197 + 3);
      v22 = 0LL;
      v197 = 0LL;
      goto LABEL_6;
    }
    *((_DWORD *)v197 + 11) |= 2u;
    v22 = v197;
    LODWORD(v198) = 1;
  }
  if ( (*((_DWORD *)v22 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v22);
LABEL_275:
    v22 = v197;
  }
  if ( !v22 )
    goto LABEL_11;
  v21 = *(_DWORD *)(*((_QWORD *)v22 + 122) + 108LL);
LABEL_6:
  if ( v22 )
  {
    if ( (_DWORD)v198 && (*((_DWORD *)v22 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v198) )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v197);
        if ( UserAttr )
          DC::RestoreAttributes(v197, UserAttr);
        v22 = v197;
      }
      *((_DWORD *)v22 + 11) &= ~2u;
      v22 = v197;
      LODWORD(v198) = 0;
    }
    v229 = 0;
    v23 = *(_QWORD *)v22;
    HmgDecrementExclusiveReferenceCountEx(v22, HIDWORD(v198), &v229);
    if ( v229 )
      bDeleteDCInternalEx(v23, 0LL);
    v17 = v234;
  }
LABEL_11:
  if ( (v21 & 1) != 0 )
    v194 = a4 + v18 - 1;
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
  v201 = v26;
  if ( (int)v26 <= 0 )
    goto LABEL_305;
  v27 = a11[2];
  v199 = v27;
  if ( !v27 )
    goto LABEL_305;
  v28 = a11[4];
  v29 = *((unsigned __int16 *)a11 + 7);
  v30 = 0;
  v31 = a11[8];
  v206 = 0LL;
  v207 = 0LL;
  v209 = 0LL;
  v208 = 0LL;
  v195 = v28;
  v242[0] = (unsigned int *)((char *)a11 + v25);
  if ( v27 < 0 )
  {
    LODWORD(v209) = 1;
    if ( v28 > 0xC )
      goto LABEL_305;
    v147 = 7225;
    if ( !_bittest(&v147, v28) )
      goto LABEL_305;
    v27 = -v27;
    v199 = v27;
  }
  v205 = 0;
  v204 = 0;
  v203 = 0;
  v221 = 0;
  if ( v28 == 3 )
  {
    if ( a14 < 0x34 )
      goto LABEL_305;
    if ( a12 == 1 )
      a12 = 0;
    if ( (_DWORD)v29 == 16 )
    {
      LODWORD(v206) = 4;
    }
    else
    {
      if ( (_DWORD)v29 != 32 )
        goto LABEL_305;
      LODWORD(v206) = 6;
    }
    v205 = a11[10];
    v148 = v29 * v26;
    v204 = a11[11];
    v149 = a11[12];
    v242[0] = a11 + 10;
    v203 = v149;
    v191 = 0;
    v189 = 2;
    v190 = 512;
    if ( (unsigned __int64)(v29 * v26) > 0xFFFFFFFF || v148 + 31 < v148 )
    {
LABEL_269:
      v150 = 534;
LABEL_306:
      EngSetLastError(v150);
      return 0LL;
    }
    v188 = a9;
    v32 = a9 * (unsigned __int64)(((v148 + 31) >> 3) & 0x1FFFFFFC);
    if ( v32 <= 0xFFFFFFFF )
    {
      v28 = v195;
      v196 = a8;
      goto LABEL_28;
    }
LABEL_268:
    HIDWORD(v207) = -1;
    goto LABEL_269;
  }
  if ( !v28 )
  {
    if ( (unsigned int)v29 > 8 )
    {
LABEL_175:
      if ( a12 == 1 )
        a12 = 0;
      v191 = 0;
      v190 = 512;
      if ( (_DWORD)v29 == 32 )
      {
        LODWORD(v206) = 6;
LABEL_179:
        v189 = 8;
        goto LABEL_180;
      }
      if ( (_DWORD)v29 != 16 )
      {
        if ( (_DWORD)v29 != 24 )
          goto LABEL_305;
        LODWORD(v206) = 5;
        goto LABEL_179;
      }
      LODWORD(v206) = 4;
      v205 = 31744;
      v204 = 992;
      v203 = 31;
      v189 = 2;
LABEL_180:
      v118 = v29 * v26;
      if ( (unsigned __int64)(v29 * v26) > 0xFFFFFFFF || v118 + 31 < v118 )
        goto LABEL_269;
      v188 = a9;
      v32 = a9 * (unsigned __int64)(((v118 + 31) >> 3) & 0x1FFFFFFC);
      if ( v32 <= 0xFFFFFFFF )
      {
        v28 = v195;
        v196 = a8;
        goto LABEL_28;
      }
      goto LABEL_268;
    }
    switch ( (_DWORD)v29 )
    {
      case 1:
        LODWORD(v206) = 1;
        v30 = 2;
        break;
      case 4:
        LODWORD(v206) = 2;
        v30 = 16;
        break;
      case 8:
        LODWORD(v206) = 3;
        v30 = 256;
        break;
      default:
        goto LABEL_175;
    }
    v191 = v30;
    v189 = 1;
    v190 = 1024;
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
      DCOBJ::DCOBJ((DCOBJ *)v262, a1);
      if ( v262[0] && (unsigned int)DC::bIsCMYKColor(v262[0]) )
      {
        XDCOBJ::vUnlockFast((XDCOBJ *)v262);
        v24 = a14;
        v28 = v195;
        v27 = v199;
        LODWORD(v26) = v201;
LABEL_255:
        if ( (_DWORD)v29 != 4 )
          goto LABEL_305;
        LODWORD(v206) = 7;
        v30 = 16;
        v191 = 16;
        v189 = 1;
        v190 = 1024;
        v188 = v27;
        v221 = 1;
LABEL_257:
        v196 = 0;
        goto LABEL_27;
      }
      EngSetLastError(0x57u);
      if ( !v262[0] )
        return 0LL;
      v154 = v262;
    }
    else
    {
      if ( v28 != 11 )
      {
        if ( v28 == 4 )
        {
          LODWORD(v206) = 9;
        }
        else
        {
          if ( v28 != 5 )
            goto LABEL_305;
          LODWORD(v206) = 10;
        }
        v188 = a9;
        v191 = 0;
        v189 = 8;
        v190 = 512;
        goto LABEL_257;
      }
      DCOBJ::DCOBJ((DCOBJ *)v261, a1);
      if ( v261[0] && (unsigned int)DC::bIsCMYKColor(v261[0]) )
      {
        XDCOBJ::vUnlockFast((XDCOBJ *)v261);
        v24 = a14;
        v27 = v199;
        LODWORD(v26) = v201;
LABEL_25:
        if ( (_DWORD)v29 == 8 )
        {
          v189 = 1;
          LODWORD(v206) = 8;
          v30 = 256;
          v191 = 256;
          v196 = 0;
          v28 = v195;
          v190 = 1024;
          v188 = v27;
          v221 = 1;
LABEL_27:
          LODWORD(v32) = a11[5];
LABEL_28:
          HIDWORD(v207) = v32;
          goto LABEL_29;
        }
LABEL_305:
        v150 = 87;
        goto LABEL_306;
      }
      EngSetLastError(0x57u);
      if ( !v261[0] )
        return 0LL;
      v154 = v261;
    }
LABEL_318:
    XDCOBJ::vUnlockFast((XDCOBJ *)v154);
    return 0LL;
  }
  DCOBJ::DCOBJ((DCOBJ *)v260, a1);
  if ( !v260[0] || !(unsigned int)DC::bIsCMYKColor(v260[0]) )
    goto LABEL_295;
  switch ( (_DWORD)v29 )
  {
    case 1:
      LODWORD(v206) = 1;
      v30 = 2;
      goto LABEL_288;
    case 4:
      LODWORD(v206) = 2;
      v30 = 16;
      goto LABEL_288;
    case 8:
      LODWORD(v206) = 3;
      v30 = 256;
LABEL_288:
      v189 = 1;
      v190 = 1024;
      goto LABEL_289;
  }
  if ( (_DWORD)v29 != 32 )
  {
LABEL_295:
    v153 = 87;
    goto LABEL_296;
  }
  LODWORD(v206) = 6;
  v189 = 16;
  v190 = 512;
LABEL_289:
  v151 = v29 * v201;
  v191 = v30;
  if ( v151 > 0xFFFFFFFF || (int)v151 + 31 < (unsigned int)v151 )
    goto LABEL_294;
  v188 = a9;
  v152 = a9 * (unsigned __int64)(((unsigned int)(v151 + 31) >> 3) & 0x1FFFFFFC);
  if ( v152 > 0xFFFFFFFF )
  {
    HIDWORD(v207) = -1;
LABEL_294:
    v153 = 534;
LABEL_296:
    EngSetLastError(v153);
    if ( !v260[0] )
      return 0LL;
    v154 = v260;
    goto LABEL_318;
  }
  HIDWORD(v207) = v152;
  XDCOBJ::vUnlockFast((XDCOBJ *)v260);
  LODWORD(v32) = HIDWORD(v207);
  v24 = a14;
  v28 = v195;
  v27 = v199;
  LODWORD(v26) = v201;
  v196 = a8;
LABEL_29:
  v33 = v24 - (unsigned int)v25;
  v292 = v33;
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
  v34 = v188;
  HIDWORD(v206) = v26;
  if ( v28 - 4 <= 1 )
    LODWORD(v207) = v27;
  else
    LODWORD(v207) = v188;
  v35 = 0LL;
  LOBYTE(v33) = 1;
  v193 = 0LL;
  v192 = (DC *)HmgLockEx(a1, v33, 0LL);
  if ( v192 )
  {
    if ( (*((_DWORD *)v192 + 11) & 2) == 0 )
    {
      if ( !XDCOBJ::SaveAttributesHelper((XDCOBJ *)&v192) )
      {
        _InterlockedDecrement((volatile signed __int32 *)v192 + 3);
        v192 = 0LL;
        goto LABEL_321;
      }
      *((_DWORD *)v192 + 11) |= 2u;
      LODWORD(v193) = 1;
    }
    if ( (*((_DWORD *)v192 + 130) & 4) != 0 )
      DC::vMarkTransformDirty(v192);
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  if ( v192 && (*((_DWORD *)v192 + 9) & 0x10000) == 0 )
  {
    v36 = a11[4];
    v37 = v194;
    v38 = *((_QWORD *)v192 + 6);
    v238 = v194;
    v239 = a3;
    if ( v36 - 4 <= 1 && (!(unsigned int)XDCOBJ::bSupportsPassthroughImage((XDCOBJ *)&v192, v36) || a12 || v232) )
    {
      v34 = 0;
      v188 = 0;
    }
    if ( a15 )
    {
      v264 = *(_DWORD *)(*((_QWORD *)v192 + 122) + 208LL);
      v265 = *(_DWORD *)(*((_QWORD *)v192 + 122) + 108LL) & 1;
      if ( (*(_DWORD *)(*((_QWORD *)v192 + 122) + 340LL) & 0x1E000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v263, (struct XDCOBJ *)&v192, 0x204u, 0);
        v39 = v263;
      }
      else
      {
        v39 = (char *)v192 + 320;
        v263 = (char *)v192 + 320;
      }
      v40 = *((_DWORD *)v39 + 8);
      if ( (v39[32] & 0x43) != 0x43 )
      {
        bCvtPts1((unsigned __int64)v39, &v238, 1LL);
        a3 = v239;
        v37 = v238;
      }
      if ( v34 && a11[4] - 4 <= 1 )
      {
        v155 = (v40 & 1) == 0;
        v35 = 0LL;
        if ( v155 )
          v34 = 0;
        v188 = v34;
      }
      else
      {
        v35 = 0LL;
      }
    }
    v41 = v200;
    v42 = a5;
    v240 = v200;
    v43 = *((_DWORD *)v192 + 130);
    v241 = a5;
    if ( (v43 & 1) != 0 && (v43 & 2) == 0 )
    {
      v268 = *(_QWORD *)((char *)v192 + 524);
      EPOINTL::vScale((EPOINTL *)&v240, (const struct POINTFL *)&v268);
      v42 = v241;
      v41 = v240;
    }
    v44 = v41 + v37;
    v275.m128i_i64[0] = __PAIR64__(a3, v37);
    v45 = v42 + a3;
    v275.m128i_i32[3] = v42 + a3;
    v46 = v44;
    v275.m128i_i32[2] = v44;
    v47 = v42 + a3;
    if ( v37 > v44 )
    {
      v46 = v37;
      v275.m128i_i32[0] = v44;
      v275.m128i_i32[2] = v37;
      v37 = v44;
    }
    if ( a3 > v45 )
    {
      v47 = a3;
      v275.m128i_i32[1] = v45;
      v275.m128i_i32[3] = a3;
      a3 = v45;
    }
    if ( v37 == v46 || a3 == v47 || !v34 )
      goto LABEL_169;
    if ( (*((_DWORD *)v192 + 9) & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)&v192, (struct ERECTL *)&v275);
    v215 = 0LL;
    v216 = 0LL;
    v217 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v211, (struct XDCOBJ *)&v192, 0);
    v48 = *((_QWORD *)v192 + 62);
    v247 = v48;
    if ( !v48 )
    {
LABEL_119:
      v99 = v215;
      if ( !v215 || !HIBYTE(v217) )
      {
LABEL_155:
        if ( (v213 & 0x1000) != 0 )
        {
          GreDecLockCount();
          v213 &= ~0x1000u;
          CurrentThread = KeGetCurrentThread();
          if ( !(unsigned __int8)KeIsAttachedProcess(v110)
            || (CurrentProcess = PsGetCurrentProcess(v112, v111, v113),
                ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                CurrentThreadProcess = PsGetCurrentThreadProcess(v175),
                ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
            {
              v115 = *ThreadWin32Thread;
              if ( v115 )
              {
                *(_QWORD *)(v115 + 320) = 0LL;
                *(_QWORD *)(v115 + 312) = 0LL;
              }
            }
          }
        }
        else
        {
          if ( (v213 & 0x800000) == 0 )
            goto LABEL_161;
          GreDecLockCount();
          v213 &= ~0x800000u;
        }
        v99 = v215;
LABEL_161:
        if ( v211 )
        {
          EtwTraceGreLockReleaseSemaphore(L"hsemTrg", v211);
          GreReleaseSemaphoreInternal(v211);
          v99 = v215;
        }
        if ( (v213 & 8) != 0 )
          v213 &= ~8u;
        if ( v212 )
        {
          EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v212);
          GreReleaseSemaphoreInternal(v212);
          v99 = v215;
        }
        if ( v219 )
        {
          v237[1] = 0LL;
          XDCOBJ::vLock((XDCOBJ *)v237, v220);
          LOBYTE(v177) = 5;
          v178 = HmgShareLock(v218, v177);
          LOBYTE(v179) = 5;
          v180 = (HSURF *)v178;
          v181 = (struct SURFACE *)HmgShareLock(v219, v179);
          v182 = *v180;
          v183 = v181;
          DC::pSurface(v237[0], v181);
          DEC_SHARE_REF_CNT(v180);
          DEC_SHARE_REF_CNT(v183);
          GreDereferenceObject(v182, 1u);
          v184 = 0;
          v220 = 0LL;
          v218 = 0LL;
          *((_DWORD *)v237[0] + 9) |= v214;
          if ( (*((_DWORD *)v237[0] + 9) & 0x200) != 0 )
          {
            if ( !(unsigned int)GreGetLockCount()
              && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
            {
              GreAcquireSemaphoreSharedInternal(ghsemGreLock);
              EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
              v184 = 1;
            }
            DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v222);
            LOBYTE(v187) = 5;
            v185 = HmgShareUnlockRemoveObject(v219, 0LL, 0LL, 0LL, v187);
            if ( v185 )
              SURFACE::bDeleteSurface(v185, 0LL, 1LL);
            *((_QWORD *)v237[0] + 63) = 0LL;
            DC::vClearRendering(v237[0]);
            v219 = 0LL;
            EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
            GreReleaseSemaphoreInternal(ghsemDCVisRgn);
            if ( v184 )
            {
              EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
              GreReleaseSemaphoreInternal(ghsemGreLock);
            }
          }
          else
          {
            LOBYTE(v187) = 5;
            v186 = HmgShareUnlockRemoveObject(v219, 0LL, 0LL, 0LL, v187);
            if ( v186 )
              SURFACE::bDeleteSurface(v186, 0LL, 1LL);
            *((_QWORD *)v237[0] + 63) = 0LL;
            v219 = 0LL;
          }
          if ( v237[0] )
            XDCOBJ::vUnlockFast((XDCOBJ *)v237);
          v237[0] = 0LL;
          EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
          GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
          v99 = v215;
        }
        if ( v99 )
        {
          if ( (_BYTE)v217 )
          {
            *((_DWORD *)v99 + 10) &= ~2u;
            v99 = v215;
            LOBYTE(v217) = 0;
          }
          if ( v99 )
          {
            if ( (_DWORD)v216 && (*((_DWORD *)v99 + 11) & 2) != 0 )
            {
              XDCOBJ::RestoreAttributesHelper((XDCOBJ *)&v215);
              *((_DWORD *)v215 + 11) &= ~2u;
              v99 = v215;
              LODWORD(v216) = 0;
            }
            v236 = 0;
            v144 = *(_QWORD *)v99;
            HmgDecrementExclusiveReferenceCountEx(v99, HIDWORD(v216), &v236);
            if ( v236 )
              bDeleteDCInternalEx(v144, 0LL);
          }
        }
        goto LABEL_169;
      }
      v100 = *((_QWORD *)v215 + 6);
      if ( (v213 & 0x1000) != 0 )
      {
        if ( (v213 & 0x400) != 0 )
        {
          bUnHookRedir((struct XDCOBJ *)&v215);
          v213 &= ~0x400u;
          v99 = v215;
        }
        if ( (v213 & 0x2000) != 0 )
        {
          bUnHookBmpDrv((struct XDCOBJ *)&v215);
          v213 &= ~0x2000u;
          v99 = v215;
        }
        if ( v99 && HIBYTE(v217) && (v213 & 0x1000) != 0 )
        {
          if ( (*((_DWORD *)v99 + 11) & 1) == 0 && *((_QWORD *)v99 + 62) )
          {
            SURFACE::bUnMap(*((SURFACE **)v99 + 62), &v211, v99);
            v99 = v215;
          }
          *((_DWORD *)v99 + 11) &= ~1u;
          v99 = v215;
          if ( (*((_DWORD *)v215 + 9) & 0x4000) != 0 && *((_QWORD *)v215 + 59) && *((_DWORD *)v215 + 122) )
          {
            GreUpdateSpriteDevLockEnd((struct XDCOBJ *)&v215, v213 & 0x400000);
            v99 = v215;
          }
        }
        if ( (v213 & 0x10) != 0 )
        {
          *((_DWORD *)v99 + 9) &= ~0x4000u;
          DC::pSurface(v215, *(struct SURFACE **)(v100 + 2552));
          v99 = v215;
        }
        if ( !v99 )
          goto LABEL_154;
        if ( HIBYTE(v217) && (v213 & 0x1000) != 0 && (*((_DWORD *)v99 + 9) & 0x200) != 0 )
        {
          GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
          if ( !v218 )
            DC::vClearRendering(v215);
          if ( (*((_DWORD *)v215 + 9) & 0x4000) == 0 )
          {
            v102 = KeGetCurrentThread();
            if ( !(unsigned __int8)KeIsAttachedProcess(v101)
              || (v169 = PsGetCurrentProcess(v104, v103, v105),
                  v170 = PsGetProcessSessionIdEx(v169),
                  v172 = PsGetCurrentThreadProcess(v171),
                  v170 == (unsigned int)PsGetProcessSessionIdEx(v172)) )
            {
              v106 = (__int64 *)PsGetThreadWin32Thread(v102);
              if ( v106 )
              {
                v107 = *v106;
                if ( v107 )
                  *(_DWORD *)(v107 + 328) &= ~1u;
              }
            }
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
          GreReleaseSemaphoreInternal(ghsemDCVisRgn);
          v99 = v215;
        }
      }
      if ( v99 )
      {
        if ( (_BYTE)v217 )
        {
          *((_DWORD *)v99 + 10) &= ~2u;
          v99 = v215;
          LOBYTE(v217) = 0;
        }
        if ( v99 )
        {
          if ( (_DWORD)v216 && (*((_DWORD *)v99 + 11) & 2) != 0 )
          {
            XDCOBJ::RestoreAttributesHelper((XDCOBJ *)&v215);
            *((_DWORD *)v215 + 11) &= ~2u;
            LODWORD(v216) = 0;
            v99 = v215;
          }
          v231 = 0;
          v108 = *(_QWORD *)v99;
          HmgDecrementExclusiveReferenceCountEx(v99, HIDWORD(v216), &v231);
          if ( v231 )
            bDeleteDCInternalEx(v108, 0LL);
        }
      }
LABEL_154:
      v99 = 0LL;
      v215 = 0LL;
      goto LABEL_155;
    }
    v49 = v232;
    if ( !v232 )
    {
      v49 = *(_QWORD *)(*((_QWORD *)v192 + 122) + 248LL);
      v232 = v49;
    }
    v50 = *((_DWORD *)v192 + 30);
    if ( (v50 & 0x10000000) != 0 && (!v49 || v195 - 10 > 2) )
      v50 = v50 & 0xFFFFFFF | 0x20000000;
    v51 = *(_QWORD *)(v48 + 128);
    v224 = 0;
    v223 = 0LL;
    v52 = (struct PALETTE *)*((_QWORD *)v192 + 11);
    if ( v52 != ppalDefault )
      *(_QWORD *)(v48 + 176) = *(_QWORD *)v52;
    v194 = 1;
    v230 = 0;
    v210 = 0LL;
    v233 = 0LL;
    if ( !a12 )
    {
      if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v223, v189, v191, 0LL, v205, v204, v203, v190, 1) )
        goto LABEL_346;
      if ( !v31 )
        goto LABEL_219;
      if ( v292 >= 4 * v31 )
      {
        if ( v195 - 10 <= 2 )
        {
          XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)&v223, v242[0], v53, v31);
        }
        else
        {
          v54 = *(_QWORD *)(v223 + 112);
          if ( v31 > *(_DWORD *)(v223 + 28) )
            v31 = *(_DWORD *)(v223 + 28);
          if ( v31 )
          {
            v55 = (char *)v242[0] + 1;
            do
            {
              *(_BYTE *)(v54 + 3) = 0;
              v54 += 4LL;
              v56 = *(v55 - 1);
              v55 += 4;
              *(_BYTE *)(v54 - 2) = v56;
              *(_BYTE *)(v54 - 4) = *(v55 - 3);
              *(_BYTE *)(v54 - 3) = *(v55 - 4);
              --v31;
            }
            while ( v31 );
          }
          v57 = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
          *(_DWORD *)(v223 + 32) = v57;
          v58 = v223;
          v59 = *(_QWORD *)(v223 + 120);
          if ( v59 == v223 )
          {
LABEL_77:
            XlateObject = CreateXlateObject(v232, v50, v58, v51, v52, v52, 0, 0, 0xFFFFFF, 0);
            v233 = (XLATEOBJ *)XlateObject;
            v35 = XlateObject;
            if ( XlateObject )
            {
              v210 = (XLATEOBJ *)XlateObject;
LABEL_79:
              v61 = v194;
LABEL_80:
              v243 = 0LL;
              v244 = 0;
              v245 = 0;
              SURFMEM::bCreateDIB((SURFMEM *)&v243, (struct _DEVBITMAPINFO *)&v206, v234, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
              if ( !v61 || !v243 )
              {
                v34 = 0;
                goto LABEL_114;
              }
              *(_DWORD *)(v243 + 92) = 0;
              if ( (v213 & 1) != 0 )
              {
                v62 = v192;
                v63 = (int *)((char *)v192 + 1024);
                if ( (*((_DWORD *)v192 + 10) & 1) == 0 )
                  v63 = (int *)((char *)v192 + 1016);
                v64 = *v63;
                if ( (unsigned __int64)(v64 + v275.m128i_i32[0] + 0x80000000LL) <= 0xFFFFFFFF
                  && (unsigned __int64)(v64 + v275.m128i_i32[2] + 0x80000000LL) <= 0xFFFFFFFF )
                {
                  v65 = v63[1];
                  if ( (unsigned __int64)(v65 + v275.m128i_i32[1] + 0x80000000LL) <= 0xFFFFFFFF
                    && (unsigned __int64)(v65 + v275.m128i_i32[3] + 0x80000000LL) <= 0xFFFFFFFF )
                  {
                    v66 = v64 + v275.m128i_i32[0];
                    v275.m128i_i32[0] += v64;
                    v67 = *v63 + v275.m128i_i32[2];
                    v68 = v63[1] + v275.m128i_i32[1];
                    *(__int64 *)((char *)v275.m128i_i64 + 4) = __PAIR64__(v67, v68);
                    v69 = v63[1] + v275.m128i_i32[3];
                    v275.m128i_i32[3] = v69;
                    if ( v230 )
                    {
                      v160 = v223;
                      if ( v223 )
                      {
                        INC_SHARE_REF_CNT(v223);
                        v160 = v223;
                      }
                      *(_QWORD *)(v243 + 128) = v160;
                      v62 = v192;
                      v69 = v275.m128i_i32[3];
                      v67 = v275.m128i_i32[2];
                      v68 = v275.m128i_i32[1];
                      v66 = v275.m128i_i32[0];
                    }
                    v274.m128i_i32[0] = v202;
                    v70 = *(_QWORD *)(v247 + 48);
                    v274.m128i_i32[2] = v200 + v202;
                    v274.m128i_i32[3] = v199 - a7;
                    v274.m128i_i32[1] = v199 - a5 - a7;
                    if ( v221 )
                    {
                      if ( DC::prgnRao(v62) )
                        v71 = DC::prgnRao(v62);
                      else
                        v71 = DC::prgnVisSnap(v62);
                      v284 = 1;
                      v282 = 0LL;
                      v283 = 0;
                      v285 = 0LL;
                      XCLIPOBJ::vSetup((XCLIPOBJ *)v280, v71, (struct ERECTL *)&v275, 0);
                      if ( v281.m128i_i32[0] != v281.m128i_i32[2] && v281.m128i_i32[1] != v281.m128i_i32[3] )
                      {
                        if ( (*((_DWORD *)v192 + 9) & 0xE0) != 0 )
                        {
                          v271 = v281;
                          XDCOBJ::vAccumulateTight((XDCOBJ *)&v192, v72, &v271);
                        }
                        v73 = v247;
                        v74 = v243;
                        ++*(_DWORD *)(v247 + 92);
                        if ( v74 )
                        {
                          v75 = v74 + 56;
                          v76 = v74 + 60;
                          v77 = v74 + 48;
                          v78 = v74 + 112;
                        }
                        else
                        {
                          v77 = 24LL;
                          v75 = 32LL;
                          v76 = 36LL;
                          v78 = 88LL;
                        }
                        v79 = 0;
                        v80 = v275;
                        v81 = 0;
                        v278 = v275;
                        v249 = 0;
                        v250 = 0;
                        if ( *(int *)(v73 + 112) < 0 )
                        {
                          v161 = *(_DWORD **)(v73 + 48);
                          if ( v161 )
                          {
                            if ( (v161[10] & 0x20000) != 0 )
                            {
                              v79 = v161[646];
                              v81 = v161[647];
                              v249 = v79;
                              v250 = v81;
                            }
                          }
                        }
                        v82 = v79 + *(_DWORD *)(v73 + 56);
                        v254 = 0;
                        v251 = v82;
                        v83 = 0;
                        v84 = v81 + *(_DWORD *)(v73 + 60);
                        v253 = 0;
                        v85 = 0;
                        v252 = v84;
                        if ( *(int *)v78 < 0 )
                        {
                          v162 = *(_DWORD **)v77;
                          if ( *(_QWORD *)v77 )
                          {
                            if ( (v162[10] & 0x20000) != 0 )
                            {
                              v83 = v162[646];
                              v85 = v162[647];
                              v253 = v83;
                              v254 = v85;
                            }
                          }
                        }
                        v255 = v83 + *(_DWORD *)v75;
                        v256 = v85 + *(_DWORD *)v76;
                        v86 = *((_DWORD *)v192 + 130);
                        v202 = v86;
                        v87 = v86 & 1;
                        if ( (v86 & 1) != 0 && (v86 & 2) == 0 )
                        {
                          v163 = 1.0 / *((float *)v192 + 132);
                          v246[0] = 1.0 / *((float *)v192 + 131);
                          v246[1] = v163;
                          ERECTL::vScale((ERECTL *)&v249, (const struct POINTFL *)v246);
                          ERECTL::vScale((ERECTL *)&v278, (const struct POINTFL *)v246);
                          v80 = v278;
                        }
                        v276 = v80;
                        v88 = v274.m128i_i32[0] - _mm_cvtsi128_si32(v80);
                        v89 = v274.m128i_i32[1] - _mm_cvtsi128_si32(_mm_srli_si128(v80, 4));
                        ERECTL::operator*=(&v276, &v249);
                        v276.m128i_i32[0] += v88;
                        v276.m128i_i32[2] += v88;
                        v276.m128i_i32[1] += v89;
                        v276.m128i_i32[3] += v89;
                        ERECTL::operator*=(&v276, &v253);
                        v90 = v276.m128i_i32[0];
                        v91 = v276.m128i_i32[1];
                        v278.m128i_i32[0] = v276.m128i_i32[0] - v88;
                        v278.m128i_i32[1] = v276.m128i_i32[1] - v89;
                        v278.m128i_i32[2] = v276.m128i_i32[2] - v88;
                        v278.m128i_i32[3] = v276.m128i_i32[3] - v89;
                        if ( v276.m128i_i32[0] - v88 < v276.m128i_i32[2] - v88
                          && v276.m128i_i32[1] - v89 < v276.m128i_i32[3] - v89 )
                        {
                          v92 = v192;
                          if ( v87 && (v202 & 2) == 0 )
                          {
                            v269 = *(_QWORD *)((char *)v192 + 524);
                            ERECTL::vScale((ERECTL *)&v278, (const struct POINTFL *)&v269);
                            v90 = v276.m128i_i32[0];
                            v91 = v276.m128i_i32[1];
                          }
                          v274 = v276;
                          v275 = v278;
                          v93 = *((_DWORD *)v92 + 130);
                          v94 = (v93 & 1) != 0 && (v93 & 2) == 0;
                          v95 = *(_DWORD *)(v73 + 112);
                          if ( v94 )
                          {
                            if ( (v95 & 2) != 0 )
                              v164 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v70 + 2848);
                            else
                              v164 = EngStretchBlt;
                            v165 = v74 + 24;
                            if ( !v74 )
                              v165 = 0LL;
                            ((void (__fastcall *)(__int64, __int64, _QWORD, _BYTE *, XLATEOBJ *, _QWORD, _QWORD, __m128i *, __m128i *, _QWORD, int))v164)(
                              v73 + 24,
                              v165,
                              0LL,
                              v280,
                              v210,
                              0LL,
                              0LL,
                              &v275,
                              &v274,
                              0LL,
                              3);
                          }
                          else
                          {
                            v257[0] = v90;
                            v257[1] = v91;
                            if ( (v95 & 0x400) != 0 )
                              v96 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v70 + 2840);
                            else
                              v96 = EngCopyBits;
                            if ( v74 )
                              v97 = v74 + 24;
                            else
                              v97 = 0LL;
                            ((void (__fastcall *)(__int64, __int64, _BYTE *, XLATEOBJ *, __m128i *, _DWORD *))v96)(
                              v73 + 24,
                              v97,
                              v280,
                              v210,
                              &v275,
                              v257);
                          }
                        }
                      }
                    }
                    else
                    {
                      v259[2] = v201;
                      v200 = v199 - v196 - v188;
                      v259[1] = v200;
                      v259[0] = 0;
                      v259[3] = v199 - v196;
                      *(__m128i *)v242 = v274;
                      ERECTL::operator*=(&v274, v259);
                      if ( v274.m128i_i32[0] != v274.m128i_i32[2] && v274.m128i_i32[1] != v274.m128i_i32[3] )
                      {
                        v119 = v274.m128i_i32[0] - LODWORD(v242[0]);
                        v120 = *((_DWORD *)v62 + 130);
                        v121 = v274.m128i_i32[2] - LODWORD(v242[1]);
                        v122 = v274.m128i_i32[1] - HIDWORD(v242[0]);
                        v123 = v274.m128i_i32[3] - HIDWORD(v242[1]);
                        v225 = v274.m128i_i32[0] - LODWORD(v242[0]);
                        v227 = v274.m128i_i32[2] - LODWORD(v242[1]);
                        v226 = v274.m128i_i32[1] - HIDWORD(v242[0]);
                        v228 = v274.m128i_i32[3] - HIDWORD(v242[1]);
                        if ( (v120 & 1) != 0 && (v120 & 2) == 0 )
                        {
                          v266 = *(_QWORD *)((char *)v62 + 524);
                          ERECTL::vScale((ERECTL *)&v225, (const struct POINTFL *)&v266);
                          v123 = v228;
                          v121 = v227;
                          v122 = v226;
                          v119 = v225;
                        }
                        v275.m128i_i32[0] = v119 + v66;
                        v275.m128i_i32[1] = v122 + v68;
                        v275.m128i_i32[3] = v123 + v69;
                        v275.m128i_i32[2] = v121 + v67;
                        if ( v119 + v66 != v121 + v67 && v122 + v68 != v123 + v69 )
                        {
                          v124 = DC::prgnRao(v62) ? DC::prgnRao(v62) : DC::prgnVisSnap(v62);
                          v290 = 1;
                          v288 = 0LL;
                          v289 = 0;
                          v291 = 0LL;
                          XCLIPOBJ::vSetup((XCLIPOBJ *)v286, v124, (struct ERECTL *)&v275, 0);
                          if ( v287.m128i_i32[0] != v287.m128i_i32[2] && v287.m128i_i32[1] != v287.m128i_i32[3] )
                          {
                            if ( (*((_DWORD *)v192 + 9) & 0xE0) != 0 )
                            {
                              v272 = v287;
                              XDCOBJ::vAccumulateTight((XDCOBJ *)&v192, v125, &v272);
                            }
                            if ( v195 - 4 <= 1 )
                            {
                              v126 = v200;
                              v274.m128i_i32[3] += v200 - v274.m128i_i32[1];
                              v274.m128i_i32[1] = v200;
                            }
                            else
                            {
                              v274.m128i_i32[3] -= v200;
                              v126 = v274.m128i_i32[1] - v200;
                              v274.m128i_i32[1] -= v200;
                            }
                            v127 = v247;
                            v128 = v243;
                            ++*(_DWORD *)(v247 + 92);
                            v129 = v275;
                            v279 = v275;
                            vGetSurfaceBoundsRect((struct _SURFOBJ *)(v127 + 24), &v270);
                            vGetSurfaceBoundsRect(v130, &v273);
                            v131 = *((_DWORD *)v192 + 130);
                            v202 = v131;
                            v132 = v131 & 1;
                            if ( (v131 & 1) != 0 && (v131 & 2) == 0 )
                            {
                              v166 = 1.0 / *((float *)v192 + 132);
                              v248[0] = 1.0 / *((float *)v192 + 131);
                              v248[1] = v166;
                              ERECTL::vScale((ERECTL *)&v270, (const struct POINTFL *)v248);
                              ERECTL::vScale((ERECTL *)&v279, (const struct POINTFL *)v248);
                              v129 = v279;
                            }
                            v277 = v129;
                            v133 = v274.m128i_i32[0] - _mm_cvtsi128_si32(v129);
                            v134 = v126 - _mm_cvtsi128_si32(_mm_srli_si128(v129, 4));
                            ERECTL::operator*=(&v277, &v270);
                            v277.m128i_i32[0] += v133;
                            v277.m128i_i32[2] += v133;
                            v277.m128i_i32[1] += v134;
                            v277.m128i_i32[3] += v134;
                            ERECTL::operator*=(&v277, &v273);
                            v135 = v277.m128i_i32[0];
                            v136 = v277.m128i_i32[1];
                            v279.m128i_i32[0] = v277.m128i_i32[0] - v133;
                            v279.m128i_i32[1] = v277.m128i_i32[1] - v134;
                            v279.m128i_i32[2] = v277.m128i_i32[2] - v133;
                            v279.m128i_i32[3] = v277.m128i_i32[3] - v134;
                            if ( v277.m128i_i32[0] - v133 < v277.m128i_i32[2] - v133
                              && (int)(v277.m128i_i32[1] - v134) < (int)(v277.m128i_i32[3] - v134) )
                            {
                              v137 = v192;
                              if ( v132 && (v202 & 2) == 0 )
                              {
                                v267 = *(_QWORD *)((char *)v192 + 524);
                                ERECTL::vScale((ERECTL *)&v279, (const struct POINTFL *)&v267);
                                v135 = v277.m128i_i32[0];
                                v136 = v277.m128i_i32[1];
                              }
                              v274 = v277;
                              v275 = v279;
                              v138 = *((_DWORD *)v137 + 130);
                              v139 = (v138 & 1) != 0 && (v138 & 2) == 0;
                              v140 = *(_DWORD *)(v127 + 112);
                              if ( v139 )
                              {
                                if ( (v140 & 2) != 0 )
                                  v167 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v70 + 2848);
                                else
                                  v167 = EngStretchBlt;
                                v168 = v128 + 24;
                                if ( !v128 )
                                  v168 = 0LL;
                                v143 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _BYTE *, XLATEOBJ *, _QWORD, _QWORD, __m128i *, __m128i *, _QWORD, int))v167)(
                                         v127 + 24,
                                         v168,
                                         0LL,
                                         v286,
                                         v210,
                                         0LL,
                                         0LL,
                                         &v275,
                                         &v274,
                                         0LL,
                                         3);
                              }
                              else
                              {
                                v258[0] = v135;
                                v258[1] = v136;
                                v141 = (v140 & 0x400) != 0
                                     ? *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v70 + 2840)
                                     : EngCopyBits;
                                v142 = v128 ? v128 + 24 : 0LL;
                                v143 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *, XLATEOBJ *, __m128i *, _DWORD *))v141)(
                                         v127 + 24,
                                         v142,
                                         v286,
                                         v210,
                                         &v275,
                                         v258);
                              }
                              if ( !v143 )
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
              v34 = v188;
LABEL_114:
              SURFMEM::~SURFMEM((SURFMEM *)&v243);
              if ( v35 )
              {
                v98 = *(int *)(v35 + 36);
                if ( (int)v98 >= 0 )
                {
                  _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v98);
                }
                else if ( (_DWORD)v98 == -1 )
                {
                  FreeThreadBufferWithTag(v35);
                }
              }
              PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v223);
              goto LABEL_119;
            }
LABEL_346:
            v61 = 0;
            goto LABEL_80;
          }
          *(_DWORD *)(v59 + 32) = v57;
        }
LABEL_219:
        v58 = v223;
        goto LABEL_77;
      }
LABEL_348:
      EngSetLastError(0x57u);
      v61 = 0;
      goto LABEL_80;
    }
    if ( a12 == 1 )
    {
      if ( v292 >= 2 * (unsigned __int64)v31 )
      {
        v157 = v242[0];
        Xlate = EXLATEOBJ::bMakeXlate(&v233, v242[0], v52, v48, v31, v191);
        v35 = (__int64)v233;
        if ( !Xlate )
        {
          v61 = 0;
          goto LABEL_80;
        }
        v210 = v233;
        if ( gbMultiMonMismatchColor
          && (*(_DWORD *)(v38 + 40) & 1) != 0
          && PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v223, v189, v191, 0LL, v205, v204, v203, v190, 1) )
        {
          v159 = *(_QWORD *)(v48 + 128);
          if ( !v159 )
            v159 = *(_QWORD *)(v38 + 1808);
          XEPALOBJ::vGetEntriesFrom(&v223, v52, v159, v157, v31);
          v230 = 1;
        }
        goto LABEL_79;
      }
      goto LABEL_348;
    }
    v156 = *(_DWORD *)(v48 + 96);
    if ( v156 != (_DWORD)v206 )
    {
      if ( v156 == 2 )
      {
        if ( (_DWORD)v206 == 7 )
          goto LABEL_342;
      }
      else if ( v156 == 3 && (_DWORD)v206 == 8 )
      {
        goto LABEL_342;
      }
      EngSetLastError(0x57u);
      goto LABEL_346;
    }
LABEL_342:
    v210 = xloIdent;
    goto LABEL_79;
  }
LABEL_321:
  EngSetLastError(0x57u);
  v34 = 0;
LABEL_169:
  if ( v192 )
  {
    if ( (_DWORD)v193 && (*((_DWORD *)v192 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v193) )
      {
        v146 = XDCOBJ::GetUserAttr((XDCOBJ *)&v192);
        if ( v146 )
          DC::RestoreAttributes(v192, v146);
      }
      *((_DWORD *)v192 + 11) &= ~2u;
      LODWORD(v193) = 0;
    }
    v235 = 0;
    v116 = *(_QWORD *)v192;
    HmgDecrementExclusiveReferenceCountEx(v192, HIDWORD(v193), &v235);
    if ( v235 )
      bDeleteDCInternalEx(v116, 0LL);
  }
  return v34;
}
