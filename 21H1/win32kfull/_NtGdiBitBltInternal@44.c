/*
 * XREFs of _NtGdiBitBltInternal@44 @ 0x57A20
 * Callers:
 *     ?zzzBltValidBits@@YG?AW4BltBitsResult@@PAUtagSMWP@@@Z @ 0x339E2 (-zzzBltValidBits@@YG-AW4BltBitsResult@@PAUtagSMWP@@@Z.c)
 *     ?InternalScrollDC@@YGHPAUtagWND@@PAUHDC__@@HHPAUtagRECT@@2PAUHRGN__@@32H@Z @ 0x35B68 (-InternalScrollDC@@YGHPAUtagWND@@PAUHDC__@@HHPAUtagRECT@@2PAUHRGN__@@32H@Z.c)
 *     _NtGdiBitBlt@44 @ 0x579D2 (_NtGdiBitBlt@44.c)
 *     ?_InternalGetIconInfo@@YG_NPAUtagCURSOR@@PAU_ICONINFO@@PAU_UNICODE_STRING@@2PAK_N@Z @ 0x74C30 (-_InternalGetIconInfo@@YG_NPAUtagCURSOR@@PAU_ICONINFO@@PAU_UNICODE_STRING@@2PAK_N@Z.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YGHPAUtagWND@@PAUHBITMAP__@@1PBUtagBITMAP@@2HH@Z @ 0x7A92E (-BltOldRedirectionBitsToNewBitmap@@YGHPAUtagWND@@PAUHBITMAP__@@1PBUtagBITMAP@@2HH@Z.c)
 *     _xxxDrawCaptionBar@12 @ 0x8F42C (_xxxDrawCaptionBar@12.c)
 *     __DrawIconEx@36 @ 0x90AF8 (__DrawIconEx@36.c)
 *     _BitBltSysBmp@20 @ 0x910DA (_BitBltSysBmp@20.c)
 *     _RecolorDeskPattern@0 @ 0xAEE98 (_RecolorDeskPattern@0.c)
 *     ?UT_InvertCaret@@YGXXZ @ 0xBA85A (-UT_InvertCaret@@YGXXZ.c)
 *     _xxxClientExtTextOutW@32 @ 0xBC862 (_xxxClientExtTextOutW@32.c)
 *     _xxxClientGetTextExtentPointW@16 @ 0xBCB06 (_xxxClientGetTextExtentPointW@16.c)
 *     _CreateCompatiblePublicDC@8 @ 0xBCDD4 (_CreateCompatiblePublicDC@8.c)
 *     _UpdateSpriteArea@44 @ 0xC4700 (_UpdateSpriteArea@44.c)
 *     _CreateSpb@12 @ 0xC549A (_CreateSpb@12.c)
 *     _StopFade@0 @ 0x1538B2 (_StopFade@0.c)
 *     _xxxPrintWindow@12 @ 0x153AF9 (_xxxPrintWindow@12.c)
 *     _NtUserBitBltSysBmp@20 @ 0x15FB34 (_NtUserBitBltSysBmp@20.c)
 *     _RestoreSpb@12 @ 0x17E510 (_RestoreSpb@12.c)
 *     _xxxClientLpkDrawTextEx@40 @ 0x1945DA (_xxxClientLpkDrawTextEx@40.c)
 *     _xxxClientPSMTextOut@24 @ 0x19495D (_xxxClientPSMTextOut@24.c)
 *     ?zzzMNFadeSelection@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x197315 (-zzzMNFadeSelection@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z.c)
 *     _xxxCompositedPaint@4 @ 0x19D911 (_xxxCompositedPaint@4.c)
 *     ?xxxAnimateCaption@@YGXPAUtagWND@@PAUHDC__@@PAUtagRECT@@2@Z @ 0x19DBBC (-xxxAnimateCaption@@YGXPAUtagWND@@PAUHDC__@@PAUtagRECT@@2@Z.c)
 *     ?TooltipAnimate@@YGHPAUtagTOOLTIPWND@@@Z @ 0x1A0923 (-TooltipAnimate@@YGHPAUtagTOOLTIPWND@@@Z.c)
 *     _xxxSnapWindow@8 @ 0x1A20A2 (_xxxSnapWindow@8.c)
 *     ?DrawCaptionIcon@@YGXPAUHDC__@@PAUtagRECT@@PAUtagCURSOR@@PAUHBRUSH__@@I@Z @ 0x1A5106 (-DrawCaptionIcon@@YGXPAUHDC__@@PAUtagRECT@@PAUtagCURSOR@@PAUHBRUSH__@@I@Z.c)
 *     ?DrawMenuItemCheckMark@@YGHPAUHDC__@@PAUtagITEM@@H@Z @ 0x1A8C6A (-DrawMenuItemCheckMark@@YGHPAUHDC__@@PAUtagITEM@@H@Z.c)
 *     _MNAnimate@8 @ 0x1A9493 (_MNAnimate@8.c)
 *     _xxxRealDrawMenuItem@24 @ 0x1AA53B (_xxxRealDrawMenuItem@24.c)
 *     _BltColor@40 @ 0x1ACFB1 (_BltColor@40.c)
 *     _DxgkEngBltViaGDI@52 @ 0x1D3921 (_DxgkEngBltViaGDI@52.c)
 * Callees:
 *     _GreClientRgnUpdatedStable@4 @ 0x334D6 (_GreClientRgnUpdatedStable@4.c)
 *     _GreClientRgnUpdated@4 @ 0x384C8 (_GreClientRgnUpdated@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?prgnVisSnap@DC@@QBEPAVREGION@@XZ @ 0x53684 (-prgnVisSnap@DC@@QBEPAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QBEPAVREGION@@XZ @ 0x538E8 (-prgnRao@DC@@QBEPAVREGION@@XZ.c)
 *     ?bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x53E36 (-bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z @ 0x56734 (-vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z.c)
 *     ?bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z @ 0x590DC (-bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@0H@Z @ 0x59880 (-bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@0H@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QAE@XZ @ 0x5DBF8 (--1DEVLOCKBLTOBJ@@QAE@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QAEHXZ @ 0x78918 (-bFullScreen@XDCOBJ@@QAEHXZ.c)
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 *     ?bOffsetSubtract@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x8D950 (-bOffsetSubtract@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     ??_5ERECTL@@QAEXABU_RECTL@@@Z @ 0x93A0E (--_5ERECTL@@QAEXABU_RECTL@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _bCvtPts1@12 @ 0xEE344 (_bCvtPts1@12.c)
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _divff3_c@12 @ 0xEF19C (_divff3_c@12.c)
 *     _NtGdiBitBltInternal_::_2_::ScreenAccessState::ScreenAccessState @ 0xF7030 (_NtGdiBitBltInternal_--_2_--ScreenAccessState--ScreenAccessState.c)
 *     _NtGdiBitBltInternal_::_2_::ScreenAccessState::_ScreenAccessState @ 0xF706A (_NtGdiBitBltInternal_--_2_--ScreenAccessState--_ScreenAccessState.c)
 *     ?vScale@ERECTL@@QAEXABVPOINTFL@@@Z @ 0x1CDA4B (-vScale@ERECTL@@QAEXABVPOINTFL@@@Z.c)
 *     ?bRedirHooked@XDCOBJ@@QAEHXZ @ 0x1D48A1 (-bRedirHooked@XDCOBJ@@QAEHXZ.c)
 *     _SimBitBlt@48 @ 0x1D49E6 (_SimBitBlt@48.c)
 */

DC *__fastcall NtGdiBitBltInternal(
        HDC a1,
        LONG a2,
        struct XDCOBJ *a3,
        int a4,
        int a5,
        HDC a6,
        struct ECLIPOBJ *a7,
        struct ECLIPOBJ *a8,
        int a9,
        int a10,
        int a11)
{
  struct XDCOBJ *v11; // esi
  int v13; // ebx
  HDC v14; // ecx
  HDC v15; // edx
  int v16; // esi
  unsigned int v17; // eax
  struct MATRIX *v18; // edx
  DC *v19; // ecx
  struct ECLIPOBJ *v20; // edx
  LONG v21; // esi
  DC *v22; // ebx
  int v23; // eax
  struct ECLIPOBJ *v24; // ecx
  LONG v25; // edx
  struct ECLIPOBJ *v26; // eax
  LONG v27; // eax
  int v28; // ecx
  int v29; // eax
  DC *v30; // ebx
  int v31; // esi
  XLATEOBJ *v32; // eax
  XLATEOBJ *v33; // ecx
  int v34; // edx
  int v35; // edi
  int v36; // edx
  HDC *v37; // ecx
  HDC v38; // edi
  int v39; // eax
  int (*v40)(void); // ecx
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // esi
  LONG v46; // edx
  ROP4 v47; // edi
  int v48; // eax
  int v49; // ecx
  struct ECLIPOBJ *v50; // eax
  struct ECLIPOBJ *v51; // eax
  struct ECLIPOBJ *v52; // ecx
  DC *v53; // ebx
  ROP4 v54; // eax
  struct ECLIPOBJ *v55; // edi
  char *v56; // eax
  int v57; // eax
  DC *v58; // ecx
  struct REGION *v59; // eax
  XLATEOBJ *v60; // edi
  struct ECLIPOBJ *v61; // eax
  DC *v62; // esi
  int v63; // ecx
  int inited; // ecx
  bool v65; // zf
  int v66; // eax
  LONG v67; // ecx
  DC *v68; // edx
  int v69; // esi
  _DWORD *v70; // eax
  int v71; // edx
  DC *v72; // eax
  _DWORD *v73; // eax
  int v74; // eax
  int v75; // ebx
  LONG v76; // ecx
  LONG v77; // edx
  struct ECLIPOBJ *v78; // ebx
  int v79; // eax
  int v80; // ebx
  LONG v81; // ecx
  LONG v82; // edx
  LONG v83; // edx
  int v84; // ecx
  signed int v85; // eax
  struct ECLIPOBJ *v86; // esi
  int v87; // edx
  int v88; // eax
  int v89; // eax
  int v90; // edx
  int v91; // ebx
  HDC v92; // ecx
  int v93; // esi
  int v94; // eax
  int v95; // esi
  PKTHREAD (__stdcall *v96)(); // ebx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  PKTHREAD v99; // eax
  int v100; // eax
  POINTL *v101; // ebx
  int cEntries; // eax
  int v103; // ebx
  struct _DC_ATTR *UserAttr; // eax
  void (__thiscall *v105)(DC *__hidden, struct _DC_ATTR *); // ebx
  int v106; // esi
  void (__stdcall *v107)(int, _DWORD); // edi
  struct _DC_ATTR *v108; // eax
  int v109; // esi
  int v111; // [esp+8h] [ebp-1D0h]
  char v112; // [esp+1Bh] [ebp-1BDh]
  SURFOBJ *v113; // [esp+1Ch] [ebp-1BCh]
  char *v114; // [esp+20h] [ebp-1B8h]
  int v115; // [esp+20h] [ebp-1B8h]
  int v116; // [esp+24h] [ebp-1B4h]
  int v117; // [esp+28h] [ebp-1B0h] BYREF
  int v118; // [esp+2Ch] [ebp-1ACh]
  int v119; // [esp+30h] [ebp-1A8h]
  DC *v120; // [esp+34h] [ebp-1A4h]
  int v121; // [esp+38h] [ebp-1A0h]
  int v122; // [esp+3Ch] [ebp-19Ch]
  struct ECLIPOBJ *v123; // [esp+40h] [ebp-198h]
  int v124; // [esp+44h] [ebp-194h]
  int v125; // [esp+48h] [ebp-190h]
  int v126; // [esp+4Ch] [ebp-18Ch] BYREF
  HDC v127; // [esp+50h] [ebp-188h] BYREF
  DC *v128; // [esp+54h] [ebp-184h] BYREF
  HDC v129; // [esp+58h] [ebp-180h] BYREF
  HDC *v130; // [esp+5Ch] [ebp-17Ch]
  XLATEOBJ *v131; // [esp+60h] [ebp-178h] BYREF
  struct ECLIPOBJ *v132; // [esp+64h] [ebp-174h]
  int v133; // [esp+68h] [ebp-170h]
  XLATEOBJ *v134; // [esp+6Ch] [ebp-16Ch]
  char *v135; // [esp+70h] [ebp-168h]
  struct ECLIPOBJ *v136; // [esp+74h] [ebp-164h] BYREF
  HDC v137; // [esp+78h] [ebp-160h] BYREF
  BRUSHOBJ *v138; // [esp+7Ch] [ebp-15Ch]
  ROP4 v139; // [esp+80h] [ebp-158h] BYREF
  char *v140; // [esp+84h] [ebp-154h] BYREF
  int v141; // [esp+88h] [ebp-150h] BYREF
  int v142; // [esp+90h] [ebp-148h]
  unsigned int v143; // [esp+94h] [ebp-144h]
  int v144; // [esp+9Ch] [ebp-13Ch]
  int v145; // [esp+A0h] [ebp-138h] BYREF
  char v146; // [esp+A4h] [ebp-134h]
  char v147; // [esp+A5h] [ebp-133h]
  unsigned int v148; // [esp+ACh] [ebp-12Ch]
  _DWORD *v149; // [esp+B0h] [ebp-128h] BYREF
  signed int v150; // [esp+B4h] [ebp-124h]
  int v151; // [esp+B8h] [ebp-120h]
  int v152; // [esp+BCh] [ebp-11Ch] BYREF
  struct MATRIX *v153; // [esp+C0h] [ebp-118h] BYREF
  int v154; // [esp+C4h] [ebp-114h]
  int v155; // [esp+C8h] [ebp-110h]
  HDC v156; // [esp+CCh] [ebp-10Ch] BYREF
  int v157; // [esp+D0h] [ebp-108h]
  _DWORD v158[6]; // [esp+D4h] [ebp-104h] BYREF
  int v159; // [esp+ECh] [ebp-ECh]
  int v160; // [esp+F0h] [ebp-E8h]
  int v161; // [esp+F4h] [ebp-E4h]
  int v162; // [esp+F8h] [ebp-E0h]
  int v163; // [esp+FCh] [ebp-DCh]
  int v164; // [esp+104h] [ebp-D4h]
  int v165; // [esp+108h] [ebp-D0h]
  int v166; // [esp+10Ch] [ebp-CCh]
  __int16 v167; // [esp+110h] [ebp-C8h]
  int v168; // [esp+114h] [ebp-C4h]
  int v169; // [esp+118h] [ebp-C0h]
  int v170; // [esp+11Ch] [ebp-BCh]
  int v171; // [esp+120h] [ebp-B8h]
  int v172; // [esp+124h] [ebp-B4h] BYREF
  DC *v173; // [esp+128h] [ebp-B0h]
  struct ECLIPOBJ *v174; // [esp+12Ch] [ebp-ACh] BYREF
  int v175; // [esp+130h] [ebp-A8h]
  int v176; // [esp+134h] [ebp-A4h] BYREF
  HDC v177; // [esp+138h] [ebp-A0h] BYREF
  struct ECLIPOBJ *v178; // [esp+13Ch] [ebp-9Ch]
  struct ECLIPOBJ *v179; // [esp+140h] [ebp-98h] BYREF
  char *v180; // [esp+144h] [ebp-94h] BYREF
  int v181; // [esp+148h] [ebp-90h] BYREF
  char *v182; // [esp+14Ch] [ebp-8Ch]
  int v183; // [esp+150h] [ebp-88h]
  int v184; // [esp+154h] [ebp-84h] BYREF
  LONG v185; // [esp+158h] [ebp-80h] BYREF
  struct ECLIPOBJ *v186; // [esp+15Ch] [ebp-7Ch]
  struct ECLIPOBJ *v187; // [esp+160h] [ebp-78h]
  struct ECLIPOBJ *v188; // [esp+164h] [ebp-74h] BYREF
  DC *v189; // [esp+168h] [ebp-70h] BYREF
  struct ECLIPOBJ *x; // [esp+16Ch] [ebp-6Ch]
  DC *v191; // [esp+170h] [ebp-68h]
  struct _POINTL v192; // [esp+174h] [ebp-64h] BYREF
  struct ECLIPOBJ *v193; // [esp+17Ch] [ebp-5Ch] BYREF
  int v194; // [esp+180h] [ebp-58h]
  char *v195; // [esp+184h] [ebp-54h] BYREF
  unsigned int v196; // [esp+188h] [ebp-50h]
  char *v197; // [esp+18Ch] [ebp-4Ch]
  int v198; // [esp+190h] [ebp-48h]
  int v199; // [esp+194h] [ebp-44h] BYREF
  DC *v200; // [esp+198h] [ebp-40h]
  HDC *v201; // [esp+19Ch] [ebp-3Ch]
  int v202; // [esp+1A0h] [ebp-38h]
  int v203; // [esp+200h] [ebp+28h]

  v126 = a4;
  v11 = a3;
  v133 = a5;
  v127 = a6;
  v137 = a1;
  v132 = a7;
  v134 = (XLATEOBJ *)a3;
  v136 = a8;
  NtGdiBitBltInternal_::_2_::ScreenAccessState::ScreenAccessState(a11);
  v128 = 0;
  if ( (a9 & 0x40000000) != 0 )
  {
    v128 = (DC *)GreStretchBltInternal(
                   v137,
                   a2,
                   a3,
                   v126,
                   v133,
                   v127,
                   v132,
                   v136,
                   v126,
                   v133,
                   a9 & 0xDFFFFFFF,
                   a10,
                   (a9 & 0x20000000) != 0 ? 2 : 0);
    goto LABEL_224;
  }
  v150 = a9 & 0xDFFFFFFF;
  v13 = a9 & 0x5FFFFFFF;
  v151 = 0;
  v142 = a9 & 0x5FFFFFFF;
  v130 = 0;
  v131 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v129, v137);
  if ( !v129 )
  {
LABEL_223:
    v129 = 0;
    goto LABEL_224;
  }
  if ( ((_DWORD)v129[6] & 0x10000) != 0 )
  {
    XDCOBJ::vUnlockFast((XDCOBJ *)&v129);
    goto LABEL_223;
  }
  if ( (((unsigned __int8)gajRop3[(unsigned __int8)a9] | (unsigned __int8)gajRop3[BYTE1(a9)]) & 2) != 0
    && v13 != 16711778
    && v13 != 66 )
  {
    bSpDwmValidateSurface(a3, v126, v133, v121, v122);
  }
  v140 = 0;
  v141 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v139, v127);
  if ( v139 )
  {
    bSpDwmValidateSurface(v136, v126, v133, v121, v122);
    v14 = v129;
    v15 = (HDC)v139;
    v149 = (_DWORD *)*((_DWORD *)v129 + 255);
    v144 = v149[37];
    if ( (((unsigned __int8)v144 ^ *(_BYTE *)(*(_DWORD *)(v139 + 1020) + 148)) & 7) != 0
      && (v150 < 0 && (v144 & 1) != 0 || (v144 & 9) == 9) )
    {
      v120 = 0;
      v119 = -1;
      v16 = v149[77];
      v152 = v149[78];
      v17 = DC::dwSetLayout((DC *)v129, -1, 0);
      v14 = v127;
      v15 = v137;
      a2 = v16 - a2 - v124;
      v11 = v132;
      v149 = (_DWORD *)v17;
      v148 = 0x80000000;
    }
    else
    {
      v150 = 0;
    }
    v157 = *(_DWORD *)(*((_DWORD *)v14 + 255) + 228);
    v158[0] = *(_DWORD *)(*((_DWORD *)v14 + 255) + 148) & 1;
    if ( (*(_DWORD *)(*((_DWORD *)v14 + 255) + 340) & 0x1E000) != 0 )
    {
      EXFORMOBJ::vInit((EXFORMOBJ *)&v156, (struct XDCOBJ *)&v127, 0x204u, 0);
      v15 = (HDC)v134;
    }
    else
    {
      v156 = v14 + 60;
    }
    v154 = *(_DWORD *)(*((_DWORD *)v15 + 255) + 228);
    v155 = *(_DWORD *)(*((_DWORD *)v15 + 255) + 148) & 1;
    if ( (*(_DWORD *)(*((_DWORD *)v15 + 255) + 340) & 0x1E000) != 0 )
    {
      EXFORMOBJ::vInit((EXFORMOBJ *)&v153, (struct XDCOBJ *)&v137, 0x204u, 0);
      v18 = (struct MATRIX *)v150;
    }
    else
    {
      v18 = (struct MATRIX *)(v15 + 60);
      v153 = v18;
    }
    if ( ((_BYTE)v156[14] & 1) != 0 && EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v156, v18) )
    {
      v19 = (DC *)v129;
      v20 = v123;
      v21 = (LONG)v131;
      x = (struct ECLIPOBJ *)v133;
      v192.x = (LONG)v130 + v133;
      v22 = (struct ECLIPOBJ *)((char *)v123 + (_DWORD)v129);
      v189 = (DC *)v129;
      v191 = (struct ECLIPOBJ *)((char *)v123 + (_DWORD)v129);
      if ( (*(_BYTE *)(v152 + 56) & 0x43) == 0x43 )
      {
        v23 = v133;
      }
      else
      {
        bCvtPts1(v152, &v189, 2);
        v22 = v191;
        v23 = (int)x;
        v19 = v189;
        v20 = v123;
      }
      if ( v154 )
      {
        v19 = (DC *)((char *)v19 + 1);
        v22 = (DC *)((char *)v22 + 1);
        v189 = v19;
        v191 = v22;
      }
      if ( (int)v19 > (int)v22 )
      {
        v189 = v22;
        v191 = v19;
      }
      if ( v23 > v192.x )
      {
        x = (struct ECLIPOBJ *)v192.x;
        v192.x = v23;
      }
      v24 = (struct ECLIPOBJ *)((char *)v20 + a2);
      v25 = (LONG)v130 + v21;
      v185 = a2;
      v186 = (struct ECLIPOBJ *)v21;
      v187 = v24;
      v188 = (struct ECLIPOBJ *)((char *)v130 + v21);
      if ( (*(_BYTE *)(v155 + 56) & 0x43) != 0x43 )
      {
        bCvtPts1(v155, &v185, 2);
        v25 = (LONG)v188;
        v24 = v187;
        v21 = (LONG)v186;
        a2 = v185;
      }
      if ( v157 )
      {
        ++a2;
        v24 = (struct ECLIPOBJ *)((char *)v24 + 1);
        v185 = a2;
        v187 = v24;
      }
      if ( a2 > (int)v24 )
      {
        v26 = (struct ECLIPOBJ *)a2;
        a2 = (LONG)v24;
        v24 = v26;
        v185 = a2;
        v187 = v26;
      }
      if ( v21 > v25 )
      {
        v27 = v21;
        v21 = v25;
        v25 = v27;
        v186 = (struct ECLIPOBJ *)v21;
        v188 = (struct ECLIPOBJ *)v27;
      }
      if ( (struct ECLIPOBJ *)a2 != v24 && v21 != v25 )
      {
        v28 = v126;
        v29 = *(_DWORD *)(v126 + 24);
        if ( (v29 & 0xE0) != 0 )
        {
          if ( (v29 & 0x20) != 0 )
          {
            ERECTL::operator|=(&v185);
            v28 = v126;
          }
          if ( *(char *)(v28 + 24) < 0 )
            ERECTL::operator|=(&v185);
        }
        LOBYTE(v159) = 0;
        v160 = 0;
        v165 = 0;
        v166 = 0;
        v167 = 256;
        v169 = 0;
        v170 = 0;
        LOWORD(v171) = 256;
        memset(v158, 0, sizeof(v158));
        v163 = 0;
        v161 = 0;
        v162 = 0;
        v172 = 0;
        v175 = 0;
        v173 = 0;
        v174 = 0;
        v178 = 0;
        v176 = 0;
        v177 = 0;
        v164 = 0;
        v168 = 0;
        if ( !DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v158, (struct XDCOBJ *)&v126, (struct XDCOBJ *)&v136, 0) )
        {
          v103 = XDCOBJ::bFullScreen((XDCOBJ *)&v136);
          v125 = XDCOBJ::bFullScreen((XDCOBJ *)&v126) | v103;
LABEL_198:
          DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)&v149);
          goto LABEL_201;
        }
        v30 = (DC *)v126;
        v31 = *(_DWORD *)(v126 + 504);
        v130 = (HDC *)v31;
        if ( !v31 )
          goto LABEL_196;
        v32 = *(XLATEOBJ **)(v31 + 88);
        v33 = *(XLATEOBJ **)(v126 + 60);
        v131 = v32;
        v134 = v33;
        v147 = BYTE2(v140);
        v146 = BYTE2(v140);
        if ( ((BYTE2(v140) ^ (unsigned __int8)(16 * BYTE2(v140))) & 0xF0) != 0 )
        {
          v145 = v126 + 1184;
          v34 = *(_DWORD *)(v126 + 1020);
          if ( (*(_DWORD *)(v34 + 184) & 0x1000) != 0 )
          {
            GreDCSelectBrush(v126, *(_DWORD *)(v34 + 188));
            v32 = v131;
            v33 = v134;
            v30 = (DC *)v126;
          }
          v35 = *((_DWORD *)v30 + 255);
          v36 = *(_DWORD *)(v35 + 184);
          if ( (v36 & 1) != 0 || (*((_BYTE *)v30 + 236) & 1) != 0 )
          {
            v117 = 1;
            *(_DWORD *)(v35 + 184) = v36 & 0xFFFFFFFE;
            *(_DWORD *)(v126 + 236) &= ~1u;
            EBRUSHOBJ::vInitBrush(v145, v126, *(_DWORD *)(v126 + 92), v33, v32, v31, v117);
            v30 = v120;
          }
        }
        else
        {
          v145 = 0;
        }
        ERECTL::bOffsetAdd((ERECTL *)&v179, (const struct _POINTL *)v30 + (*((_DWORD *)v30 + 7) & 1) + 131, 0);
        v37 = v130;
        v38 = v130[126];
        v127 = v38;
        if ( !v38 )
          goto LABEL_196;
        if ( (a11 & 2) != 0 )
        {
LABEL_77:
          v44 = (unsigned int)v37[7] & 1;
          v45 = *((_DWORD *)v38 + 22);
          v136 = v179;
          v118 = 0;
          v129 = (HDC)(v179 - (struct ECLIPOBJ *)v37[2 * v44 + 262] - v183);
          v46 = (LONG)v180;
          v47 = v180 - (char *)v37[2 * v44 + 263] - v184;
          v140 = v180;
          v139 = v47;
          v48 = *((_DWORD *)v127 + 7);
          v123 = 0;
          if ( v48 && v127 == *(HDC *)(v48 + 1820) && ((unsigned int)&loc_20000 & *(_DWORD *)(v48 + 24)) != 0 )
          {
            v49 = *(_DWORD *)(v48 + 1836);
            v50 = *(struct ECLIPOBJ **)(v48 + 1840);
            v118 = v49;
            v123 = v50;
          }
          else
          {
            v49 = 0;
          }
          v51 = (struct ECLIPOBJ *)((char *)v129 + v49);
          v52 = v136;
          if ( (int)v51 > (int)v136 )
          {
            v52 = v51;
            v136 = v51;
            v179 = v51;
          }
          if ( (int)((char *)v123 + v47) > (int)v180 )
          {
            v46 = (LONG)v123 + v47;
            v140 = (char *)v123 + v47;
            v180 = (char *)v123 + v47;
          }
          v118 += (int)v129 + *((_DWORD *)v127 + 8);
          v53 = v120;
          v126 = v181;
          if ( v118 < v181 )
          {
            v126 = v118;
            v181 = v118;
          }
          v54 = v47 + *((_DWORD *)v127 + 9);
          v55 = (struct ECLIPOBJ *)v182;
          v56 = (char *)v123 + v54;
          v135 = v182;
          if ( (int)v56 < (int)v182 )
          {
            v55 = (struct ECLIPOBJ *)v56;
            v135 = v56;
            v182 = v56;
          }
          v57 = v126;
          if ( (int)v52 < v126 && v46 < (int)v55 )
          {
            v123 = 0;
            if ( (int)v52 >= *((_DWORD *)v120 + 258)
              && v126 <= *((_DWORD *)v120 + 260)
              && v46 >= *((_DWORD *)v120 + 259)
              && (int)v55 <= *((_DWORD *)v120 + 261) )
            {
LABEL_101:
              if ( (*((_BYTE *)v53 + 24) & 0xE0) != 0 )
              {
                x = (struct ECLIPOBJ *)v57;
                v188 = v52;
                v189 = (DC *)v46;
                v191 = v55;
                XDCOBJ::vAccumulateTight((XDCOBJ *)&v117, v52, (LONG *)&v188);
                v46 = (LONG)v177;
                v52 = (struct ECLIPOBJ *)v176;
                v53 = (DC *)v117;
                v132 = v179;
                v123 = v178;
                v137 = v177;
                v133 = v176;
              }
              v60 = 0;
              v180 = (char *)v52 - v126;
              v114 = (char *)v52 - v126;
              v181 = v46 - (_DWORD)v136;
              v143 = v46 - (_DWORD)v136;
              v131 = 0;
              if ( *((_DWORD *)v127 + 126) == *((_DWORD *)v53 + 126) )
              {
                v61 = (struct ECLIPOBJ *)v182;
                v62 = (DC *)v183;
                v63 = v133;
                v134 = 0;
                v116 = 1;
                v130 = (HDC *)v182;
              }
              else
              {
                v115 = a10;
                if ( a10 == -1 )
                  v115 = *(_DWORD *)(*((_DWORD *)v127 + 255) + 200);
                inited = EXLATEOBJ::bInitXlateObj(
                           &v131,
                           0,
                           *((_DWORD *)v53 + 20),
                           v45,
                           v122,
                           *((_DWORD *)v127 + 15),
                           v125,
                           *(_DWORD *)(*((_DWORD *)v53 + 255) + 204),
                           *(_DWORD *)(*((_DWORD *)v53 + 255) + 196),
                           v115,
                           0);
                v60 = v131;
                v65 = (*(_BYTE *)(v117 + 24) & 1) == 0;
                v116 = inited;
                v134 = v131;
                v132 = v179;
                v123 = v178;
                if ( v65 )
                {
                  v62 = (DC *)(v179 - v136);
                  v61 = (struct ECLIPOBJ *)((char *)v178 - v126);
                  v130 = (HDC *)((char *)v178 - v126);
                  v182 = (char *)v178 - v126;
                  v183 = v179 - v136;
                }
                else
                {
                  v61 = (struct ECLIPOBJ *)v182;
                  v62 = (DC *)v183;
                  v130 = (HDC *)v182;
                }
                if ( !inited )
                  goto LABEL_191;
                v46 = (LONG)v177;
                v143 = v181;
                v114 = v180;
                v63 = v176;
                v137 = v177;
                v133 = v176;
              }
              x = v61;
              v66 = v63;
              v113 = (SURFOBJ *)(v124 + 16);
              v67 = (LONG)v132;
              v126 = v66;
              v184 = v66;
              v186 = v123;
              v195 = v114;
              v192.x = v46;
              v185 = v46;
              v68 = 0;
              v191 = v62;
              v198 = (int)v62;
              v69 = 0;
              v196 = v143;
              v125 = v121 + 16;
              v187 = v132;
              v197 = (char *)v130;
              v188 = 0;
              v189 = 0;
              if ( *(int *)(v121 + 72) < 0 )
              {
                v70 = *(_DWORD **)(v121 + 28);
                if ( v70 )
                {
                  if ( ((unsigned int)&loc_20000 & v70[6]) != 0 )
                  {
                    v69 = v70[459];
                    v188 = (struct ECLIPOBJ *)v69;
                    v68 = (DC *)v70[460];
                    v189 = v68;
                  }
                }
              }
              v136 = (struct ECLIPOBJ *)(v69 + *(_DWORD *)(v121 + 32));
              x = v136;
              v131 = (XLATEOBJ *)((char *)v68 + *(_DWORD *)(v121 + 36));
              v71 = 0;
              v191 = (DC *)v131;
              v72 = 0;
              v199 = 0;
              v200 = 0;
              if ( *(int *)(v124 + 72) < 0 )
              {
                v73 = *(_DWORD **)(v124 + 28);
                if ( v73 && ((unsigned int)&loc_20000 & v73[6]) != 0 )
                {
                  v71 = v73[459];
                  v199 = v71;
                  v72 = (DC *)v73[460];
                  v200 = v72;
                }
                else
                {
                  v72 = v200;
                }
              }
              v130 = (HDC *)(v71 + *(_DWORD *)(v124 + 32));
              v201 = v130;
              v202 = (int)v72 + *(_DWORD *)(v124 + 36);
              v74 = *(_DWORD *)(v117 + 520);
              v122 = v202;
              if ( (v74 & 1) == 0 || (v74 & 2) != 0 )
              {
                v78 = v123;
              }
              else
              {
                v172 = *(_DWORD *)(v117 + 524);
                v173 = *(DC **)(v117 + 528);
                v75 = *(_DWORD *)(v117 + 536);
                v76 = *(_DWORD *)(v117 + 524);
                v77 = *(_DWORD *)(v117 + 528);
                v174 = *(struct ECLIPOBJ **)(v117 + 532);
                v175 = *(_DWORD *)(v117 + 536);
                v192.x = v76;
                v192.y = v77;
                v193 = v174;
                v194 = v75;
                ltoef_c(1, &v172);
                ltoef_c(1, &v174);
                divff3_c(&v172, &v172, &v192);
                divff3_c(&v174, &v174, &v193);
                ERECTL::vScale((ERECTL *)&v188, (const struct POINTFL *)&v172);
                ERECTL::vScale((ERECTL *)&v184, (const struct POINTFL *)&v172);
                v69 = (int)v188;
                v67 = (LONG)v187;
                v78 = v186;
                v131 = (XLATEOBJ *)v191;
                v136 = x;
                v122 = v202;
                v130 = v201;
                v192.x = v185;
                v126 = v184;
              }
              v79 = *((_DWORD *)v127 + 130);
              if ( (v79 & 1) == 0 || (v79 & 2) != 0 )
              {
                v83 = v192.x;
              }
              else
              {
                v172 = *((_DWORD *)v127 + 131);
                v173 = (DC *)*((_DWORD *)v127 + 132);
                v80 = *((_DWORD *)v127 + 134);
                v81 = *((_DWORD *)v127 + 131);
                v82 = *((_DWORD *)v127 + 132);
                v174 = (struct ECLIPOBJ *)*((_DWORD *)v127 + 133);
                v175 = *((_DWORD *)v127 + 134);
                v192.x = v81;
                v192.y = v82;
                v193 = v174;
                v194 = v80;
                ltoef_c(1, &v172);
                ltoef_c(1, &v174);
                divff3_c(&v172, &v172, &v192);
                divff3_c(&v174, &v174, &v193);
                ERECTL::vScale((ERECTL *)&v199, (const struct POINTFL *)&v172);
                ERECTL::vScale((ERECTL *)&v195, (const struct POINTFL *)&v172);
                v69 = (int)v188;
                v67 = (LONG)v187;
                v78 = v186;
                v83 = v185;
                v131 = (XLATEOBJ *)v191;
                v136 = x;
                v122 = v202;
                v130 = v201;
                v126 = v184;
              }
              v192.x = (LONG)&v195[-v126];
              v173 = (DC *)v83;
              v192.y = v196 - v83;
              v172 = v126;
              v174 = v78;
              v175 = v67;
              if ( v69 <= v126 )
                v69 = v126;
              else
                v172 = v69;
              if ( (int)v189 > v83 )
              {
                v83 = (LONG)v189;
                v173 = v189;
              }
              if ( (int)v136 < (int)v78 )
              {
                v78 = v136;
                v174 = v136;
              }
              if ( (int)v131 < v67 )
              {
                v67 = (LONG)v131;
                v175 = (int)v131;
              }
              if ( (int)v78 >= v69 )
              {
                if ( v67 < v83 )
                  v173 = (DC *)v67;
              }
              else
              {
                v172 = (int)v78;
              }
              ERECTL::bOffsetAdd((ERECTL *)&v172, &v192, 0);
              v84 = v172;
              if ( v199 > v172 )
              {
                v84 = v199;
                v172 = v199;
              }
              v85 = (signed int)v173;
              if ( (int)v200 > (int)v173 )
              {
                v85 = (signed int)v200;
                v173 = v200;
              }
              v86 = v174;
              if ( (int)v130 < (int)v174 )
              {
                v86 = (struct ECLIPOBJ *)v130;
                v174 = (struct ECLIPOBJ *)v130;
              }
              v87 = v175;
              if ( v122 < v175 )
              {
                v87 = v122;
                v175 = v122;
              }
              if ( (int)v86 >= v84 )
              {
                if ( v87 < v85 )
                {
                  v85 = v87;
                  v173 = (DC *)v87;
                }
              }
              else
              {
                v84 = (int)v86;
                v172 = (int)v86;
              }
              v196 = v85;
              v195 = (char *)v84;
              v197 = (char *)v86;
              v198 = v87;
              ERECTL::bOffsetSubtract((ERECTL *)&v172, &v192, 0);
              v184 = v172;
              v185 = (LONG)v173;
              v186 = v174;
              v187 = (struct ECLIPOBJ *)v175;
              if ( v172 >= (int)v174 || (int)v173 >= v175 )
              {
                v90 = v121;
                v112 = 0;
              }
              else
              {
                v88 = *(_DWORD *)(v117 + 520);
                if ( (v88 & 1) != 0 && (v88 & 2) == 0 )
                {
                  v172 = *(_DWORD *)(v117 + 524);
                  v173 = *(DC **)(v117 + 528);
                  v174 = *(struct ECLIPOBJ **)(v117 + 532);
                  v175 = *(_DWORD *)(v117 + 536);
                  ERECTL::vScale((ERECTL *)&v184, (const struct POINTFL *)&v172);
                }
                v89 = *((_DWORD *)v127 + 130);
                if ( (v89 & 1) != 0 && (v89 & 2) == 0 )
                {
                  v172 = *((_DWORD *)v127 + 131);
                  v173 = (DC *)*((_DWORD *)v127 + 132);
                  v174 = (struct ECLIPOBJ *)*((_DWORD *)v127 + 133);
                  v175 = *((_DWORD *)v127 + 134);
                  ERECTL::vScale((ERECTL *)&v195, (const struct POINTFL *)&v172);
                }
                v90 = v121;
                v180 = v195;
                v181 = v196;
                v182 = v197;
                v183 = v198;
                v176 = v184;
                v177 = (HDC)v185;
                v178 = v186;
                v179 = v187;
                ++*(_DWORD *)(v121 + 56);
                v112 = 1;
              }
              v91 = v117;
              v92 = v127;
              v93 = *(_DWORD *)(v117 + 36);
              v122 = *((_DWORD *)v127 + 9);
              if ( v93 != v122 )
              {
                if ( (!XDCOBJ::bRedirHooked((XDCOBJ *)&v117) || *(_DWORD *)(v93 + 2316) != v122)
                  && (*(_WORD *)(v124 + 64) || v113->dhsurf || *(char *)(v93 + 24) < 0) )
                {
                  if ( v112 )
                  {
                    v94 = SimBitBlt(
                            0,
                            v120,
                            v134,
                            &v176,
                            &v180,
                            0,
                            v138,
                            v91 + 1176,
                            v139,
                            (*(_DWORD *)(*(_DWORD *)(v90 + 28) + 24) & 0x80) != 0 ? &v149 : 0);
LABEL_190:
                    v116 = v94;
                    goto LABEL_191;
                  }
                  goto LABEL_191;
                }
                v92 = v127;
              }
              if ( v139 == 52428 )
              {
                v65 = (a11 & 1) == 0;
                v203 = a11 & 1;
                v95 = *(_DWORD *)(v90 + 28);
                if ( v65 )
                {
                  v96 = KeGetCurrentThread;
                }
                else
                {
                  EtwWindowRendering(
                    *(_DWORD *)(v91 + 484),
                    *(_DWORD *)(v91 + 488),
                    **(_DWORD **)(v91 + 504),
                    v133,
                    v137,
                    v123,
                    v132,
                    *((_DWORD *)v92 + 121),
                    *((_DWORD *)v92 + 122),
                    **((_DWORD **)v92 + 126),
                    v114,
                    v143,
                    &v114[abs32(v123 - v132)],
                    v143 + abs32(v132 - (struct ECLIPOBJ *)v137));
                  v96 = KeGetCurrentThread;
                  *(_WORD *)(v121 + 66) |= 0x40u;
                  CurrentThread = KeGetCurrentThread();
                  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
                  if ( ThreadWin32Thread )
                    *(_DWORD *)(ThreadWin32Thread + 180) &= ~1u;
                  GreClientRgnUpdated(0);
                  GreClientRgnUpdatedStable(v111);
                  v90 = v122;
                }
                if ( HIBYTE(v113) )
                {
                  if ( (*(_DWORD *)(v90 + 72) & 0x400) != 0 )
                    (*(void (__cdecl **)(int, char *, int, char *, HDC *, int *))(v95 + 1976))(
                      v90 + 16,
                      v114,
                      v121,
                      v135,
                      &v177,
                      &v181);
                  else
                    ((void (__cdecl *)(int, char *, int, char *, HDC *, int *))EngCopyBits)(
                      v90 + 16,
                      v114,
                      v121,
                      v135,
                      &v177,
                      &v181);
                }
                if ( v203 )
                {
                  *(_WORD *)(v116 + 66) &= ~0x40u;
                  v99 = v96();
                  v100 = W32GetThreadWin32Thread(v99);
                  if ( v100 )
                    *(_DWORD *)(v100 + 180) |= 1u;
                }
                goto LABEL_191;
              }
              if ( v112 )
              {
                v101 = (POINTL *)(v91 + 1176);
                if ( (*(_BYTE *)(v90 + 72) & 1) != 0 )
                  v94 = (*(int (__stdcall **)(int, SURFOBJ *, _DWORD, DC *, XLATEOBJ *, int *, char **, _DWORD, BRUSHOBJ *, POINTL *, ROP4))(*(_DWORD *)(v90 + 28) + 1972))(
                          v90 + 16,
                          v113,
                          0,
                          v120,
                          v134,
                          &v176,
                          &v180,
                          0,
                          v138,
                          v101,
                          v139);
                else
                  v94 = EngBitBlt(
                          (SURFOBJ *)(v90 + 16),
                          v113,
                          0,
                          (CLIPOBJ *)v120,
                          v134,
                          (RECTL *)&v176,
                          (POINTL *)&v180,
                          0,
                          v138,
                          v101,
                          v139);
                goto LABEL_190;
              }
LABEL_191:
              if ( v60 )
              {
                cEntries = v60[1].cEntries;
                if ( cEntries >= 0 )
                {
                  _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 6 * cEntries);
                  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)&v149);
                  goto LABEL_201;
                }
                if ( cEntries == -1 )
                {
                  FreeThreadBufferWithTag(v60);
                  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)&v149);
                  goto LABEL_201;
                }
              }
              goto LABEL_198;
            }
            v123 = (DC *)((char *)v120 + 1568);
            if ( DC::prgnRao(v120) )
              v59 = DC::prgnRao(v58);
            else
              v59 = DC::prgnVisSnap(v58);
            XCLIPOBJ::vSetup((DC *)((char *)v120 + 1568), v59, (struct ERECTL *)&v179, 2);
            v176 = *((_DWORD *)v120 + 393);
            v177 = (HDC)*((_DWORD *)v120 + 394);
            v133 = v176;
            v178 = (struct ECLIPOBJ *)*((_DWORD *)v120 + 395);
            v55 = (struct ECLIPOBJ *)*((_DWORD *)v120 + 396);
            v137 = v177;
            v123 = v178;
            v132 = v55;
            v179 = v55;
            if ( !ERECTL::bEmpty((ERECTL *)&v176) )
            {
              v53 = (DC *)v117;
              v52 = (struct ECLIPOBJ *)v133;
              v57 = (int)v123;
              goto LABEL_101;
            }
          }
LABEL_196:
          v116 = 1;
          DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)&v149);
          goto LABEL_201;
        }
        if ( *((_DWORD *)v38 + 114) && ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *((_DWORD *)v38 + 114) )
          goto LABEL_75;
        v39 = *((_DWORD *)v38 + 18);
        v40 = UserScreenAccessCheck;
        if ( (v39 & 0x800) != 0 )
        {
          v41 = UserSurfaceAccessCheck(*((_DWORD *)v38 + 113));
        }
        else
        {
          if ( (v39 & 0x10000000) == 0 )
            goto LABEL_67;
          v41 = UserScreenAccessCheck();
        }
        if ( !v41 )
        {
LABEL_75:
          EngSetLastError(6u);
          DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)&v152);
          goto LABEL_201;
        }
        v40 = UserScreenAccessCheck;
LABEL_67:
        if ( ((*(_BYTE *)(v31 + 76) & 8) != 0 || *(_DWORD *)(v31 + 144)) && (*(_WORD *)(v31 + 66) & 0x200) != 0 )
          goto LABEL_75;
        v42 = *(_DWORD *)(v31 + 72);
        if ( (v42 & 0x800) != 0 )
        {
          v43 = UserSurfaceAccessCheck(*(_DWORD *)(v31 + 452));
        }
        else
        {
          if ( (v42 & 0x10000000) == 0 )
          {
LABEL_76:
            v37 = v130;
            goto LABEL_77;
          }
          v43 = v40();
        }
        if ( !v43 )
          goto LABEL_75;
        goto LABEL_76;
      }
      v125 = 1;
    }
    else
    {
      v125 = GreStretchBltInternal(v134, a2, v11, v123, v130, v124, v129, v133, v123, v130, v13, a10, 0);
    }
LABEL_201:
    if ( v142 )
      DC::dwSetLayout(v120, -1, v143);
    if ( v129 && (*((_BYTE *)v128 + 32) & 2) != 0 )
    {
      if ( v130 )
      {
        v105 = DC::RestoreAttributes;
      }
      else
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v128);
        v105 = DC::RestoreAttributes;
        if ( UserAttr )
        {
          DC::RestoreAttributes(v128, UserAttr);
          *((_DWORD *)v127 + 8) &= ~2u;
          v128 = 0;
          goto LABEL_211;
        }
      }
      *((_DWORD *)v128 + 8) &= ~2u;
      v129 = 0;
    }
    else
    {
      v105 = DC::RestoreAttributes;
    }
LABEL_211:
    v141 = 0;
    v106 = *(_DWORD *)v127;
    HmgDecrementExclusiveReferenceCountEx(v127, v129, &v141);
    v107 = (void (__stdcall *)(int, _DWORD))bDeleteDCInternalEx;
    if ( v141 )
      bDeleteDCInternalEx(v106, 0);
    goto LABEL_214;
  }
  v107 = (void (__stdcall *)(int, _DWORD))bDeleteDCInternalEx;
  v105 = DC::RestoreAttributes;
LABEL_214:
  if ( v118 && (*(_BYTE *)(v117 + 32) & 2) != 0 )
  {
    if ( !v119 )
    {
      v108 = XDCOBJ::GetUserAttr((XDCOBJ *)&v117);
      if ( v108 )
        v105((DC *)v117, v108);
    }
    *(_DWORD *)(v116 + 32) &= ~2u;
    v117 = 0;
  }
  v140 = 0;
  v109 = *(_DWORD *)v116;
  HmgDecrementExclusiveReferenceCountEx(v116, v118, &v140);
  if ( v140 )
    v107(v109, 0);
LABEL_224:
  NtGdiBitBltInternal_::_2_::ScreenAccessState::_ScreenAccessState((char *)&v145 + 3);
  return v128;
}
