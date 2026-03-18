/*
 * XREFs of NtGdiBitBltInternal @ 0x1C0081610
 * Callers:
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C0051AE0 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     xxxDrawCaptionBar @ 0x1C005E728 (xxxDrawCaptionBar.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0061924 (-UT_InvertCaret@@YAXXZ.c)
 *     _DrawIconEx @ 0x1C0063888 (_DrawIconEx.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C00675D0 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006D280 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C0070824 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     NtGdiBitBlt @ 0x1C0084B40 (NtGdiBitBlt.c)
 *     BitBltSysBmp @ 0x1C0101C5C (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C0101DB0 (NtUserBitBltSysBmp.c)
 *     RecolorDeskPattern @ 0x1C012B560 (RecolorDeskPattern.c)
 *     xxxClientExtTextOutW @ 0x1C014B850 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C014BB78 (xxxClientGetTextExtentPointW.c)
 *     CreateCompatiblePublicDC @ 0x1C014BEB8 (CreateCompatiblePublicDC.c)
 *     UpdateSpriteArea @ 0x1C014D8F0 (UpdateSpriteArea.c)
 *     xxxSnapWindow @ 0x1C015294C (xxxSnapWindow.c)
 *     CreateSpb @ 0x1C0153C30 (CreateSpb.c)
 *     StopFade @ 0x1C01E84B0 (StopFade.c)
 *     xxxPrintWindow @ 0x1C01E8730 (xxxPrintWindow.c)
 *     RestoreSpb @ 0x1C021AF30 (RestoreSpb.c)
 *     xxxClientLpkDrawTextEx @ 0x1C023397C (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C0233DE4 (xxxClientPSMTextOut.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0237114 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxCompositedPaint @ 0x1C023F3F0 (xxxCompositedPaint.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023F7AC (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C024359C (-TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C024847C (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C024CA20 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     MNAnimate @ 0x1C024D454 (MNAnimate.c)
 *     xxxRealDrawMenuItem @ 0x1C024E90C (xxxRealDrawMenuItem.c)
 *     BltColor @ 0x1C0251C6C (BltColor.c)
 *     DxgkEngBltViaGDI @ 0x1C0277A40 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreStretchBltInternal @ 0x1C0019A20 (GreStretchBltInternal.c)
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C001BAD8 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C001D7A0 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     GreClientRgnUpdatedStable @ 0x1C006A32C (GreClientRgnUpdatedStable.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C0071268 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     GreClientRgnUpdated @ 0x1C00753E0 (GreClientRgnUpdated.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075A68 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0077CC0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00783D0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C007CD30 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00843B8 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     bCvtPts1 @ 0x1C0086360 (bCvtPts1.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C008A108 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C00EA320 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00EA4AC (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00FEC0C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026FA74 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C026FAB0 (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0278E94 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     SimBitBlt @ 0x1C0279018 (SimBitBlt.c)
 */

__int64 __fastcall NtGdiBitBltInternal(
        HDC a1,
        LONG left,
        LONG top,
        int a4,
        int a5,
        HDC a6,
        int a7,
        int a8,
        int a9,
        int a10,
        char a11)
{
  int v11; // ebx
  LONG v13; // r12d
  HDC v16; // rdx
  LONG v17; // r15d
  char v18; // al
  int v19; // edi
  DC *v20; // r8
  struct _DC_ATTR *UserAttr; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  DC *v24; // r8
  int v25; // ecx
  struct _DC_ATTR *v26; // rax
  DC *v27; // rdx
  DC *v28; // r9
  __int64 v29; // rbx
  int v30; // r8d
  struct MATRIX *v31; // rdx
  int v32; // ebx
  LONG x; // edx
  LONG y; // r8d
  LONG right; // r8d
  LONG bottom; // edx
  DC *v37; // rcx
  int v38; // eax
  __int64 v39; // rdx
  SURFACE **v40; // r8
  DC *v41; // r13
  __int64 v42; // r12
  __int64 v43; // rsi
  __int64 v44; // r15
  unsigned __int8 v45; // cl
  _DWORD *v46; // rcx
  DC *v47; // r10
  int v48; // r9d
  __int64 v49; // rdi
  int v50; // eax
  int v51; // eax
  __int64 v52; // rbx
  _DWORD *v53; // rcx
  int v54; // r14d
  int v55; // r11d
  __int64 v56; // rax
  int v57; // ecx
  __int64 v58; // rax
  XLATEOBJ *v59; // rdi
  __int64 v60; // r14
  __int64 v61; // rax
  int v62; // edx
  __int64 v63; // rax
  int v64; // edx
  __int64 v65; // rax
  int v66; // ecx
  int v67; // eax
  bool v68; // sf
  int v69; // esi
  int v70; // r14d
  RECTL v71; // xmm6
  LONG v72; // r11d
  LONG v73; // r9d
  int v74; // r15d
  int v75; // ebx
  int v76; // ecx
  LONG v77; // eax
  int v78; // ecx
  int v79; // eax
  int v80; // ecx
  int v81; // edx
  int v82; // r8d
  LONG v83; // esi
  LONG v84; // ecx
  LONG v85; // ebx
  int v86; // eax
  RECTL v87; // xmm6
  LONG v88; // eax
  LONG v89; // ebx
  char v90; // r15
  __int64 v91; // r9
  __int64 v92; // rbx
  int v93; // esi
  int v94; // eax
  __int64 cEntries; // rax
  unsigned int v96; // edi
  struct _DC_ATTR *v97; // rax
  __int64 v98; // rbx
  struct _DC_ATTR *v99; // rax
  __int64 v100; // rbx
  int v102; // eax
  unsigned int v103; // r13d
  unsigned int v104; // r9d
  __int64 v105; // rax
  int v106; // eax
  XLATEOBJ *XlateObject; // rax
  unsigned int v108; // eax
  __int64 v109; // r8
  __int64 v110; // r10
  unsigned int v111; // eax
  __int64 v112; // r8
  __int64 v113; // r10
  XLATEOBJ *v114; // rdx
  int v115; // r11d
  struct REGION *v116; // rax
  int v117; // eax
  int (*v118)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v119; // rdx
  __int64 v120; // r8
  int v121; // r11d
  int v122; // eax
  __int64 v123; // rdx
  char *v124; // rbx
  int v125; // ecx
  _DWORD *v126; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v128; // rax
  int v129; // ebx
  unsigned int CurrentProcessId; // eax
  __int64 v131; // rbx
  unsigned int v132; // eax
  LONG v133; // eax
  LONG v134; // eax
  __int64 v135; // rax
  __int64 v136; // rax
  unsigned int v137; // eax
  _DWORD *v138; // rax
  float v139; // xmm1_4
  float v140; // xmm3_4
  _OWORD *v141; // rax
  __int64 v142; // rax
  __int64 v143; // rax
  int v144; // edi
  POINTL *v145; // [rsp+38h] [rbp-D0h]
  int v146; // [rsp+78h] [rbp-90h]
  int v147; // [rsp+78h] [rbp-90h]
  char v148; // [rsp+7Ch] [rbp-8Ch]
  DC *v149; // [rsp+80h] [rbp-88h] BYREF
  __int64 v150; // [rsp+88h] [rbp-80h]
  DC *v151; // [rsp+90h] [rbp-78h] BYREF
  __int64 v152; // [rsp+98h] [rbp-70h]
  XLATEOBJ *v153; // [rsp+A0h] [rbp-68h]
  XLATEOBJ *v154; // [rsp+A8h] [rbp-60h] BYREF
  int v155; // [rsp+B0h] [rbp-58h]
  int v156; // [rsp+B4h] [rbp-54h]
  signed int v157; // [rsp+B8h] [rbp-50h]
  HDC v158; // [rsp+C0h] [rbp-48h]
  int v159; // [rsp+C8h] [rbp-40h]
  int v160; // [rsp+CCh] [rbp-3Ch]
  HDC v161; // [rsp+D0h] [rbp-38h]
  unsigned __int64 v162; // [rsp+D8h] [rbp-30h] BYREF
  LONG v163; // [rsp+E0h] [rbp-28h]
  LONG v164; // [rsp+E4h] [rbp-24h]
  int v165; // [rsp+E8h] [rbp-20h]
  unsigned int v166; // [rsp+ECh] [rbp-1Ch]
  int v167; // [rsp+F0h] [rbp-18h] BYREF
  int v168; // [rsp+F4h] [rbp-14h] BYREF
  __int64 v169; // [rsp+F8h] [rbp-10h]
  unsigned __int64 v170; // [rsp+100h] [rbp-8h] BYREF
  int v171; // [rsp+108h] [rbp+0h]
  int v172; // [rsp+10Ch] [rbp+4h]
  float v173[2]; // [rsp+110h] [rbp+8h] BYREF
  float v174[2]; // [rsp+118h] [rbp+10h] BYREF
  char *v175; // [rsp+120h] [rbp+18h] BYREF
  int v176; // [rsp+128h] [rbp+20h]
  int v177; // [rsp+12Ch] [rbp+24h]
  struct MATRIX *v178; // [rsp+130h] [rbp+28h] BYREF
  int v179; // [rsp+138h] [rbp+30h]
  int v180; // [rsp+13Ch] [rbp+34h]
  RECTL v181; // [rsp+148h] [rbp+40h]
  __int64 v182; // [rsp+158h] [rbp+50h] BYREF
  __int64 v183; // [rsp+160h] [rbp+58h] BYREF
  __int64 v184; // [rsp+168h] [rbp+60h] BYREF
  __int64 v185; // [rsp+170h] [rbp+68h] BYREF
  __int64 v186; // [rsp+178h] [rbp+70h] BYREF
  __int64 v187; // [rsp+180h] [rbp+78h] BYREF
  __int128 v188; // [rsp+188h] [rbp+80h]
  _OWORD v189[2]; // [rsp+198h] [rbp+90h] BYREF
  __int64 v190; // [rsp+1B8h] [rbp+B0h]
  __int64 v191; // [rsp+1C0h] [rbp+B8h]
  char v192; // [rsp+1C8h] [rbp+C0h]
  int v193; // [rsp+1CCh] [rbp+C4h]
  __int64 v194; // [rsp+1D0h] [rbp+C8h]
  __int64 v195; // [rsp+1D8h] [rbp+D0h]
  int v196; // [rsp+1E0h] [rbp+D8h]
  __int64 v197; // [rsp+1E8h] [rbp+E0h]
  __int64 v198; // [rsp+1F0h] [rbp+E8h]
  __int16 v199; // [rsp+1F8h] [rbp+F0h]
  __int64 v200; // [rsp+200h] [rbp+F8h]
  __int64 v201; // [rsp+208h] [rbp+100h]
  __int16 v202; // [rsp+210h] [rbp+108h]
  __int64 v203; // [rsp+218h] [rbp+110h]
  __int64 v204; // [rsp+220h] [rbp+118h]
  __int64 v205; // [rsp+228h] [rbp+120h]
  __int64 v206; // [rsp+230h] [rbp+128h]
  __int128 v207; // [rsp+238h] [rbp+130h]
  __int64 v208; // [rsp+248h] [rbp+140h]
  RECTL v209; // [rsp+258h] [rbp+150h] BYREF
  RECTL v210; // [rsp+268h] [rbp+160h] BYREF
  POINTL v211[2]; // [rsp+278h] [rbp+170h] BYREF
  RECTL v212; // [rsp+288h] [rbp+180h]
  RECTL v213; // [rsp+298h] [rbp+190h] BYREF
  RECTL v214; // [rsp+2A8h] [rbp+1A0h] BYREF

  v11 = a5;
  v13 = a8;
  v16 = a6;
  v17 = a7;
  v158 = a6;
  v161 = a1;
  LODWORD(v153) = a5;
  if ( (a11 & 4) != 0
    && (v148 = 1,
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread()),
        a1 = v161,
        v16 = v158,
        ThreadWin32Thread) )
  {
    *(_DWORD *)(ThreadWin32Thread + 328) |= 0x10u;
  }
  else
  {
    v148 = 0;
  }
  v146 = 0;
  v18 = 0;
  if ( (a9 & 0x20000000) != 0 )
    v18 = 2;
  if ( (a9 & 0x40000000) != 0 )
  {
    v96 = GreStretchBltInternal(a1, left, top, a4, a5, v16, a7, a8, a4, a5, a9 & 0xDFFFFFFF, a10, v18);
    goto LABEL_168;
  }
  v157 = a9 & 0xDFFFFFFF;
  LOBYTE(v16) = 1;
  v19 = a9 & 0x5FFFFFFF;
  v166 = 0;
  v150 = 0LL;
  v149 = (DC *)HmgLockEx(a1, v16, 0LL);
  v20 = v149;
  if ( !v149 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_241;
  }
  if ( (*((_DWORD *)v149 + 11) & 2) == 0 )
  {
    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v149);
    if ( UserAttr && !DC::SaveAttributes(v149, UserAttr) )
    {
      _InterlockedDecrement((volatile signed __int32 *)v149 + 3);
      v20 = 0LL;
      v149 = 0LL;
      goto LABEL_309;
    }
    *((_DWORD *)v149 + 11) |= 2u;
    v20 = v149;
    LODWORD(v150) = 1;
  }
  if ( (*((_DWORD *)v20 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v20);
LABEL_241:
    v20 = v149;
  }
  if ( v20 && (*((_DWORD *)v20 + 9) & 0x10000) == 0 )
  {
    v22 = BYTE1(v19);
    if ( ((gajRop3[(unsigned __int8)a9] | gajRop3[BYTE1(a9)]) & 2) != 0 && v19 != 16711778 && v19 != 66 )
      bSpDwmValidateSurface((struct XDCOBJ *)&v149, left, top, a4, a5);
    v152 = 0LL;
    LOBYTE(v22) = 1;
    v23 = HmgLockEx(v158, v22, 0LL);
    v151 = (DC *)v23;
    v24 = (DC *)v23;
    if ( v23 )
    {
      v25 = HIDWORD(v152);
      if ( HIDWORD(v152) )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v23 + 48) + 40LL) & 0x8000) == 0
          || (v129 = *(_DWORD *)(v23 + 2096),
              CurrentProcessId = (unsigned int)PsGetCurrentProcessId(),
              v24 = v151,
              v129 != (CurrentProcessId & 0xFFFFFFFC)) )
        {
          _InterlockedDecrement((volatile signed __int32 *)v24 + 3);
          v151 = 0LL;
          v96 = 0;
          goto LABEL_160;
        }
        v25 = HIDWORD(v152);
        v11 = (int)v153;
      }
      if ( (*((_DWORD *)v24 + 11) & 2) == 0 )
      {
        if ( !v25 )
        {
          v26 = XDCOBJ::GetUserAttr((XDCOBJ *)&v151);
          if ( v26 && !DC::SaveAttributes(v151, v26) )
          {
            _InterlockedDecrement((volatile signed __int32 *)v151 + 3);
            v151 = 0LL;
            v96 = 0;
            goto LABEL_160;
          }
          v24 = v151;
        }
        *((_DWORD *)v24 + 11) |= 2u;
        v24 = v151;
        LODWORD(v152) = 1;
      }
      if ( (*((_DWORD *)v24 + 130) & 4) == 0 )
      {
LABEL_24:
        if ( v24 )
        {
          bSpDwmValidateSurface((struct XDCOBJ *)&v151, a7, a8, a4, v11);
          v27 = v151;
          v28 = v149;
          v29 = *((_QWORD *)v149 + 122);
          v30 = *(_DWORD *)(v29 + 108);
          if ( (((unsigned __int8)v30 ^ *(_BYTE *)(*((_QWORD *)v151 + 122) + 108LL)) & 7) != 0
            && (v157 < 0 && (v30 & 1) != 0 || (v30 & 9) == 9) )
          {
            v131 = *(_QWORD *)(v29 + 308);
            v132 = DC::dwSetLayout(v149, -1, 0);
            v28 = v149;
            v27 = v151;
            left = v131 - left - a4;
            v166 = v132;
            v157 = 0x80000000;
          }
          else
          {
            v157 = 0;
          }
          v176 = *(_DWORD *)(*((_QWORD *)v28 + 122) + 208LL);
          v177 = *(_DWORD *)(*((_QWORD *)v28 + 122) + 108LL) & 1;
          if ( (*(_DWORD *)(*((_QWORD *)v28 + 122) + 340LL) & 0x1E000) != 0 )
          {
            EXFORMOBJ::vInit((EXFORMOBJ *)&v175, (struct XDCOBJ *)&v149, 0x204u, 0);
            v27 = v151;
          }
          else
          {
            v175 = (char *)v28 + 320;
          }
          v179 = *(_DWORD *)(*((_QWORD *)v27 + 122) + 208LL);
          v180 = *(_DWORD *)(*((_QWORD *)v27 + 122) + 108LL) & 1;
          if ( (*(_DWORD *)(*((_QWORD *)v27 + 122) + 340LL) & 0x1E000) != 0 )
          {
            EXFORMOBJ::vInit((EXFORMOBJ *)&v178, (struct XDCOBJ *)&v151, 0x204u, 0);
            v31 = v178;
          }
          else
          {
            v31 = (DC *)((char *)v27 + 320);
            v178 = v31;
          }
          if ( (*((_DWORD *)v175 + 8) & 1) == 0 || !EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v175, v31) )
          {
            v96 = GreStretchBltInternal(v161, left, top, a4, (int)v153, v158, a7, a8, a4, (int)v153, v19, a10, 0);
            goto LABEL_150;
          }
          v32 = (int)v153;
          x = a7 + a4;
          v211[0].x = a7;
          v211[0].y = a8;
          y = a8 + (_DWORD)v153;
          v211[1].x = a7 + a4;
          v211[1].y = a8 + (_DWORD)v153;
          if ( (*((_BYTE *)v178 + 32) & 0x43) != 0x43 )
          {
            bCvtPts1(v178, v211, 2LL);
            y = v211[1].y;
            x = v211[1].x;
            v13 = v211[0].y;
            v17 = v211[0].x;
          }
          if ( v180 )
          {
            ++v17;
            ++x;
            v211[0].x = v17;
            v211[1].x = x;
          }
          if ( v17 > x )
          {
            v211[0].x = x;
            v211[1].x = v17;
          }
          if ( v13 > y )
          {
            v211[0].y = y;
            v211[1].y = v13;
          }
          right = left + a4;
          bottom = v32 + top;
          v210.left = left;
          v210.top = top;
          v210.right = left + a4;
          v210.bottom = v32 + top;
          if ( (v175[32] & 0x43) != 0x43 )
          {
            bCvtPts1(v175, &v210, 2LL);
            bottom = v210.bottom;
            right = v210.right;
            top = v210.top;
            left = v210.left;
          }
          if ( v177 )
          {
            ++left;
            ++right;
            v210.left = left;
            v210.right = right;
          }
          if ( left > right )
          {
            v133 = left;
            v210.left = right;
            left = right;
            v210.right = v133;
            right = v133;
          }
          if ( top > bottom )
          {
            v134 = top;
            v210.top = bottom;
            top = bottom;
            v210.bottom = v134;
            bottom = v134;
          }
          if ( left == right || top == bottom )
          {
            v96 = 1;
            goto LABEL_150;
          }
          v37 = v149;
          v38 = *((_DWORD *)v149 + 9);
          if ( (v38 & 0xE0) != 0 )
          {
            if ( (v38 & 0x20) != 0 )
            {
              ERECTL::operator|=((_DWORD *)v149 + 266, &v210);
              v37 = v149;
            }
            if ( (*((_DWORD *)v37 + 9) & 0x80u) != 0 )
              ERECTL::operator|=((_DWORD *)v37 + 274, &v210);
          }
          v199 = 256;
          v191 = 0LL;
          v192 = 0;
          v193 = 0;
          v198 = 0LL;
          v201 = 0LL;
          memset(v189, 0, sizeof(v189));
          v190 = 0LL;
          v196 = 0;
          v194 = 0LL;
          v195 = 0LL;
          v203 = 0LL;
          v206 = 0LL;
          v204 = 0LL;
          v205 = 0LL;
          v208 = 0LL;
          v207 = 0LL;
          v197 = 0LL;
          v200 = 0LL;
          v202 = 256;
          if ( !(unsigned int)DEVLOCKBLTOBJ::bLock(
                                (DEVLOCKBLTOBJ *)v189,
                                (struct XDCOBJ *)&v149,
                                (struct XDCOBJ *)&v151) )
          {
            v144 = XDCOBJ::bFullScreen((XDCOBJ *)&v151);
            v96 = XDCOBJ::bFullScreen((XDCOBJ *)&v149) | v144;
            goto LABEL_149;
          }
          v41 = v149;
          v42 = *((_QWORD *)v149 + 62);
          if ( !v42 )
            goto LABEL_219;
          v43 = *(_QWORD *)(v42 + 128);
          v44 = *((_QWORD *)v149 + 11);
          v45 = (a9 & 0x5FFFFFFFu) >> 16;
          v165 = (v45 << 8) | v45;
          if ( ((v45 ^ (unsigned __int8)(16 * v45)) & 0xF0) != 0 )
          {
            v123 = *((_QWORD *)v149 + 122);
            v124 = (char *)v149 + 1184;
            v161 = (HDC)((char *)v149 + 1184);
            if ( (*(_DWORD *)(v123 + 152) & 0x1000) != 0 )
            {
              GreDCSelectBrush(v149, *(_QWORD *)(v123 + 160));
              v41 = v149;
            }
            v39 = *((_QWORD *)v41 + 122);
            v125 = *(_DWORD *)(v39 + 152);
            if ( (v125 & 1) != 0 || (*((_DWORD *)v41 + 79) & 1) != 0 )
            {
              *(_DWORD *)(v39 + 152) = v125 & 0xFFFFFFFE;
              *((_DWORD *)v149 + 79) &= ~1u;
              EBRUSHOBJ::vInitBrush(v124, v149, *((_QWORD *)v149 + 17), v44, v43, v42, 1);
              v41 = v149;
            }
          }
          else
          {
            v161 = 0LL;
          }
          v46 = (_DWORD *)((char *)v41 + 1024);
          v47 = v151;
          if ( (*((_DWORD *)v41 + 10) & 1) == 0 )
            v46 = (_DWORD *)((char *)v41 + 1016);
          v48 = *v46 + v210.left;
          v210.left = v48;
          v210.right += *v46;
          v40 = (SURFACE **)(unsigned int)(v46[1] + v210.top);
          v210.top += v46[1];
          v210.bottom += v46[1];
          v49 = *((_QWORD *)v151 + 62);
          v169 = v49;
          if ( !v49 )
            goto LABEL_219;
          if ( (a11 & 2) != 0 )
          {
LABEL_67:
            v52 = *(_QWORD *)(v49 + 128);
            v53 = (_DWORD *)((char *)v47 + 1024);
            if ( (*((_DWORD *)v47 + 10) & 1) == 0 )
              v53 = (_DWORD *)((char *)v47 + 1016);
            v54 = (_DWORD)v40 - *((_DWORD *)v47 + 2 * (*((_DWORD *)v47 + 10) & 1) + 255) - v211[0].y;
            LODWORD(v153) = v48 - *v53 - v211[0].x;
            v55 = 0;
            v160 = v54;
            v39 = 0LL;
            v56 = *(_QWORD *)(v49 + 48);
            if ( v56 && v49 == *(_QWORD *)(v56 + 2552) && (*(_DWORD *)(v56 + 40) & 0x20000) != 0 )
            {
              v55 = *(_DWORD *)(v56 + 2584);
              v39 = *(unsigned int *)(v56 + 2588);
            }
            if ( (int)v153 + v55 > v48 )
            {
              v48 = (_DWORD)v153 + v55;
              v210.left = (_DWORD)v153 + v55;
            }
            if ( v54 + (int)v39 > (int)v40 )
            {
              v40 = (SURFACE **)(unsigned int)(v54 + v39);
              v210.top = v54 + v39;
            }
            if ( v55 + (int)v153 + *(_DWORD *)(v49 + 56) < v210.right )
              v210.right = v55 + (_DWORD)v153 + *(_DWORD *)(v49 + 56);
            if ( (int)v39 + v54 + *(_DWORD *)(v49 + 60) < v210.bottom )
              v210.bottom = v39 + v54 + *(_DWORD *)(v49 + 60);
            if ( v48 < v210.right && (int)v40 < v210.bottom )
            {
              v39 = 0LL;
              v158 = 0LL;
              if ( v48 >= *((_DWORD *)v41 + 250)
                && v210.right <= *((_DWORD *)v41 + 252)
                && (int)v40 >= *((_DWORD *)v41 + 251)
                && v210.bottom <= *((_DWORD *)v41 + 253) )
              {
LABEL_85:
                if ( (*((_DWORD *)v41 + 9) & 0xE0) != 0 )
                {
                  v209 = v210;
                  XDCOBJ::vAccumulateTight((XDCOBJ *)&v149, (struct ECLIPOBJ *)v39, (struct ERECTL *)&v209);
                  LODWORD(v40) = v210.top;
                  v48 = v210.left;
                  v47 = v151;
                  v41 = v149;
                }
                v57 = (int)v153;
                v211[0].y = (_DWORD)v40 - v54;
                v40 = 0LL;
                v211[0].x = v48 - (_DWORD)v153;
                v58 = *((_QWORD *)v41 + 62);
                v59 = 0LL;
                v154 = 0LL;
                if ( *((_QWORD *)v47 + 62) == v58 )
                {
                  v153 = 0LL;
                  v146 = 1;
                  goto LABEL_104;
                }
                v60 = *((_QWORD *)v47 + 11);
                v147 = a10;
                if ( a10 == -1 )
                  v147 = *(_DWORD *)(*((_QWORD *)v47 + 122) + 180LL);
                v61 = *((_QWORD *)v41 + 122);
                v62 = *(_DWORD *)(v61 + 176);
                v156 = *(_DWORD *)(v61 + 184);
                v159 = *((_DWORD *)v41 + 30);
                v155 = v62;
                if ( !v52
                  && (!v43
                   || (*(_DWORD *)(v43 + 24) & 0x800) != 0
                   && ((v135 = *(_QWORD *)(v44 + 80)) == 0 || v135 == *(_QWORD *)(v44 + 72)))
                  || !v43
                  && (*(_DWORD *)(v52 + 24) & 0x800) != 0
                  && ((v136 = *(_QWORD *)(v44 + 80)) == 0 || v136 == *(_QWORD *)(v44 + 72)) )
                {
                  v59 = xloIdent;
                  v39 = 1LL;
                  v154 = xloIdent;
LABEL_101:
                  v67 = *((_DWORD *)v41 + 9);
                  v146 = v39;
                  v153 = v59;
                  if ( (v67 & 1) == 0 )
                  {
                    v211[1].x = v210.right - v57;
                    v211[1].y = v210.bottom - v160;
                  }
                  if ( !(_DWORD)v39 )
                    goto LABEL_144;
LABEL_104:
                  v68 = *(int *)(v42 + 112) < 0;
                  v69 = 0;
                  v70 = 0;
                  v71 = v210;
                  v181 = v210;
                  v213 = v210;
                  v188 = *(_OWORD *)&v211[0].x;
                  v214 = *(RECTL *)&v211[0].x;
                  v170 = 0LL;
                  if ( v68 )
                  {
                    v126 = *(_DWORD **)(v42 + 48);
                    if ( v126 )
                    {
                      if ( (v126[10] & 0x20000) != 0 )
                      {
                        v69 = v126[646];
                        v70 = v126[647];
                        v170 = __PAIR64__(v70, v69);
                      }
                    }
                  }
                  v72 = 0;
                  v73 = 0;
                  v74 = v69 + *(_DWORD *)(v42 + 56);
                  v75 = v70 + *(_DWORD *)(v42 + 60);
                  v171 = v74;
                  v68 = *(int *)(v169 + 112) < 0;
                  v172 = v75;
                  v162 = 0LL;
                  if ( v68 )
                  {
                    v138 = *(_DWORD **)(v169 + 48);
                    if ( v138 )
                    {
                      if ( (v138[10] & 0x20000) != 0 )
                      {
                        v72 = v138[646];
                        v73 = v138[647];
                        v162 = __PAIR64__(v73, v72);
                      }
                    }
                  }
                  v76 = *((_DWORD *)v41 + 130);
                  v163 = v72 + *(_DWORD *)(v169 + 56);
                  v77 = v73 + *(_DWORD *)(v169 + 60);
                  v159 = v76;
                  v164 = v77;
                  v160 = v76 & 1;
                  if ( (v76 & 1) != 0 && (v76 & 2) == 0 )
                  {
                    v139 = 1.0 / *((float *)v41 + 132);
                    v173[0] = 1.0 / *((float *)v41 + 131);
                    v173[1] = v139;
                    ERECTL::vScale((ERECTL *)&v170, (const struct POINTFL *)v173);
                    ERECTL::vScale((ERECTL *)&v213, (const struct POINTFL *)v173);
                    v47 = v151;
                    v73 = HIDWORD(v162);
                    v72 = v162;
                    v75 = v172;
                    v74 = v171;
                    v70 = HIDWORD(v170);
                    v69 = v170;
                    v71 = v213;
                  }
                  v78 = *((_DWORD *)v47 + 130);
                  v155 = v78;
                  v156 = v78 & 1;
                  if ( (v78 & 1) != 0 && (v78 & 2) == 0 )
                  {
                    v140 = 1.0 / *((float *)v47 + 132);
                    v174[0] = 1.0 / *((float *)v47 + 131);
                    v174[1] = v140;
                    ERECTL::vScale((ERECTL *)&v162, (const struct POINTFL *)v174);
                    ERECTL::vScale((ERECTL *)&v214, (const struct POINTFL *)v174);
                    v47 = v151;
                    v73 = HIDWORD(v162);
                    v72 = v162;
                  }
                  v79 = _mm_cvtsi128_si32((__m128i)v71);
                  v80 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v71, 4));
                  v81 = v214.left - v79;
                  v212 = v71;
                  v82 = v214.top - v80;
                  if ( v69 <= v79 )
                    v69 = v212.left;
                  if ( v70 <= v80 )
                    v70 = v212.top;
                  if ( v74 >= v213.right )
                    v74 = v212.right;
                  if ( v75 >= v213.bottom )
                    v75 = v212.bottom;
                  if ( v74 < v69 )
                  {
                    v69 = v74;
                  }
                  else if ( v75 < v70 )
                  {
                    v70 = v75;
                  }
                  v83 = v81 + v69;
                  v84 = v81 + v74;
                  v85 = v82 + v75;
                  v212.left = v83;
                  v212.right = v81 + v74;
                  v86 = v82 + v70;
                  v212.top = v82 + v70;
                  v212.bottom = v85;
                  if ( v72 > v83 )
                  {
                    v83 = v72;
                    v212.left = v72;
                  }
                  if ( v73 > v86 )
                  {
                    v86 = v73;
                    v212.top = v73;
                  }
                  if ( v163 < v84 )
                  {
                    v84 = v163;
                    v212.right = v163;
                  }
                  if ( v164 < v85 )
                  {
                    v85 = v164;
                    v212.bottom = v164;
                  }
                  if ( v84 < v83 )
                  {
                    v83 = v84;
                    v212.left = v84;
                  }
                  else if ( v85 < v86 )
                  {
                    v86 = v85;
                    v212.top = v85;
                  }
                  v87 = v212;
                  v214 = v212;
                  v88 = v86 - v82;
                  v213.left = v83 - v81;
                  v89 = v85 - v82;
                  v213.top = v88;
                  v213.right = v84 - v81;
                  v213.bottom = v89;
                  if ( v83 - v81 >= v84 - v81 || v88 >= v89 )
                  {
                    v90 = 0;
                  }
                  else
                  {
                    if ( v160 && (v159 & 2) == 0 )
                    {
                      v185 = *(_QWORD *)((char *)v41 + 524);
                      ERECTL::vScale((ERECTL *)&v213, (const struct POINTFL *)&v185);
                      v47 = v151;
                    }
                    if ( v156 && (v155 & 2) == 0 )
                    {
                      v186 = *(_QWORD *)((char *)v47 + 524);
                      ERECTL::vScale((ERECTL *)&v214, (const struct POINTFL *)&v186);
                      v87 = v214;
                    }
                    v90 = 1;
                    v210 = v213;
                    *(RECTL *)&v211[0].x = v87;
                    ++*(_DWORD *)(v42 + 92);
                    v41 = v149;
                    v47 = v151;
                  }
                  v39 = *((_QWORD *)v41 + 6);
                  v40 = (SURFACE **)*((_QWORD *)v47 + 6);
                  if ( (SURFACE **)v39 == v40
                    || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)&v149) && *(SURFACE ***)(v39 + 3520) == v40 )
                  {
                    v91 = v169;
                  }
                  else
                  {
                    v91 = v169;
                    if ( *(_WORD *)(v169 + 100) || *(_QWORD *)(v169 + 24) || (*(_DWORD *)(v39 + 40) & 0x80u) != 0 )
                    {
                      if ( v90 )
                      {
                        v141 = v189;
                        if ( (*(_DWORD *)(*(_QWORD *)(v42 + 48) + 40LL) & 0x80u) == 0 )
                          v141 = 0LL;
                        v122 = SimBitBlt(
                                 (SURFOBJ *)(v42 + 24),
                                 (SURFOBJ *)(v169 + 24),
                                 v153,
                                 &v210,
                                 v211,
                                 0LL,
                                 (__int64)v161,
                                 (POINTL *)v41 + 147,
                                 v165,
                                 (__int64)v141);
                        goto LABEL_218;
                      }
                      goto LABEL_144;
                    }
                  }
                  if ( v165 == 52428 )
                  {
                    v92 = *(_QWORD *)(v42 + 48);
                    v93 = a11 & 1;
                    if ( v93 )
                    {
                      EtwWindowRendering(
                        *((_QWORD *)v41 + 58),
                        *((_QWORD *)v41 + 59),
                        **((_QWORD **)v41 + 62),
                        (unsigned int)v181.left,
                        v181.top,
                        v181.right,
                        v181.bottom,
                        *((_QWORD *)v151 + 58),
                        *((_QWORD *)v151 + 59),
                        **((_QWORD **)v151 + 62),
                        v188,
                        DWORD1(v188),
                        v188 + abs32(v181.right - v181.bottom),
                        DWORD1(v188) + abs32(v181.bottom - v181.top));
                      *(_WORD *)(v42 + 102) |= 0x40u;
                      v142 = W32GetThreadWin32Thread(KeGetCurrentThread());
                      if ( v142 )
                        *(_DWORD *)(v142 + 328) &= ~1u;
                      GreClientRgnUpdated(0);
                      GreClientRgnUpdatedStable();
                      v91 = v169;
                      v59 = v154;
                    }
                    if ( v90 )
                    {
                      if ( (*(_DWORD *)(v42 + 112) & 0x400) != 0 )
                        v94 = (*(__int64 (__fastcall **)(__int64, __int64, HDC, XLATEOBJ *, RECTL *, POINTL *))(v92 + 2840))(
                                v42 + 24,
                                v91 + 24,
                                v158,
                                v153,
                                &v210,
                                v211);
                      else
                        v94 = ((__int64 (__fastcall *)(__int64, __int64, HDC, XLATEOBJ *, RECTL *, POINTL *))EngCopyBits)(
                                v42 + 24,
                                v91 + 24,
                                v158,
                                v153,
                                &v210,
                                v211);
                      v146 = v94;
                    }
                    if ( v93 )
                    {
                      *(_WORD *)(v42 + 102) &= ~0x40u;
                      v143 = W32GetThreadWin32Thread(KeGetCurrentThread());
                      v59 = v154;
                      if ( v143 )
                        *(_DWORD *)(v143 + 328) |= 1u;
                    }
                    goto LABEL_144;
                  }
                  if ( v90 )
                  {
                    v118 = SURFACE::pfnBitBlt((SURFACE *)v42);
                    v122 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, HDC, XLATEOBJ *, RECTL *, POINTL *, _QWORD, HDC, __int64, int))v118)(
                             v42 + 24,
                             v119,
                             0LL,
                             v158,
                             v153,
                             &v210,
                             v211,
                             0LL,
                             v161,
                             v120,
                             v121);
LABEL_218:
                    v146 = v122;
                  }
LABEL_144:
                  if ( v59 )
                  {
                    cEntries = (int)v59[1].cEntries;
                    if ( (int)cEntries >= 0 )
                    {
                      _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
                    }
                    else if ( (_DWORD)cEntries == -1 )
                    {
                      FreeThreadBufferWithTag(v59);
                    }
                  }
                  goto LABEL_148;
                }
                if ( v52 && v43 )
                {
                  v63 = *(_QWORD *)(v52 + 120);
                  if ( v63 == v52 )
                    v64 = *(_DWORD *)(v52 + 32);
                  else
                    v64 = *(_DWORD *)(v63 + 32);
                  v65 = *(_QWORD *)(v43 + 120);
                  if ( v65 == v43 )
                    v66 = *(_DWORD *)(v43 + 32);
                  else
                    v66 = *(_DWORD *)(v65 + 32);
                  if ( v64 == v66 )
                  {
                    v59 = xloIdent;
                    v39 = 1LL;
                    v154 = xloIdent;
LABEL_100:
                    v57 = (int)v153;
                    goto LABEL_101;
                  }
                  v103 = *(_DWORD *)(v52 + 56);
                  v182 = v44;
                  v183 = v60;
                  v187 = v43;
                  v184 = ghsemPalette;
                  GreAcquireSemaphore(ghsemPalette);
                  v104 = 0;
                  v105 = *(_QWORD *)(v52 + 120);
                  for ( *(_QWORD *)&v212.left = v105; ; v105 = *(_QWORD *)&v212.left )
                  {
                    if ( v105 == v52 )
                      v106 = *(_DWORD *)(v52 + 32);
                    else
                      v106 = *(_DWORD *)(v105 + 32);
                    if ( *((_DWORD *)&xlateTable + 8 * v103 + 4) == v106 )
                    {
                      v108 = XEPALOBJ::ulTime((XEPALOBJ *)&v187);
                      if ( *(_DWORD *)(v109 + v110 + 20) == v108 )
                      {
                        v111 = XEPALOBJ::ulTime((XEPALOBJ *)&v182);
                        if ( *(_DWORD *)(v112 + v113 + 28) == v111 )
                        {
                          v114 = *(XLATEOBJ **)(v112 + v113 + 8);
                          v154 = v114;
                          if ( (v114[3].flXlate & 0x6000) == 0 )
                          {
                            if ( (v115 = v114[3].flXlate & 0x100, (v114->flXlate & 4) == 0) && !v115
                              || (v114->flXlate & 4) != 0
                              && v147 == v114[1].iUniq
                              && (v137 = XEPALOBJ::ulTime((XEPALOBJ *)&v183), *(_DWORD *)(v112 + v113 + 24) == v137)
                              || v115 && v156 == v114[1].flXlate && v155 == *(_DWORD *)&v114[1].iSrcType )
                            {
                              _InterlockedIncrement((volatile signed __int32 *)(v112 + v113));
                              *(_DWORD *)(v52 + 56) = v103;
                              SEMOBJ::vUnlock((SEMOBJ *)&v184);
                              v47 = v151;
                              v39 = 1LL;
                              v59 = v154;
                              v40 = 0LL;
                              v41 = v149;
                              goto LABEL_100;
                            }
                          }
                        }
                      }
                    }
                    ++v104;
                    v103 = ((_BYTE)v103 + 1) & 7;
                    if ( v104 >= 8 )
                      break;
                  }
                  if ( ghsemPalette )
                  {
                    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                    GreReleaseSemaphoreInternal(ghsemPalette);
                  }
                }
                LODWORD(v145) = v156;
                XlateObject = (XLATEOBJ *)CreateXlateObject(0LL, v159, v52, v43, v60, v44, v145, v155, v147, 0);
                v154 = XlateObject;
                v59 = XlateObject;
                if ( XlateObject )
                {
                  if ( v52 && v43 && (XlateObject[3].flXlate & 0x200) == 0 )
                    EXLATEOBJ::vAddToCache(&v154, v52, v43, v60, v44);
                  v39 = 1LL;
                  v40 = 0LL;
                }
                else
                {
                  v40 = 0LL;
                  v39 = 0LL;
                }
                v41 = v149;
                v47 = v151;
                goto LABEL_100;
              }
              v158 = (HDC)((char *)v41 + 1752);
              v116 = XDCOBJ::prgnEffRao(&v149);
              XCLIPOBJ::vSetup((DC *)((char *)v41 + 1752), v116, (struct ERECTL *)&v210, 2);
              v210 = *(RECTL *)((char *)v41 + 1756);
              if ( !ERECTL::bEmpty((ERECTL *)&v210) )
              {
                v41 = v149;
                LODWORD(v40) = v210.top;
                v48 = v210.left;
                v47 = v151;
                goto LABEL_85;
              }
            }
LABEL_219:
            v96 = 1;
            goto LABEL_149;
          }
          if ( *(_DWORD *)(v49 + 656) )
          {
            if ( ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v49 + 656) )
              goto LABEL_259;
            v41 = v149;
            v40 = (SURFACE **)(unsigned int)v210.top;
            v48 = v210.left;
            v47 = v151;
          }
          v50 = *(_DWORD *)(v49 + 112);
          if ( (v50 & 0x800) != 0 )
          {
            v117 = UserSurfaceAccessCheck(*(_QWORD *)(v49 + 648));
          }
          else
          {
            if ( (v50 & 0x10000000) == 0 )
              goto LABEL_63;
            v117 = UserScreenAccessCheck(512LL, v39);
          }
          if ( !v117 )
            goto LABEL_259;
          v41 = v149;
          v40 = (SURFACE **)(unsigned int)v210.top;
          v48 = v210.left;
          v47 = v151;
LABEL_63:
          if ( ((*(_DWORD *)(v42 + 116) & 8) != 0 || *(_QWORD *)(v42 + 224)) && (*(_WORD *)(v42 + 102) & 0x200) != 0 )
            goto LABEL_259;
          v51 = *(_DWORD *)(v42 + 112);
          if ( (v51 & 0x800) != 0 )
          {
            v102 = UserSurfaceAccessCheck(*(_QWORD *)(v42 + 648));
          }
          else
          {
            if ( (v51 & 0x10000000) == 0 )
              goto LABEL_67;
            v102 = UserScreenAccessCheck(512LL, v39);
          }
          if ( v102 )
          {
            v41 = v149;
            v40 = (SURFACE **)(unsigned int)v210.top;
            v48 = v210.left;
            v47 = v151;
            goto LABEL_67;
          }
LABEL_259:
          EngSetLastError(6u);
LABEL_148:
          v96 = v146;
LABEL_149:
          DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v189, v39, v40);
LABEL_150:
          if ( v157 )
            DC::dwSetLayout(v149, -1, v166);
          if ( (_DWORD)v152 && (*((_DWORD *)v151 + 11) & 2) != 0 )
          {
            if ( !HIDWORD(v152) )
            {
              v97 = XDCOBJ::GetUserAttr((XDCOBJ *)&v151);
              if ( v97 )
                DC::RestoreAttributes(v151, v97);
            }
            *((_DWORD *)v151 + 11) &= ~2u;
            LODWORD(v152) = 0;
          }
          v167 = 0;
          v98 = *(_QWORD *)v151;
          HmgDecrementExclusiveReferenceCountEx(v151, HIDWORD(v152), &v167);
          if ( v167 )
            bDeleteDCInternalEx(v98, 0LL);
          goto LABEL_160;
        }
        v96 = 0;
LABEL_160:
        if ( (_DWORD)v150 && (*((_DWORD *)v149 + 11) & 2) != 0 )
        {
          if ( !HIDWORD(v150) )
          {
            v99 = XDCOBJ::GetUserAttr((XDCOBJ *)&v149);
            if ( v99 )
              DC::RestoreAttributes(v149, v99);
          }
          *((_DWORD *)v149 + 11) &= ~2u;
          LODWORD(v150) = 0;
        }
        v168 = 0;
        v100 = *(_QWORD *)v149;
        HmgDecrementExclusiveReferenceCountEx(v149, HIDWORD(v150), &v168);
        if ( v168 )
          bDeleteDCInternalEx(v100, 0LL);
        goto LABEL_168;
      }
      DC::vMarkTransformDirty(v24);
    }
    else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
    {
      PsGetWin32KFilterSet();
    }
    v24 = v151;
    goto LABEL_24;
  }
LABEL_309:
  if ( v20 )
    XDCOBJ::vUnlockFast((XDCOBJ *)&v149);
  v96 = 0;
  v149 = 0LL;
LABEL_168:
  if ( v148 )
  {
    v128 = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_DWORD *)(v128 + 328) &= ~0x10u;
  }
  return v96;
}
