/*
 * XREFs of xxxProcessEventMessage @ 0x1C00D8288
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D8A90 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     xxxProcessTSFEvent @ 0x1C0006784 (xxxProcessTSFEvent.c)
 *     xxxMinMaximizeEx @ 0x1C0017D5C (xxxMinMaximizeEx.c)
 *     _PostTransformableMessage @ 0x1C001A3A8 (_PostTransformableMessage.c)
 *     xxxResetTooltip @ 0x1C001B604 (xxxResetTooltip.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C003A14C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0055B10 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     ??1?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@XZ @ 0x1C0076C44 (--1-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@XZ.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C0077074 (--0-$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     ??0?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00770C8 (--0-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     RtlInitLargeUnicodeString @ 0x1C00BC9CC (RtlInitLargeUnicodeString.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00BD088 (xxxCancelMouseMoveTracking.c)
 *     _PostThreadMessage @ 0x1C00BE598 (_PostThreadMessage.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00BE818 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     PostShellHookMessages @ 0x1C00BF140 (PostShellHookMessages.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00C0444 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     xxxApplyGlobalInputSettings @ 0x1C00C20AC (xxxApplyGlobalInputSettings.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00CAD64 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 *     SetWakeBit @ 0x1C00D4F30 (SetWakeBit.c)
 *     xxxProcessNotifyWinEvent @ 0x1C00D6418 (xxxProcessNotifyWinEvent.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00F6CF0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C00F80D0 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 *     ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1C011413C (-xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0116BF4 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C011B490 (xxxProcessSetWindowPosEvent.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C011CA90 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     ?xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z @ 0x1C011CF84 (-xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C011D62C (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     xxxClientBroadcastThemeChange @ 0x1C0122A80 (xxxClientBroadcastThemeChange.c)
 *     ?xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z @ 0x1C012C2C4 (-xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z.c)
 *     xxxSoundSentry @ 0x1C0152300 (xxxSoundSentry.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01D00AC (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     ?xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z @ 0x1C01D25F0 (-xxxProcessMinimizeHungThreadEvent@@YAXPEAUtagWND@@@Z.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01E1930 (PostMousePointerLeaveAndCleanup.c)
 *     xxxDoDeferredPointerActivate @ 0x1C01F23EC (xxxDoDeferredPointerActivate.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C020D1FC (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020DB00 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     xxxClientUpdateDpi @ 0x1C02332E4 (xxxClientUpdateDpi.c)
 *     xxxSendShutdownData @ 0x1C0233408 (xxxSendShutdownData.c)
 *     ?xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z @ 0x1C02415F8 (-xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z.c)
 *     ?xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z @ 0x1C02417C8 (-xxxSendSysCommandToWindow@CMoveSizeRequest@@AEAAXPEAUtagWND@@@Z.c)
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
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 *v13; // rbx
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned int v16; // r12d
  unsigned __int64 v17; // r14
  struct _LARGE_STRING *v18; // r15
  struct _KTHREAD *v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rbx
  unsigned __int64 v24; // r14
  struct tagWND **v25; // r13
  struct tagWND *v26; // r14
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  struct _KTHREAD *v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 *v39; // rax
  __int64 result; // rax
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  __int64 v44; // rcx
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
  int v57; // ecx
  const struct FRAME_MARGIN *v58; // r12
  struct tagWND *v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  const struct FRAME_MARGIN *v63; // rcx
  __int64 v64; // rbx
  __int64 v65; // r14
  int v66; // eax
  __int64 v67; // rax
  unsigned __int16 v68; // bx
  __int64 v69; // rax
  __int64 v70; // rbx
  struct tagWND *v71; // rbx
  unsigned __int64 v72; // rax
  struct tagWND *v73; // rbx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v76; // rcx
  __int64 CurrentThreadProcess; // rax
  struct tagWND *v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  int v82; // eax
  unsigned int v83; // r14d
  unsigned int v84; // ebx
  struct tagTOOLTIPWND *v85; // rax
  struct tagTOOLTIPWND *v86; // rbx
  __int64 v87; // rdi
  __int64 v88; // rax
  struct tagWND *v89; // rbx
  __int64 v90; // rax
  int v91; // ebx
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 CurrentProcessWow64Process; // rax
  __int64 v95; // rax
  int v96; // ebx
  __int64 v97; // rcx
  __int64 v98; // rax
  unsigned __int64 *v99; // r14
  unsigned __int64 v100; // rcx
  int v101; // ebx
  unsigned __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // rbx
  __int64 v108; // rax
  int v109; // r12d
  struct tagWND *v110; // rbx
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  BOOL v114; // eax
  struct tagRECT *v115; // rcx
  unsigned int *v116; // r9
  struct tagRECT *v117; // rdx
  unsigned int v118; // r9d
  struct tagRECT *v119; // r8
  __int64 v120; // rax
  struct tagWND *v121; // rbx
  unsigned int v122; // edx
  int v123; // r8d
  __int64 v124; // rax
  const struct WINDOWPOSANDCHECKPOINT *v125; // rdi
  struct tagWND *v126; // rbx
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // rax
  struct tagWND *v131; // rbx
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // rax
  int v136; // ebx
  __int64 v137; // rcx
  __int64 v138; // rax
  __int128 v139; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v140; // [rsp+50h] [rbp-B0h]
  tagDomLock *v141; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v142; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v143; // [rsp+70h] [rbp-90h]
  _QWORD v144[3]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v145[3]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v146[3]; // [rsp+A8h] [rbp-58h] BYREF
  tagDomLock *v147[2]; // [rsp+C0h] [rbp-40h] BYREF
  _WORD v148[264]; // [rsp+D0h] [rbp-30h] BYREF

  v139 = 0LL;
  v140 = 0LL;
  v2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v8, v7, v9),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v76),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  v144[0] = *(_QWORD *)(v6 + 16);
  *(_QWORD *)(v6 + 16) = v144;
  v12 = *(unsigned int *)(a2 + 96);
  v13 = *(unsigned __int64 **)(a1 + 432);
  v144[2] = CleanEventMessage;
  v144[1] = a2;
  if ( (int)v12 <= 15 )
  {
    if ( (_DWORD)v12 == 15 )
    {
      v99 = (unsigned __int64 *)v13[14];
      if ( v99 || (v99 = (unsigned __int64 *)v13[15]) != 0LL )
      {
        v100 = v99[2];
        if ( a1 == v100 )
        {
          v101 = *(_DWORD *)(a2 + 40) - 165;
          v102 = ((unsigned __int64)(unsigned __int16)v101 << 16) | (unsigned __int16)GetMouseKeyFlags(*(_QWORD *)(v100 + 432));
          *((_QWORD *)&v139 + 1) = v99;
          v103 = *(_QWORD *)(a2 + 120);
          *(_QWORD *)(a2 + 40) = v102;
          *(_DWORD *)(a1 + 1232) |= 0x800u;
          *(_QWORD *)(a1 + 1240) = v103;
          *(_QWORD *)&v139 = *(_QWORD *)(a1 + 416);
          *(_QWORD *)(a1 + 416) = &v139;
          HMLockObject(v99);
          xxxSendMessage((unsigned __int64)v99, 0x319u, *v99, *(struct _LARGE_STRING **)(a2 + 40));
          ThreadUnlock1(v105, v104, v106);
          *(_DWORD *)(a1 + 1232) &= ~0x800u;
        }
        else
        {
          PostEventMessageEx(
            (struct tagTHREADINFO *)v100,
            *(struct tagQ **)(v100 + 432),
            0xFu,
            0LL,
            0,
            0LL,
            *(_QWORD *)(a2 + 40),
            (struct tagINPUT_MESSAGE_SOURCE *)(a2 + 120));
        }
      }
    }
    else if ( (int)v12 <= 8 )
    {
      if ( (_DWORD)v12 == 8 )
      {
        v72 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 32), 1);
        v73 = (struct tagWND *)v72;
        if ( v72 )
        {
          if ( *(char *)(*(_QWORD *)(v72 + 40) + 19LL) < 0 )
          {
            *(_QWORD *)&v139 = *(_QWORD *)(a1 + 416);
            *(_QWORD *)(a1 + 416) = &v139;
            *((_QWORD *)&v139 + 1) = v72;
            HMLockObject(v72);
            xxxFreeWindow(v73, (struct tagSwitchWndInfo *)&v139);
          }
          else
          {
            xxxDestroyWindow(v72);
          }
        }
      }
      else
      {
        v45 = v12 - 1;
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
                v49 = v48 - 1;
                if ( v49 )
                {
                  v12 = (unsigned int)(v49 - 1);
                  if ( (_DWORD)v12 )
                  {
                    if ( (_DWORD)v12 == 1 )
                    {
                      v78 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
                      if ( v78 )
                        PostTransformableMessage(
                          v78,
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
                ProcessUpdateKeyStateEvent(v13, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 32) + 64LL);
              }
            }
            else
            {
              xxxProcessSetWindowPosEvent(*(_QWORD *)(a2 + 32));
            }
          }
          else
          {
            v12 = v13[13];
            if ( v12 )
            {
              *(_QWORD *)&v139 = *(_QWORD *)(a1 + 416);
              *(_QWORD *)(a1 + 416) = &v139;
              *((_QWORD *)&v139 + 1) = v12;
              HMLockObject(v12);
              xxxSendMessage(v13[13], 0x1Fu, 0LL, 0LL);
              ThreadUnlock1(v80, v79, v81);
              SetWakeBit(a1, 2u);
            }
          }
        }
        else
        {
          v69 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
          v70 = v69;
          if ( v69 )
          {
            v12 = *(_QWORD *)(v69 + 40);
            if ( *(char *)(v12 + 20) >= 0 )
            {
              *(_QWORD *)&v139 = *(_QWORD *)(a1 + 416);
              *(_QWORD *)(a1 + 416) = &v139;
              *((_QWORD *)&v139 + 1) = v69;
              HMLockObject(v69);
              xxxProcessShowWindowEvent(v70, *(unsigned int *)(a2 + 24), *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
              goto LABEL_22;
            }
          }
        }
      }
    }
    else
    {
      v14 = (unsigned int)(v12 - 9);
      if ( (_DWORD)v14 )
      {
        v41 = v14 - 1;
        if ( !v41 )
        {
          v89 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
          if ( !v89 )
            goto LABEL_23;
          *(_QWORD *)&v139 = *(_QWORD *)(a1 + 416);
          *(_QWORD *)(a1 + 416) = &v139;
          *((_QWORD *)&v139 + 1) = v89;
          HMLockObject(v89);
          xxxProcessMinimizeHungThreadEvent(v89);
          goto LABEL_22;
        }
        v42 = v41 - 1;
        if ( v42 )
        {
          v43 = v42 - 1;
          if ( v43 )
          {
            v12 = (unsigned int)(v43 - 1);
            if ( (_DWORD)v12 )
            {
              if ( (_DWORD)v12 == 1 )
              {
                v82 = *(_DWORD *)(a2 + 24);
                if ( v82 == 5 )
                {
                  v83 = *(_DWORD *)(a2 + 40);
                  v82 = *(_DWORD *)(a2 + 32);
                  if ( v83 > 5 )
                    v83 = 5;
                }
                else
                {
                  v83 = 1;
                }
                if ( v83 )
                {
                  v84 = (unsigned __int16)v82 | 0x10000;
                  do
                  {
                    CUserPlaySound::PlaySync((CUserPlaySound *)CUserPlaySound::s_pUserPlaySound, v84);
                    --v83;
                  }
                  while ( v83 );
                }
                xxxSoundSentry();
              }
            }
            else
            {
              if ( ((*(_DWORD *)(a1 + 680) | *(_DWORD *)(**(_QWORD **)(a1 + 464) + 16LL)) & 0x800) != 0 )
                xxxCallHook(*(_DWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), 0LL, 10);
              PostShellHookMessages(*(unsigned int *)(a2 + 32), *(_QWORD *)(a2 + 40));
            }
          }
          else
          {
            CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(
              v147,
              (tagDomLock *)(a1 + 392));
            CLockDomainExclusiveInUserCrit<DLT_WINEVENT>::CLockDomainExclusiveInUserCrit<DLT_WINEVENT>(&v141);
            v44 = *(_QWORD *)(a2 + 40);
            if ( *(_DWORD *)(v44 + 24) )
              xxxProcessTSFEvent((struct tagNOTIFY *)v44);
            else
              xxxProcessNotifyWinEvent(v44);
            tagDomLock::UnLockExclusive(v141);
            CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::~CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(v147);
          }
        }
        else
        {
          v64 = *(_QWORD *)(a1 + 456);
          v65 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
          v66 = *(_DWORD *)(v64 + 48);
          if ( (v66 & 0x5C0) == 0
            || (v12 = *(_QWORD *)(a2 + 16), **(_QWORD **)(v64 + 184) != v12)
            || (v12 = *(unsigned int *)(a2 + 32), *(_DWORD *)(v64 + 192) != (_DWORD)v12) )
          {
            if ( (v66 & 0x100) != 0 )
              *(_QWORD *)(a2 + 40) &= 0xFFFFFFFFFFFFFCFFuLL;
            if ( v65 )
            {
              *(_QWORD *)&v139 = *(_QWORD *)(a1 + 416);
              *(_QWORD *)(a1 + 416) = &v139;
              *((_QWORD *)&v139 + 1) = v65;
              HMLockObject(v65);
              xxxCancelMouseMoveTracking(*(_DWORD *)(a2 + 24), v65, *(_DWORD *)(a2 + 32), *(_DWORD *)(a2 + 40));
              goto LABEL_22;
            }
            if ( (*(_DWORD *)(a2 + 40) & 0x300LL) != 0 && (*(_DWORD *)(a2 + 24) & 0x200) != 0 )
            {
              v85 = (struct tagTOOLTIPWND *)safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v64 + 112));
              v86 = v85;
              if ( v85 )
              {
                v87 = *(_QWORD *)v85;
                if ( *(_QWORD *)v85 )
                {
                  v145[2] = 0LL;
                  v88 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                  v145[0] = *(_QWORD *)(v88 + 416);
                  *(_QWORD *)(v88 + 416) = v145;
                  v145[1] = v87;
                  HMLockObject(v87);
                  xxxResetTooltip(v86);
                  goto LABEL_22;
                }
              }
            }
          }
        }
      }
      else
      {
        v15 = *(_QWORD *)(a2 + 32);
        v16 = *(_DWORD *)(a2 + 24);
        v17 = *(_QWORD *)(a2 + 16);
        v18 = *(struct _LARGE_STRING **)(a2 + 40);
        v142 = 0LL;
        v146[2] = 0LL;
        v19 = KeGetCurrentThread();
        v143 = v15;
        if ( !(unsigned __int8)KeIsAttachedProcess(v14)
          || (v90 = PsGetCurrentProcess(v21, v20, v22),
              v91 = PsGetProcessSessionIdEx(v90),
              v93 = PsGetCurrentThreadProcess(v92),
              v91 == (unsigned int)PsGetProcessSessionIdEx(v93)) )
        {
          PsGetThreadWin32Thread(v19);
        }
        v12 = gpsi;
        if ( (unsigned __int64)(unsigned __int16)v17 < *(_QWORD *)(gpsi + 8LL) )
        {
          v23 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v17 * LODWORD(gSharedInfo[2]);
          v24 = v17 >> 16;
          v25 = (struct tagWND **)HMPkheFromPhe(v23);
          if ( ((_WORD)v24 == *(_WORD *)(v23 + 26)
             || (_WORD)v24 == 0xFFFF
             || !(_WORD)v24 && (CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v12)) != 0)
            && (*(_BYTE *)(v23 + 25) & 1) == 0
            && *(_BYTE *)(v23 + 24) == 1 )
          {
            v26 = *v25;
            if ( *v25 )
            {
              v27 = 0LL;
              v141 = KeGetCurrentThread();
              if ( !(unsigned __int8)KeIsAttachedProcess(v12)
                || (v95 = PsGetCurrentProcess(v29, v28, v30),
                    v96 = PsGetProcessSessionIdEx(v95),
                    v98 = PsGetCurrentThreadProcess(v97),
                    v96 == (unsigned int)PsGetProcessSessionIdEx(v98)) )
              {
                v31 = (__int64 *)PsGetThreadWin32Thread(v141);
                if ( v31 )
                  v27 = *v31;
              }
              v146[0] = *(_QWORD *)(v27 + 416);
              *(_QWORD *)(v27 + 416) = v146;
              v146[1] = v26;
              HMLockObject(v26);
              if ( v16 >= 0x1A )
              {
                if ( v16 <= 0x1B )
                {
                  if ( v18 )
                  {
                    if ( v18 == (struct _LARGE_STRING *)-1LL )
                    {
                      v148[0] = 0;
                      RtlInitLargeUnicodeString((__int64)&v142, (__int64)v148);
                      v18 = (struct _LARGE_STRING *)&v142;
                    }
                    else
                    {
                      v68 = (unsigned __int16)v18;
                      if ( (unsigned int)UserGetAtomName((unsigned __int16)v18, v148, 260LL) )
                      {
                        RtlInitLargeUnicodeString((__int64)&v142, (__int64)v148);
                        v18 = (struct _LARGE_STRING *)&v142;
                      }
                      else
                      {
                        v18 = 0LL;
                      }
                      UserDeleteAtom(v68);
                    }
                  }
                  *(_QWORD *)(a2 + 40) = 0LL;
                }
                else if ( v16 == 834 )
                {
                  xxxEndGetWidnowTrackInfoAsync(v26);
                  goto LABEL_22;
                }
              }
              xxxSendMessage((unsigned __int64)v26, v16, v143, v18);
LABEL_22:
              ThreadUnlock1(v33, v32, v34);
              goto LABEL_23;
            }
          }
        }
      }
    }
    goto LABEL_23;
  }
  if ( (int)v12 > 23 )
  {
    v54 = v12 - 24;
    if ( !v54 )
    {
      xxxClientUpdateDpi(*(unsigned int *)(a2 + 32));
      goto LABEL_23;
    }
    v55 = v54 - 1;
    if ( !v55 )
    {
      xxxClientBroadcastThemeChange(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
      goto LABEL_23;
    }
    v56 = v55 - 1;
    if ( v56 )
    {
      v57 = v56 - 1;
      if ( v57 )
      {
        v12 = (unsigned int)(v57 - 1);
        if ( (_DWORD)v12 )
        {
          if ( (_DWORD)v12 == 1 )
          {
            v71 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
            if ( v71 )
            {
              *(_QWORD *)&v139 = *(_QWORD *)(a1 + 416);
              *(_QWORD *)(a1 + 416) = &v139;
              *((_QWORD *)&v139 + 1) = v71;
              HMLockObject(v71);
              xxxDeliverRestoreFocusMessage(v71);
              goto LABEL_22;
            }
          }
          goto LABEL_23;
        }
        v58 = *(const struct FRAME_MARGIN **)(a2 + 32);
        v59 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
        if ( v59 )
        {
          *(_QWORD *)&v139 = *(_QWORD *)(a1 + 416);
          *(_QWORD *)(a1 + 416) = &v139;
          *((_QWORD *)&v139 + 1) = v59;
          HMLockObject(v59);
          xxxProcessUpdateFrameMargins(v59, v58);
          ThreadUnlock1(v61, v60, v62);
        }
        v63 = v58;
LABEL_60:
        Win32FreePool(v63);
        goto LABEL_23;
      }
      v124 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      v125 = *(const struct WINDOWPOSANDCHECKPOINT **)(a2 + 40);
      v126 = (struct tagWND *)v124;
      if ( v124 )
      {
        *(_QWORD *)&v139 = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = &v139;
        *((_QWORD *)&v139 + 1) = v124;
        HMLockObject(v124);
        xxxCloneWindowPosAndArrangement(v126, v125);
        ThreadUnlock1(v128, v127, v129);
      }
    }
    else
    {
      v130 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
      v125 = *(const struct WINDOWPOSANDCHECKPOINT **)(a2 + 40);
      v131 = (struct tagWND *)v130;
      if ( v130 )
      {
        *(_QWORD *)&v139 = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = &v139;
        *((_QWORD *)&v139 + 1) = v130;
        HMLockObject(v130);
        if ( CMoveSizeRequest::xxxRevalidateAndTransferCapture(v125, v131) )
          CMoveSizeRequest::xxxSendSysCommandToWindow(v125, v131);
        ThreadUnlock1(v133, v132, v134);
      }
      if ( !v125 )
        goto LABEL_23;
    }
    v63 = v125;
    goto LABEL_60;
  }
  if ( (_DWORD)v12 == 23 )
  {
    v121 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
    if ( !v121 )
      goto LABEL_23;
    *(_QWORD *)&v139 = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = &v139;
    *((_QWORD *)&v139 + 1) = v121;
    HMLockObject(v121);
    v123 = *(_DWORD *)(a2 + 40);
    v122 = *(_DWORD *)(a2 + 32);
    goto LABEL_157;
  }
  v50 = v12 - 16;
  if ( !v50 )
  {
    v120 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
    v121 = (struct tagWND *)v120;
    if ( !v120 )
      goto LABEL_23;
    v12 = *(_QWORD *)(v120 + 40);
    if ( (*(_BYTE *)(v12 + 31) & 1) == 0 )
      goto LABEL_23;
    *(_QWORD *)&v139 = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = &v139;
    *((_QWORD *)&v139 + 1) = v120;
    HMLockObject(v120);
    v122 = 3;
    v123 = 3;
LABEL_157:
    xxxMinMaximizeEx(v121, v122, v123, 0LL, 0LL, 0LL);
    goto LABEL_22;
  }
  v51 = v50 - 1;
  if ( v51 )
  {
    v12 = (unsigned int)(v51 - 1);
    if ( (_DWORD)v12 )
    {
      v52 = v12 - 1;
      if ( v52 )
      {
        v53 = v52 - 1;
        if ( v53 )
        {
          v12 = (unsigned int)(v53 - 1);
          if ( (_DWORD)v12 )
          {
            if ( (_DWORD)v12 == 1 )
              xxxProcessDesktopRecalc(*(struct tagASYNCDTOPRECALC **)(a2 + 32), v11);
          }
          else
          {
            v107 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 40), 1);
            v108 = HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
            PostMousePointerLeaveAndCleanup(v107, v108);
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
        PostThreadMessage(a1, 0x329u, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
      }
      else
      {
        xxxSendShutdownData(*(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 32));
      }
    }
    else if ( gpqForeground )
    {
      v67 = *(_QWORD *)(gpqForeground + 112LL);
      if ( v67 )
      {
        if ( *(_QWORD *)(v67 + 16) == a1 )
        {
          v12 = HIDWORD(gpdwCPUserPreferencesMask);
          if ( (v12 & 0x80u) == 0LL )
            xxxApplyGlobalInputSettings();
        }
      }
    }
    goto LABEL_23;
  }
  v109 = *(_DWORD *)(a2 + 32);
  v110 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)(a2 + 16), 1);
  if ( v110 )
  {
    *(_QWORD *)&v139 = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = &v139;
    *((_QWORD *)&v139 + 1) = v110;
    HMLockObject(v110);
    if ( v109 )
    {
      if ( v109 == 1 )
      {
        v114 = IsRectEmptyInl((const struct tagRECT *)(*(_QWORD *)(a2 + 40) + 20LL));
        v117 = (struct tagRECT *)(v116 + 1);
        v118 = *v116;
        v119 = 0LL;
        if ( !v114 )
          v119 = v115;
        xxxEndSetWindowArrangement(v110, v117, v119, v118);
      }
    }
    else
    {
      xxxArrangeWindow(v110, *(unsigned int *)(a2 + 40));
    }
    ThreadUnlock1(v112, v111, v113);
  }
  if ( v109 == 1 )
  {
    v63 = *(const struct FRAME_MARGIN **)(a2 + 40);
    goto LABEL_60;
  }
LABEL_23:
  v35 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(v12)
    || (v135 = PsGetCurrentProcess(v37, v36, v38),
        v136 = PsGetProcessSessionIdEx(v135),
        v138 = PsGetCurrentThreadProcess(v137),
        v136 == (unsigned int)PsGetProcessSessionIdEx(v138)) )
  {
    v39 = (__int64 *)PsGetThreadWin32Thread(v35);
    if ( v39 )
      v2 = *v39;
  }
  result = v144[0];
  *(_QWORD *)(v2 + 16) = v144[0];
  return result;
}
