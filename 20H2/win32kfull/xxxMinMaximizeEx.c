/*
 * XREFs of xxxMinMaximizeEx @ 0x1C0017D5C
 * Callers:
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003D1C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003FC4 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C0017D1C (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     xxxProcessEventMessage @ 0x1C00D8288 (xxxProcessEventMessage.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D00AC (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     ?xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z @ 0x1C01D25F0 (-xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z.c)
 *     NtUserMinMaximize @ 0x1C01FF7A0 (NtUserMinMaximize.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C020CA90 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C020D400 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020F54C (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C02103FC (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C000F220 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     PostIAMShellHookMessageEx @ 0x1C0013F00 (PostIAMShellHookMessageEx.c)
 *     _PostMessage @ 0x1C0013FF0 (_PostMessage.c)
 *     DwmSyncNotifyMinimizing @ 0x1C0017C48 (DwmSyncNotifyMinimizing.c)
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C0018668 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C00186B8 (DwmAsyncNotifyAnimationChange.c)
 *     ?CalcMinZOrder@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0018740 (-CalcMinZOrder@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     SetMinimize @ 0x1C001878C (SetMinimize.c)
 *     xxxShowOwnedWindows @ 0x1C00187F4 (xxxShowOwnedWindows.c)
 *     ParkIcon @ 0x1C001893C (ParkIcon.c)
 *     GetMonitorWorkRectForWindow @ 0x1C0018B80 (GetMonitorWorkRectForWindow.c)
 *     ClrFTrueVis @ 0x1C001AE1C (ClrFTrueVis.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002B5C4 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C00388C0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     CkptRestore @ 0x1C003A9C0 (CkptRestore.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C003D294 (xxxInitSendValidateMinMaxInfoEx.c)
 *     IsVisible @ 0x1C0041324 (IsVisible.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     _IsTopLevelWindow @ 0x1C0046FA0 (_IsTopLevelWindow.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00472F4 (xxxEndDeferWindowPosEx.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C004ACA8 (IsToplevelWindowDesktopComposed.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C004B224 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     InternalBeginDeferWindowPos @ 0x1C004B3E8 (InternalBeginDeferWindowPos.c)
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0055B10 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     IsTrayWindow @ 0x1C0058D40 (IsTrayWindow.c)
 *     GetRect @ 0x1C005E0AC (GetRect.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00BE818 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     PostShellHookMessages @ 0x1C00BF140 (PostShellHookMessages.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00C1950 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00CAD64 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 *     IsThreadDesktopComposed @ 0x1C00D7258 (IsThreadDesktopComposed.c)
 *     xxxSendMinRectMessages @ 0x1C011B6F8 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     xxxFlushPalette @ 0x1C0234DA0 (xxxFlushPalette.c)
 *     xxxDrawAnimatedRects @ 0x1C023EBA4 (xxxDrawAnimatedRects.c)
 */

__int64 __fastcall xxxMinMaximizeEx(struct tagWND *a1, unsigned int a2, int a3, __int64 a4, _OWORD *a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v9; // r13
  int v10; // r12d
  __int64 v11; // rax
  char v12; // dl
  char v13; // cl
  char v14; // di
  _OWORD *Prop; // rax
  _OWORD *v16; // rsi
  __int64 v17; // rdx
  struct tagWND *v18; // rax
  __int64 v19; // rdx
  char v20; // cl
  int v21; // eax
  int v22; // r14d
  __int64 i; // rcx
  __int64 v24; // rcx
  char v25; // dl
  unsigned int v26; // ecx
  __int64 v27; // rcx
  int v28; // r15d
  char v29; // dl
  unsigned int v30; // r12d
  __int64 j; // rsi
  __int64 DesktopWindow; // rax
  BOOL v33; // esi
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // r8
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned __int8 v43; // dl
  char v44; // di
  __int64 v45; // rcx
  __int64 v46; // rax
  __m128i *MonitorWorkRectForWindow; // rax
  __int64 v48; // r10
  __int64 v49; // rdi
  unsigned __int64 v50; // xmm0_8
  void *v51; // rax
  void *v52; // rax
  __int64 v53; // rcx
  void *v54; // r14
  char v55; // r9
  __int64 v56; // r10
  int v57; // r11d
  int v58; // edx
  int v59; // eax
  char v60; // cl
  __int64 v61; // r8
  int v62; // ecx
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  int v70; // eax
  char v71; // cl
  __int64 v72; // rcx
  __int64 v73; // rcx
  int v74; // esi
  __int64 v75; // rsi
  char v76; // cl
  __int64 v77; // rax
  __int64 v78; // rcx
  struct tagWND *v79; // rcx
  __int64 v80; // rsi
  __int64 v81; // rdx
  int v82; // r8d
  int v83; // edx
  BOOL v84; // [rsp+58h] [rbp-B0h]
  char v85; // [rsp+5Ch] [rbp-ACh]
  char v86; // [rsp+64h] [rbp-A4h]
  int v87; // [rsp+7Ch] [rbp-8Ch]
  BOOL v88; // [rsp+84h] [rbp-84h]
  int v89; // [rsp+8Ch] [rbp-7Ch]
  int v90; // [rsp+90h] [rbp-78h]
  int v91; // [rsp+94h] [rbp-74h]
  int v92; // [rsp+98h] [rbp-70h]
  unsigned int v93; // [rsp+9Ch] [rbp-6Ch]
  __int64 v94; // [rsp+A0h] [rbp-68h]
  __int128 v95; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v96; // [rsp+B8h] [rbp-50h]
  __int128 v97; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v98; // [rsp+D0h] [rbp-38h]
  __int128 v99; // [rsp+D8h] [rbp-30h] BYREF
  struct tagRECT v100; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v101; // [rsp+F8h] [rbp-10h]
  __int128 v102; // [rsp+108h] [rbp+0h]
  __int64 v103; // [rsp+118h] [rbp+10h]

  v6 = *((_QWORD *)a1 + 13);
  v94 = a6;
  v9 = a2;
  v98 = 0LL;
  v96 = 0LL;
  v10 = a3 & 0x20;
  v103 = 0LL;
  v86 = a3;
  v11 = *((_QWORD *)a1 + 5);
  v97 = 0LL;
  *(_QWORD *)&v100.left = a4;
  v95 = 0LL;
  v90 = 0;
  v101 = 0LL;
  v89 = 0;
  v102 = 0LL;
  LODWORD(v11) = *(unsigned __int8 *)(v11 + 31);
  v88 = 0;
  v85 = v11 & 1;
  v87 = 0;
  v91 = 0;
  v84 = 0;
  v92 = 1;
  v93 = ((unsigned int)v11 >> 5) & 1;
  v99 = 0LL;
  if ( (a3 & 0x20000) != 0 )
  {
    PostEventMessageEx(
      *((struct tagTHREADINFO **)a1 + 2),
      *(struct tagQ **)(*((_QWORD *)a1 + 2) + 432LL),
      0x17u,
      a1,
      0,
      a2,
      a3 & 0xFFFDFFFF,
      0LL);
    return 0LL;
  }
  v12 = 16;
  if ( (a3 & 0x40) == 0 )
    v12 = 0;
  v13 = v12 | 4;
  if ( (a3 & 0x100) == 0 )
    v13 = v12;
  v14 = v13;
  if ( (a3 & 0x200) == 0 )
    v14 = v13;
  if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
  {
    v86 = a3;
    v92 = a3 & 0x10000;
    if ( (a3 & 0x10000) == 0 )
    {
      if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
      {
        v51 = (void *)ReferenceDwmApiPort();
        DwmAsyncNotifyAnimationChange(v51);
      }
    }
  }
  GetRect(a1, &v99, 66LL);
  if ( (a3 & 4) != 0 )
    Prop = (_OWORD *)GetProp(a1, LOWORD(WPP_MAIN_CB.DeviceQueue.Lock), 1LL);
  else
    Prop = (_OWORD *)CkptRestore(a1, &v99);
  v16 = Prop;
  if ( Prop )
  {
    if ( a5 && (v86 & 8) != 0 )
      *Prop = *a5;
    v17 = *(_QWORD *)(v6 + 40);
    if ( (*(_BYTE *)(v17 + 26) & 0x40) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0 )
    {
      v58 = *(_DWORD *)(v17 + 96);
      v59 = v58 - DWORD2(v99);
      DWORD2(v99) = v58 - v99;
      LODWORD(v99) = v59;
    }
    if ( (((unsigned __int8)*(_DWORD *)(gptiCurrent + 680LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x40) == 0
      || !(unsigned int)xxxCallHook(1, *(_QWORD *)a1, v9, 5) )
    {
      if ( (_DWORD)v9 == 204 )
      {
        v14 |= 0x14u;
        LODWORD(v9) = ((v16[3] & 4) != 0) + 1;
      }
      if ( (_DWORD)v9 != 3 && (_DWORD)v9 != 1 )
      {
        if ( (_DWORD)v9 == 2 )
          goto LABEL_27;
        if ( (_DWORD)v9 == 4 )
        {
          if ( gpqForeground && *(_QWORD *)(gpqForeground + 120LL) )
            v14 |= 0x10u;
        }
        else
        {
          if ( (unsigned int)v9 <= 5 )
            goto LABEL_127;
          if ( (unsigned int)v9 <= 7 )
          {
            v18 = CalcMinZOrder(a1);
            if ( v18 && !a6 )
              v94 = *(_QWORD *)v18;
LABEL_27:
            v19 = 1LL;
            v20 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
            if ( (v20 & 0x20) != 0 )
            {
              if ( (v20 & 0x10) != 0 )
                goto LABEL_75;
              v22 = 0;
              v33 = 0;
              v30 = 0;
            }
            else
            {
              if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
              {
                v54 = (void *)ReferenceDwmApiPort();
                if ( v54 )
                {
                  if ( gdwInAtomicOperation )
                  {
                    v53 = gdwExtraInstrumentations;
                    if ( (gdwExtraInstrumentations & 1) != 0 )
                      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
                  }
                  UserSessionSwitchLeaveCrit(v53);
                  DwmSyncNotifyMinimizing(v54, *(_QWORD *)a1);
                  EnterCrit(0LL, 1LL);
                }
              }
              v21 = *((_DWORD *)v16 + 12);
              v22 = 2;
              if ( (v21 & 1) == 0 )
              {
                v21 &= ~0x20u;
                *((_DWORD *)v16 + 12) = v21;
              }
              if ( (v21 & 0x20) == 0 )
              {
                ParkIcon(a1, v16 + 2);
                *((_DWORD *)v16 + 12) |= 0x20u;
              }
              xxxShowOwnedWindows(a1, 1LL, 0LL);
              for ( i = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL); i; i = *(_QWORD *)(i + 104) )
              {
                if ( (struct tagWND *)i == a1 )
                {
                  *(_QWORD *)&v95 = *(_QWORD *)(gptiCurrent + 416LL);
                  *(_QWORD *)(gptiCurrent + 416LL) = &v95;
                  *((_QWORD *)&v95 + 1) = i;
                  HMLockObject(i);
                  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
                  {
                    v63 = *((_QWORD *)a1 + 13);
                    *(_QWORD *)&v97 = *(_QWORD *)(gptiCurrent + 416LL);
                    *(_QWORD *)(gptiCurrent + 416LL) = &v97;
                    *((_QWORD *)&v97 + 1) = v63;
                    if ( v63 )
                      HMLockObject(v63);
                    xxxSetFocus(*((struct tagWND **)a1 + 13));
                    ThreadUnlock1(v65, v64, v66);
                  }
                  else
                  {
                    xxxSetFocus(0LL);
                  }
                  ThreadUnlock1(v68, v67, v69);
                  break;
                }
              }
              v24 = *((_QWORD *)a1 + 5);
              if ( (*(_BYTE *)(v24 + 31) & 1) != 0 )
              {
                v87 = 1;
                v26 = v16[3] & 0xFFFFFFE5 | 2;
              }
              else
              {
                v25 = *(_BYTE *)(v24 + 233);
                if ( (v25 & 3) == 3 )
                {
                  v26 = v16[3] & 0xFFFFFFE5 | 0x18;
                }
                else if ( (v25 & 1) != 0 )
                {
                  v26 = v16[3] & 0xFFFFFFE5 | 8;
                }
                else if ( (v25 & 2) != 0 )
                {
                  v26 = v16[3] & 0xFFFFFFE5 | 0x10;
                }
                else
                {
                  v26 = v16[3] & 0xFFFFFFE5;
                }
              }
              *((_DWORD *)v16 + 12) = v26;
              v27 = *((_QWORD *)a1 + 5);
              if ( (*(_BYTE *)(v27 + 21) & 2) != 0 )
              {
                v28 = 0;
              }
              else
              {
                v70 = IsTrayWindow(a1);
                v27 = *((_QWORD *)a1 + 5);
                v28 = v70;
                v84 = v70;
              }
              v29 = *(_BYTE *)(v27 + 31);
              if ( (v29 & 0x20) != 0 )
              {
                if ( (v29 & 0x10) != 0 )
                  goto LABEL_75;
                v33 = v84;
                v19 = 1LL;
                v30 = 0;
              }
              else
              {
                SetMinimize(a1, 1LL);
                SetOrClrWF(0LL, a1, 3841LL, 1LL);
                v30 = 22;
                if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 )
                  v84 = v28 != IsTrayWindow(a1);
                for ( j = *((_QWORD *)a1 + 14); j; j = *(_QWORD *)(j + 88) )
                  ClrFTrueVis(j);
                DesktopWindow = GetDesktopWindow(a1);
                v33 = v84;
                v19 = 1LL;
                if ( *((_QWORD *)a1 + 13) == DesktopWindow )
                  v91 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 0x20;
              }
            }
LABEL_49:
            if ( (v86 & 1) != 0
              || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) == 0
              || !(unsigned int)IsVisible(a1)
              || (v57 & 0x10000) == 0
              || !v22
              || (v55 & 0x40) != 0 && (*(_BYTE *)(v56 + 23) & 0x10) != 0 )
            {
              goto LABEL_51;
            }
            if ( v22 == 3 || !(unsigned int)IsTrayWindow(a1) )
            {
              v79 = a1;
            }
            else
            {
              v100 = 0LL;
              xxxSendMinRectMessages(a1, &v100);
              if ( (unsigned int)IsRectEmptyInl(&v100) )
                goto LABEL_51;
              v79 = a1;
            }
            xxxDrawAnimatedRects(v79);
LABEL_51:
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 && v33 && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
            {
              v80 = *(_QWORD *)a1;
              v19 = (unsigned int)(*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL)
                                                                                + 16LL));
              if ( ((*(_WORD *)(gptiCurrent + 680LL) | *(_WORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0 )
                xxxCallHook(1, *(_QWORD *)a1, 0LL, 10);
              if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL) )
                PostShellHookMessages(1LL, v80);
            }
            v35 = InternalBeginDeferWindowPos(1LL, v19);
            if ( v35 )
            {
              if ( v94 )
              {
                LOBYTE(v34) = 1;
                v37 = HMValidateHandleNoSecure(v94, v34);
              }
              else
              {
                v37 = 0LL;
              }
              v36 = _DeferWindowPos(v35, a1, v37);
              if ( v36 )
              {
                if ( v87 && *(_DWORD *)*gpDispInfo > 1u )
                {
                  v81 = *((_QWORD *)a1 + 5);
                  if ( (*(_BYTE *)(v81 + 31) & 1) != 0 && *((_QWORD *)a1 + 13) == GetDesktopWindow(a1) )
                  {
                    *(_QWORD *)(*(_QWORD *)(v36 + 40) + 112LL) = 2LL;
                  }
                  else if ( (*(_BYTE *)(v81 + 21) & 8) != 0 )
                  {
                    *(_QWORD *)(*(_QWORD *)(v36 + 40) + 112LL) = 1LL;
                  }
                }
                xxxEndDeferWindowPosEx((struct tagSMWP *)v36);
                if ( (unsigned int)IsTopLevelWindow(a1) )
                  xxxRestoreWindowFromDeferredStateIfNeeded(a1);
              }
            }
            if ( v30 )
              xxxWindowEvent(v30, 1u);
            *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~0x40000000u;
            v38 = *((_QWORD *)a1 + 5);
            if ( (*(_BYTE *)(v38 + 31) & 1) != 0 )
            {
              v46 = ValidateHmonitorNoRip(*(_QWORD *)(v38 + 256));
              MonitorWorkRectForWindow = (__m128i *)GetMonitorWorkRectForWindow(&v99, v46, a1);
              v48 = *((_QWORD *)a1 + 5);
              v38 = v48;
              v49 = *(_QWORD *)(v48 + 88);
              v36 = _mm_srli_si128(*MonitorWorkRectForWindow, 8).m128i_u64[0];
              v50 = _mm_srli_si128(*(__m128i *)(v48 + 88), 8).m128i_u64[0];
              if ( (int)v50 - (int)v49 < (int)(v36 - MonitorWorkRectForWindow->m128i_i64[0]) )
              {
                v36 = (unsigned int)(HIDWORD(v36) - HIDWORD(MonitorWorkRectForWindow->m128i_i64[0]));
                if ( HIDWORD(v50) - HIDWORD(v49) < (int)v36 )
                {
                  *(_DWORD *)(v48 + 232) |= 0x40000000u;
                  v38 = *((_QWORD *)a1 + 5);
                }
              }
            }
            if ( (_DWORD)v9 == 2
              && (*(_BYTE *)(v38 + 21) & 2) == 0
              && (*(_BYTE *)(v38 + 31) & 0x10) != 0
              && (*(_BYTE *)(v38 + 30) & 0x40) != 0 )
            {
              if ( *(_QWORD *)(*((_QWORD *)a1 + 17) + 80LL) )
              {
                v82 = 1;
                v83 = 38;
              }
              else
              {
                v82 = 0;
                v83 = 15;
              }
              PostMessage((int)a1, v83, v82, 0);
            }
            if ( v89 )
              xxxShowOwnedWindows(a1, 3LL, 0LL);
            if ( (_DWORD)v9 == 6
              && *((_QWORD *)a1 + 13) == GetDesktopWindow(a1)
              && !(unsigned int)xxxActivateOnMinimize(a1) )
            {
              xxxActivateWindowWithOptions(a1, 2LL, 57LL, 1LL);
            }
            if ( v90 )
              xxxSetFocus(a1);
            if ( v88 )
              xxxSendMessage(a1, 6LL, 1LL, 0LL);
            if ( v91 )
              xxxFlushPalette(a1, v38, v36);
            v39 = *((_QWORD *)a1 + 5);
            if ( v85 != (*(_BYTE *)(v39 + 31) & 1) || v93 != ((*(unsigned __int8 *)(v39 + 31) >> 5) & 1) )
              PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x28u, *(_QWORD *)a1);
            goto LABEL_75;
          }
          if ( (_DWORD)v9 != 9 )
          {
LABEL_127:
            v22 = 0;
            v19 = 0LL;
            v30 = 0;
            v33 = 0;
            goto LABEL_49;
          }
        }
        v60 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
        if ( (v60 & 0x20) != 0 || (v60 & 1) != 0 && v10 )
        {
          v62 = *((_DWORD *)v16 + 12);
          if ( (v62 & 2) != 0 )
          {
            LODWORD(v9) = 3;
            goto LABEL_77;
          }
          if ( (v62 & 0x18) == 0x18 )
          {
            LODWORD(v9) = 12;
            goto LABEL_77;
          }
          if ( (v62 & 8) != 0 )
          {
            LODWORD(v9) = 14;
            goto LABEL_77;
          }
          if ( (v62 & 0x10) != 0 )
          {
            LODWORD(v9) = 13;
            goto LABEL_77;
          }
          LODWORD(v9) = 1;
          SetOrClrWF(0LL, a1, 55553LL, 1LL);
          v61 = 55554LL;
        }
        else
        {
          LODWORD(v9) = 1;
          SetOrClrWF(0LL, a1, 55553LL, 1LL);
          SetOrClrWF(0LL, a1, 55554LL, 1LL);
          v61 = 55936LL;
        }
        SetOrClrWF(0LL, a1, v61, 1LL);
      }
LABEL_77:
      v41 = *((_QWORD *)a1 + 5);
      if ( (_DWORD)v9 == 3 )
      {
        v42 = ValidateHmonitorNoRip(*(_QWORD *)(v41 + 256));
        v43 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
        if ( (v43 & 1) != 0
          && (!*(_QWORD *)&v100.left || v42 == *(_QWORD *)&v100.left)
          && (((v86 & 2) == 0) & (v43 >> 4)) != 0 )
        {
          goto LABEL_75;
        }
        v87 = 1;
        v44 = v14 | (16 * (v86 & 1));
        if ( (v43 & 0x20) != 0 )
          *((_DWORD *)v16 + 12) |= 4u;
        xxxInitSendValidateMinMaxInfoEx(a1);
      }
      else
      {
        v71 = v14;
        if ( (*(_BYTE *)(v41 + 31) & 0x21) == 0 )
          v71 = v14;
        v44 = v71;
        if ( (*(_BYTE *)(v41 + 31) & 1) != 0 )
          v87 = 1;
      }
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
      {
        if ( !xxxSendMessage(a1, 19LL, 0LL, 0LL) )
          goto LABEL_75;
        v89 = 1;
        v22 = 1;
        if ( (v44 & 0x10) == 0 )
        {
          v90 = 1;
          v88 = (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0;
        }
      }
      else
      {
        v22 = 3;
      }
      switch ( (_DWORD)v9 )
      {
        case 3:
          SetOrClrWF(1LL, a1, 3841LL, 1LL);
          SetOrClrWF(0LL, a1, 55553LL, 1LL);
          SetOrClrWF(0LL, a1, 55554LL, 1LL);
          SetOrClrWF(0LL, a1, 55936LL, 1LL);
          if ( (v86 & 0x10) == 0 && gSqmIsOptedIn )
            WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3533LL, 1LL);
          goto LABEL_88;
        case 0xC:
          SetOrClrWF(0LL, a1, 3841LL, 1LL);
          v72 = 1LL;
          break;
        case 0xE:
          SetOrClrWF(0LL, a1, 3841LL, 1LL);
          SetOrClrWF(1LL, a1, 55553LL, 1LL);
          v73 = 0LL;
LABEL_178:
          SetOrClrWF(v73, a1, 55554LL, 1LL);
LABEL_88:
          v45 = *((_QWORD *)a1 + 5);
          if ( (*(_BYTE *)(v45 + 31) & 0x20) != 0 )
          {
            if ( (*(_BYTE *)(v45 + 21) & 2) != 0 )
              v74 = 0;
            else
              v74 = IsTrayWindow(a1);
            SetMinimize(a1, 0LL);
            v30 = 23;
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0
              && v74 != (unsigned int)IsTrayWindow(a1)
              && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
            {
              v75 = *(_QWORD *)a1;
              if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0 )
                xxxCallHook(2, *(_QWORD *)a1, 0LL, 10);
              if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL) )
                PostShellHookMessages(2LL, v75);
            }
            v76 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
            if ( (v76 & 0xC0) != 0x40 && (v76 & 0x10) != 0 )
            {
              v77 = *((_QWORD *)a1 + 2);
              if ( *(_DWORD *)(v77 + 900) == 1 )
              {
                v78 = *(_QWORD *)(v77 + 432);
                if ( v78 != gpqForeground && ((v44 & 0x10) == 0 || *(struct tagWND **)(v78 + 120) == a1) )
                  xxxSetForegroundWindowWithOptions(a1, 6LL, 4097LL);
              }
            }
          }
          else
          {
            v30 = 0;
          }
          v33 = 0;
          v19 = 0LL;
          goto LABEL_49;
        case 0xD:
          SetOrClrWF(0LL, a1, 3841LL, 1LL);
          v72 = 0LL;
          break;
        default:
          SetOrClrWF(0LL, a1, 3841LL, 1LL);
          goto LABEL_88;
      }
      SetOrClrWF(v72, a1, 55553LL, 1LL);
      v73 = 1LL;
      goto LABEL_178;
    }
  }
LABEL_75:
  if ( !v92 && (unsigned int)IsToplevelWindowDesktopComposed(a1) )
  {
    v52 = (void *)ReferenceDwmApiPort();
    DwmAsyncNotifyAnimationChange(v52);
  }
  return 0LL;
}
