/*
 * XREFs of xxxMinMaximizeEx @ 0x1C005A998
 * Callers:
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003E7C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0004124 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C005A958 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     xxxProcessEventMessage @ 0x1C00B3CF8 (xxxProcessEventMessage.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D0EBC (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     ?xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z @ 0x1C01D3400 (-xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z.c)
 *     NtUserMinMaximize @ 0x1C0200610 (NtUserMinMaximize.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C020D910 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C020E280 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C02103CC (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C021127C (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00216DC (xxxInitSendValidateMinMaxInfoEx.c)
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 *     CkptRestore @ 0x1C00256D4 (CkptRestore.c)
 *     GetRect @ 0x1C00276C0 (GetRect.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002C0BC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002F1C8 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     PostShellHookMessages @ 0x1C0033A70 (PostShellHookMessages.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00344E0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     DwmSyncNotifyMinimizing @ 0x1C0057260 (DwmSyncNotifyMinimizing.c)
 *     PostIAMShellHookMessageEx @ 0x1C0058320 (PostIAMShellHookMessageEx.c)
 *     _PostMessage @ 0x1C0058410 (_PostMessage.c)
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C005B2A4 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     DwmAsyncNotifyAnimationChange @ 0x1C005B2F4 (DwmAsyncNotifyAnimationChange.c)
 *     ?CalcMinZOrder@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C005B37C (-CalcMinZOrder@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     SetMinimize @ 0x1C005B3C8 (SetMinimize.c)
 *     xxxShowOwnedWindows @ 0x1C005B430 (xxxShowOwnedWindows.c)
 *     ParkIcon @ 0x1C005B578 (ParkIcon.c)
 *     GetMonitorWorkRectForWindow @ 0x1C005CDF0 (GetMonitorWorkRectForWindow.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0068010 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IsVisible @ 0x1C0069C04 (IsVisible.c)
 *     IsThreadDesktopComposed @ 0x1C0069C78 (IsThreadDesktopComposed.c)
 *     InternalBeginDeferWindowPos @ 0x1C006A404 (InternalBeginDeferWindowPos.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C006A494 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006DEE0 (xxxEndDeferWindowPosEx.c)
 *     _IsTopLevelWindow @ 0x1C006EA50 (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0099E30 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     IsTrayWindow @ 0x1C009D060 (IsTrayWindow.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00B029C (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00B2CA8 (IsToplevelWindowDesktopComposed.c)
 *     ClrFTrueVis @ 0x1C00F0060 (ClrFTrueVis.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00F5A1C (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxSendMinRectMessages @ 0x1C011A928 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     xxxFlushPalette @ 0x1C0235C30 (xxxFlushPalette.c)
 *     xxxDrawAnimatedRects @ 0x1C023FE44 (xxxDrawAnimatedRects.c)
 */

__int64 __fastcall xxxMinMaximizeEx(struct tagWND *a1, unsigned int a2, int a3, __int64 a4, _OWORD *a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v9; // r13
  int v10; // r12d
  __int64 v11; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // edi
  _OWORD *Prop; // rax
  _OWORD *v16; // rsi
  __int64 v17; // rdx
  __int128 v18; // xmm7
  __int128 v19; // xmm6
  struct tagWND *v20; // rax
  int v21; // edx
  char v22; // cl
  __int64 v23; // rcx
  int v24; // eax
  int v25; // r14d
  __int64 i; // rcx
  __int64 v27; // rcx
  char v28; // dl
  unsigned int v29; // ecx
  __int64 v30; // rcx
  int v31; // r15d
  char v32; // dl
  unsigned int v33; // r12d
  __int64 j; // rsi
  __int64 DesktopWindow; // rax
  BOOL v36; // esi
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int8 v48; // dl
  struct tagMONITOR *v49; // rcx
  int v50; // edi
  __int64 v51; // rcx
  __int64 v52; // rax
  __m128i *MonitorWorkRectForWindow; // rax
  __int64 v54; // r10
  __int64 v55; // rdi
  unsigned __int64 v56; // xmm0_8
  __int64 v57; // rcx
  void *v58; // rax
  __int64 v59; // rcx
  void *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // r8
  void *v63; // r14
  char v64; // r9
  __int64 v65; // r10
  int v66; // r11d
  int v67; // edx
  int v68; // eax
  char v69; // cl
  __int64 v70; // r8
  int v71; // ecx
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  int v82; // eax
  int v83; // ecx
  __int64 v84; // rcx
  __int64 v85; // rcx
  int v86; // esi
  __int64 v87; // rsi
  char v88; // cl
  __int64 v89; // rax
  __int64 v90; // rcx
  __int128 v91; // xmm6
  __int64 v92; // rcx
  int v93; // edx
  struct tagWND *v94; // rcx
  __int64 v95; // rsi
  __int64 v96; // rdx
  int v97; // r8d
  int v98; // edx
  BOOL v99; // [rsp+58h] [rbp-B0h]
  char v100; // [rsp+5Ch] [rbp-ACh]
  char v101; // [rsp+64h] [rbp-A4h]
  __int128 v102; // [rsp+68h] [rbp-A0h]
  int v103; // [rsp+7Ch] [rbp-8Ch]
  BOOL v104; // [rsp+84h] [rbp-84h]
  int v105; // [rsp+88h] [rbp-80h]
  int v106; // [rsp+8Ch] [rbp-7Ch]
  int v107; // [rsp+90h] [rbp-78h]
  int v108; // [rsp+94h] [rbp-74h]
  int v109; // [rsp+98h] [rbp-70h]
  unsigned int v110; // [rsp+9Ch] [rbp-6Ch]
  __int64 v111; // [rsp+A0h] [rbp-68h]
  __int128 v112; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v113; // [rsp+B8h] [rbp-50h]
  __int128 v114; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v115; // [rsp+D0h] [rbp-38h]
  __int128 v116; // [rsp+D8h] [rbp-30h] BYREF
  struct tagRECT v117; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v118; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v119; // [rsp+108h] [rbp+0h]
  __int64 v120; // [rsp+118h] [rbp+10h]

  v6 = *((_QWORD *)a1 + 13);
  v111 = a6;
  v9 = a2;
  v115 = 0LL;
  v113 = 0LL;
  v10 = a3 & 0x20;
  v120 = 0LL;
  v101 = a3;
  v11 = *((_QWORD *)a1 + 5);
  v114 = 0LL;
  *(_QWORD *)&v117.left = a4;
  v112 = 0LL;
  v107 = 0;
  v118 = 0LL;
  v106 = 0;
  v119 = 0LL;
  LODWORD(v11) = *(unsigned __int8 *)(v11 + 31);
  v104 = 0;
  v100 = v11 & 1;
  v103 = 0;
  v108 = 0;
  v99 = 0;
  v105 = 0;
  v109 = 1;
  v110 = ((unsigned int)v11 >> 5) & 1;
  v102 = 0LL;
  v116 = 0LL;
  if ( (a3 & 0x20000) != 0 )
  {
    PostEventMessageEx(
      *((struct tagTHREADINFO **)a1 + 2),
      *(struct tagQ **)(*((_QWORD *)a1 + 2) + 424LL),
      0x17u,
      a1,
      0,
      a2,
      a3 & 0xFFFDFFFF,
      0LL);
    return 0LL;
  }
  v12 = ((a3 & 0x80) << 14) | 0x10;
  if ( (a3 & 0x40) == 0 )
    v12 = (a3 & 0x80) << 14;
  v13 = v12 | 4;
  if ( (a3 & 0x100) == 0 )
    v13 = v12;
  v14 = v13 | 0x80000;
  if ( (a3 & 0x200) == 0 )
    v14 = v13;
  if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
  {
    v101 = a3;
    v109 = a3 & 0x10000;
    if ( (a3 & 0x10000) == 0 )
    {
      if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
      {
        v58 = (void *)ReferenceDwmApiPort(v57);
        DwmAsyncNotifyAnimationChange(v58);
      }
    }
  }
  GetRect((__int64)a1, (__int64)&v116, 66);
  if ( (a3 & 4) != 0 )
    Prop = (_OWORD *)GetProp((__int64)a1, WORD2(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink), 1LL);
  else
    Prop = CkptRestore((__int64)a1, &v116);
  v16 = Prop;
  if ( Prop )
  {
    if ( a5 && (v101 & 8) != 0 )
      *Prop = *a5;
    v17 = *(_QWORD *)(v6 + 40);
    if ( (*(_BYTE *)(v17 + 26) & 0x40) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0 )
    {
      v67 = *(_DWORD *)(v17 + 96);
      v68 = v67 - DWORD2(v116);
      DWORD2(v116) = v67 - v116;
      LODWORD(v116) = v68;
      v105 = 1;
    }
    v18 = *v16;
    v19 = v10 ? *a5 : v16[1];
    if ( (((unsigned __int8)*(_DWORD *)(gptiCurrent + 672LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x40) == 0
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
          goto LABEL_32;
        if ( (_DWORD)v9 == 4 )
        {
          if ( gpqForeground && *(_QWORD *)(gpqForeground + 120LL) )
            v14 |= 0x10u;
        }
        else
        {
          if ( (unsigned int)v9 <= 5 )
            goto LABEL_136;
          if ( (unsigned int)v9 <= 7 )
          {
            if ( gpqForeground && *(_QWORD *)(gpqForeground + 120LL) )
              v14 |= 0x10u;
            v20 = CalcMinZOrder(a1);
            if ( v20 )
            {
              if ( !a6 )
                v111 = *(_QWORD *)v20;
            }
            else
            {
              v14 |= 4u;
            }
LABEL_32:
            v21 = 1;
            v22 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
            if ( (v22 & 0x20) != 0 )
            {
              if ( (v22 & 0x10) != 0 )
                goto LABEL_81;
              v25 = 0;
              v14 |= 0x17u;
              v36 = 0;
              v33 = 0;
            }
            else
            {
              if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
              {
                v63 = (void *)ReferenceDwmApiPort(v23);
                if ( v63 )
                {
                  if ( gdwInAtomicOperation )
                  {
                    v61 = gdwExtraInstrumentations;
                    if ( (gdwExtraInstrumentations & 1) != 0 )
                      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
                  }
                  UserSessionSwitchLeaveCrit(v61, gdwInAtomicOperation, v62);
                  DwmSyncNotifyMinimizing(v63, *(_QWORD *)a1);
                  EnterCrit(0LL, 1LL);
                }
              }
              v24 = *((_DWORD *)v16 + 12);
              v25 = 2;
              if ( (v24 & 1) == 0 )
              {
                v24 &= ~0x20u;
                *((_DWORD *)v16 + 12) = v24;
              }
              if ( (v24 & 0x20) == 0 )
              {
                ParkIcon(a1, v16 + 2);
                *((_DWORD *)v16 + 12) |= 0x20u;
              }
              *(_QWORD *)&v102 = *((_QWORD *)v16 + 4);
              DWORD2(v102) = *(_DWORD *)(gpsi + 2124LL) + v102;
              HIDWORD(v102) = DWORD1(v102) + *(_DWORD *)(gpsi + 2128LL);
              xxxShowOwnedWindows(a1, 1LL, 0LL);
              for ( i = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL); i; i = *(_QWORD *)(i + 104) )
              {
                if ( (struct tagWND *)i == a1 )
                {
                  *(_QWORD *)&v112 = *(_QWORD *)(gptiCurrent + 408LL);
                  *(_QWORD *)(gptiCurrent + 408LL) = &v112;
                  *((_QWORD *)&v112 + 1) = i;
                  HMLockObject(i);
                  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
                  {
                    v75 = *((_QWORD *)a1 + 13);
                    *(_QWORD *)&v114 = *(_QWORD *)(gptiCurrent + 408LL);
                    *(_QWORD *)(gptiCurrent + 408LL) = &v114;
                    *((_QWORD *)&v114 + 1) = v75;
                    if ( v75 )
                      HMLockObject(v75);
                    xxxSetFocus(*((struct tagWND **)a1 + 13), v72, v73, v74);
                    ThreadUnlock1(v77, v76, v78);
                  }
                  else
                  {
                    xxxSetFocus(0LL, v72, v73, v74);
                  }
                  ThreadUnlock1(v80, v79, v81);
                  break;
                }
              }
              v27 = *((_QWORD *)a1 + 5);
              if ( (*(_BYTE *)(v27 + 31) & 1) != 0 )
              {
                v103 = 1;
                v29 = v16[3] & 0xFFFFFFE5 | 2;
              }
              else
              {
                v28 = *(_BYTE *)(v27 + 233);
                if ( (v28 & 3) == 3 )
                {
                  v29 = v16[3] & 0xFFFFFFE5 | 0x18;
                }
                else if ( (v28 & 1) != 0 )
                {
                  v29 = v16[3] & 0xFFFFFFE5 | 8;
                }
                else if ( (v28 & 2) != 0 )
                {
                  v29 = v16[3] & 0xFFFFFFE5 | 0x10;
                }
                else
                {
                  v29 = v16[3] & 0xFFFFFFE5;
                }
              }
              *((_DWORD *)v16 + 12) = v29;
              v30 = *((_QWORD *)a1 + 5);
              if ( (*(_BYTE *)(v30 + 21) & 2) != 0 )
              {
                v31 = 0;
              }
              else
              {
                v82 = IsTrayWindow(a1);
                v30 = *((_QWORD *)a1 + 5);
                v31 = v82;
                v99 = v82;
              }
              v32 = *(_BYTE *)(v30 + 31);
              if ( (v32 & 0x20) != 0 )
              {
                if ( (v32 & 0x10) != 0 )
                  goto LABEL_81;
                v36 = v99;
                v21 = 1;
                v14 |= 0x17u;
                v33 = 0;
                v102 = 0LL;
              }
              else
              {
                SetMinimize(a1, 1LL);
                SetOrClrWF(0LL, a1, 3841LL, 1LL);
                v33 = 22;
                if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 )
                  v99 = v31 != IsTrayWindow(a1);
                for ( j = *((_QWORD *)a1 + 14); j; j = *(_QWORD *)(j + 88) )
                  ClrFTrueVis(j);
                v14 |= 0x8120u;
                DesktopWindow = GetDesktopWindow(a1);
                v36 = v99;
                v21 = 1;
                if ( *((_QWORD *)a1 + 13) == DesktopWindow )
                  v108 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 0x20;
              }
            }
LABEL_54:
            if ( (v101 & 1) != 0 )
              goto LABEL_57;
            v37 = v14 | 0x40;
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) == 0 )
            {
              v14 |= 0x40u;
LABEL_57:
              if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 && v36 && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
              {
                v95 = *(_QWORD *)a1;
                if ( ((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x800) != 0 )
                  xxxCallHook(1, *(_QWORD *)a1, 0LL, 10);
                if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL) )
                  PostShellHookMessages(1uLL, v95);
              }
              v39 = InternalBeginDeferWindowPos(1LL);
              if ( v39 )
              {
                if ( v111 )
                {
                  LOBYTE(v38) = 1;
                  v42 = HMValidateHandleNoSecure(v111, v38);
                }
                else
                {
                  v42 = 0LL;
                }
                v40 = _DeferWindowPos(
                        v39,
                        a1,
                        v42,
                        (unsigned int)v102,
                        DWORD1(v102),
                        DWORD2(v102) - (int)v102,
                        HIDWORD(v102) - DWORD1(v102),
                        v14,
                        0);
                if ( v40 )
                {
                  if ( v103 && *(_DWORD *)*gpDispInfo > 1u )
                  {
                    v96 = *((_QWORD *)a1 + 5);
                    if ( (*(_BYTE *)(v96 + 31) & 1) != 0 && *((_QWORD *)a1 + 13) == GetDesktopWindow(a1) )
                    {
                      *(_QWORD *)(*(_QWORD *)(v40 + 40) + 112LL) = 2LL;
                    }
                    else if ( (*(_BYTE *)(v96 + 21) & 8) != 0 )
                    {
                      *(_QWORD *)(*(_QWORD *)(v40 + 40) + 112LL) = 1LL;
                    }
                  }
                  xxxEndDeferWindowPosEx((struct tagSMWP *)v40);
                  if ( (unsigned int)IsTopLevelWindow(a1) )
                    xxxRestoreWindowFromDeferredStateIfNeeded(a1);
                }
              }
              if ( v33 )
                xxxWindowEvent(v33, 1u);
              *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~0x40000000u;
              v43 = *((_QWORD *)a1 + 5);
              if ( (*(_BYTE *)(v43 + 31) & 1) != 0 )
              {
                v52 = ValidateHmonitorNoRip(*(_QWORD *)(v43 + 256));
                MonitorWorkRectForWindow = (__m128i *)GetMonitorWorkRectForWindow(&v116, v52, a1);
                v54 = *((_QWORD *)a1 + 5);
                v43 = v54;
                v55 = *(_QWORD *)(v54 + 88);
                v40 = _mm_srli_si128(*MonitorWorkRectForWindow, 8).m128i_u64[0];
                v56 = _mm_srli_si128(*(__m128i *)(v54 + 88), 8).m128i_u64[0];
                v41 = v56;
                if ( (int)v56 - (int)v55 < (int)(v40 - MonitorWorkRectForWindow->m128i_i64[0]) )
                {
                  v41 = (unsigned int)(HIDWORD(v56) - HIDWORD(v55));
                  v40 = (unsigned int)(HIDWORD(v40) - HIDWORD(MonitorWorkRectForWindow->m128i_i64[0]));
                  if ( (int)v41 < (int)v40 )
                  {
                    *(_DWORD *)(v54 + 232) |= 0x40000000u;
                    v43 = *((_QWORD *)a1 + 5);
                  }
                }
              }
              if ( (_DWORD)v9 == 2
                && (*(_BYTE *)(v43 + 21) & 2) == 0
                && (*(_BYTE *)(v43 + 31) & 0x10) != 0
                && (*(_BYTE *)(v43 + 30) & 0x40) != 0 )
              {
                if ( *(_QWORD *)(*((_QWORD *)a1 + 17) + 80LL) )
                {
                  v97 = 1;
                  v98 = 38;
                }
                else
                {
                  v97 = 0;
                  v98 = 15;
                }
                PostMessage((int)a1, v98, v97, 0);
              }
              if ( v106 )
                xxxShowOwnedWindows(a1, 3LL, 0LL);
              if ( (_DWORD)v9 == 6
                && *((_QWORD *)a1 + 13) == GetDesktopWindow(a1)
                && !(unsigned int)xxxActivateOnMinimize(a1) )
              {
                xxxActivateWindowWithOptions((__int64)a1, 2LL, 57LL, 1);
              }
              if ( v107 )
                xxxSetFocus(a1, v43, v40, v41);
              if ( v104 )
                xxxSendMessage(a1, 6LL, 1LL, 0LL);
              if ( v108 )
                xxxFlushPalette(a1, v43, v40);
              v44 = *((_QWORD *)a1 + 5);
              if ( v100 != (*(_BYTE *)(v44 + 31) & 1) || v110 != ((*(unsigned __int8 *)(v44 + 31) >> 5) & 1) )
                PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 0x28u, *(_QWORD *)a1);
              goto LABEL_81;
            }
            if ( !v21 )
              v37 = v14;
            v14 = v37;
            if ( !(unsigned int)IsVisible(a1)
              || (v66 & 0x10000) == 0
              || !v25
              || (v64 & 0x40) != 0 && (*(_BYTE *)(v65 + 23) & 0x10) != 0 )
            {
              goto LABEL_57;
            }
            v91 = 0LL;
            if ( v105 )
            {
              v91 = v102;
              v92 = *(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL);
              v93 = *(_DWORD *)(v92 + 96) - v102;
              LODWORD(v102) = *(_DWORD *)(v92 + 96) - DWORD2(v102);
              DWORD2(v102) = v93;
            }
            if ( v25 == 3 || !(unsigned int)IsTrayWindow(a1) )
            {
              v94 = a1;
            }
            else
            {
              v117 = 0LL;
              xxxSendMinRectMessages(a1, &v117);
              if ( (unsigned int)IsRectEmptyInl(&v117) )
                goto LABEL_217;
              v94 = a1;
            }
            xxxDrawAnimatedRects(v94);
LABEL_217:
            if ( v105 )
              v102 = v91;
            goto LABEL_57;
          }
          if ( (_DWORD)v9 != 9 )
          {
LABEL_136:
            v25 = 0;
            v21 = 0;
            v33 = 0;
            v36 = 0;
            goto LABEL_54;
          }
        }
        v69 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
        if ( (v69 & 0x20) != 0 || (v69 & 1) != 0 && v10 )
        {
          v71 = *((_DWORD *)v16 + 12);
          if ( (v71 & 2) != 0 )
          {
            LODWORD(v9) = 3;
            goto LABEL_83;
          }
          if ( (v71 & 0x18) == 0x18 )
          {
            LODWORD(v9) = 12;
            goto LABEL_83;
          }
          if ( (v71 & 8) != 0 )
          {
            LODWORD(v9) = 14;
            goto LABEL_83;
          }
          if ( (v71 & 0x10) != 0 )
          {
            LODWORD(v9) = 13;
            goto LABEL_83;
          }
          LODWORD(v9) = 1;
          SetOrClrWF(0LL, a1, 55553LL, 1LL);
          v70 = 55554LL;
        }
        else
        {
          LODWORD(v9) = 1;
          SetOrClrWF(0LL, a1, 55553LL, 1LL);
          SetOrClrWF(0LL, a1, 55554LL, 1LL);
          v70 = 55936LL;
        }
        SetOrClrWF(0LL, a1, v70, 1LL);
      }
LABEL_83:
      v46 = *((_QWORD *)a1 + 5);
      if ( (_DWORD)v9 == 3 )
      {
        v47 = ValidateHmonitorNoRip(*(_QWORD *)(v46 + 256));
        v48 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
        v49 = *(struct tagMONITOR **)&v117.left;
        if ( (v48 & 1) != 0 && (!*(_QWORD *)&v117.left || v47 == *(_QWORD *)&v117.left) )
        {
          if ( (((v101 & 2) == 0) & (v48 >> 4)) != 0 )
            goto LABEL_81;
          v49 = *(struct tagMONITOR **)&v117.left;
        }
        v103 = 1;
        v50 = v14 | (16 * ((v101 & 1) + 2048));
        if ( (v48 & 0x20) != 0 )
          *((_DWORD *)v16 + 12) |= 4u;
        xxxInitSendValidateMinMaxInfoEx(a1, (__int64)&v118, v49, 0);
      }
      else
      {
        v83 = v14 | 0x8000;
        if ( (*(_BYTE *)(v46 + 31) & 0x21) == 0 )
          v83 = v14;
        v50 = v83;
        if ( (*(_BYTE *)(v46 + 31) & 1) != 0 )
          v103 = 1;
      }
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
      {
        if ( !xxxSendMessage(a1, 19LL, 0LL, 0LL) )
          goto LABEL_81;
        v106 = 1;
        v25 = 1;
        if ( (v50 & 0x10) == 0 )
        {
          v107 = 1;
          v104 = (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0;
        }
        v50 |= 0x100u;
      }
      else
      {
        v25 = 3;
      }
      switch ( (_DWORD)v9 )
      {
        case 3:
          *(_QWORD *)&v102 = v119;
          DWORD2(v102) = DWORD2(v118) + v119;
          HIDWORD(v102) = DWORD1(v119) + HIDWORD(v118);
          SetOrClrWF(1LL, a1, 3841LL, 1LL);
          SetOrClrWF(0LL, a1, 55553LL, 1LL);
          SetOrClrWF(0LL, a1, 55554LL, 1LL);
          SetOrClrWF(0LL, a1, 55936LL, 1LL);
          if ( (v101 & 0x10) == 0 && gSqmIsOptedIn )
            WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3533LL, 1LL);
          goto LABEL_94;
        case 0xC:
          v102 = v19;
          SetOrClrWF(0LL, a1, 3841LL, 1LL);
          v84 = 1LL;
          break;
        case 0xE:
          v102 = v19;
          SetOrClrWF(0LL, a1, 3841LL, 1LL);
          SetOrClrWF(1LL, a1, 55553LL, 1LL);
          v85 = 0LL;
LABEL_187:
          SetOrClrWF(v85, a1, 55554LL, 1LL);
          v50 |= 0x100000u;
LABEL_94:
          v51 = *((_QWORD *)a1 + 5);
          if ( (*(_BYTE *)(v51 + 31) & 0x20) != 0 )
          {
            if ( (*(_BYTE *)(v51 + 21) & 2) != 0 )
              v86 = 0;
            else
              v86 = IsTrayWindow(a1);
            SetMinimize(a1, 0LL);
            v33 = 23;
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0
              && v86 != (unsigned int)IsTrayWindow(a1)
              && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
            {
              v87 = *(_QWORD *)a1;
              if ( ((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x800) != 0 )
                xxxCallHook(2, *(_QWORD *)a1, 0LL, 10);
              if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL) )
                PostShellHookMessages(2uLL, v87);
            }
            v88 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
            if ( (v88 & 0xC0) != 0x40 && (v88 & 0x10) != 0 )
            {
              v89 = *((_QWORD *)a1 + 2);
              if ( *(_DWORD *)(v89 + 892) == 1 )
              {
                v90 = *(_QWORD *)(v89 + 424);
                if ( v90 != gpqForeground && ((v50 & 0x10) == 0 || *(struct tagWND **)(v90 + 120) == a1) )
                  xxxSetForegroundWindowWithOptions(a1, 6LL, 4097LL, 0LL);
              }
            }
          }
          else
          {
            v33 = 0;
          }
          v14 = v50 | 0x20;
          v36 = 0;
          v21 = 0;
          goto LABEL_54;
        case 0xD:
          v102 = v19;
          SetOrClrWF(0LL, a1, 3841LL, 1LL);
          v84 = 0LL;
          break;
        default:
          v102 = v18;
          SetOrClrWF(0LL, a1, 3841LL, 1LL);
          goto LABEL_94;
      }
      SetOrClrWF(v84, a1, 55553LL, 1LL);
      v85 = 1LL;
      goto LABEL_187;
    }
  }
LABEL_81:
  if ( !v109 && (unsigned int)IsToplevelWindowDesktopComposed(a1) )
  {
    v60 = (void *)ReferenceDwmApiPort(v59);
    DwmAsyncNotifyAnimationChange(v60);
  }
  return 0LL;
}
