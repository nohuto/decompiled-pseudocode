/*
 * XREFs of NtGdiBitBltInternal @ 0x1C00B0060
 * Callers:
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0037408 (-UT_InvertCaret@@YAXXZ.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C0041CAC (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00482D8 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxDrawCaptionBar @ 0x1C0079538 (xxxDrawCaptionBar.c)
 *     _DrawIconEx @ 0x1C0091C78 (_DrawIconEx.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1C00951E8 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     NtGdiBitBlt @ 0x1C00AFFF0 (NtGdiBitBlt.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00FA070 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     BitBltSysBmp @ 0x1C00FE3CC (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C00FE520 (NtUserBitBltSysBmp.c)
 *     RecolorDeskPattern @ 0x1C012D450 (RecolorDeskPattern.c)
 *     xxxClientExtTextOutW @ 0x1C014E060 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C014E388 (xxxClientGetTextExtentPointW.c)
 *     CreateCompatiblePublicDC @ 0x1C014E6C8 (CreateCompatiblePublicDC.c)
 *     UpdateSpriteArea @ 0x1C0150100 (UpdateSpriteArea.c)
 *     xxxSnapWindow @ 0x1C015527C (xxxSnapWindow.c)
 *     CreateSpb @ 0x1C0156560 (CreateSpb.c)
 *     StopFade @ 0x1C01E77F0 (StopFade.c)
 *     xxxPrintWindow @ 0x1C01E7A70 (xxxPrintWindow.c)
 *     RestoreSpb @ 0x1C021A0A0 (RestoreSpb.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0232AEC (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C0232F54 (xxxClientPSMTextOut.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0236284 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxCompositedPaint @ 0x1C023E150 (xxxCompositedPaint.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023E50C (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C02422FC (-TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0246ECC (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C024B418 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     MNAnimate @ 0x1C024BE4C (MNAnimate.c)
 *     xxxRealDrawMenuItem @ 0x1C024D304 (xxxRealDrawMenuItem.c)
 *     BltColor @ 0x1C025065C (BltColor.c)
 *     DxgkEngBltViaGDI @ 0x1C02764D0 (DxgkEngBltViaGDI.c)
 * Callees:
 *     GreClientRgnUpdatedStable @ 0x1C0041C1C (GreClientRgnUpdatedStable.c)
 *     GreClientRgnUpdated @ 0x1C00456A8 (GreClientRgnUpdated.c)
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C00875B0 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00993B8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     GreStretchBltInternal @ 0x1C009E23C (GreStretchBltInternal.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C009ECF8 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     bCvtPts1 @ 0x1C009F8A0 (bCvtPts1.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00A1148 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00A37B0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A81F0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00B180C (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00B3D30 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C00E6580 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00E670C (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00F8FAC (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00FC34C (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C026D074 (--1SEMOBJ@@QEAA@XZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026E454 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C026E490 (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0277924 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     SimBitBlt @ 0x1C0277AA8 (SimBitBlt.c)
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
  HDC v11; // r10
  LONG v12; // esi
  HDC v14; // rdx
  int v16; // ecx
  __int64 ThreadWin32Thread; // rax
  unsigned int v19; // r15d
  int v20; // r12d
  DC *v21; // r8
  __int64 v22; // rax
  struct _DC_ATTR *UserAttr; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  DC *v27; // r8
  int v28; // ecx
  int v29; // ebx
  unsigned int CurrentProcessId; // eax
  struct _DC_ATTR *v31; // rax
  __int64 v32; // rbx
  struct _DC_ATTR *v33; // rax
  int v34; // ebx
  DC *v35; // rdx
  DC *v36; // r9
  __int64 v37; // r10
  int v38; // r8d
  __int64 v39; // rbx
  unsigned int v40; // eax
  int v41; // edi
  struct MATRIX *v42; // rdx
  int v43; // ecx
  LONG x; // edx
  LONG y; // r8d
  LONG bottom; // r8d
  LONG right; // edx
  LONG v48; // eax
  LONG v49; // eax
  DC *v50; // rcx
  int v51; // eax
  __int64 v52; // rdx
  unsigned __int64 v53; // r8
  DC *v54; // r13
  __int64 v55; // rbx
  __int64 v56; // rsi
  __int64 v57; // r14
  unsigned __int8 v58; // cl
  __int64 v59; // rdx
  HDC v60; // r10
  int v61; // ecx
  __int64 v62; // rcx
  DC *v63; // r12
  int v64; // r9d
  __int64 v65; // rdi
  int v66; // eax
  int v67; // eax
  int v68; // eax
  int v69; // eax
  _DWORD *v70; // rcx
  __int64 v71; // rdi
  int v72; // r10d
  int v73; // edx
  int v74; // r15d
  int v75; // ebx
  __int64 v76; // rax
  LONG v77; // eax
  int v78; // eax
  struct REGION *v79; // rax
  __int64 v80; // r8
  XLATEOBJ *v81; // rbx
  __int64 v82; // rax
  __int64 v83; // rdx
  SURFACE **v84; // r8
  __int64 v85; // r15
  __int64 v86; // rax
  int v87; // ecx
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  int v92; // ecx
  unsigned int v93; // r13d
  __int64 v94; // r12
  unsigned int i; // r11d
  int v96; // eax
  unsigned int v97; // eax
  __int64 v98; // r8
  __int64 v99; // r10
  unsigned int v100; // eax
  __int64 v101; // r8
  __int64 v102; // r10
  XLATEOBJ *v103; // rdx
  int v104; // r9d
  unsigned int v105; // eax
  XLATEOBJ *XlateObject; // rax
  int v107; // eax
  int v108; // edx
  SURFACE *v109; // rsi
  int v110; // r8d
  RECTL v111; // xmm6
  bool v112; // sf
  _DWORD *v113; // rax
  LONG v114; // edi
  int v115; // eax
  LONG v116; // r14d
  _DWORD *v117; // rax
  int v118; // eax
  float v119; // xmm1_4
  int v120; // eax
  float v121; // xmm3_4
  __int64 v122; // kr00_8
  int v123; // ecx
  LONG v124; // r9d
  LONG v125; // r8d
  int v126; // r10d
  int v127; // eax
  int v128; // edx
  __m128i v129; // xmm0
  int v130; // r11d
  __m128i v131; // xmm6
  bool v132; // cc
  LONG v133; // ecx
  int v134; // eax
  int v135; // eax
  LONG v136; // edx
  LONG v137; // r8d
  LONG v138; // ecx
  LONG v139; // eax
  RECTL v140; // xmm6
  LONG v141; // eax
  LONG v142; // ecx
  __int64 v143; // r9
  __int64 v144; // r9
  _OWORD *v145; // rax
  unsigned int v146; // eax
  __int64 v147; // rdi
  int v148; // r14d
  __int64 v149; // rax
  unsigned int v150; // eax
  __int64 v151; // rax
  int (*v152)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v153; // rdx
  __int64 v154; // r8
  int v155; // r11d
  __int64 cEntries; // rax
  __int64 v157; // rdx
  SURFACE **v158; // r8
  int v159; // r15d
  struct _DC_ATTR *v160; // rax
  __int64 v161; // rbx
  char v162; // [rsp+78h] [rbp-90h]
  DC *v163; // [rsp+80h] [rbp-88h] BYREF
  __int64 v164; // [rsp+88h] [rbp-80h]
  char v165; // [rsp+90h] [rbp-78h]
  DC *v166; // [rsp+98h] [rbp-70h] BYREF
  __int64 v167; // [rsp+A0h] [rbp-68h]
  XLATEOBJ *v168; // [rsp+A8h] [rbp-60h]
  int v169; // [rsp+B0h] [rbp-58h]
  XLATEOBJ *v170; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v171; // [rsp+C0h] [rbp-48h]
  signed int v172; // [rsp+C4h] [rbp-44h]
  HDC v173; // [rsp+C8h] [rbp-40h]
  HDC v174; // [rsp+D0h] [rbp-38h]
  int v175; // [rsp+D8h] [rbp-30h]
  int v176; // [rsp+DCh] [rbp-2Ch]
  int v177; // [rsp+E0h] [rbp-28h]
  __int64 v178; // [rsp+E8h] [rbp-20h]
  int v179; // [rsp+F0h] [rbp-18h]
  unsigned int v180; // [rsp+F4h] [rbp-14h]
  int v181; // [rsp+F8h] [rbp-10h] BYREF
  int v182; // [rsp+FCh] [rbp-Ch] BYREF
  int v183; // [rsp+100h] [rbp-8h] BYREF
  int v184; // [rsp+104h] [rbp-4h]
  int v185; // [rsp+108h] [rbp+0h]
  int v186; // [rsp+10Ch] [rbp+4h]
  unsigned __int64 v187; // [rsp+110h] [rbp+8h] BYREF
  LONG v188; // [rsp+118h] [rbp+10h]
  LONG v189; // [rsp+11Ch] [rbp+14h]
  float v190[2]; // [rsp+120h] [rbp+18h] BYREF
  float v191[2]; // [rsp+128h] [rbp+20h] BYREF
  unsigned __int64 v192; // [rsp+130h] [rbp+28h] BYREF
  int v193; // [rsp+138h] [rbp+30h]
  int v194; // [rsp+13Ch] [rbp+34h]
  struct MATRIX *v195; // [rsp+140h] [rbp+38h] BYREF
  int v196; // [rsp+148h] [rbp+40h]
  int v197; // [rsp+14Ch] [rbp+44h]
  SURFACE *v198; // [rsp+150h] [rbp+48h]
  RECTL v199; // [rsp+158h] [rbp+50h]
  __int64 v200; // [rsp+168h] [rbp+60h] BYREF
  __int64 v201; // [rsp+170h] [rbp+68h] BYREF
  __int64 v202; // [rsp+178h] [rbp+70h] BYREF
  __int64 v203; // [rsp+180h] [rbp+78h] BYREF
  __int64 v204; // [rsp+188h] [rbp+80h] BYREF
  __int64 v205; // [rsp+190h] [rbp+88h] BYREF
  __int128 v206; // [rsp+198h] [rbp+90h]
  RECTL v207; // [rsp+1A8h] [rbp+A0h] BYREF
  _OWORD v208[2]; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v209; // [rsp+1D8h] [rbp+D0h]
  __int64 v210; // [rsp+1E0h] [rbp+D8h]
  char v211; // [rsp+1E8h] [rbp+E0h]
  int v212; // [rsp+1ECh] [rbp+E4h]
  int v213; // [rsp+210h] [rbp+108h]
  __int128 v214; // [rsp+218h] [rbp+110h]
  int v215; // [rsp+228h] [rbp+120h]
  __int64 v216; // [rsp+230h] [rbp+128h]
  __int64 v217; // [rsp+238h] [rbp+130h]
  __int16 v218; // [rsp+240h] [rbp+138h]
  __int64 v219; // [rsp+248h] [rbp+140h]
  __int64 v220; // [rsp+250h] [rbp+148h]
  __int16 v221; // [rsp+258h] [rbp+150h]
  __int64 v222; // [rsp+260h] [rbp+158h]
  __int128 v223; // [rsp+268h] [rbp+160h]
  __int64 v224; // [rsp+278h] [rbp+170h]
  __int64 v225; // [rsp+280h] [rbp+178h]
  __int64 v226; // [rsp+288h] [rbp+180h]
  __int64 v227; // [rsp+290h] [rbp+188h]
  RECTL v228; // [rsp+298h] [rbp+190h] BYREF
  POINTL v229[2]; // [rsp+2A8h] [rbp+1A0h] BYREF
  RECTL v230; // [rsp+2B8h] [rbp+1B0h] BYREF
  RECTL v231; // [rsp+2C8h] [rbp+1C0h] BYREF

  v11 = a1;
  v12 = a7;
  v14 = a6;
  v174 = a1;
  v16 = a5;
  v173 = a6;
  LODWORD(v168) = a5;
  v169 = a8;
  if ( (a11 & 4) != 0
    && (v162 = 1,
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread()),
        v16 = (int)v168,
        v11 = v174,
        v14 = v173,
        ThreadWin32Thread) )
  {
    *(_DWORD *)(ThreadWin32Thread + 328) |= 0x10u;
  }
  else
  {
    v162 = 0;
  }
  v19 = 0;
  if ( (a9 & 0x40000000) != 0 )
  {
    v19 = GreStretchBltInternal(
            v11,
            left,
            top,
            a4,
            v16,
            v14,
            a7,
            a8,
            a4,
            v16,
            a9 & 0xDFFFFFFF,
            a10,
            (a9 & 0x20000000) != 0 ? 2 : 0);
    goto LABEL_12;
  }
  v172 = a9 & 0xDFFFFFFF;
  v180 = 0;
  LOBYTE(v14) = 1;
  v164 = 0LL;
  v20 = a9 & 0x5FFFFFFF;
  v163 = (DC *)HmgLockEx(v11, v14, 0LL);
  v21 = v163;
  if ( !v163 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_25;
  }
  if ( (*((_DWORD *)v163 + 11) & 2) == 0 )
  {
    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v163);
    if ( UserAttr && !DC::SaveAttributes(v163, UserAttr) )
    {
      _InterlockedDecrement((volatile signed __int32 *)v163 + 3);
      v21 = 0LL;
      v163 = 0LL;
      goto LABEL_9;
    }
    *((_DWORD *)v163 + 11) |= 2u;
    v21 = v163;
    LODWORD(v164) = 1;
  }
  if ( (*((_DWORD *)v21 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v21);
LABEL_25:
    v21 = v163;
  }
  if ( !v21 )
  {
LABEL_11:
    v163 = 0LL;
    goto LABEL_12;
  }
  if ( (*((_DWORD *)v21 + 9) & 0x10000) != 0 )
  {
LABEL_9:
    if ( v21 )
      XDCOBJ::vUnlockFast((XDCOBJ *)&v163);
    goto LABEL_11;
  }
  v25 = BYTE1(v20);
  if ( ((gajRop3[(unsigned __int8)a9] | gajRop3[BYTE1(a9)]) & 2) != 0 && v20 != 16711778 && v20 != 66 )
    bSpDwmValidateSurface((struct XDCOBJ *)&v163, left, top, a4, (int)v168);
  LOBYTE(v25) = 1;
  v167 = 0LL;
  v26 = HmgLockEx(v173, v25, 0LL);
  v166 = (DC *)v26;
  v27 = (DC *)v26;
  if ( !v26 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_59;
  }
  v28 = HIDWORD(v167);
  if ( HIDWORD(v167) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v26 + 48) + 40LL) & 0x8000) == 0
      || (v29 = *(_DWORD *)(v26 + 2096),
          CurrentProcessId = (unsigned int)PsGetCurrentProcessId(),
          v27 = v166,
          v29 != (CurrentProcessId & 0xFFFFFFFC)) )
    {
      _InterlockedDecrement((volatile signed __int32 *)v27 + 3);
LABEL_37:
      v166 = 0LL;
      goto LABEL_38;
    }
    v28 = HIDWORD(v167);
  }
  if ( (*((_DWORD *)v27 + 11) & 2) == 0 )
  {
    if ( !v28 )
    {
      v33 = XDCOBJ::GetUserAttr((XDCOBJ *)&v166);
      if ( v33 && !DC::SaveAttributes(v166, v33) )
      {
        _InterlockedDecrement((volatile signed __int32 *)v166 + 3);
        goto LABEL_37;
      }
      v27 = v166;
    }
    *((_DWORD *)v27 + 11) |= 2u;
    v27 = v166;
    LODWORD(v167) = 1;
  }
  if ( (*((_DWORD *)v27 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v27);
LABEL_59:
    v27 = v166;
  }
  if ( v27 )
  {
    v34 = v169;
    bSpDwmValidateSurface((struct XDCOBJ *)&v166, a7, v169, a4, (int)v168);
    v35 = v166;
    v36 = v163;
    v37 = *((_QWORD *)v163 + 122);
    v38 = *(_DWORD *)(v37 + 108);
    if ( (((unsigned __int8)v38 ^ *(_BYTE *)(*((_QWORD *)v166 + 122) + 108LL)) & 7) != 0
      && (v172 < 0 && (v38 & 1) != 0 || (v38 & 9) == 9) )
    {
      v39 = *(_QWORD *)(v37 + 308);
      v40 = DC::dwSetLayout(v163, -1, 0);
      v36 = v163;
      v35 = v166;
      v41 = v39 - left;
      v34 = v169;
      left = v41 - a4;
      v180 = v40;
      v172 = 0x80000000;
    }
    else
    {
      v172 = 0;
    }
    v193 = *(_DWORD *)(*((_QWORD *)v36 + 122) + 208LL);
    v194 = *(_DWORD *)(*((_QWORD *)v36 + 122) + 108LL) & 1;
    if ( (*(_DWORD *)(*((_QWORD *)v36 + 122) + 340LL) & 0x1E000) != 0 )
    {
      EXFORMOBJ::vInit((EXFORMOBJ *)&v192, (struct XDCOBJ *)&v163, 0x204u, 0);
      v35 = v166;
    }
    else
    {
      v192 = (unsigned __int64)v36 + 320;
    }
    v196 = *(_DWORD *)(*((_QWORD *)v35 + 122) + 208LL);
    v197 = *(_DWORD *)(*((_QWORD *)v35 + 122) + 108LL) & 1;
    if ( (*(_DWORD *)(*((_QWORD *)v35 + 122) + 340LL) & 0x1E000) != 0 )
    {
      EXFORMOBJ::vInit((EXFORMOBJ *)&v195, (struct XDCOBJ *)&v166, 0x204u, 0);
      v42 = v195;
    }
    else
    {
      v42 = (DC *)((char *)v35 + 320);
      v195 = v42;
    }
    if ( (*(_DWORD *)(v192 + 32) & 1) == 0 || !EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v192, v42) )
    {
      v19 = GreStretchBltInternal(v174, left, top, a4, (int)v168, v173, a7, v34, a4, (int)v168, v20, a10, 0);
      goto LABEL_293;
    }
    v43 = (int)v168;
    x = a7 + a4;
    v229[0].x = a7;
    v229[0].y = v34;
    y = v34 + (_DWORD)v168;
    v229[1].x = a7 + a4;
    v229[1].y = v34 + (_DWORD)v168;
    if ( (*((_BYTE *)v195 + 32) & 0x43) != 0x43 )
    {
      bCvtPts1((unsigned __int64)v195, v229, 2LL);
      y = v229[1].y;
      x = v229[1].x;
      v43 = (int)v168;
      v34 = v229[0].y;
      v12 = v229[0].x;
    }
    if ( v197 )
    {
      ++v12;
      ++x;
      v229[0].x = v12;
      v229[1].x = x;
    }
    if ( v12 > x )
    {
      v229[0].x = x;
      v229[1].x = v12;
    }
    if ( v34 > y )
    {
      v229[0].y = y;
      v229[1].y = v34;
    }
    bottom = v43 + top;
    v228.left = left;
    right = left + a4;
    v228.top = top;
    v228.right = left + a4;
    v228.bottom = v43 + top;
    if ( (*(_BYTE *)(v192 + 32) & 0x43) != 0x43 )
    {
      bCvtPts1(v192, &v228, 2LL);
      bottom = v228.bottom;
      right = v228.right;
      top = v228.top;
      left = v228.left;
    }
    if ( v194 )
    {
      ++left;
      ++right;
      v228.left = left;
      v228.right = right;
    }
    if ( left > right )
    {
      v48 = left;
      v228.left = right;
      left = right;
      v228.right = v48;
      right = v48;
    }
    if ( top > bottom )
    {
      v49 = top;
      v228.top = bottom;
      top = bottom;
      v228.bottom = v49;
      bottom = v49;
    }
    if ( left == right || top == bottom )
    {
      v19 = 1;
      goto LABEL_293;
    }
    v50 = v163;
    v51 = *((_DWORD *)v163 + 9);
    if ( (v51 & 0xE0) != 0 )
    {
      if ( (v51 & 0x20) != 0 )
      {
        ERECTL::operator|=((_DWORD *)v163 + 266, &v228);
        v50 = v163;
      }
      if ( (*((_DWORD *)v50 + 9) & 0x80u) != 0 )
        ERECTL::operator|=((_DWORD *)v50 + 274, &v228);
    }
    v218 = 256;
    v210 = 0LL;
    v211 = 0;
    v212 = 0;
    v213 = 0;
    v217 = 0LL;
    v220 = 0LL;
    memset(v208, 0, sizeof(v208));
    v209 = 0LL;
    v215 = 0;
    v214 = 0LL;
    v222 = 0LL;
    v224 = 0LL;
    v223 = 0LL;
    v227 = 0LL;
    v225 = 0LL;
    v226 = 0LL;
    v216 = 0LL;
    v219 = 0LL;
    v221 = 256;
    if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v208, (struct XDCOBJ *)&v163, (struct XDCOBJ *)&v166, 0) )
    {
      v159 = XDCOBJ::bFullScreen((XDCOBJ *)&v166);
      v19 = XDCOBJ::bFullScreen((XDCOBJ *)&v163) | v159;
      goto LABEL_290;
    }
    v54 = v163;
    v55 = *((_QWORD *)v163 + 62);
    v198 = (SURFACE *)v55;
    if ( !v55 )
      goto LABEL_288;
    v56 = *(_QWORD *)(v55 + 128);
    v57 = *((_QWORD *)v163 + 11);
    v58 = (a9 & 0x5FFFFFFFu) >> 16;
    v179 = (v58 << 8) | v58;
    if ( ((v58 ^ (unsigned __int8)(16 * v58)) & 0xF0) != 0 )
    {
      v59 = *((_QWORD *)v163 + 122);
      v60 = (HDC)((char *)v163 + 1184);
      v174 = (HDC)((char *)v163 + 1184);
      if ( (*(_DWORD *)(v59 + 152) & 0x1000) != 0 )
      {
        GreDCSelectBrush(v163, *(_QWORD *)(v59 + 160));
        v60 = v174;
        v54 = v163;
      }
      v52 = *((_QWORD *)v54 + 122);
      v61 = *(_DWORD *)(v52 + 152);
      if ( (v61 & 1) != 0 || (*((_DWORD *)v54 + 79) & 1) != 0 )
      {
        *(_DWORD *)(v52 + 152) = v61 & 0xFFFFFFFE;
        *((_DWORD *)v163 + 79) &= ~1u;
        EBRUSHOBJ::vInitBrush(v60, v163, *((_QWORD *)v163 + 17), v57, v56, v55, 1);
        v54 = v163;
      }
    }
    else
    {
      v174 = 0LL;
    }
    v62 = (__int64)v54 + 1024;
    v63 = v166;
    if ( (*((_DWORD *)v54 + 10) & 1) == 0 )
      v62 = (__int64)v54 + 1016;
    v64 = *(_DWORD *)v62 + v228.left;
    v228.left = v64;
    v228.right += *(_DWORD *)v62;
    v53 = (unsigned int)(*(_DWORD *)(v62 + 4) + v228.top);
    v228.top += *(_DWORD *)(v62 + 4);
    v228.bottom += *(_DWORD *)(v62 + 4);
    v65 = *((_QWORD *)v166 + 62);
    v178 = v65;
    if ( !v65 )
      goto LABEL_288;
    if ( (a11 & 2) != 0 )
    {
LABEL_129:
      v70 = (_DWORD *)((char *)v63 + 1024);
      v71 = *(_QWORD *)(v65 + 128);
      if ( (*((_DWORD *)v63 + 10) & 1) == 0 )
        v70 = (_DWORD *)((char *)v63 + 1016);
      v72 = 0;
      v73 = 0;
      v74 = v53 - *((_DWORD *)v63 + 2 * (*((_DWORD *)v63 + 10) & 1) + 255) - v229[0].y;
      v75 = v64 - *v70 - v229[0].x;
      v76 = *(_QWORD *)(v178 + 48);
      v176 = v75;
      v177 = v74;
      if ( v76 && v178 == *(_QWORD *)(v76 + 2552) && (*(_DWORD *)(v76 + 40) & 0x20000) != 0 )
      {
        v73 = *(_DWORD *)(v76 + 2584);
        v72 = *(_DWORD *)(v76 + 2588);
      }
      if ( v75 + v73 > v64 )
        v64 = v75 + v73;
      v228.left = v64;
      if ( v74 + v72 > (int)v53 )
        v53 = (unsigned int)(v74 + v72);
      v228.top = v53;
      v77 = v73 + v75 + *(_DWORD *)(v178 + 56);
      v52 = (unsigned int)v228.right;
      if ( v77 < v228.right )
        v52 = (unsigned int)v77;
      v78 = v228.bottom;
      v228.right = v52;
      if ( v72 + v74 + *(_DWORD *)(v178 + 60) < v228.bottom )
        v78 = v72 + v74 + *(_DWORD *)(v178 + 60);
      v228.bottom = v78;
      if ( v64 < (int)v52 && (int)v53 < v78 )
      {
        v173 = 0LL;
        if ( v64 >= *((_DWORD *)v54 + 250)
          && (int)v52 <= *((_DWORD *)v54 + 252)
          && (int)v53 >= *((_DWORD *)v54 + 251)
          && v78 <= *((_DWORD *)v54 + 253) )
        {
LABEL_151:
          if ( (*((_DWORD *)v54 + 9) & 0xE0) != 0 )
          {
            v207 = v228;
            XDCOBJ::vAccumulateTight((XDCOBJ *)&v163, (struct ECLIPOBJ *)v52, (__m128i *)&v207);
            LODWORD(v53) = v228.top;
            v64 = v228.left;
            v54 = v163;
            v63 = v166;
          }
          v80 = (unsigned int)(v53 - v74);
          v229[0].x = v64 - v75;
          v229[0].y = v80;
          v81 = 0LL;
          v82 = *((_QWORD *)v54 + 62);
          v170 = 0LL;
          if ( *((_QWORD *)v63 + 62) == v82 )
          {
            v168 = 0LL;
            v19 = 1;
LABEL_208:
            v108 = 0;
            v109 = v198;
            v110 = 0;
            v111 = v228;
            v199 = v228;
            v112 = *((int *)v198 + 28) < 0;
            v206 = *(_OWORD *)&v229[0].x;
            v231 = v228;
            v230 = *(RECTL *)&v229[0].x;
            v183 = 0;
            v184 = 0;
            if ( v112 )
            {
              v113 = (_DWORD *)*((_QWORD *)v198 + 6);
              if ( v113 )
              {
                if ( (v113[10] & 0x20000) != 0 )
                {
                  v108 = v113[646];
                  v110 = v113[647];
                  v183 = v108;
                  v184 = v110;
                }
              }
            }
            v114 = 0;
            v115 = v108 + *((_DWORD *)v198 + 14);
            v187 = 0LL;
            v116 = 0;
            v185 = v115;
            v112 = *(int *)(v178 + 112) < 0;
            v186 = v110 + *((_DWORD *)v198 + 15);
            if ( v112 )
            {
              v117 = *(_DWORD **)(v178 + 48);
              if ( v117 )
              {
                if ( (v117[10] & 0x20000) != 0 )
                {
                  v114 = v117[646];
                  v116 = v117[647];
                  v187 = __PAIR64__(v116, v114);
                }
              }
            }
            v188 = v114 + *(_DWORD *)(v178 + 56);
            v189 = v116 + *(_DWORD *)(v178 + 60);
            v118 = *((_DWORD *)v54 + 130);
            v175 = v118;
            v176 = v118 & 1;
            if ( (v118 & 1) != 0 && (v118 & 2) == 0 )
            {
              v119 = 1.0 / *((float *)v54 + 132);
              v190[0] = 1.0 / *((float *)v54 + 131);
              v190[1] = v119;
              ERECTL::vScale((ERECTL *)&v183, (const struct POINTFL *)v190);
              ERECTL::vScale((ERECTL *)&v231, (const struct POINTFL *)v190);
              v111 = v231;
            }
            v120 = *((_DWORD *)v63 + 130);
            v169 = v120;
            v171 = v120 & 1;
            if ( (v120 & 1) != 0 && (v120 & 2) == 0 )
            {
              v121 = 1.0 / *((float *)v63 + 132);
              v191[0] = 1.0 / *((float *)v63 + 131);
              v191[1] = v121;
              ERECTL::vScale((ERECTL *)&v187, (const struct POINTFL *)v191);
              ERECTL::vScale((ERECTL *)&v230, (const struct POINTFL *)v191);
              v116 = HIDWORD(v187);
              v114 = v187;
            }
            v122 = *(_QWORD *)&v230.left;
            v123 = _mm_cvtsi128_si32((__m128i)v111);
            v230 = v111;
            v124 = v111.top;
            v125 = v111.right;
            v126 = v122 - v123;
            v127 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v111, 4));
            v128 = v123;
            v129 = _mm_srli_si128((__m128i)v111, 8);
            v130 = HIDWORD(v122) - v127;
            v131 = _mm_srli_si128((__m128i)v111, 12);
            v132 = v183 <= v123;
            v133 = v230.bottom;
            if ( !v132 )
              v128 = v183;
            v132 = v184 <= v127;
            v134 = _mm_cvtsi128_si32(v129);
            if ( !v132 )
              v124 = v184;
            v132 = v185 < v134;
            v135 = _mm_cvtsi128_si32(v131);
            if ( v132 )
              v125 = v185;
            v177 = v125;
            if ( v186 < v135 )
              v133 = v186;
            if ( v125 >= v128 )
            {
              if ( v133 < v124 )
                v124 = v133;
            }
            else
            {
              v128 = v125;
            }
            v136 = v126 + v128;
            v137 = v126 + v125;
            v138 = v130 + v133;
            v139 = v130 + v124;
            if ( v114 > v136 )
              v136 = v114;
            v230.left = v136;
            if ( v116 > v139 )
              v139 = v116;
            v230.top = v139;
            if ( v188 < v137 )
              v137 = v188;
            v230.right = v137;
            if ( v189 < v138 )
              v138 = v189;
            v230.bottom = v138;
            if ( v137 >= v136 )
            {
              if ( v138 < v139 )
                v139 = v138;
              v230.top = v139;
            }
            else
            {
              v136 = v137;
              v230.left = v137;
            }
            v140 = v230;
            v52 = (unsigned int)(v136 - v126);
            v141 = v139 - v130;
            *(_QWORD *)&v231.left = __PAIR64__(v141, v52);
            v142 = v138 - v130;
            v231.right = v137 - v126;
            v231.bottom = v142;
            if ( (int)v52 >= v137 - v126 || v141 >= v142 )
            {
              LOBYTE(v52) = 0;
            }
            else
            {
              if ( v176 && (v175 & 2) == 0 )
              {
                v203 = *(_QWORD *)((char *)v54 + 524);
                ERECTL::vScale((ERECTL *)&v231, (const struct POINTFL *)&v203);
              }
              if ( v171 && (v169 & 2) == 0 )
              {
                v204 = *(_QWORD *)((char *)v63 + 524);
                ERECTL::vScale((ERECTL *)&v230, (const struct POINTFL *)&v204);
                v140 = v230;
              }
              LOBYTE(v52) = 1;
              v228 = v231;
              *(RECTL *)&v229[0].x = v140;
              ++*((_DWORD *)v109 + 23);
              v54 = v163;
              v63 = v166;
            }
            v80 = *((_QWORD *)v54 + 6);
            v143 = *((_QWORD *)v63 + 6);
            v165 = v52;
            if ( v80 != v143
              && (!(unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)&v163) || *(_QWORD *)(v80 + 3520) != v144)
              && (*(_WORD *)(v178 + 100) || *(_QWORD *)(v178 + 24) || (*(_DWORD *)(v80 + 40) & 0x80u) != 0) )
            {
              if ( !(_BYTE)v52 )
                goto LABEL_283;
              v145 = v208;
              if ( (*(_DWORD *)(*((_QWORD *)v109 + 6) + 40LL) & 0x80u) == 0 )
                v145 = 0LL;
              v146 = SimBitBlt(
                       (SURFOBJ *)((char *)v109 + 24),
                       (SURFOBJ *)(v178 + 24),
                       v168,
                       &v228,
                       v229,
                       0LL,
                       (__int64)v174,
                       (POINTL *)v54 + 147,
                       v179,
                       (__int64)v145);
LABEL_282:
              v19 = v146;
              goto LABEL_283;
            }
            if ( v179 != 52428 )
            {
              if ( !(_BYTE)v52 )
                goto LABEL_283;
              v152 = SURFACE::pfnBitBlt(v109);
              v146 = ((__int64 (__fastcall *)(char *, __int64, _QWORD, HDC, XLATEOBJ *, RECTL *, POINTL *, _QWORD, HDC, __int64, int))v152)(
                       (char *)v109 + 24,
                       v153,
                       0LL,
                       v173,
                       v168,
                       &v228,
                       v229,
                       0LL,
                       v174,
                       v154,
                       v155);
              goto LABEL_282;
            }
            v147 = *((_QWORD *)v109 + 6);
            v148 = a11 & 1;
            if ( v148 )
            {
              EtwWindowRendering(
                *((_QWORD *)v54 + 58),
                *((_QWORD *)v54 + 59),
                **((_QWORD **)v54 + 62),
                (unsigned int)v199.left,
                v199.top,
                v199.right,
                v199.bottom,
                *((_QWORD *)v63 + 58),
                *((_QWORD *)v63 + 59),
                **((_QWORD **)v63 + 62),
                v206,
                DWORD1(v206),
                v206 + abs32(v199.right - v199.bottom),
                DWORD1(v206) + abs32(v199.bottom - v199.top));
              v109 = v198;
              *((_WORD *)v198 + 51) |= 0x40u;
              v149 = W32GetThreadWin32Thread(KeGetCurrentThread());
              if ( v149 )
                *(_DWORD *)(v149 + 328) &= ~1u;
              GreClientRgnUpdated(0);
              GreClientRgnUpdatedStable();
              v81 = v170;
            }
            if ( v165 )
            {
              if ( (*((_DWORD *)v109 + 28) & 0x400) != 0 )
                v150 = (*(__int64 (__fastcall **)(__int64, __int64, HDC, XLATEOBJ *, RECTL *, POINTL *))(v147 + 2840))(
                         (__int64)v109 + 24,
                         v178 + 24,
                         v173,
                         v168,
                         &v228,
                         v229);
              else
                v150 = ((__int64 (__fastcall *)(char *, __int64, HDC, XLATEOBJ *, RECTL *, POINTL *))EngCopyBits)(
                         (char *)v109 + 24,
                         v178 + 24,
                         v173,
                         v168,
                         &v228,
                         v229);
              v19 = v150;
            }
            if ( v148 )
            {
              *((_WORD *)v109 + 51) &= ~0x40u;
              v151 = W32GetThreadWin32Thread(KeGetCurrentThread());
              v81 = v170;
              if ( v151 )
                *(_DWORD *)(v151 + 328) |= 1u;
            }
LABEL_283:
            if ( v81 )
            {
              cEntries = (int)v81[1].cEntries;
              if ( (int)cEntries >= 0 )
              {
                _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
                DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v208, v52, (SURFACE **)v80);
                goto LABEL_293;
              }
              if ( (_DWORD)cEntries == -1 )
              {
                FreeThreadBufferWithTag(v81);
                DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v208, v157, v158);
                goto LABEL_293;
              }
            }
LABEL_290:
            DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v208, v52, (SURFACE **)v80);
            goto LABEL_293;
          }
          v85 = *((_QWORD *)v63 + 11);
          LODWORD(v168) = a10;
          if ( a10 == -1 )
            LODWORD(v168) = *(_DWORD *)(*((_QWORD *)v63 + 122) + 180LL);
          v86 = *((_QWORD *)v54 + 122);
          v87 = *(_DWORD *)(v86 + 176);
          v171 = *(_DWORD *)(v86 + 184);
          v175 = *((_DWORD *)v54 + 30);
          v169 = v87;
          if ( (v71
             || v56
             && ((*(_DWORD *)(v56 + 24) & 0x800) == 0
              || (v88 = *(_QWORD *)(v57 + 80)) != 0 && v88 != *(_QWORD *)(v57 + 72)))
            && (v56
             || (*(_DWORD *)(v71 + 24) & 0x800) == 0
             || (v89 = *(_QWORD *)(v57 + 80)) != 0 && v89 != *(_QWORD *)(v57 + 72)) )
          {
            if ( !v71 || !v56 )
            {
LABEL_196:
              XlateObject = (XLATEOBJ *)CreateXlateObject(
                                          0LL,
                                          v175,
                                          v71,
                                          v56,
                                          v85,
                                          v57,
                                          v171,
                                          v169,
                                          (unsigned int)v168,
                                          0);
              v170 = XlateObject;
              v81 = XlateObject;
              if ( XlateObject )
              {
                if ( v71 && v56 && (XlateObject[3].flXlate & 0x200) == 0 )
                  EXLATEOBJ::vAddToCache(&v170, v71, v56, v85, v57);
                v19 = 1;
              }
              else
              {
                v19 = 0;
              }
LABEL_204:
              v54 = v163;
              v63 = v166;
LABEL_205:
              v107 = *((_DWORD *)v54 + 9);
              v168 = v81;
              if ( (v107 & 1) == 0 )
              {
                v229[1].x = v228.right - v176;
                v229[1].y = v228.bottom - v177;
              }
              if ( !v19 )
                goto LABEL_283;
              goto LABEL_208;
            }
            v90 = *(_QWORD *)(v71 + 120);
            if ( v90 == v71 )
              v52 = *(unsigned int *)(v71 + 32);
            else
              v52 = *(unsigned int *)(v90 + 32);
            v91 = *(_QWORD *)(v56 + 120);
            if ( v91 == v56 )
              v92 = *(_DWORD *)(v56 + 32);
            else
              v92 = *(_DWORD *)(v91 + 32);
            if ( (_DWORD)v52 != v92 )
            {
              v93 = *(_DWORD *)(v71 + 56);
              v200 = v57;
              v201 = v85;
              v205 = v56;
              v202 = ghsemPalette;
              GreAcquireSemaphore(ghsemPalette);
              v94 = *(_QWORD *)(v71 + 120);
              for ( i = 0; i < 8; ++i )
              {
                if ( v94 == v71 )
                  v96 = *(_DWORD *)(v71 + 32);
                else
                  v96 = *(_DWORD *)(v94 + 32);
                if ( *((_DWORD *)&xlateTable + 8 * v93 + 4) == v96 )
                {
                  v97 = XEPALOBJ::ulTime((XEPALOBJ *)&v205);
                  if ( *(_DWORD *)(v98 + v99 + 20) == v97 )
                  {
                    v100 = XEPALOBJ::ulTime((XEPALOBJ *)&v200);
                    if ( *(_DWORD *)(v101 + v102 + 28) == v100 )
                    {
                      v103 = *(XLATEOBJ **)(v101 + v102 + 8);
                      v170 = v103;
                      if ( (v103[3].flXlate & 0x6000) == 0 )
                      {
                        if ( (v104 = v103[3].flXlate & 0x100, (v103->flXlate & 4) == 0) && !v104
                          || (v103->flXlate & 4) != 0
                          && (_DWORD)v168 == v103[1].iUniq
                          && (v105 = XEPALOBJ::ulTime((XEPALOBJ *)&v201), *(_DWORD *)(v101 + v102 + 24) == v105)
                          || v104 && v171 == v103[1].flXlate && v169 == *(_DWORD *)&v103[1].iSrcType )
                        {
                          _InterlockedIncrement((volatile signed __int32 *)(v101 + v102));
                          *(_DWORD *)(v71 + 56) = v93;
                          SEMOBJ::~SEMOBJ((SEMOBJ *)&v202);
                          v81 = v170;
                          v19 = 1;
                          goto LABEL_204;
                        }
                      }
                    }
                  }
                }
                v93 = ((_BYTE)v93 + 1) & 7;
              }
              if ( ghsemPalette )
              {
                EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                GreReleaseSemaphoreInternal(ghsemPalette);
              }
              goto LABEL_196;
            }
          }
          v81 = xloIdent;
          v19 = 1;
          v170 = xloIdent;
          goto LABEL_205;
        }
        v173 = (HDC)((char *)v54 + 1752);
        v79 = XDCOBJ::prgnEffRao(&v163);
        XCLIPOBJ::vSetup((DC *)((char *)v54 + 1752), v79, (struct ERECTL *)&v228, 2);
        v228 = *(RECTL *)((char *)v54 + 1756);
        if ( !ERECTL::bEmpty((ERECTL *)&v228) )
        {
          v54 = v163;
          v63 = v166;
          LODWORD(v53) = v228.top;
          v64 = v228.left;
          goto LABEL_151;
        }
      }
LABEL_288:
      v19 = 1;
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v208, v52, (SURFACE **)v53);
      goto LABEL_293;
    }
    if ( *(_DWORD *)(v65 + 656) )
    {
      if ( ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v65 + 656) )
        goto LABEL_155;
      v54 = v163;
      v63 = v166;
      v53 = (unsigned int)v228.top;
      v64 = v228.left;
    }
    v66 = *(_DWORD *)(v65 + 112);
    if ( (v66 & 0x800) != 0 )
    {
      v67 = UserSurfaceAccessCheck(*(_QWORD *)(v65 + 648));
    }
    else
    {
      if ( (v66 & 0x10000000) == 0 )
      {
LABEL_120:
        if ( (*(_DWORD *)(v55 + 116) & 8) == 0 && !*(_QWORD *)(v55 + 224)
          || (v62 = 512LL, (*(_WORD *)(v55 + 102) & 0x200) == 0) )
        {
          v68 = *(_DWORD *)(v55 + 112);
          if ( (v68 & 0x800) != 0 )
          {
            v69 = UserSurfaceAccessCheck(*(_QWORD *)(v55 + 648));
          }
          else
          {
            if ( (v68 & 0x10000000) == 0 )
              goto LABEL_129;
            v69 = UserScreenAccessCheck(v62, v52);
          }
          if ( v69 )
          {
            v54 = v163;
            v63 = v166;
            v53 = (unsigned int)v228.top;
            v64 = v228.left;
            goto LABEL_129;
          }
        }
LABEL_155:
        EngSetLastError(6u);
        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v208, v83, v84);
LABEL_293:
        if ( v172 )
          DC::dwSetLayout(v163, -1, v180);
        if ( (_DWORD)v167 && (*((_DWORD *)v166 + 11) & 2) != 0 )
        {
          if ( !HIDWORD(v167) )
          {
            v160 = XDCOBJ::GetUserAttr((XDCOBJ *)&v166);
            if ( v160 )
              DC::RestoreAttributes(v166, v160);
          }
          *((_DWORD *)v166 + 11) &= ~2u;
          LODWORD(v167) = 0;
        }
        v181 = 0;
        v161 = *(_QWORD *)v166;
        HmgDecrementExclusiveReferenceCountEx(v166, HIDWORD(v167), &v181);
        if ( v181 )
          bDeleteDCInternalEx(v161, 0LL);
        goto LABEL_38;
      }
      v67 = UserScreenAccessCheck(v62, v52);
    }
    if ( !v67 )
      goto LABEL_155;
    v54 = v163;
    v63 = v166;
    v53 = (unsigned int)v228.top;
    v64 = v228.left;
    goto LABEL_120;
  }
LABEL_38:
  if ( (_DWORD)v164 && (*((_DWORD *)v163 + 11) & 2) != 0 )
  {
    if ( !HIDWORD(v164) )
    {
      v31 = XDCOBJ::GetUserAttr((XDCOBJ *)&v163);
      if ( v31 )
        DC::RestoreAttributes(v163, v31);
    }
    *((_DWORD *)v163 + 11) &= ~2u;
    LODWORD(v164) = 0;
  }
  v182 = 0;
  v32 = *(_QWORD *)v163;
  HmgDecrementExclusiveReferenceCountEx(v163, HIDWORD(v164), &v182);
  if ( v182 )
    bDeleteDCInternalEx(v32, 0LL);
LABEL_12:
  if ( v162 )
  {
    v22 = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_DWORD *)(v22 + 328) &= ~0x10u;
  }
  return v19;
}
