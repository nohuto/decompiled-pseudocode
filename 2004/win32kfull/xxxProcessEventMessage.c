/*
 * XREFs of xxxProcessEventMessage @ 0x1C00B3CF8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00B4500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     xxxProcessTSFEvent @ 0x1C00068E4 (xxxProcessTSFEvent.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C002AA5C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     RtlInitLargeUnicodeString @ 0x1C0031CBC (RtlInitLargeUnicodeString.c)
 *     PostShellHookMessages @ 0x1C0033A70 (PostShellHookMessages.c)
 *     xxxApplyGlobalInputSettings @ 0x1C0034C3C (xxxApplyGlobalInputSettings.c)
 *     _PostTransformableMessage @ 0x1C0037938 (_PostTransformableMessage.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C0037E18 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C003810C (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     xxxResetTooltip @ 0x1C00570C0 (xxxResetTooltip.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C0057164 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00581CC (xxxCancelMouseMoveTracking.c)
 *     xxxMinMaximizeEx @ 0x1C005A998 (xxxMinMaximizeEx.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0068010 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C008B600 (xxxFreeWindow.c)
 *     SetWakeBit @ 0x1C008FD50 (SetWakeBit.c)
 *     xxxProcessNotifyWinEvent @ 0x1C0091238 (xxxProcessNotifyWinEvent.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0099E30 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ??0?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00AFFC8 (--0-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C00B01A4 (--0-$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     ??1?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@XZ @ 0x1C00B01F8 (--1-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@XZ.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00B029C (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     _PostThreadMessage @ 0x1C00BE8A8 (_PostThreadMessage.c)
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C00FD010 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C0104B30 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1C0113370 (-xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0115664 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C011A6C0 (xxxProcessSetWindowPosEvent.c)
 *     ?xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z @ 0x1C011BFC4 (-xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z.c)
 *     xxxClientBroadcastThemeChange @ 0x1C0121B10 (xxxClientBroadcastThemeChange.c)
 *     ?xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z @ 0x1C012A234 (-xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z.c)
 *     xxxSoundSentry @ 0x1C014FB00 (xxxSoundSentry.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D0EBC (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     ?xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z @ 0x1C01D3400 (-xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01E25F0 (PostMousePointerLeaveAndCleanup.c)
 *     xxxDoDeferredPointerActivate @ 0x1C01F305C (xxxDoDeferredPointerActivate.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C020E07C (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020E980 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     xxxClientUpdateDpi @ 0x1C0234174 (xxxClientUpdateDpi.c)
 *     xxxSendShutdownData @ 0x1C0234298 (xxxSendShutdownData.c)
 *     ?xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z @ 0x1C0242898 (-xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z.c)
 *     ?xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z @ 0x1C0242A68 (-xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxProcessEventMessage(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *ThreadWin32Thread; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 *v12; // rbx
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned int v15; // r12d
  unsigned __int64 v16; // r14
  struct _LARGE_STRING *v17; // r15
  struct _KTHREAD *v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rbx
  unsigned __int64 v23; // r14
  struct tagWND **v24; // r13
  struct tagWND *v25; // r14
  __int64 v26; // r13
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  struct _KTHREAD *v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 *v38; // rax
  __int64 result; // rax
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  __int64 v43; // rcx
  int v44; // ecx
  int v45; // ecx
  int v46; // ecx
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  int v52; // ecx
  int v53; // ecx
  int v54; // ecx
  int v55; // ecx
  int v56; // ecx
  const struct FRAME_MARGIN *v57; // r12
  struct tagWND *v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  const struct FRAME_MARGIN *v62; // rcx
  __int64 v63; // rbx
  __int64 v64; // r14
  int v65; // eax
  __int64 v66; // rax
  unsigned __int16 v67; // bx
  __int64 v68; // rax
  __int64 v69; // rbx
  struct tagWND *v70; // rbx
  __int64 *v71; // rax
  NotifyShell *v72; // rbx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v75; // rcx
  __int64 CurrentThreadProcess; // rax
  struct tagWND *v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  int v81; // eax
  unsigned int v82; // r14d
  unsigned int v83; // ebx
  struct tagTOOLTIPWND *v84; // rax
  struct tagTOOLTIPWND *v85; // rbx
  __int64 v86; // rdi
  __int64 v87; // rax
  struct tagWND *v88; // rbx
  __int64 v89; // rax
  int v90; // ebx
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 CurrentProcessWow64Process; // rax
  __int64 v94; // rax
  int v95; // ebx
  __int64 v96; // rcx
  __int64 v97; // rax
  unsigned __int64 *v98; // r14
  unsigned __int64 v99; // rcx
  int v100; // ebx
  unsigned __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // rbx
  __int64 v107; // rax
  int v108; // r12d
  struct tagWND *v109; // rbx
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  BOOL v113; // eax
  struct tagRECT *v114; // rcx
  unsigned int *v115; // r9
  struct tagRECT *v116; // rdx
  unsigned int v117; // r9d
  struct tagRECT *v118; // r8
  __int64 v119; // rax
  struct tagWND *v120; // rbx
  unsigned int v121; // edx
  int v122; // r8d
  __int64 v123; // rax
  const struct WINDOWPOSANDCHECKPOINT *v124; // rdi
  struct tagWND *v125; // rbx
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // r8
  __int64 v129; // rax
  struct tagWND *v130; // rbx
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // rax
  int v135; // ebx
  __int64 v136; // rcx
  __int64 v137; // rax
  __int128 v138; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v139; // [rsp+50h] [rbp-B0h]
  tagDomLock *v140; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v141; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v142; // [rsp+70h] [rbp-90h]
  _QWORD v143[3]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v144[3]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v145[3]; // [rsp+A8h] [rbp-58h] BYREF
  tagDomLock *v146[2]; // [rsp+C0h] [rbp-40h] BYREF
  _WORD v147[264]; // [rsp+D0h] [rbp-30h] BYREF

  v138 = 0LL;
  v139 = 0LL;
  v2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v8, v7, v9),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v75),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  v143[0] = *(_QWORD *)(v6 + 16);
  *(_QWORD *)(v6 + 16) = v143;
  v11 = *(unsigned int *)(a2 + 96);
  v12 = *(unsigned __int64 **)(a1 + 424);
  v143[2] = CleanEventMessage;
  v143[1] = a2;
  if ( (int)v11 <= 15 )
  {
    if ( (_DWORD)v11 == 15 )
    {
      v98 = (unsigned __int64 *)v12[14];
      if ( v98 || (v98 = (unsigned __int64 *)v12[15]) != 0LL )
      {
        v99 = v98[2];
        if ( a1 == v99 )
        {
          v100 = *(_DWORD *)(a2 + 40) - 165;
          v101 = ((unsigned __int64)(unsigned __int16)v100 << 16) | (unsigned __int16)GetMouseKeyFlags(*(_QWORD *)(v99 + 424));
          *((_QWORD *)&v138 + 1) = v98;
          v102 = *(_QWORD *)(a2 + 120);
          *(_QWORD *)(a2 + 40) = v101;
          *(_DWORD *)(a1 + 1224) |= 0x800u;
          *(_QWORD *)(a1 + 1232) = v102;
          *(_QWORD *)&v138 = *(_QWORD *)(a1 + 408);
          *(_QWORD *)(a1 + 408) = &v138;
          HMLockObject(v98);
          xxxSendMessage((unsigned __int64)v98, 0x319u, *v98, *(struct _LARGE_STRING **)(a2 + 40));
          ThreadUnlock1(v104, v103, v105);
          *(_DWORD *)(a1 + 1224) &= ~0x800u;
        }
        else
        {
          PostEventMessageEx(
            (struct tagTHREADINFO *)v99,
            *(struct tagQ **)(v99 + 424),
            0xFu,
            0LL,
            0,
            0LL,
            *(_QWORD *)(a2 + 40),
            (struct tagINPUT_MESSAGE_SOURCE *)(a2 + 120));
        }
      }
    }
    else if ( (int)v11 <= 8 )
    {
      if ( (_DWORD)v11 == 8 )
      {
        v71 = (__int64 *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 32), 1);
        v72 = (NotifyShell *)v71;
        if ( v71 )
        {
          if ( *(char *)(v71[5] + 19) < 0 )
          {
            *(_QWORD *)&v138 = *(_QWORD *)(a1 + 408);
            *(_QWORD *)(a1 + 408) = &v138;
            *((_QWORD *)&v138 + 1) = v71;
            HMLockObject(v71);
            xxxFreeWindow(v72, (struct tagSwitchWndInfo *)&v138);
          }
          else
          {
            xxxDestroyWindow(v71);
          }
        }
      }
      else
      {
        v44 = v11 - 1;
        if ( v44 )
        {
          v45 = v44 - 1;
          if ( v45 )
          {
            v46 = v45 - 1;
            if ( v46 )
            {
              v47 = v46 - 1;
              if ( v47 )
              {
                v48 = v47 - 1;
                if ( v48 )
                {
                  v11 = (unsigned int)(v48 - 1);
                  if ( (_DWORD)v11 )
                  {
                    if ( (_DWORD)v11 == 1 )
                    {
                      v77 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
                      if ( v77 )
                        PostTransformableMessage(
                          v77,
                          *(_DWORD *)(a2 + 24),
                          *(_QWORD *)(a2 + 32),
                          *(_QWORD *)(a2 + 40),
                          1);
                    }
                  }
                  else
                  {
                    xxxProcessActivationEvent((const struct tagQMSG *)a2);
                  }
                }
                else
                {
                  xxxDeactivate(a1, *(_DWORD *)(a2 + 32), *(_DWORD *)(a2 + 72));
                }
              }
              else
              {
                ProcessUpdateKeyStateEvent(v12, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 32) + 64LL);
              }
            }
            else
            {
              xxxProcessSetWindowPosEvent(*(_QWORD *)(a2 + 32));
            }
          }
          else
          {
            v11 = v12[13];
            if ( v11 )
            {
              *(_QWORD *)&v138 = *(_QWORD *)(a1 + 408);
              *(_QWORD *)(a1 + 408) = &v138;
              *((_QWORD *)&v138 + 1) = v11;
              HMLockObject(v11);
              xxxSendMessage(v12[13], 0x1Fu, 0LL, 0LL);
              ThreadUnlock1(v79, v78, v80);
              SetWakeBit(a1, 2u);
            }
          }
        }
        else
        {
          v68 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
          v69 = v68;
          if ( v68 )
          {
            v11 = *(_QWORD *)(v68 + 40);
            if ( *(char *)(v11 + 20) >= 0 )
            {
              *(_QWORD *)&v138 = *(_QWORD *)(a1 + 408);
              *(_QWORD *)(a1 + 408) = &v138;
              *((_QWORD *)&v138 + 1) = v68;
              HMLockObject(v68);
              xxxProcessShowWindowEvent(v69, *(unsigned int *)(a2 + 24), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
              goto LABEL_22;
            }
          }
        }
      }
    }
    else
    {
      v13 = (unsigned int)(v11 - 9);
      if ( (_DWORD)v13 )
      {
        v40 = v13 - 1;
        if ( !v40 )
        {
          v88 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
          if ( !v88 )
            goto LABEL_23;
          *(_QWORD *)&v138 = *(_QWORD *)(a1 + 408);
          *(_QWORD *)(a1 + 408) = &v138;
          *((_QWORD *)&v138 + 1) = v88;
          HMLockObject(v88);
          xxxProcessMinimizeHungThreadEvent(v88);
          goto LABEL_22;
        }
        v41 = v40 - 1;
        if ( v41 )
        {
          v42 = v41 - 1;
          if ( v42 )
          {
            v11 = (unsigned int)(v42 - 1);
            if ( (_DWORD)v11 )
            {
              if ( (_DWORD)v11 == 1 )
              {
                v81 = *(_DWORD *)(a2 + 24);
                if ( v81 == 5 )
                {
                  v82 = *(_DWORD *)(a2 + 40);
                  v81 = *(_DWORD *)(a2 + 32);
                  if ( v82 > 5 )
                    v82 = 5;
                }
                else
                {
                  v82 = 1;
                }
                if ( v82 )
                {
                  v83 = (unsigned __int16)v81 | 0x10000;
                  do
                  {
                    CUserPlaySound::PlaySync((CUserPlaySound *)CUserPlaySound::s_pUserPlaySound, v83);
                    --v82;
                  }
                  while ( v82 );
                }
                xxxSoundSentry();
              }
            }
            else
            {
              if ( ((*(_DWORD *)(a1 + 672) | *(_DWORD *)(**(_QWORD **)(a1 + 456) + 16LL)) & 0x800) != 0 )
                xxxCallHook(*(_DWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), 0LL, 10);
              PostShellHookMessages(*(unsigned int *)(a2 + 32), *(_QWORD *)(a2 + 40));
            }
          }
          else
          {
            CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(
              v146,
              (tagDomLock *)(a1 + 384));
            CLockDomainExclusiveInUserCrit<DLT_WINEVENT>::CLockDomainExclusiveInUserCrit<DLT_WINEVENT>(&v140);
            v43 = *(_QWORD *)(a2 + 40);
            if ( *(_DWORD *)(v43 + 24) )
              xxxProcessTSFEvent((struct tagNOTIFY *)v43);
            else
              xxxProcessNotifyWinEvent(v43);
            tagDomLock::UnLockExclusive(v140);
            CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::~CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(v146);
          }
        }
        else
        {
          v63 = *(_QWORD *)(a1 + 448);
          v64 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
          v65 = *(_DWORD *)(v63 + 48);
          if ( (v65 & 0x5C0) == 0
            || (v11 = *(_QWORD *)(a2 + 16), **(_QWORD **)(v63 + 184) != v11)
            || (v11 = *(unsigned int *)(a2 + 32), *(_DWORD *)(v63 + 192) != (_DWORD)v11) )
          {
            if ( (v65 & 0x100) != 0 )
              *(_QWORD *)(a2 + 40) &= 0xFFFFFFFFFFFFFCFFuLL;
            if ( v64 )
            {
              *(_QWORD *)&v138 = *(_QWORD *)(a1 + 408);
              *(_QWORD *)(a1 + 408) = &v138;
              *((_QWORD *)&v138 + 1) = v64;
              HMLockObject(v64);
              xxxCancelMouseMoveTracking(*(_DWORD *)(a2 + 24), v64, *(_DWORD *)(a2 + 32), *(_DWORD *)(a2 + 40));
              goto LABEL_22;
            }
            if ( (*(_DWORD *)(a2 + 40) & 0x300LL) != 0 && (*(_DWORD *)(a2 + 24) & 0x200) != 0 )
            {
              v84 = (struct tagTOOLTIPWND *)safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v63 + 112));
              v85 = v84;
              if ( v84 )
              {
                v86 = *(_QWORD *)v84;
                if ( *(_QWORD *)v84 )
                {
                  v144[2] = 0LL;
                  v87 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                  v144[0] = *(_QWORD *)(v87 + 408);
                  *(_QWORD *)(v87 + 408) = v144;
                  v144[1] = v86;
                  HMLockObject(v86);
                  xxxResetTooltip(v85);
                  goto LABEL_22;
                }
              }
            }
          }
        }
      }
      else
      {
        v14 = *(_QWORD *)(a2 + 32);
        v15 = *(_DWORD *)(a2 + 24);
        v16 = *(_QWORD *)(a2 + 16);
        v17 = *(struct _LARGE_STRING **)(a2 + 40);
        v141 = 0LL;
        v145[2] = 0LL;
        v18 = KeGetCurrentThread();
        v142 = v14;
        if ( !(unsigned __int8)KeIsAttachedProcess(v13)
          || (v89 = PsGetCurrentProcess(v20, v19, v21),
              v90 = PsGetProcessSessionIdEx(v89),
              v92 = PsGetCurrentThreadProcess(v91),
              v90 == (unsigned int)PsGetProcessSessionIdEx(v92)) )
        {
          PsGetThreadWin32Thread(v18);
        }
        v11 = gpsi;
        if ( (unsigned __int64)(unsigned __int16)v16 < *(_QWORD *)(gpsi + 8LL) )
        {
          v22 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v16 * LODWORD(gSharedInfo[2]);
          v23 = v16 >> 16;
          v24 = (struct tagWND **)HMPkheFromPhe(v22);
          if ( ((_WORD)v23 == *(_WORD *)(v22 + 26)
             || (_WORD)v23 == 0xFFFF
             || !(_WORD)v23 && (CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v11)) != 0)
            && (*(_BYTE *)(v22 + 25) & 1) == 0
            && *(_BYTE *)(v22 + 24) == 1 )
          {
            v25 = *v24;
            if ( *v24 )
            {
              v26 = 0LL;
              v140 = KeGetCurrentThread();
              if ( !(unsigned __int8)KeIsAttachedProcess(v11)
                || (v94 = PsGetCurrentProcess(v28, v27, v29),
                    v95 = PsGetProcessSessionIdEx(v94),
                    v97 = PsGetCurrentThreadProcess(v96),
                    v95 == (unsigned int)PsGetProcessSessionIdEx(v97)) )
              {
                v30 = (__int64 *)PsGetThreadWin32Thread(v140);
                if ( v30 )
                  v26 = *v30;
              }
              v145[0] = *(_QWORD *)(v26 + 408);
              *(_QWORD *)(v26 + 408) = v145;
              v145[1] = v25;
              HMLockObject(v25);
              if ( v15 >= 0x1A )
              {
                if ( v15 <= 0x1B )
                {
                  if ( v17 )
                  {
                    if ( v17 == (struct _LARGE_STRING *)-1LL )
                    {
                      v147[0] = 0;
                      RtlInitLargeUnicodeString((__int64)&v141, (__int64)v147);
                      v17 = (struct _LARGE_STRING *)&v141;
                    }
                    else
                    {
                      v67 = (unsigned __int16)v17;
                      if ( (unsigned int)UserGetAtomName((unsigned __int16)v17, v147, 260LL) )
                      {
                        RtlInitLargeUnicodeString((__int64)&v141, (__int64)v147);
                        v17 = (struct _LARGE_STRING *)&v141;
                      }
                      else
                      {
                        v17 = 0LL;
                      }
                      UserDeleteAtom(v67);
                    }
                  }
                  *(_QWORD *)(a2 + 40) = 0LL;
                }
                else if ( v15 == 834 )
                {
                  xxxEndGetWidnowTrackInfoAsync(v25);
                  goto LABEL_22;
                }
              }
              xxxSendMessage((unsigned __int64)v25, v15, v142, v17);
LABEL_22:
              ThreadUnlock1(v32, v31, v33);
              goto LABEL_23;
            }
          }
        }
      }
    }
    goto LABEL_23;
  }
  if ( (int)v11 > 23 )
  {
    v53 = v11 - 24;
    if ( !v53 )
    {
      xxxClientUpdateDpi(*(unsigned int *)(a2 + 32));
      goto LABEL_23;
    }
    v54 = v53 - 1;
    if ( !v54 )
    {
      xxxClientBroadcastThemeChange(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
      goto LABEL_23;
    }
    v55 = v54 - 1;
    if ( v55 )
    {
      v56 = v55 - 1;
      if ( v56 )
      {
        v11 = (unsigned int)(v56 - 1);
        if ( (_DWORD)v11 )
        {
          if ( (_DWORD)v11 == 1 )
          {
            v70 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
            if ( v70 )
            {
              *(_QWORD *)&v138 = *(_QWORD *)(a1 + 408);
              *(_QWORD *)(a1 + 408) = &v138;
              *((_QWORD *)&v138 + 1) = v70;
              HMLockObject(v70);
              xxxDeliverRestoreFocusMessage(v70);
              goto LABEL_22;
            }
          }
          goto LABEL_23;
        }
        v57 = *(const struct FRAME_MARGIN **)(a2 + 32);
        v58 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
        if ( v58 )
        {
          *(_QWORD *)&v138 = *(_QWORD *)(a1 + 408);
          *(_QWORD *)(a1 + 408) = &v138;
          *((_QWORD *)&v138 + 1) = v58;
          HMLockObject(v58);
          xxxProcessUpdateFrameMargins(v58, v57);
          ThreadUnlock1(v60, v59, v61);
        }
        v62 = v57;
LABEL_60:
        Win32FreePool(v62);
        goto LABEL_23;
      }
      v123 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      v124 = *(const struct WINDOWPOSANDCHECKPOINT **)(a2 + 40);
      v125 = (struct tagWND *)v123;
      if ( v123 )
      {
        *(_QWORD *)&v138 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 408) = &v138;
        *((_QWORD *)&v138 + 1) = v123;
        HMLockObject(v123);
        xxxCloneWindowPosAndArrangement(v125, v124);
        ThreadUnlock1(v127, v126, v128);
      }
    }
    else
    {
      v129 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      v124 = *(const struct WINDOWPOSANDCHECKPOINT **)(a2 + 40);
      v130 = (struct tagWND *)v129;
      if ( v129 )
      {
        *(_QWORD *)&v138 = *(_QWORD *)(a1 + 408);
        *(_QWORD *)(a1 + 408) = &v138;
        *((_QWORD *)&v138 + 1) = v129;
        HMLockObject(v129);
        if ( CMoveSizeRequest::xxxRevalidateAndTransferCapture(v124, v130) )
          CMoveSizeRequest::xxxSendSysCommandToWindow(v124, v130);
        ThreadUnlock1(v132, v131, v133);
      }
      if ( !v124 )
        goto LABEL_23;
    }
    v62 = v124;
    goto LABEL_60;
  }
  if ( (_DWORD)v11 == 23 )
  {
    v120 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
    if ( !v120 )
      goto LABEL_23;
    *(_QWORD *)&v138 = *(_QWORD *)(a1 + 408);
    *(_QWORD *)(a1 + 408) = &v138;
    *((_QWORD *)&v138 + 1) = v120;
    HMLockObject(v120);
    v122 = *(_DWORD *)(a2 + 40);
    v121 = *(_DWORD *)(a2 + 32);
    goto LABEL_157;
  }
  v49 = v11 - 16;
  if ( !v49 )
  {
    v119 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
    v120 = (struct tagWND *)v119;
    if ( !v119 )
      goto LABEL_23;
    v11 = *(_QWORD *)(v119 + 40);
    if ( (*(_BYTE *)(v11 + 31) & 1) == 0 )
      goto LABEL_23;
    *(_QWORD *)&v138 = *(_QWORD *)(a1 + 408);
    *(_QWORD *)(a1 + 408) = &v138;
    *((_QWORD *)&v138 + 1) = v119;
    HMLockObject(v119);
    v121 = 3;
    v122 = 3;
LABEL_157:
    xxxMinMaximizeEx(v120, v121, v122, 0LL, 0LL, 0LL);
    goto LABEL_22;
  }
  v50 = v49 - 1;
  if ( v50 )
  {
    v11 = (unsigned int)(v50 - 1);
    if ( (_DWORD)v11 )
    {
      v51 = v11 - 1;
      if ( v51 )
      {
        v52 = v51 - 1;
        if ( v52 )
        {
          v11 = (unsigned int)(v52 - 1);
          if ( (_DWORD)v11 )
          {
            if ( (_DWORD)v11 == 1 )
              xxxProcessDesktopRecalc(*(struct tagASYNCDTOPRECALC **)(a2 + 32));
          }
          else
          {
            v106 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 40), 1);
            v107 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
            PostMousePointerLeaveAndCleanup(v106, v107);
          }
        }
        else
        {
          xxxDoDeferredPointerActivate(a2);
          CleanEventMessage((struct tagQMSG *)a2);
        }
      }
      else if ( *(_DWORD *)(a2 + 24) == 809 )
      {
        PostThreadMessage(a1, 809LL, *(_QWORD *)(a2 + 32));
      }
      else
      {
        xxxSendShutdownData(*(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 32));
      }
    }
    else if ( gpqForeground )
    {
      v66 = *(_QWORD *)(gpqForeground + 112LL);
      if ( v66 )
      {
        if ( *(_QWORD *)(v66 + 16) == a1 )
        {
          v11 = HIDWORD(gpdwCPUserPreferencesMask);
          if ( (v11 & 0x80u) == 0LL )
            xxxApplyGlobalInputSettings();
        }
      }
    }
    goto LABEL_23;
  }
  v108 = *(_DWORD *)(a2 + 32);
  v109 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
  if ( v109 )
  {
    *(_QWORD *)&v138 = *(_QWORD *)(a1 + 408);
    *(_QWORD *)(a1 + 408) = &v138;
    *((_QWORD *)&v138 + 1) = v109;
    HMLockObject(v109);
    if ( v108 )
    {
      if ( v108 == 1 )
      {
        v113 = IsRectEmptyInl((const struct tagRECT *)(*(_QWORD *)(a2 + 40) + 20LL));
        v116 = (struct tagRECT *)(v115 + 1);
        v117 = *v115;
        v118 = 0LL;
        if ( !v113 )
          v118 = v114;
        xxxEndSetWindowArrangement(v109, v116, v118, v117);
      }
    }
    else
    {
      xxxArrangeWindow(v109, *(unsigned int *)(a2 + 40));
    }
    ThreadUnlock1(v111, v110, v112);
  }
  if ( v108 == 1 )
  {
    v62 = *(const struct FRAME_MARGIN **)(a2 + 40);
    goto LABEL_60;
  }
LABEL_23:
  v34 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(v11)
    || (v134 = PsGetCurrentProcess(v36, v35, v37),
        v135 = PsGetProcessSessionIdEx(v134),
        v137 = PsGetCurrentThreadProcess(v136),
        v135 == (unsigned int)PsGetProcessSessionIdEx(v137)) )
  {
    v38 = (__int64 *)PsGetThreadWin32Thread(v34);
    if ( v38 )
      v2 = *v38;
  }
  result = v143[0];
  *(_QWORD *)(v2 + 16) = v143[0];
  return result;
}
