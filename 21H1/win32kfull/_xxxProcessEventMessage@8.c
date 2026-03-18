/*
 * XREFs of _xxxProcessEventMessage@8 @ 0x13A0E
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 * Callees:
 *     _xxxResetTooltip@4 @ 0x12D36 (_xxxResetTooltip@4.c)
 *     _safe_cast_fnid_to_PTOOLTIPWND@4 @ 0x12DE2 (_safe_cast_fnid_to_PTOOLTIPWND@4.c)
 *     ?xxxProcessActivationEvent@@YGXPBUtagQMSG@@@Z @ 0x1364E (-xxxProcessActivationEvent@@YGXPBUtagQMSG@@@Z.c)
 *     _xxxProcessAsyncSendMessage@16 @ 0x1426A (_xxxProcessAsyncSendMessage@16.c)
 *     ??1?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QAE@XZ @ 0x1437E (--1-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QAE@XZ.c)
 *     _xxxProcessNotifyWinEvent@4 @ 0x143A2 (_xxxProcessNotifyWinEvent@4.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QAE@XZ @ 0x147B8 (--0-$CLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QAE@XZ.c)
 *     ?xxxProcessDesktopRecalc@@YGXPAUtagASYNCDTOPRECALC@@@Z @ 0x150D2 (-xxxProcessDesktopRecalc@@YGXPAUtagASYNCDTOPRECALC@@@Z.c)
 *     _xxxCancelMouseMoveTracking@16 @ 0x15E12 (_xxxCancelMouseMoveTracking@16.c)
 *     _xxxProcessSetWindowPosEvent@4 @ 0x16FEA (_xxxProcessSetWindowPosEvent@4.c)
 *     _PostShellHookMessages@8 @ 0x17142 (_PostShellHookMessages@8.c)
 *     ?xxxProcessUpdateFrameMargins@@YGXPAUtagWND@@ABUFRAME_MARGIN@@@Z @ 0x17210 (-xxxProcessUpdateFrameMargins@@YGXPAUtagWND@@ABUFRAME_MARGIN@@@Z.c)
 *     ?xxxDeactivate@@YGXPAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x17292 (-xxxDeactivate@@YGXPAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _xxxApplyGlobalInputSettings@4 @ 0x1855E (_xxxApplyGlobalInputSettings@4.c)
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     ??0?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QAE@AAUtagObjLock@@@Z @ 0x42C64 (--0-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QAE@AAUtagObjLock@@@Z.c)
 *     _SetWakeBit@8 @ 0x44776 (_SetWakeBit@8.c)
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     __PostTransformableMessage@20 @ 0x7F9FE (__PostTransformableMessage@20.c)
 *     __PostThreadMessage@16 @ 0x8262A (__PostThreadMessage@16.c)
 *     ?CleanEventMessage@@YGXPAUtagQMSG@@@Z @ 0x9C3D2 (-CleanEventMessage@@YGXPAUtagQMSG@@@Z.c)
 *     ?PlaySync@CUserPlaySound@@AAEJK@Z @ 0xA1BB8 (-PlaySync@CUserPlaySound@@AAEJK@Z.c)
 *     ?xxxDeliverRestoreFocusMessage@@YGXPAUtagWND@@@Z @ 0xAC35E (-xxxDeliverRestoreFocusMessage@@YGXPAUtagWND@@@Z.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     _xxxClientBroadcastThemeChange@8 @ 0xE79A4 (_xxxClientBroadcastThemeChange@8.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?xxxProcessShowWindowEvent@@YGXPAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@IJ@Z @ 0xF5096 (-xxxProcessShowWindowEvent@@YGXPAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@IJ@Z.c)
 *     ?xxxCloneWindowPosAndArrangement@@YGXPAUtagWND@@ABUWINDOWPOSANDCHECKPOINT@@@Z @ 0x13FBD4 (-xxxCloneWindowPosAndArrangement@@YGXPAUtagWND@@ABUWINDOWPOSANDCHECKPOINT@@@Z.c)
 *     ?xxxProcessMinimizeHungThreadEvent@@YGXPAUtagWND@@@Z @ 0x141BD2 (-xxxProcessMinimizeHungThreadEvent@@YGXPAUtagWND@@@Z.c)
 *     _PostMousePointerLeaveAndCleanup@8 @ 0x14E54F (_PostMousePointerLeaveAndCleanup@8.c)
 *     _xxxProcessTSFEvent@4 @ 0x155866 (_xxxProcessTSFEvent@4.c)
 *     _xxxDoDeferredPointerActivate@4 @ 0x15BEFB (_xxxDoDeferredPointerActivate@4.c)
 *     ?xxxArrangeWindow@@YGXPAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x173243 (-xxxArrangeWindow@@YGXPAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z @ 0x1739DF (-xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z.c)
 *     _xxxSoundSentry@0 @ 0x1782B3 (_xxxSoundSentry@0.c)
 *     _xxxClientUpdateDpi@4 @ 0x194D6A (_xxxClientUpdateDpi@4.c)
 *     _xxxSendShutdownData@8 @ 0x194F33 (_xxxSendShutdownData@8.c)
 *     ?xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AAE_NPAUtagWND@@@Z @ 0x19FC53 (-xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AAE_NPAUtagWND@@@Z.c)
 *     ?xxxSendSysCommandToWindow@CMoveSizeRequest@@AAEXPAUtagWND@@@Z @ 0x19FDC6 (-xxxSendSysCommandToWindow@CMoveSizeRequest@@AAEXPAUtagWND@@@Z.c)
 */

int __fastcall xxxProcessEventMessage(int a1, int a2)
{
  int v4; // edi
  int *ThreadWin32Thread; // eax
  tagDomLock *v6; // edx
  int v7; // eax
  int v8; // edx
  int v9; // eax
  struct tagVWPL **v10; // edi
  int v11; // eax
  int v12; // edi
  unsigned int v13; // ecx
  void *v14; // ecx
  int v15; // eax
  int v16; // edi
  int v17; // edi
  tagDomLock *v18; // eax
  int v19; // edx
  tagDomLock *v20; // ecx
  _DWORD *v21; // eax
  _DWORD *v22; // esi
  int v23; // edi
  PKTHREAD v24; // eax
  int v25; // eax
  int v26; // eax
  unsigned int v27; // esi
  unsigned int v28; // edi
  unsigned int *v29; // edi
  unsigned int v30; // ecx
  unsigned int v31; // edx
  int v32; // ecx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  struct tagQ *v36; // edi
  int v37; // ecx
  int v38; // edi
  tagDomLock *v39; // esi
  int v40; // eax
  struct tagRECT **v41; // edx
  struct tagWND *v42; // ecx
  int v43; // eax
  int v44; // eax
  int v45; // edx
  int v46; // esi
  int v47; // eax
  struct tagQ *v48; // edi
  int v49; // eax
  CMoveSizeRequest *v50; // ebx
  struct tagWND *v51; // edi
  int v52; // eax
  int v53; // ecx
  int v54; // edi
  tagDomLock *v55; // esi
  int v56; // edi
  PKTHREAD v57; // eax
  int result; // eax
  struct tagWND *v59; // [esp+0h] [ebp-38h]
  struct tagINPUT_MESSAGE_SOURCE *v60; // [esp+4h] [ebp-34h]
  tagDomLock *CurrentThread; // [esp+10h] [ebp-28h] BYREF
  _DWORD v62[3]; // [esp+14h] [ebp-24h] BYREF
  int v63; // [esp+20h] [ebp-18h] BYREF
  void *v64; // [esp+24h] [ebp-14h]
  int v65; // [esp+28h] [ebp-10h]
  _DWORD v66[3]; // [esp+2Ch] [ebp-Ch] BYREF

  v63 = 0;
  v64 = 0;
  v65 = 0;
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  v66[0] = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 8) = v66;
  v6 = *(tagDomLock **)(a1 + 236);
  v7 = *(_DWORD *)(a2 + 60) - 1;
  v66[1] = a2;
  v66[2] = CleanEventMessage;
  CurrentThread = v6;
  switch ( v7 )
  {
    case 0:
      LOBYTE(v6) = 1;
      v11 = HMValidateHandleNoSecure(*(_DWORD *)(a2 + 8), v6);
      v12 = v11;
      if ( v11 && *(char *)(*(_DWORD *)(v11 + 20) + 12) >= 0 )
      {
        v63 = *(_DWORD *)(a1 + 228);
        *(_DWORD *)(a1 + 228) = &v63;
        v64 = (void *)v11;
        HMLockObject(v11);
        xxxProcessShowWindowEvent(v12, *(_DWORD *)(a2 + 12), *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 20));
        goto LABEL_99;
      }
      goto LABEL_100;
    case 1:
      v14 = (void *)*((_DWORD *)v6 + 14);
      if ( v14 )
      {
        v63 = *(_DWORD *)(a1 + 228);
        *(_DWORD *)(a1 + 228) = &v63;
        v64 = v14;
        HMLockObject(v14);
        xxxSendMessage(0, 0);
        ThreadUnlock1();
        SetWakeBit(a1, 2);
      }
      goto LABEL_100;
    case 2:
      xxxProcessSetWindowPosEvent(*(_DWORD *)(a2 + 16));
      goto LABEL_100;
    case 3:
      ProcessUpdateKeyStateEvent(v6, *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 16) + 64);
      goto LABEL_100;
    case 4:
      xxxDeactivate(a1, *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 40));
      goto LABEL_100;
    case 5:
      xxxProcessActivationEvent(a2);
      goto LABEL_100;
    case 6:
      LOBYTE(v6) = 1;
      v15 = HMValidateHandleNoSecure(*(_DWORD *)(a2 + 8), v6);
      if ( v15 )
        _PostTransformableMessage(v15, *(_DWORD *)(a2 + 12), *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 20), 1);
      goto LABEL_100;
    case 7:
      LOBYTE(v6) = 1;
      v9 = HMValidateHandleNoSecure(*(_DWORD *)(a2 + 16), v6);
      v10 = (struct tagVWPL **)v9;
      if ( v9 )
      {
        if ( *(char *)(*(_DWORD *)(v9 + 20) + 11) < 0 )
        {
          v63 = *(_DWORD *)(a1 + 228);
          *(_DWORD *)(a1 + 228) = &v63;
          v64 = (void *)v9;
          HMLockObject(v9);
          xxxFreeWindow(v10);
        }
        else
        {
          xxxDestroyWindow((struct tagVWPL **)v9);
        }
      }
      goto LABEL_100;
    case 8:
      xxxProcessAsyncSendMessage(*(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 12), *(_DWORD *)(a2 + 16), a2 + 20);
      goto LABEL_100;
    case 9:
      LOBYTE(v6) = 1;
      v16 = HMValidateHandleNoSecure(*(_DWORD *)(a2 + 8), v6);
      if ( v16 )
      {
        v63 = *(_DWORD *)(a1 + 228);
        *(_DWORD *)(a1 + 228) = &v63;
        v64 = (void *)v16;
        HMLockObject(v16);
        xxxProcessMinimizeHungThreadEvent(v59);
        goto LABEL_99;
      }
      goto LABEL_100;
    case 10:
      LOBYTE(v6) = 1;
      v17 = *(_DWORD *)(a1 + 248);
      v18 = (tagDomLock *)HMValidateHandleNoSecure(*(_DWORD *)(a2 + 8), v6);
      v19 = *(_DWORD *)(v17 + 24);
      v20 = v18;
      CurrentThread = v18;
      if ( (v19 & 0x5C0) == 0 )
        goto LABEL_34;
      if ( **(_DWORD **)(v17 + 100) != *(_DWORD *)(a2 + 8) || *(_DWORD *)(v17 + 104) != *(_DWORD *)(a2 + 16) )
      {
        v20 = CurrentThread;
LABEL_34:
        if ( (v19 & 0x100) != 0 )
          *(_DWORD *)(a2 + 20) &= 0xFFFFFCFF;
        if ( v20 )
        {
          v63 = *(_DWORD *)(a1 + 228);
          *(_DWORD *)(a1 + 228) = &v63;
          v64 = v20;
          HMLockObject(v20);
          xxxCancelMouseMoveTracking(*(_DWORD *)(a2 + 12), CurrentThread, *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 20));
          goto LABEL_99;
        }
        if ( (*(_DWORD *)(a2 + 20) & 0x300) != 0 && (*(_DWORD *)(a2 + 12) & 0x200) != 0 )
        {
          v21 = (_DWORD *)safe_cast_fnid_to_PTOOLTIPWND(*(_DWORD **)(v17 + 56));
          v22 = v21;
          if ( v21 )
          {
            v23 = *v21;
            if ( *v21 )
            {
              v62[2] = 0;
              v24 = KeGetCurrentThread();
              v25 = W32GetThreadWin32Thread(v24);
              v62[0] = *(_DWORD *)(v25 + 228);
              *(_DWORD *)(v25 + 228) = v62;
              v62[1] = v23;
              HMLockObject(v23);
              xxxResetTooltip(v22);
              goto LABEL_99;
            }
          }
        }
      }
LABEL_100:
      v57 = KeGetCurrentThread();
      result = W32GetThreadWin32Thread(v57);
      *(_DWORD *)(result + 8) = v66[0];
      return result;
    case 11:
      CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(a1 + 216);
      CLockDomainExclusiveInUserCrit<DLT_WINEVENT>::CLockDomainExclusiveInUserCrit<DLT_WINEVENT>(&CurrentThread);
      v13 = *(_DWORD *)(a2 + 20);
      if ( *(_DWORD *)(v13 + 12) )
        xxxProcessTSFEvent();
      else
        xxxProcessNotifyWinEvent(v13);
      tagDomLock::UnLockExclusive(CurrentThread);
      CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::~CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(v62);
      goto LABEL_100;
    case 12:
      if ( ((*(_DWORD *)(a1 + 372) | *(_DWORD *)(**(_DWORD **)(a1 + 252) + 8)) & 0x800) != 0 )
        xxxCallHook(0, 0xAu, (int)v59, (int)v60);
      PostShellHookMessages(*(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 20), v59, v60);
      goto LABEL_100;
    case 13:
      v26 = *(_DWORD *)(a2 + 12);
      if ( v26 == 5 )
      {
        v27 = *(_DWORD *)(a2 + 20);
        v26 = *(_DWORD *)(a2 + 16);
        if ( v27 > 5 )
          v27 = 5;
      }
      else
      {
        v27 = 1;
      }
      if ( v27 )
      {
        v28 = (unsigned __int16)v26 | 0x10000;
        do
        {
          CUserPlaySound::PlaySync((CUserPlaySound *)CUserPlaySound::s_pUserPlaySound, v28);
          --v27;
        }
        while ( v27 );
      }
      xxxSoundSentry();
      goto LABEL_100;
    case 14:
      v29 = (unsigned int *)*((_DWORD *)v6 + 15);
      if ( v29 || (v29 = (unsigned int *)*((_DWORD *)v6 + 16)) != 0 )
      {
        v30 = v29[2];
        v31 = *(_DWORD *)(a2 + 20);
        v62[0] = v31;
        CurrentThread = *(tagDomLock **)(v30 + 236);
        if ( a1 == v30 )
        {
          v64 = v29;
          v32 = ((unsigned __int16)(LOWORD(v62[0]) - 165) << 16) | (unsigned __int16)GetMouseKeyFlags(CurrentThread);
          v33 = *(_DWORD *)(a2 + 80);
          *(_DWORD *)(a2 + 20) = v32;
          *(_DWORD *)(a1 + 696) = v33;
          v34 = *(_DWORD *)(a2 + 84);
          *(_DWORD *)(a1 + 688) |= 0x800u;
          *(_DWORD *)(a1 + 700) = v34;
          v63 = *(_DWORD *)(a1 + 228);
          *(_DWORD *)(a1 + 228) = &v63;
          HMLockObject(v29);
          xxxSendMessage(*v29, *(_DWORD *)(a2 + 20));
          ThreadUnlock1();
          *(_DWORD *)(a1 + 688) &= ~0x800u;
        }
        else
        {
          PostEventMessageEx((struct tagTHREADINFO *)0xF, 0, 0, 0, v31, a2 + 80, (int)v59, v60);
        }
      }
      goto LABEL_100;
    case 15:
      LOBYTE(v6) = 1;
      v35 = HMValidateHandleNoSecure(*(_DWORD *)(a2 + 8), v6);
      v36 = (struct tagQ *)v35;
      if ( v35 && (*(_BYTE *)(*(_DWORD *)(v35 + 20) + 23) & 1) != 0 )
      {
        v63 = *(_DWORD *)(a1 + 228);
        *(_DWORD *)(a1 + 228) = &v63;
        v64 = (void *)v35;
        HMLockObject(v35);
        xxxMinMaximizeEx(v36, (struct tagWND *)3, 3, 0, 0, 0);
        goto LABEL_99;
      }
      goto LABEL_100;
    case 16:
      LOBYTE(v6) = 1;
      v37 = *(_DWORD *)(a2 + 8);
      CurrentThread = *(tagDomLock **)(a2 + 16);
      v38 = HMValidateHandleNoSecure(v37, v6);
      if ( v38 )
      {
        v63 = *(_DWORD *)(a1 + 228);
        *(_DWORD *)(a1 + 228) = &v63;
        v64 = (void *)v38;
        HMLockObject(v38);
        v39 = CurrentThread;
        if ( CurrentThread )
        {
          if ( CurrentThread == (tagDomLock *)1 )
          {
            v40 = ERECTL::bWrapped((ERECTL *)(*(_DWORD *)(a2 + 20) + 20));
            xxxEndSetWindowArrangement(v40 == 0 ? v42 : 0, *v41, (struct tagRECT *)v59, (unsigned int)v60);
          }
        }
        else
        {
          xxxArrangeWindow(v38, *(_DWORD *)(a2 + 20));
        }
        ThreadUnlock1();
      }
      else
      {
        v39 = CurrentThread;
      }
      if ( v39 == (tagDomLock *)1 )
        Win32FreePool(*(_DWORD *)(a2 + 20));
      goto LABEL_100;
    case 17:
      if ( _gpqForeground )
      {
        v43 = *(_DWORD *)(_gpqForeground + 60);
        if ( v43 )
        {
          if ( *(_DWORD *)(v43 + 8) == a1 && *((char *)&_gpdwCPUserPreferencesMask + 4) >= 0 )
            xxxApplyGlobalInputSettings();
        }
      }
      goto LABEL_100;
    case 18:
      v8 = *(_DWORD *)(a2 + 16);
      if ( *(_DWORD *)(a2 + 12) == 809 )
        _PostThreadMessage(v8, *(_DWORD *)(a2 + 20));
      else
        xxxSendShutdownData(*(_DWORD *)(a2 + 20), v8);
      goto LABEL_100;
    case 19:
      xxxDoDeferredPointerActivate(a2);
      CleanEventMessage((struct tagQMSG *)a2);
      goto LABEL_100;
    case 20:
      LOBYTE(v6) = 1;
      v44 = HMValidateHandleNoSecure(*(_DWORD *)(a2 + 20), v6);
      LOBYTE(v45) = 1;
      v46 = v44;
      v47 = HMValidateHandleNoSecure(*(_DWORD *)(a2 + 8), v45);
      PostMousePointerLeaveAndCleanup(v46, v47);
      goto LABEL_100;
    case 21:
      xxxProcessDesktopRecalc(v59);
      goto LABEL_100;
    case 22:
      LOBYTE(v6) = 1;
      v48 = (struct tagQ *)HMValidateHandleNoSecure(*(_DWORD *)(a2 + 8), v6);
      if ( v48 )
      {
        v63 = *(_DWORD *)(a1 + 228);
        *(_DWORD *)(a1 + 228) = &v63;
        v64 = v48;
        HMLockObject(v48);
        xxxMinMaximizeEx(v48, *(struct tagWND **)(a2 + 16), *(_DWORD *)(a2 + 20), 0, 0, 0);
        goto LABEL_99;
      }
      goto LABEL_100;
    case 23:
      xxxClientUpdateDpi(*(_DWORD *)(a2 + 16));
      goto LABEL_100;
    case 24:
      xxxClientBroadcastThemeChange(*(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 20));
      goto LABEL_100;
    case 25:
      LOBYTE(v6) = 1;
      v49 = HMValidateHandleNoSecure(*(_DWORD *)(a2 + 8), v6);
      v50 = *(CMoveSizeRequest **)(a2 + 20);
      v51 = (struct tagWND *)v49;
      if ( v49 )
      {
        v63 = *(_DWORD *)(a1 + 228);
        *(_DWORD *)(a1 + 228) = &v63;
        v64 = (void *)v49;
        HMLockObject(v49);
        if ( CMoveSizeRequest::xxxRevalidateAndTransferCapture(v50, v51) )
          CMoveSizeRequest::xxxSendSysCommandToWindow(v50, v51);
        ThreadUnlock1();
      }
      if ( v50 )
        goto LABEL_90;
      goto LABEL_100;
    case 26:
      LOBYTE(v6) = 1;
      v52 = HMValidateHandleNoSecure(*(_DWORD *)(a2 + 8), v6);
      v50 = *(CMoveSizeRequest **)(a2 + 20);
      if ( v52 )
      {
        v63 = *(_DWORD *)(a1 + 228);
        *(_DWORD *)(a1 + 228) = &v63;
        v64 = (void *)v52;
        HMLockObject(v52);
        xxxCloneWindowPosAndArrangement(v59, v60);
        ThreadUnlock1();
      }
LABEL_90:
      Win32FreePool(v50);
      goto LABEL_100;
    case 27:
      LOBYTE(v6) = 1;
      v53 = *(_DWORD *)(a2 + 8);
      CurrentThread = *(tagDomLock **)(a2 + 16);
      v54 = HMValidateHandleNoSecure(v53, v6);
      if ( v54 )
      {
        v63 = *(_DWORD *)(a1 + 228);
        *(_DWORD *)(a1 + 228) = &v63;
        v64 = (void *)v54;
        HMLockObject(v54);
        v55 = CurrentThread;
        xxxProcessUpdateFrameMargins(v59, v60);
        ThreadUnlock1();
      }
      else
      {
        v55 = CurrentThread;
      }
      Win32FreePool(v55);
      goto LABEL_100;
    case 28:
      LOBYTE(v6) = 1;
      v56 = HMValidateHandleNoSecure(*(_DWORD *)(a2 + 8), v6);
      if ( v56 )
      {
        v63 = *(_DWORD *)(a1 + 228);
        *(_DWORD *)(a1 + 228) = &v63;
        v64 = (void *)v56;
        HMLockObject(v56);
        xxxDeliverRestoreFocusMessage(v59);
LABEL_99:
        ThreadUnlock1();
      }
      goto LABEL_100;
    default:
      goto LABEL_100;
  }
}
