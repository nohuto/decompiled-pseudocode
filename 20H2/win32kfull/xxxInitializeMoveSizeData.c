/*
 * XREFs of xxxInitializeMoveSizeData @ 0x1C02119DC
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C001B770 (xxxDeferWindowPosAndCheckPoint.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C020E8B4 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     xxxMoveSize @ 0x1C0212444 (xxxMoveSize.c)
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C000796C (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     GetMonitorWorkRectForWindow @ 0x1C0018B80 (GetMonitorWorkRectForWindow.c)
 *     _MonitorFromPoint @ 0x1C003C200 (_MonitorFromPoint.c)
 *     WPP_RECORDER_SF_q @ 0x1C003EC50 (WPP_RECORDER_SF_q.c)
 *     PtInRect @ 0x1C00406DC (PtInRect.c)
 *     IntersectRect @ 0x1C0045758 (IntersectRect.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     _GetTopLevelWindow @ 0x1C0046FE0 (_GetTopLevelWindow.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0094BE8 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00C0948 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     GetCaptionHeight @ 0x1C0109718 (GetCaptionHeight.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?AreDockTargetsActive@@YAEPEAU_MOVESIZEDATA@@@Z @ 0x1C020A31C (-AreDockTargetsActive@@YAEPEAU_MOVESIZEDATA@@@Z.c)
 *     ?HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020AFB8 (-HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHO.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C020E67C (-xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C020EA80 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     ?MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0223604 (-MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?SizeWithSnapAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C02236CC (-SizeWithSnapAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C02236F8 (-WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     GetScreenRectForWindow @ 0x1C025D48C (GetScreenRectForWindow.c)
 */

__int64 __fastcall xxxInitializeMoveSizeData(struct tagWND *a1, struct _MOVESIZEDATA *a2, int a3, int a4, int a5)
{
  struct _MOVESIZEDATA *v7; // rdi
  int v9; // ebx
  __int64 DesktopWindow; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 DispInfo; // rax
  int *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct tagRECT v20; // xmm0
  __int64 TopLevelWindow; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  int *v24; // rdx
  unsigned int v25; // r12d
  int v26; // r15d
  __int128 v27; // xmm0
  __int64 v28; // rbx
  int v29; // eax
  __int64 v30; // r8
  __int64 v31; // rdx
  unsigned int v32; // eax
  BOOL v33; // eax
  int v34; // r8d
  int v35; // ecx
  int v36; // ecx
  __int128 v37; // xmm0
  int v38; // eax
  int *v39; // r14
  _BYTE *v40; // rcx
  int v41; // ecx
  bool v42; // al
  __int64 v43; // r9
  _BYTE *v44; // rcx
  int v45; // eax
  unsigned int v46; // edx
  int v47; // ecx
  __int64 v48; // rax
  unsigned int v49; // edx
  __int64 v50; // rdx
  int v51; // eax
  unsigned int v52; // ecx
  unsigned int v53; // edx
  __int64 v54; // rcx
  char v55; // cl
  int v56; // edx
  int v57; // edx
  int v58; // ecx
  int v59; // edx
  int v60; // eax
  int v61; // ecx
  int v62; // edx
  int v63; // eax
  int v64; // ecx
  int v65; // edx
  unsigned int v66; // ecx
  unsigned int v67; // edx
  unsigned int v68; // edx
  unsigned int v69; // edx
  unsigned int v70; // edx
  int v71; // eax
  int v72; // eax
  __int64 result; // rax
  struct tagPOINT v74; // [rsp+30h] [rbp-41h]
  __int128 v75; // [rsp+38h] [rbp-39h] BYREF
  struct tagRECT v76; // [rsp+50h] [rbp-21h] BYREF
  __int128 v77; // [rsp+60h] [rbp-11h] BYREF
  struct tagRECT v78; // [rsp+70h] [rbp-1h] BYREF

  v75 = 0LL;
  v7 = a2;
  v9 = 16;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      (_DWORD)a1,
      (_DWORD)a2,
      1,
      16,
      (__int64)&WPP_44fe173a72dc32ad3264e41cf6895406_Traceguids,
      (char)a1);
  }
  if ( *(_QWORD *)(gptiCurrent + 432LL) != gpqForeground && !(unsigned int)CoreWindowProp::CompositeAppHasForeground(a1) )
    v9 = 0;
  *((_DWORD *)v7 + 49) = v9 | *((_DWORD *)v7 + 49) & 0xFFFFFFEF;
  *(_OWORD *)((char *)v7 + 120) = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  *(_OWORD *)((char *)v7 + 136) = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  DesktopWindow = GetDesktopWindow((__int64)a1);
  if ( v11 == DesktopWindow )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL) & 0x88) != 0 || *(_DWORD *)*gpDispInfo > 1u )
    {
      v15 = (int *)((char *)v7 + 88);
      *(_OWORD *)((char *)v7 + 88) = *(_OWORD *)GetScreenRectForWindow(&v76, a1);
      v20 = *(struct tagRECT *)(*gpDispInfo + 24LL);
    }
    else
    {
      DispInfo = GetDispInfo(gpDispInfo, v11, v12, v13);
      v15 = (int *)((char *)v7 + 88);
      *(_OWORD *)((char *)v7 + 88) = *GetMonitorWorkRectForWindow(&v76, *(_QWORD *)(DispInfo + 96), a1);
      v20 = *(struct tagRECT *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo(v17, v16, v18, v19) + 96) + 40LL) + 44LL);
    }
    v78 = v20;
  }
  else
  {
    *(_OWORD *)((char *)v7 + 88) = *(_OWORD *)(*(_QWORD *)(v11 + 40) + 104LL);
    TransformRectBetweenCoordinateSpaces((char *)v7 + 88, (char *)v7 + 88, a1, *((_QWORD *)a1 + 13));
    TopLevelWindow = GetTopLevelWindow((__int64)a1);
    if ( TopLevelWindow )
    {
      v22 = *(_QWORD *)(*(_QWORD *)(TopLevelWindow + 40) + 168LL);
      if ( v22 )
      {
        v77 = 0LL;
        if ( (unsigned int)GreGetRgnBox(v22, &v77) )
          IntersectRect((_DWORD *)v7 + 22, (int *)v7 + 22, (int *)&v77);
      }
    }
    v15 = (int *)((char *)v7 + 88);
    v78 = *(struct tagRECT *)((char *)v7 + 88);
    if ( (unsigned int)IsWindowDesktopComposed(a1) && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2 )
      LogicalToPhysicalDPIRect(&v78, &v78, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), 0LL);
  }
  v23 = *((_QWORD *)a1 + 13);
  v24 = (int *)((char *)v7 + 120);
  v25 = (__int16)a4;
  v26 = SHIWORD(a4);
  if ( *(_QWORD *)(*(_QWORD *)(v23 + 40) + 168LL) )
  {
    v27 = *(_OWORD *)v24;
    v28 = __PAIR64__(v26, v25);
    *(_QWORD *)&v75 = __PAIR64__(v26, v25);
    v77 = v27;
    TransformRectBetweenCoordinateSpaces(&v77, &v77, v23, a1);
    TransformPointBetweenCoordinateSpaces(&v75, &v75, *((_QWORD *)a1 + 13), a1);
    v29 = GreRectInRegion(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL) + 168LL), &v77);
    v30 = DWORD1(v75);
    v31 = (unsigned int)v75;
    *((_DWORD *)v7 + 49) = (v29 != 0 ? 0 : 0x40) | *((_DWORD *)v7 + 49) & 0xFFFFFFBF;
    v32 = ((unsigned int)GrePtInRegion(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL) + 168LL), v31, v30) != 0
         ? 0
         : 0x200000) | *((_DWORD *)v7 + 49) & 0xFFDFFFFF;
  }
  else
  {
    v28 = __PAIR64__(v26, v25);
    *((_DWORD *)v7 + 49) = ((unsigned int)IntersectRect(&v75, v24, v15) == 0 ? 0x40 : 0) | *((_DWORD *)v7 + 49) & 0xFFFFFFBF;
    v33 = PtInRect(v15, __PAIR64__(v26, v25));
    v32 = v34 & 0xFFDFFFFF | (!v33 ? 0x200000 : 0);
  }
  *((_DWORD *)v7 + 49) = v32;
  if ( (v32 & 0x100000) != 0 )
  {
    v76 = v78;
    CCursorClip::SetClip(gpCursorClip, &v76);
  }
  if ( (((a5 & 4) == 0) & (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) >> 5)) != 0 )
  {
    v35 = *(_DWORD *)(gpsi + 2124LL);
    *((_DWORD *)v7 + 28) = v35;
    *((_DWORD *)v7 + 26) = v35;
    v36 = *(_DWORD *)(gpsi + 2128LL);
    *((_DWORD *)v7 + 29) = v36;
    *((_DWORD *)v7 + 27) = v36;
  }
  else
  {
    xxxGetMinMaxTrackInfo(v7, a5 & 1);
  }
  v37 = *(_OWORD *)((char *)v7 + 120);
  v38 = *((_DWORD *)v7 + 49);
  *((_DWORD *)v7 + 61) = 0;
  v39 = (int *)((char *)v7 + 240);
  *((_DWORD *)v7 + 60) = 4;
  *((_DWORD *)v7 + 71) = v25;
  *((_DWORD *)v7 + 72) = v26;
  *((_DWORD *)v7 + 73) = v25;
  *((_DWORD *)v7 + 74) = v26;
  *((_DWORD *)v7 + 49) = v38 & 0x78FBFF7C | ~(a5 << 25) & 0x4000000;
  *(_OWORD *)((char *)v7 + 24) = v37;
  *(_OWORD *)((char *)v7 + 40) = v37;
  *(_OWORD *)((char *)v7 + 56) = v37;
  *(_OWORD *)((char *)v7 + 72) = v37;
  if ( SizeWithSnapAllowed(a1)
    && AreDockTargetsActive(v7)
    && (v40 = (_BYTE *)*((_QWORD *)a1 + 5), (v40[30] & 4) != 0)
    && (v40[24] & 0x40) == 0
    && (v40[31] & 0x40) == 0
    && (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL) + 30LL) & 1) != 0
    && **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) != *(_WORD *)(gpsi + 900LL) )
  {
    v41 = 1024;
  }
  else
  {
    v41 = 0;
  }
  *((_DWORD *)v7 + 49) = v41 | *((_DWORD *)v7 + 49) & 0xFFFFFBFF;
  v42 = MoveWithArrangementAllowed(a1);
  v43 = 2048LL;
  if ( v42
    && AreDockTargetsActive(v7)
    && (v44 = (_BYTE *)*((_QWORD *)a1 + 5), (v44[30] & 4) != 0)
    && (v44[24] & 0x40) == 0
    && (v44[31] & 0x40) == 0
    && (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL) + 30LL) & 1) != 0
    && **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) != *(_WORD *)(gpsi + 900LL) )
  {
    v45 = v43;
  }
  else
  {
    v45 = 0;
  }
  v46 = v45 | *((_DWORD *)v7 + 49) & 0xFFFFF7FF;
  *((_DWORD *)v7 + 49) = v46;
  if ( (v46 & 0xC00) != 0xC00 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3) == 0 )
    {
      if ( !WindowArrangementAllowed(a1) || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) == 0 )
        goto LABEL_54;
      v46 = *((_DWORD *)v7 + 49);
      v43 = 2048LL;
    }
    if ( (v46 & (unsigned int)v43) == 0 )
    {
      v46 |= v43 | 0x800000;
      *((_DWORD *)v7 + 49) = v46;
    }
    if ( (v46 & 0x400) == 0 )
      *((_DWORD *)v7 + 49) = v46 | 0x400400;
  }
LABEL_54:
  v47 = *((_DWORD *)v7 + 49);
  if ( (v47 & 0xC00) == 0 )
  {
    v48 = MonitorFromPoint(v28, 2LL, 0LL, v43);
    v49 = *((_DWORD *)v7 + 49);
    *((_QWORD *)v7 + 29) = v48;
    goto LABEL_88;
  }
  v50 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v50 + 233) & 3) != 0 || (*(_BYTE *)(v50 + 31) & 1) != 0 )
    v51 = 4096;
  else
    v51 = 0;
  v52 = v51 | v47 & 0xFFFFEFFF;
  *((_DWORD *)v7 + 49) = v52;
  if ( (v52 & 0x1000) != 0 )
  {
    *((_DWORD *)v7 + 61) = 2;
    *((_DWORD *)v7 + 49) = v52 | 0x40000;
  }
  HitTargetAndMonitorFromPoint(
    (struct tagPOINT)v28,
    v7,
    (struct tagMONITOR **)v7 + 29,
    (struct _MOVESIZEDATA *)((char *)v7 + 240));
  v53 = *((_DWORD *)v7 + 49);
  if ( (v53 & 0x38000) == 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3) != 0 && a3 == 9 )
  {
    v53 = v53 & 0xFFFC7FFF | 0x20000;
    *((_DWORD *)v7 + 49) = v53;
  }
  v54 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v54 + 31) & 1) != 0 || (v55 = *(_BYTE *)(v54 + 233), (v55 & 3) == 3) )
  {
    *v39 = 0;
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3) == 3 )
    {
      v58 = *v39;
      if ( (unsigned int)(a3 - 6) <= 2 )
        v58 = 3;
      *v39 = v58;
    }
    goto LABEL_87;
  }
  if ( (v55 & 1) == 0 )
  {
    if ( (v55 & 2) == 0 )
    {
      *v39 = 4;
      goto LABEL_87;
    }
    v57 = v53 & 0x38000;
    if ( v57 != 0x20000 )
    {
      if ( v57 )
        goto LABEL_81;
      if ( (unsigned int)(a3 - 6) <= 2 )
        goto LABEL_72;
      if ( (unsigned int)(a3 - 3) > 2 )
      {
LABEL_81:
        *v39 = 2;
        goto LABEL_87;
      }
    }
    goto LABEL_75;
  }
  v56 = v53 & 0x38000;
  if ( v56 == 0x20000 )
    goto LABEL_75;
  if ( v56 )
  {
LABEL_74:
    *v39 = 1;
    goto LABEL_87;
  }
  if ( (unsigned int)(a3 - 6) > 2 )
  {
    if ( (unsigned int)(a3 - 3) > 2 )
      goto LABEL_74;
LABEL_75:
    *v39 = 0;
    goto LABEL_87;
  }
LABEL_72:
  *v39 = 3;
LABEL_87:
  v49 = *((_DWORD *)v7 + 49) ^ ((unsigned __int8)*((_DWORD *)v7 + 49) ^ (unsigned __int8)(*((_DWORD *)v7 + 49) >> 5)) & 0x80;
  *((_DWORD *)v7 + 49) = v49;
LABEL_88:
  *((_DWORD *)v7 + 44) = a3;
  if ( a3 )
  {
    if ( a3 != 10 )
      goto LABEL_100;
    a3 = 9;
    *((_DWORD *)v7 + 44) = 9;
  }
  zzzSetCursor(*(struct tagCURSOR **)(gasyscur[0] + 4976LL));
  v59 = *((_DWORD *)v7 + 49);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
    v59 |= 1u;
  v60 = *((_DWORD *)v7 + 6) + *((_DWORD *)v7 + 8);
  *((_DWORD *)v7 + 49) = v59 | 2;
  *((_DWORD *)v7 + 47) = v25;
  *((_DWORD *)v7 + 48) = v26;
  v25 = v60 / 2;
  v74.x = v60 / 2;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 || *((_DWORD *)v7 + 44) != 9 )
  {
    v26 = (*((_DWORD *)v7 + 7) + *((_DWORD *)v7 + 9)) / 2;
    v74.y = v26;
  }
  else
  {
    v26 = (int)GetCaptionHeight((__int64)a1) / 2 + *((_DWORD *)v7 + 7) + 3;
    v74.y = v26;
  }
  v28 = (__int64)v74;
  zzzInternalSetCursorPos(v25, v74.y, 1, 0);
  xxxMS_FlushWigglies(v61);
  v62 = *((_DWORD *)v7 + 49);
  if ( (v62 & 0x400) == 0 )
    *v39 = 4;
  v49 = v62 & 0xFFFFFF7F;
  *((_DWORD *)v7 + 71) = v25;
  *((_DWORD *)v7 + 49) = v49;
  *((_DWORD *)v7 + 72) = v26;
  *((_DWORD *)v7 + 73) = v25;
  *((_DWORD *)v7 + 74) = v26;
LABEL_100:
  v63 = *((_DWORD *)v7 + 31);
  *((_DWORD *)v7 + 72) -= v63;
  *((_DWORD *)v7 + 74) -= v63;
  *((_QWORD *)v7 + 27) = *((_QWORD *)v7 + 29);
  *((_DWORD *)v7 + 56) = *v39;
  *((_DWORD *)v7 + 49) = v49 ^ ((unsigned __int8)v49 ^ (unsigned __int8)(gdwPUDFlags >> 15)) & 0x20;
  v64 = *((_DWORD *)v7 + 30);
  *((_DWORD *)v7 + 71) -= v64;
  *((_DWORD *)v7 + 73) -= v64;
  *((_QWORD *)v7 + 26) = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
  v65 = *((_DWORD *)v7 + 49) ^ (*((_DWORD *)v7 + 49) ^ ~(*((_DWORD *)v7 + 49) << 23)) & 0x10000000;
  *((_DWORD *)v7 + 49) = v65;
  v66 = v65 & 0xFFFFDFFF | ((*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 1) << 13);
  *((_DWORD *)v7 + 49) = v66;
  v67 = v66 & 0xFFFFBFFF | ((*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 2) << 13);
  v68 = ((unsigned __int16)v67 ^ (unsigned __int16)(v67 >> 5)) & 0x100 ^ v67;
  v69 = (((unsigned __int16)v68 ^ (unsigned __int16)(v68 >> 5)) & 0x200 ^ v68) & 0xDFF7FFFF;
  *((_DWORD *)v7 + 49) = v69;
  if ( (v69 & 2) != 0 )
  {
    v70 = v69 & 0xFFFFF3FF;
    *((_DWORD *)v7 + 49) = v70;
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3) != 0 )
      *((_DWORD *)v7 + 49) = v70 | 0xC00C00;
  }
  *((_DWORD *)v7 + 45) = dword_1C02F4CC8[a3];
  *((_DWORD *)v7 + 46) = dword_1C02F4C98[a3];
  v71 = dword_1C02F4D28[a3];
  if ( v71 != -1 )
    *((_DWORD *)v7 + 42) = *((_DWORD *)v7 + (__int16)v71 + 30) - v25;
  v72 = dword_1C02F4CF8[a3];
  if ( v72 != -1 )
    *((_DWORD *)v7 + 43) = *((_DWORD *)v7 + (__int16)v72 + 30) - v26;
  *((_DWORD *)v7 + 85) = a5;
  *(_QWORD *)((char *)v7 + 300) = v28;
  *(_OWORD *)((char *)v7 + 248) = 0LL;
  *(_OWORD *)((char *)v7 + 264) = 0LL;
  result = *((_DWORD *)v7 + 70) & 0xFFFFFFF4 | (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 234LL) >> 7) & 0xFFFFFFF5 | (2 * (a5 & 4 | (*(_BYTE *)(*((_QWORD *)a1 + 5) + 234LL) >> 7)));
  *((_DWORD *)v7 + 70) = result;
  return result;
}
