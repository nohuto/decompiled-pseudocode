/*
 * XREFs of _xxxInitializeMoveSizeData@20 @ 0x176FCC
 * Callers:
 *     _xxxDeferWindowPosAndCheckPoint@28 @ 0x14AF0 (_xxxDeferWindowPosAndCheckPoint@28.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YGXPAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PAU_MOVESIZEDATA@@PAJ@Z @ 0x174574 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YGXPAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES.c)
 *     _xxxMoveSize@12 @ 0x177959 (_xxxMoveSize@12.c)
 * Callees:
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     __MonitorFromPoint@16 @ 0x25420 (__MonitorFromPoint@16.c)
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     ?IsSemiMaximized@@YG_NPBUtagWND@@@Z @ 0x35818 (-IsSemiMaximized@@YG_NPBUtagWND@@@Z.c)
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     ?zzzSetCursor@@YGPAUtagCURSOR@@PAU1@@Z @ 0x42628 (-zzzSetCursor@@YGPAUtagCURSOR@@PAU1@@Z.c)
 *     _GetMonitorWorkRectForWindow@8 @ 0x71F30 (_GetMonitorWorkRectForWindow@8.c)
 *     _IsGhostWindowClass@4 @ 0x72C42 (_IsGhostWindowClass@4.c)
 *     ?zzzInternalSetCursorPos@@YGXHHKW4_SetCursorPosReason@@@Z @ 0x7B8F8 (-zzzInternalSetCursorPos@@YGXHHKW4_SetCursorPosReason@@@Z.c)
 *     _GetCaptionHeight@4 @ 0x8EDFE (_GetCaptionHeight@4.c)
 *     ?IsVerticallyMaximized@@YG_NPBUtagWND@@@Z @ 0xB4A40 (-IsVerticallyMaximized@@YG_NPBUtagWND@@@Z.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0xC7072 (-CompositeAppHasForeground@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?AreDockTargetsActive@@YGEPAU_MOVESIZEDATA@@@Z @ 0x170BD9 (-AreDockTargetsActive@@YGEPAU_MOVESIZEDATA@@@Z.c)
 *     ?HitTargetAndMonitorFromPoint@@YGHUtagPOINT@@QBU_MOVESIZEDATA@@PAPAUtagMONITOR@@PAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1715B3 (-HitTargetAndMonitorFromPoint@@YGHUtagPOINT@@QBU_MOVESIZEDATA@@PAPAUtagMONITOR@@PAW4eTHRESHOLD_M.c)
 *     ?xxxGetMinMaxTrackInfo@@YGXPAU_MOVESIZEDATA@@H@Z @ 0x1743B3 (-xxxGetMinMaxTrackInfo@@YGXPAU_MOVESIZEDATA@@H@Z.c)
 *     ?xxxMS_FlushWigglies@@YGXXZ @ 0x1746F4 (-xxxMS_FlushWigglies@@YGXXZ.c)
 *     ?MoveWithArrangementAllowed@@YG_NPAUtagWND@@@Z @ 0x1856F1 (-MoveWithArrangementAllowed@@YG_NPAUtagWND@@@Z.c)
 *     ?SizeWithSnapAllowed@@YG_NPAUtagWND@@@Z @ 0x185784 (-SizeWithSnapAllowed@@YG_NPAUtagWND@@@Z.c)
 *     ?WindowArrangementAllowed@@YG_NPAUtagWND@@@Z @ 0x1857A0 (-WindowArrangementAllowed@@YG_NPAUtagWND@@@Z.c)
 *     _GetScreenRectForWindow@4 @ 0x1B725D (_GetScreenRectForWindow@4.c)
 */

unsigned int __fastcall xxxInitializeMoveSizeData(_DWORD *a1, struct _MOVESIZEDATA *a2, int a3, int a4, int a5)
{
  struct _MOVESIZEDATA *v5; // ebx
  int v7; // edi
  _DWORD *v8; // ecx
  _DWORD *v9; // esi
  _DWORD *v10; // esi
  int v11; // esi
  int v12; // ecx
  int DispInfo; // eax
  int *MonitorWorkRectForWindow; // eax
  _DWORD *v15; // ecx
  int v16; // eax
  LONG *v17; // esi
  int *ScreenRectForWindow; // eax
  LONG *v19; // esi
  int *v20; // ecx
  _DWORD *v21; // esi
  _DWORD *v22; // esi
  int TopLevelWindow; // eax
  int v24; // ecx
  LONG *v25; // esi
  LONG *v26; // esi
  int v27; // eax
  int v28; // eax
  _DWORD *v29; // esi
  int v30; // eax
  unsigned int v31; // ecx
  int v32; // eax
  _DWORD *v33; // ecx
  BOOL v34; // eax
  int v35; // edx
  int v36; // edx
  int v37; // eax
  int v38; // eax
  int v39; // ecx
  int v40; // edx
  unsigned int v41; // eax
  int v42; // ecx
  struct _MOVESIZEDATA *v43; // eax
  _DWORD *v44; // esi
  _BYTE *v45; // eax
  int v46; // ecx
  _BYTE *v47; // eax
  int v48; // eax
  unsigned int v49; // edx
  int v50; // edx
  int v51; // edi
  int v52; // eax
  unsigned int v53; // ecx
  int v54; // edx
  int v55; // eax
  unsigned int v56; // edx
  int v57; // edx
  int v58; // edx
  char v59; // al
  void *v60; // edx
  void *v61; // edx
  _DWORD *v62; // edx
  int v63; // ecx
  int v64; // eax
  bool v65; // zf
  int v66; // eax
  int v67; // ecx
  int v68; // edx
  struct _MOVESIZEDATA *v69; // eax
  int v70; // eax
  int v71; // ecx
  int v72; // eax
  int v73; // edx
  unsigned int v74; // ecx
  unsigned int v75; // edx
  unsigned int v76; // edx
  unsigned int v77; // edx
  int v78; // edx
  int v79; // ecx
  int v80; // eax
  int v81; // eax
  unsigned int result; // eax
  struct tagPOINT v83; // [esp-Ch] [ebp-88h]
  int v84; // [esp-8h] [ebp-84h]
  char *v85; // [esp-4h] [ebp-80h]
  struct _MOVESIZEDATA *v86; // [esp-4h] [ebp-80h]
  struct tagWND *v87; // [esp+0h] [ebp-7Ch]
  struct tagWND *v88; // [esp+0h] [ebp-7Ch]
  struct tagWND *v89; // [esp+0h] [ebp-7Ch]
  enum eTHRESHOLD_MARGIN_DIRECTION *v90; // [esp+4h] [ebp-78h]
  char v91[16]; // [esp+10h] [ebp-6Ch] BYREF
  _DWORD v92[4]; // [esp+20h] [ebp-5Ch] BYREF
  int v93; // [esp+30h] [ebp-4Ch] BYREF
  int v94; // [esp+38h] [ebp-44h] BYREF
  char *v95; // [esp+3Ch] [ebp-40h]
  int v96; // [esp+44h] [ebp-38h]
  _DWORD *v97; // [esp+48h] [ebp-34h]
  int v98; // [esp+4Ch] [ebp-30h]
  struct _MOVESIZEDATA *v99; // [esp+50h] [ebp-2Ch]
  struct tagRECT v100; // [esp+54h] [ebp-28h] BYREF
  int v101; // [esp+64h] [ebp-18h] BYREF
  int v102; // [esp+68h] [ebp-14h]
  int v103; // [esp+6Ch] [ebp-10h]
  int v104; // [esp+70h] [ebp-Ch]

  memset(v92, 0, sizeof(v92));
  v5 = a2;
  v99 = a2;
  v97 = a1;
  v7 = 16;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q((int)a1, (int)a2, 1u, 16, (int)&WPP_44fe173a72dc32ad3264e41cf6895406_Traceguids, (char)a1);
  }
  if ( *(_DWORD *)(_gptiCurrent + 236) != _gpqForeground && !CoreWindowProp::CompositeAppHasForeground(a1) )
    v7 = 0;
  v8 = a1;
  *((_DWORD *)v5 + 46) = v7 | *((_DWORD *)v5 + 46) & 0xFFFFFFEF;
  v9 = (_DWORD *)(a1[5] + 52);
  *((_DWORD *)v5 + 27) = *v9++;
  *((_DWORD *)v5 + 28) = *v9++;
  *((_DWORD *)v5 + 29) = *v9;
  *((_DWORD *)v5 + 30) = v9[1];
  v10 = (_DWORD *)(v8[5] + 52);
  *((_DWORD *)v5 + 31) = *v10++;
  *((_DWORD *)v5 + 32) = *v10++;
  *((_DWORD *)v5 + 33) = *v10;
  *((_DWORD *)v5 + 34) = v10[1];
  v11 = v8[14];
  if ( v11 == _GetDesktopWindow(v8) )
  {
    if ( (*(_BYTE *)(*(_DWORD *)(v12 + 20) + 16) & 0x88) != 0 || *(_DWORD *)*_gpDispInfo > 1u )
    {
      ScreenRectForWindow = (int *)GetScreenRectForWindow(v12, v91);
      v95 = (char *)v5 + 76;
      v101 = *ScreenRectForWindow;
      v102 = ScreenRectForWindow[1];
      v103 = ScreenRectForWindow[2];
      v104 = ScreenRectForWindow[3];
      *((_DWORD *)v5 + 19) = v101;
      *((_DWORD *)v5 + 20) = v102;
      *((_DWORD *)v5 + 21) = v103;
      *((_DWORD *)v5 + 22) = v104;
      v17 = (LONG *)(*_gpDispInfo + 12);
    }
    else
    {
      DispInfo = GetDispInfo();
      MonitorWorkRectForWindow = GetMonitorWorkRectForWindow(*(_DWORD *)(DispInfo + 52), v97, &v93);
      v15 = (_DWORD *)((char *)v99 + 76);
      v101 = *MonitorWorkRectForWindow;
      v102 = MonitorWorkRectForWindow[1];
      v103 = MonitorWorkRectForWindow[2];
      v104 = MonitorWorkRectForWindow[3];
      v95 = (char *)v99 + 76;
      *((_DWORD *)v99 + 19) = v101;
      v15[1] = v102;
      v15[2] = v103;
      v15[3] = v104;
      v16 = GetDispInfo();
      v5 = v99;
      v17 = (LONG *)(*(_DWORD *)(*(_DWORD *)(v16 + 52) + 20) + 32);
    }
    v100.left = *v17;
    v19 = v17 + 1;
    v20 = (int *)((char *)v5 + 76);
    v100.top = *v19;
    *(_QWORD *)&v100.right = *(_QWORD *)(v19 + 1);
    v21 = v97;
  }
  else
  {
    v22 = (_DWORD *)(*(_DWORD *)(v11 + 20) + 68);
    *((_DWORD *)v5 + 19) = *v22++;
    *((_DWORD *)v5 + 20) = *v22++;
    *((_DWORD *)v5 + 21) = *v22;
    *((_DWORD *)v5 + 22) = v22[1];
    TransformRectBetweenCoordinateSpaces((char *)v5 + 76, (char *)v5 + 76, v12, *(_DWORD *)(v12 + 56));
    TopLevelWindow = _GetTopLevelWindow((int)v97);
    if ( TopLevelWindow && (v24 = *(_DWORD *)(*(_DWORD *)(TopLevelWindow + 20) + 108)) != 0 )
    {
      v101 = 0;
      v102 = 0;
      v103 = 0;
      v104 = 0;
      v25 = (LONG *)((char *)v5 + 76);
      if ( GreGetRgnBox(v24, &v101) )
        IntersectRect((_DWORD *)v5 + 19, (int *)v5 + 19, &v101);
    }
    else
    {
      v25 = (LONG *)((char *)v5 + 76);
    }
    v100.left = *v25;
    v26 = v25 + 1;
    v100.top = *v26;
    *(_QWORD *)&v100.right = *(_QWORD *)(v26 + 1);
    v21 = v97;
    v95 = (char *)v5 + 76;
    v27 = IsWindowDesktopComposed(v97);
    v20 = (int *)((char *)v5 + 76);
    if ( v27 )
    {
      v28 = v97[5];
      v95 = (char *)v5 + 76;
      if ( (*(_DWORD *)(v28 + 184) & 0xF) != 2 )
      {
        LogicalToPhysicalDPIRect(&v100, &v100, *(_DWORD *)(v28 + 184), 0);
        v20 = (int *)((char *)v5 + 76);
        v95 = (char *)v5 + 76;
      }
    }
  }
  v96 = v21[14];
  v98 = (__int16)a4;
  v99 = (struct _MOVESIZEDATA *)SHIWORD(a4);
  if ( *(_DWORD *)(*(_DWORD *)(v96 + 20) + 108) )
  {
    v101 = *((_DWORD *)v5 + 27);
    v94 = v98;
    v95 = (char *)SHIWORD(a4);
    v102 = *((_DWORD *)v5 + 28);
    v103 = *((_DWORD *)v5 + 29);
    v104 = *((_DWORD *)v5 + 30);
    v29 = v97;
    TransformRectBetweenCoordinateSpaces(&v101, &v101, v96, v97);
    TransformPointBetweenCoordinateSpaces(&v94, &v94, v29[14], v29);
    v30 = GreRectInRegion(*(_DWORD *)(*(_DWORD *)(v29[14] + 20) + 108), &v101);
    v85 = v95;
    v84 = v94;
    *((_DWORD *)v5 + 46) = (v30 != 0 ? 0 : 64) | *((_DWORD *)v5 + 46) & 0xFFFFFFBF;
    v31 = ((unsigned int)&loc_1FFFFC
         + (GrePtInRegion(*(_DWORD *)(*(_DWORD *)(v29[14] + 20) + 108), v84, v85) != 0 ? 0xFFE00000 : 0)
         + 4) | *((_DWORD *)v5 + 46) & 0xFFDFFFFF;
  }
  else
  {
    v32 = IntersectRect(v92, (int *)v5 + 27, v20);
    v86 = v99;
    v33 = v95;
    *((_DWORD *)v5 + 46) = (v32 != 0 ? 0 : 64) | *((_DWORD *)v5 + 46) & 0xFFFFFFBF;
    v34 = PtInRect(v33, (__int16)a4, (int)v86);
    v31 = v35 & 0xFFDFFFFF | ((unsigned int)&loc_1FFFFC + (v34 ? 0xFFE00000 : 0) + 4);
  }
  *((_DWORD *)v5 + 46) = v31;
  if ( (v31 & 0x100000) != 0 )
    CCursorClip::SetClip(_gpCursorClip, v100);
  v36 = a5;
  if ( (((a5 & 4) == 0) & (*(_BYTE *)(v97[5] + 23) >> 5)) != 0 )
  {
    v37 = *(_DWORD *)(_gpsi + 1724);
    *((_DWORD *)v5 + 25) = v37;
    *((_DWORD *)v5 + 23) = v37;
    v38 = *(_DWORD *)(_gpsi + 1728);
    *((_DWORD *)v5 + 26) = v38;
    *((_DWORD *)v5 + 24) = v38;
  }
  else
  {
    xxxGetMinMaxTrackInfo((int)v5, a5 & 1);
    v36 = a5;
  }
  *((_DWORD *)v5 + 53) = 0;
  *((_DWORD *)v5 + 52) = 4;
  v39 = v36;
  v40 = v98;
  *((_DWORD *)v5 + 3) = *((_DWORD *)v5 + 27);
  *((_DWORD *)v5 + 63) = v40;
  *((_DWORD *)v5 + 65) = v40;
  *((_DWORD *)v5 + 4) = *((_DWORD *)v5 + 28);
  *((_DWORD *)v5 + 5) = *((_DWORD *)v5 + 29);
  *((_DWORD *)v5 + 6) = *((_DWORD *)v5 + 30);
  *((_DWORD *)v5 + 7) = *((_DWORD *)v5 + 3);
  *((_DWORD *)v5 + 8) = *((_DWORD *)v5 + 4);
  *((_DWORD *)v5 + 9) = *((_DWORD *)v5 + 5);
  *((_DWORD *)v5 + 10) = *((_DWORD *)v5 + 6);
  *((_DWORD *)v5 + 11) = *((_DWORD *)v5 + 3);
  *((_DWORD *)v5 + 12) = *((_DWORD *)v5 + 4);
  *((_DWORD *)v5 + 13) = *((_DWORD *)v5 + 5);
  *((_DWORD *)v5 + 14) = *((_DWORD *)v5 + 6);
  v41 = *((_DWORD *)v5 + 46) & 0xFBFFFFFC;
  *((_DWORD *)v5 + 15) = *((_DWORD *)v5 + 3);
  v42 = v41 | ~(v39 << 25) & 0x4000000;
  v43 = v99;
  *((_DWORD *)v5 + 64) = v99;
  *((_DWORD *)v5 + 46) = v42 & 0x7CFBFF7F;
  *((_DWORD *)v5 + 16) = *((_DWORD *)v5 + 4);
  *((_DWORD *)v5 + 66) = v43;
  *((_DWORD *)v5 + 17) = *((_DWORD *)v5 + 5);
  *((_DWORD *)v5 + 18) = *((_DWORD *)v5 + 6);
  v44 = v97;
  if ( SizeWithSnapAllowed(v87)
    && AreDockTargetsActive(v5)
    && (v45 = (_BYTE *)v44[5], (v45[22] & 4) != 0)
    && (v45[16] & 0x40) == 0
    && (v45[23] & 0x40) == 0
    && (*(_BYTE *)(*(_DWORD *)(*((_DWORD *)v5 + 2) + 20) + 22) & 1) != 0
    && !IsGhostWindowClass(v44) )
  {
    v46 = 1024;
  }
  else
  {
    v46 = 0;
  }
  *((_DWORD *)v5 + 46) = v46 | *((_DWORD *)v5 + 46) & 0xFFFFFBFF;
  if ( MoveWithArrangementAllowed(v88)
    && AreDockTargetsActive(v5)
    && (v47 = (_BYTE *)v44[5], (v47[22] & 4) != 0)
    && (v47[16] & 0x40) == 0
    && (v47[23] & 0x40) == 0
    && (*(_BYTE *)(*(_DWORD *)(*((_DWORD *)v5 + 2) + 20) + 22) & 1) != 0
    && !IsGhostWindowClass(v44) )
  {
    v48 = 2048;
  }
  else
  {
    v48 = 0;
  }
  v49 = v48 | *((_DWORD *)v5 + 46) & 0xFFFFF7FF;
  *((_DWORD *)v5 + 46) = v49;
  if ( (v49 & 0xC00) != 0xC00 )
  {
    if ( !IsSemiMaximized(v44) )
    {
      if ( !WindowArrangementAllowed(v89) || (*(_BYTE *)(v44[5] + 23) & 1) == 0 )
        goto LABEL_55;
      v50 = *((_DWORD *)v5 + 46);
    }
    if ( (v50 & 0x800) == 0 )
    {
      v50 |= 0x800800u;
      *((_DWORD *)v5 + 46) = v50;
    }
    if ( (v50 & 0x400) == 0 )
      *((_DWORD *)v5 + 46) = v50 | 0x400400;
  }
LABEL_55:
  v51 = a3;
  if ( (*((_DWORD *)v5 + 46) & 0xC00) == 0 )
  {
    v52 = _MonitorFromPoint(v98, (int)v99, 2u, 0);
    v53 = *((_DWORD *)v5 + 46);
    *((_DWORD *)v5 + 51) = v52;
    goto LABEL_98;
  }
  if ( IsSemiMaximized(v44) || (*(_BYTE *)(v44[5] + 23) & 1) != 0 )
    v55 = 4096;
  else
    v55 = 0;
  v56 = v55 | v54 & 0xFFFFEFFF;
  *((_DWORD *)v5 + 46) = v56;
  if ( (v56 & 0x1000) != 0 )
  {
    *((_DWORD *)v5 + 53) = 2;
    *((_DWORD *)v5 + 46) = v56 | 0x40000;
  }
  v83.y = v98;
  v83.x = (LONG)v5 + 208;
  HitTargetAndMonitorFromPoint((LONG *)v5 + 51, v5, v83, v99, (struct tagMONITOR **)v89, v90);
  v96 = *((_DWORD *)v5 + 46);
  if ( (v96 & 0x38000) == 0 && IsSemiMaximized(v44) && a3 == 9 )
    *((_DWORD *)v5 + 46) = (unsigned int)&loc_20000 | v57 & 0xFFFE7FFF;
  v96 = v44[5];
  if ( (*(_BYTE *)(v96 + 23) & 1) != 0 || IsVerticallyMaximized(v44) )
  {
    *((_DWORD *)v5 + 52) = 0;
    if ( IsVerticallyMaximized(v44) && (a3 == 6 || a3 == 7 || a3 == 8) )
      *v62 = 3;
    goto LABEL_97;
  }
  v59 = *(_BYTE *)(v96 + 145);
  if ( (v59 & 1) == 0 )
  {
    if ( (v59 & 2) == 0 )
    {
      *((_DWORD *)v5 + 52) = 4;
      goto LABEL_97;
    }
    v61 = (void *)(v58 & 0x38000);
    if ( v61 != &loc_20000 )
    {
      if ( v61 )
        goto LABEL_90;
      if ( a3 == 6 || a3 == 7 || a3 == 8 )
        goto LABEL_75;
      if ( a3 != 3 && a3 != 4 && a3 != 5 )
      {
LABEL_90:
        *((_DWORD *)v5 + 52) = 2;
        goto LABEL_97;
      }
    }
    goto LABEL_80;
  }
  v60 = (void *)(v58 & 0x38000);
  if ( v60 == &loc_20000 )
    goto LABEL_80;
  if ( v60 )
  {
LABEL_79:
    *((_DWORD *)v5 + 52) = 1;
    goto LABEL_97;
  }
  if ( a3 != 6 && a3 != 7 && a3 != 8 )
  {
    if ( a3 != 3 && a3 != 4 && a3 != 5 )
      goto LABEL_79;
LABEL_80:
    *((_DWORD *)v5 + 52) = 0;
    goto LABEL_97;
  }
LABEL_75:
  *((_DWORD *)v5 + 52) = 3;
LABEL_97:
  v53 = *((_DWORD *)v5 + 46) ^ ((unsigned __int8)*((_DWORD *)v5 + 46) ^ (unsigned __int8)(*((_DWORD *)v5 + 46) >> 5)) & 0x80;
  *((_DWORD *)v5 + 46) = v53;
LABEL_98:
  *((_DWORD *)v5 + 41) = a3;
  if ( a3 )
  {
    if ( a3 != 10 )
      goto LABEL_110;
    v51 = 9;
    *((_DWORD *)v5 + 41) = 9;
  }
  zzzSetCursor(*(void **)(_gasyscur[0] + 4828));
  v63 = *((_DWORD *)v5 + 46);
  if ( (*(_BYTE *)(v44[5] + 23) & 0x20) == 0 )
    v63 |= 1u;
  *((_DWORD *)v5 + 44) = v98;
  *((_DWORD *)v5 + 45) = v99;
  v64 = *((_DWORD *)v5 + 3) + *((_DWORD *)v5 + 5);
  *((_DWORD *)v5 + 46) = v63 | 2;
  v65 = (*(_BYTE *)(v44[5] + 23) & 0x20) == 0;
  v98 = v64 / 2;
  if ( v65 && *((_DWORD *)v5 + 41) == 9 )
    v66 = *((_DWORD *)v5 + 4) + GetCaptionHeight(v44) / 2 + 3;
  else
    v66 = (*((_DWORD *)v5 + 4) + *((_DWORD *)v5 + 6)) / 2;
  v99 = (struct _MOVESIZEDATA *)v66;
  zzzInternalSetCursorPos((struct tagPOINT *)v98, v66, 1, 0);
  xxxMS_FlushWigglies();
  v67 = *((_DWORD *)v5 + 46);
  if ( (v67 & 0x400) == 0 )
    *((_DWORD *)v5 + 52) = 4;
  v68 = v98;
  v53 = v67 & 0xFFFFFF7F;
  v69 = v99;
  *((_DWORD *)v5 + 46) = v53;
  *((_DWORD *)v5 + 63) = v68;
  *((_DWORD *)v5 + 64) = v69;
  *((_DWORD *)v5 + 65) = v68;
  *((_DWORD *)v5 + 66) = v69;
LABEL_110:
  v70 = v53 ^ ((unsigned __int8)v53 ^ (unsigned __int8)(_gdwPUDFlags >> 15)) & 0x20;
  v71 = *((_DWORD *)v5 + 27);
  *((_DWORD *)v5 + 63) -= v71;
  *((_DWORD *)v5 + 65) -= v71;
  *((_DWORD *)v5 + 46) = v70;
  v72 = *((_DWORD *)v5 + 28);
  *((_DWORD *)v5 + 64) -= v72;
  *((_DWORD *)v5 + 66) -= v72;
  *((_DWORD *)v5 + 49) = *((_DWORD *)v5 + 51);
  *((_DWORD *)v5 + 50) = *((_DWORD *)v5 + 52);
  *((_DWORD *)v5 + 48) = ValidateHmonitorNoRip(*(_DWORD *)(v44[5] + 164));
  v73 = *((_DWORD *)v5 + 46) ^ (*((_DWORD *)v5 + 46) ^ ~(*((_DWORD *)v5 + 46) << 23)) & 0x10000000;
  *((_DWORD *)v5 + 46) = v73;
  v74 = v73 & 0xFFFFDFFF | ((*(_BYTE *)(v44[5] + 145) & 1) << 13);
  *((_DWORD *)v5 + 46) = v74;
  v75 = v74 & 0xFFFFBFFF | ((*(_BYTE *)(v44[5] + 145) & 2) << 13);
  v76 = ((unsigned __int16)v75 ^ (unsigned __int16)(v75 >> 5)) & 0x100 ^ v75;
  v77 = (((unsigned __int16)v76 ^ (unsigned __int16)(v76 >> 5)) & 0x200 ^ v76) & 0xDFF7FFFF;
  *((_DWORD *)v5 + 46) = v77;
  if ( (v77 & 2) != 0 )
  {
    *((_DWORD *)v5 + 46) = v77 & 0xFFFFF3FF;
    if ( IsSemiMaximized(v44) )
      *((_DWORD *)v5 + 46) = v78 | 0xC00C00;
  }
  v79 = v98;
  *((_DWORD *)v5 + 42) = dword_25877C[v51];
  *((_DWORD *)v5 + 43) = dword_258750[v51];
  v80 = dword_251404[v51];
  if ( v80 != -1 )
    *((_DWORD *)v5 + 39) = *((_DWORD *)v5 + (__int16)v80 + 27) - v79;
  v81 = dword_2513D8[v51];
  if ( v81 != -1 )
    *((_DWORD *)v5 + 40) = *((_DWORD *)v5 + (__int16)v81 + 27) - (_DWORD)v99;
  *((_DWORD *)v5 + 68) = v99;
  *((_DWORD *)v5 + 67) = v79;
  *((_DWORD *)v5 + 77) = a5;
  memset((char *)v5 + 216, 0, 0x20u);
  result = *((_DWORD *)v5 + 62) & 0xFFFFFFF4 | (*(unsigned __int8 *)(v44[5] + 146) >> 7) & 0xFFFFFFF5 | (2 * (a5 & 4 | (*(_BYTE *)(v44[5] + 146) >> 7)));
  *((_DWORD *)v5 + 62) = result;
  return result;
}
