/*
 * XREFs of ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00BB8B8
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C00058A0 (xxxSetModernAppWindow.c)
 *     xxxSwitchDesktop @ 0x1C002BDDC (xxxSwitchDesktop.c)
 *     xxxSystemParametersInfoWorker @ 0x1C002F978 (xxxSystemParametersInfoWorker.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C00388C0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxSetThreadDesktop @ 0x1C007DFF0 (xxxSetThreadDesktop.c)
 *     xxxDoHotKeyStuff @ 0x1C0102160 (xxxDoHotKeyStuff.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0116BF4 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     EditionHandleAltTab @ 0x1C01285A0 (EditionHandleAltTab.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C0128F9C (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01D2220 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     xxxNextWindow @ 0x1C01F3DB0 (xxxNextWindow.c)
 * Callees:
 *     ProcessHungWindow @ 0x1C000379C (ProcessHungWindow.c)
 *     _anonymous_namespace_::UpdateKeyStateFlag @ 0x1C002C918 (_anonymous_namespace_--UpdateKeyStateFlag.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C0040704 (IsWindowUnderActiveLockScreen.c)
 *     _GetTopLevelWindow @ 0x1C0046FE0 (_GetTopLevelWindow.c)
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C004C75C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C0053840 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     LockW32Thread @ 0x1C00BAF00 (LockW32Thread.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00BAF3C (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C00BB764 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C00BCA54 (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C00BCC58 (xxxMakeWindowForegroundWithState.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x1C00BCFB8 (_anonymous_namespace_--RemoveEventMessage.c)
 *     PtiKbdFromQ @ 0x1C00BEA34 (PtiKbdFromQ.c)
 *     SetNewForegroundQueue @ 0x1C00BF270 (SetNewForegroundQueue.c)
 *     zzzLockWindowUpdate2 @ 0x1C00BF2BC (zzzLockWindowUpdate2.c)
 *     xxxCancelTracking @ 0x1C00BF350 (xxxCancelTracking.c)
 *     SetHungFlag @ 0x1C00BF4E0 (SetHungFlag.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00C0444 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     IsThreadHung @ 0x1C00C171C (IsThreadHung.c)
 *     xxxApplyGlobalInputSettings @ 0x1C00C20AC (xxxApplyGlobalInputSettings.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C00C2134 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00C2554 (zzzInputFocusLostWindowEvent.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C00C25C4 (zzzInputFocusReceivedWindowEvent.c)
 *     ClearHungFlag @ 0x1C00D1F84 (ClearHungFlag.c)
 *     SetWakeBit @ 0x1C00D4F30 (SetWakeBit.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00D781C (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D8200 (PopAndFreeW32ThreadLock.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00F79FC (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C011D62C (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x1C012B64C (-IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 *     zzzActiveCursorTracking @ 0x1C01E2428 (zzzActiveCursorTracking.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetForegroundWindow2(__int64 a1, __int64 a2, char a3)
{
  unsigned int v6; // r14d
  __int64 v7; // rsi
  struct tagTHREADINFO *v8; // rcx
  struct tagWND *v9; // rdx
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  _BOOL8 v14; // r12
  const struct tagWND *TopLevelWindow; // rax
  const struct tagWND *v16; // r12
  __int64 v17; // rax
  struct tagQMSG *v18; // r12
  __int64 v19; // r9
  __int64 v20; // rbx
  __int64 v21; // r12
  int v22; // eax
  __int64 v23; // r12
  __int64 v24; // rax
  int v25; // edx
  void *v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // rax
  char v31; // r15
  unsigned int v32; // eax
  int v33; // eax
  struct tagWND *v34; // rcx
  BOOL v35; // ebx
  const struct tagWND *v36; // rax
  const struct tagWND *v37; // r15
  unsigned int ThreadId; // eax
  struct _LARGE_STRING *v39; // r8
  struct tagWND *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  unsigned __int64 v47; // [rsp+40h] [rbp-99h]
  __int64 v48; // [rsp+70h] [rbp-69h] BYREF
  __int64 v49; // [rsp+78h] [rbp-61h] BYREF
  __int64 v50; // [rsp+80h] [rbp-59h] BYREF
  struct tagQMSG *v51; // [rsp+88h] [rbp-51h]
  __int64 v52; // [rsp+90h] [rbp-49h] BYREF
  struct tagWND *v53; // [rsp+98h] [rbp-41h]
  __int64 v54; // [rsp+A0h] [rbp-39h]
  __int64 v55; // [rsp+A8h] [rbp-31h]
  struct tagQMSG *v56; // [rsp+B0h] [rbp-29h]
  __int128 v57; // [rsp+B8h] [rbp-21h] BYREF
  __int64 v58; // [rsp+C8h] [rbp-11h]
  __int128 v59; // [rsp+D0h] [rbp-9h] BYREF
  __int64 v60; // [rsp+E0h] [rbp+7h]
  __int128 v61; // [rsp+E8h] [rbp+Fh] BYREF
  __int64 v62; // [rsp+F8h] [rbp+1Fh]
  __int64 v63; // [rsp+158h] [rbp+7Fh]

  v50 = 0LL;
  v49 = 0LL;
  v48 = 0LL;
  v60 = 0LL;
  v58 = 0LL;
  v62 = 0LL;
  v59 = 0LL;
  v6 = 1;
  v57 = 0LL;
  v55 = gptiCurrent;
  v61 = 0LL;
  SetSystemInputSource(&v50);
  if ( a1
    && (*(_QWORD *)(a1 + 24) != grpdeskRitInput
     || *(char *)(*(_QWORD *)(a1 + 40) + 19LL) < 0
     || (unsigned int)IsWindowUnderActiveLockScreen(a1)) )
  {
    return 0LL;
  }
  if ( a2 )
    LockW32Thread(a2, &v61);
  gppiLockSFW = 0LL;
  v7 = gptiForeground;
  if ( !gptiForeground || (*(_DWORD *)(gptiForeground + 488LL) & 1) != 0 )
    v7 = 0LL;
  else
    LockW32Thread(gptiForeground, &v59);
  gpqForegroundPrev = gpqForeground;
  if ( a1 )
  {
    v63 = *(_QWORD *)(a1 + 16);
    SetNewForegroundQueue(*(_QWORD *)(v63 + 432));
    LockW32Thread(v63, &v57);
    v8 = *(struct tagTHREADINFO **)(a1 + 16);
    v9 = (struct tagWND *)a1;
    v10 = v63;
  }
  else
  {
    v10 = 0LL;
    v63 = 0LL;
    SetNewForegroundQueue(0LL);
    v8 = 0LL;
    v9 = 0LL;
  }
  xxxSetForegroundThreadWithWindowHint(v8, v9);
  if ( (a3 & 0x20) == 0 )
  {
    if ( gpqForeground )
      v49 = *(_QWORD *)(gpqForeground + 428LL);
    if ( gpqForegroundPrev )
      v48 = *(_QWORD *)(gpqForegroundPrev + 428LL);
    if ( !(unsigned __int8)CheckAccess(&v49, &v48) )
    {
      ClearKeyboardToggleStates();
      anonymous_namespace_::UpdateKeyStateFlag();
    }
  }
  if ( gpqForeground
    && gpqForeground != gpqForegroundPrev
    && *(_QWORD *)(gpqForeground + 112LL)
    && (HIDWORD(gpdwCPUserPreferencesMask) & 0x80u) == 0 )
  {
    xxxApplyGlobalInputSettings();
  }
  if ( gpqForeground != gpqForegroundPrev )
  {
    if ( gpqForegroundPrev )
    {
      v11 = *(_QWORD *)(gpqForegroundPrev + 112LL);
      if ( v11 )
        zzzInputFocusLostWindowEvent(v11, 1LL);
    }
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 112LL) )
      zzzInputFocusReceivedWindowEvent(1LL);
    if ( a2 )
    {
      xxxCancelTracking();
      CCursorClip::ClearClip(gpCursorClip);
      zzzLockWindowUpdate2(0LL);
      xxxMakeWindowForegroundWithState(0LL, 0LL);
    }
    v12 = 0LL;
    if ( v7 && (*(_DWORD *)(v7 + 488) & 1) == 0 )
      v12 = *(_QWORD *)(v7 + 432);
    v13 = 0LL;
    if ( a2 )
      v13 = *(_QWORD *)(a2 + 432);
    v51 = 0LL;
    if ( v12 && v12 != v13 )
    {
      CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(&v52, v12);
      v56 = AllocQEntryEx((struct tagMLIST *)(v12 + 24), 0LL, 0);
      if ( !v56 )
      {
        v6 = 0;
        goto LABEL_78;
      }
      v14 = 0LL;
      if ( a1 )
      {
        TopLevelWindow = (const struct tagWND *)GetTopLevelWindow(a1);
        v16 = TopLevelWindow;
        v14 = TopLevelWindow
           && (unsigned int)CoreWindowProp::IsComponent(TopLevelWindow)
           && CoreWindowProp::IsHostThreadOf((const struct tagTHREADINFO *)v7, v16) != 0;
      }
      if ( gptiForeground )
        PsGetThreadId((PETHREAD)*gptiForeground);
      v17 = PtiKbdFromQ(v12);
      v47 = v14;
      v18 = v56;
      StoreQMessage(
        v56,
        0LL,
        0,
        v19,
        0LL,
        0,
        0LL,
        5u,
        v47,
        0,
        (struct tagINPUT_MESSAGE_SOURCE *)&v50,
        *(_DWORD *)(*(_QWORD *)(v17 + 424) + 280LL),
        0LL,
        0LL);
      if ( v7 )
      {
        *((_QWORD *)v18 + 13) = v7;
        SetWakeBit(v7, 8256LL);
      }
      if ( *(_QWORD *)(v12 + 120) )
      {
        if ( v7 && (unsigned int)IsThreadHung(v7, 0LL) )
        {
          v40 = *(struct tagWND **)(v12 + 120);
          v54 = 0LL;
          v53 = v40;
          v52 = *(_QWORD *)(v55 + 416);
          *(_QWORD *)(v55 + 416) = &v52;
          HMLockObject(v40);
          ClearHungFlag(*(struct tagWND **)(v12 + 120));
          ProcessHungWindow();
          ThreadUnlock1(v42, v41, v43);
        }
        else
        {
          SetHungFlag(*(struct tagWND **)(v12 + 120));
        }
      }
    }
    v20 = 0LL;
    if ( v63 && (*(_DWORD *)(v63 + 488) & 1) == 0 )
      v20 = *(_QWORD *)(v63 + 432);
    v21 = 0LL;
    if ( a2 )
      v21 = *(_QWORD *)(a2 + 432);
    if ( !v20 )
    {
      v10 = v63;
LABEL_71:
      v28 = 0LL;
      if ( v7 && (*(_DWORD *)(v7 + 488) & 1) == 0 )
        v28 = *(_QWORD *)(v7 + 432);
      v29 = 0LL;
      if ( a2 )
        v29 = *(_QWORD *)(a2 + 432);
      if ( v28 && v28 == v29 )
      {
        v35 = 0;
        if ( a1 )
        {
          v36 = (const struct tagWND *)GetTopLevelWindow(a1);
          v37 = v36;
          if ( v36 && (unsigned int)CoreWindowProp::IsComponent(v36) )
            v35 = CoreWindowProp::IsHostThreadOf((const struct tagTHREADINFO *)v7, v37) != 0;
          ThreadId = (unsigned int)PsGetThreadId(**(PETHREAD **)(a1 + 16));
        }
        else
        {
          ThreadId = 0;
        }
        xxxDeactivate(a2, ThreadId, v35);
      }
      goto LABEL_78;
    }
    if ( v20 == v21
      || (CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(&v52, v20),
          (v51 = AllocQEntryEx((struct tagMLIST *)(v20 + 24), 0LL, 0)) != 0LL) )
    {
      v22 = anonymous_namespace_::RemoveEventMessage(v20, 5LL, 0xFFFFFFFFLL);
      if ( v20 != v21 )
      {
        if ( v21 || (a3 & 2) != 0 )
        {
          v23 = 0LL;
          if ( a1 )
            v23 = *(_QWORD *)a1;
        }
        else
        {
          v23 = 0LL;
        }
        if ( v22 )
          *(_DWORD *)(v20 + 388) |= 0x8000u;
        if ( (a3 & 1) == 0 && v7 )
          PsGetThreadId(*(PETHREAD *)v7);
        v24 = PtiKbdFromQ(v20);
        StoreQMessage(
          v51,
          0LL,
          v25,
          v27,
          v23,
          (unsigned int)v26,
          (unsigned __int64)v26,
          6u,
          (unsigned __int64)v26,
          (char)v26,
          (struct tagINPUT_MESSAGE_SOURCE *)&v50,
          *(_DWORD *)(*(_QWORD *)(v24 + 424) + 280LL),
          v26,
          (struct tagUIPI_INFO *)v26);
        v10 = v63;
        *((_QWORD *)v51 + 13) = v63;
        SetWakeBit(v63, 8256LL);
        if ( *(_QWORD *)(v20 + 120) )
        {
          v33 = IsThreadHung(v63, 0LL);
          v34 = *(struct tagWND **)(v20 + 120);
          if ( v33 )
          {
            v54 = 0LL;
            v53 = v34;
            v52 = *(_QWORD *)(v55 + 416);
            *(_QWORD *)(v55 + 416) = &v52;
            HMLockObject(v34);
            ClearHungFlag(*(struct tagWND **)(v20 + 120));
            ProcessHungWindow();
            ThreadUnlock1(v45, v44, v46);
          }
          else
          {
            SetHungFlag(v34);
          }
        }
        goto LABEL_69;
      }
      if ( a1 == *(_QWORD *)(v21 + 120) )
      {
        if ( a1 )
          v39 = *(struct _LARGE_STRING **)a1;
        else
          v39 = 0LL;
        anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)a1, 1uLL, v39);
        xxxUpdateTray((struct tagWND *)a1);
        if ( (a3 & 4) == 0 )
          xxxSetWindowPos((struct tagWND *)a1, 0LL, 0LL, 0LL, 0, 0, 3);
      }
      else if ( (a3 & 1) == 0 )
      {
        v31 = ~(16 * a3) & 0x80;
        if ( v7 )
          v32 = (unsigned int)PsGetThreadId(*(PETHREAD *)v7);
        else
          v32 = 0;
        anonymous_namespace_::xxxLocalActivateWindow((struct tagWND *)a1, v32, v31);
        if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
          zzzActiveCursorTracking((struct tagWND *)a1);
        goto LABEL_91;
      }
      v10 = v63;
LABEL_69:
      if ( (a3 & 0x40) == 0 )
        xxxDeliverRestoreFocusMessage((struct tagWND *)a1);
      goto LABEL_71;
    }
    v6 = 0;
LABEL_91:
    v10 = v63;
  }
LABEL_78:
  if ( v10 )
    PopAndFreeW32ThreadLock(&v57);
  if ( v7 )
    PopAndFreeW32ThreadLock(&v59);
  if ( a2 )
    PopAndFreeW32ThreadLock(&v61);
  return v6;
}
