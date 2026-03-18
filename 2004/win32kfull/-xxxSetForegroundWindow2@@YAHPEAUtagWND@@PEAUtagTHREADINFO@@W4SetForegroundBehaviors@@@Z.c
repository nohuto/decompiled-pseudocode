/*
 * XREFs of ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0033BEC
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0005A00 (xxxSetModernAppWindow.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002C0BC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxSystemParametersInfoWorker @ 0x1C003E1F8 (xxxSystemParametersInfoWorker.c)
 *     xxxSwitchDesktop @ 0x1C004CE38 (xxxSwitchDesktop.c)
 *     xxxDoHotKeyStuff @ 0x1C0054B90 (xxxDoHotKeyStuff.c)
 *     xxxSetThreadDesktop @ 0x1C00BD740 (xxxSetThreadDesktop.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0115664 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     EditionHandleAltTab @ 0x1C0126BE0 (EditionHandleAltTab.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C01270FC (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01D3030 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     xxxNextWindow @ 0x1C01F4A20 (xxxNextWindow.c)
 * Callees:
 *     ProcessHungWindow @ 0x1C00038FC (ProcessHungWindow.c)
 *     SetHungFlag @ 0x1C003094C (SetHungFlag.c)
 *     xxxCancelTracking @ 0x1C003126C (xxxCancelTracking.c)
 *     zzzLockWindowUpdate2 @ 0x1C0031334 (zzzLockWindowUpdate2.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0031F54 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C003277C (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C00328D0 (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C0032AD4 (xxxMakeWindowForegroundWithState.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x1C0032E34 (_anonymous_namespace_--RemoveEventMessage.c)
 *     SetNewForegroundQueue @ 0x1C0033BA0 (SetNewForegroundQueue.c)
 *     LockW32Thread @ 0x1C00343CC (LockW32Thread.c)
 *     xxxApplyGlobalInputSettings @ 0x1C0034C3C (xxxApplyGlobalInputSettings.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0034CC4 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00350E4 (zzzInputFocusLostWindowEvent.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C0035154 (zzzInputFocusReceivedWindowEvent.c)
 *     IsThreadHung @ 0x1C0037D80 (IsThreadHung.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C0037E18 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C003810C (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     _anonymous_namespace_::UpdateKeyStateFlag @ 0x1C004D974 (_anonymous_namespace_--UpdateKeyStateFlag.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006A3BC (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     _GetTopLevelWindow @ 0x1C006EA90 (_GetTopLevelWindow.c)
 *     ClearHungFlag @ 0x1C008CC64 (ClearHungFlag.c)
 *     SetWakeBit @ 0x1C008FD50 (SetWakeBit.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C0097B60 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     PtiKbdFromQ @ 0x1C00B04B8 (PtiKbdFromQ.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C00B1E80 (IsWindowUnderActiveLockScreen.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00B328C (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00B3C70 (PopAndFreeW32ThreadLock.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00FC7C8 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x1C0118510 (-IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 *     zzzActiveCursorTracking @ 0x1C01E30E8 (zzzActiveCursorTracking.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetForegroundWindow2(__int64 a1, __int64 a2, char a3)
{
  unsigned int v6; // r14d
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rsi
  struct tagTHREADINFO *v10; // rcx
  struct tagWND *v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  _BOOL8 v16; // r12
  const struct tagWND *TopLevelWindow; // rax
  const struct tagWND *v18; // r12
  __int64 v19; // rax
  struct tagQMSG *v20; // r12
  unsigned __int64 v21; // r9
  __int64 v22; // rbx
  __int64 v23; // r12
  int v24; // eax
  __int64 v25; // r12
  __int64 v26; // rax
  unsigned int v27; // edx
  void *v28; // r8
  unsigned __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rax
  char v33; // r15
  unsigned int v34; // eax
  int v35; // eax
  struct tagWND *v36; // rcx
  BOOL v37; // ebx
  const struct tagWND *v38; // rax
  const struct tagWND *v39; // r15
  unsigned int ThreadId; // eax
  __int64 v41; // r8
  struct tagWND *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  unsigned __int64 v49; // [rsp+40h] [rbp-99h]
  __int64 v50; // [rsp+70h] [rbp-69h] BYREF
  __int64 v51; // [rsp+78h] [rbp-61h] BYREF
  __int64 v52; // [rsp+80h] [rbp-59h] BYREF
  struct tagQMSG *v53; // [rsp+88h] [rbp-51h]
  __int64 v54; // [rsp+90h] [rbp-49h] BYREF
  struct tagWND *v55; // [rsp+98h] [rbp-41h]
  __int64 v56; // [rsp+A0h] [rbp-39h]
  __int64 v57; // [rsp+A8h] [rbp-31h]
  struct tagQMSG *v58; // [rsp+B0h] [rbp-29h]
  __int128 v59; // [rsp+B8h] [rbp-21h] BYREF
  __int64 v60; // [rsp+C8h] [rbp-11h]
  __int128 v61; // [rsp+D0h] [rbp-9h] BYREF
  __int64 v62; // [rsp+E0h] [rbp+7h]
  __int128 v63; // [rsp+E8h] [rbp+Fh] BYREF
  __int64 v64; // [rsp+F8h] [rbp+1Fh]
  __int64 v65; // [rsp+158h] [rbp+7Fh]

  v52 = 0LL;
  v51 = 0LL;
  v50 = 0LL;
  v62 = 0LL;
  v60 = 0LL;
  v64 = 0LL;
  v61 = 0LL;
  v6 = 1;
  v59 = 0LL;
  v57 = gptiCurrent;
  v63 = 0LL;
  SetSystemInputSource(&v52);
  if ( a1
    && (*(_QWORD *)(a1 + 24) != grpdeskRitInput
     || *(char *)(*(_QWORD *)(a1 + 40) + 19LL) < 0
     || (unsigned int)IsWindowUnderActiveLockScreen(a1)) )
  {
    return 0LL;
  }
  if ( a2 )
    LockW32Thread(a2, &v63);
  gppiLockSFW = 0LL;
  v9 = gptiForeground;
  if ( !gptiForeground || (*(_DWORD *)(gptiForeground + 480LL) & 1) != 0 )
    v9 = 0LL;
  else
    LockW32Thread(gptiForeground, &v61);
  gpqForegroundPrev = gpqForeground;
  if ( a1 )
  {
    v65 = *(_QWORD *)(a1 + 16);
    SetNewForegroundQueue(*(_QWORD *)(v65 + 424), v7, v8);
    LockW32Thread(v65, &v59);
    v10 = *(struct tagTHREADINFO **)(a1 + 16);
    v11 = (struct tagWND *)a1;
    v12 = v65;
  }
  else
  {
    v12 = 0LL;
    v65 = 0LL;
    SetNewForegroundQueue(0LL, v7, v8);
    v10 = 0LL;
    v11 = 0LL;
  }
  xxxSetForegroundThreadWithWindowHint(v10, v11);
  if ( (a3 & 0x20) == 0 )
  {
    if ( gpqForeground )
      v51 = *(_QWORD *)(gpqForeground + 428LL);
    if ( gpqForegroundPrev )
      v50 = *(_QWORD *)(gpqForegroundPrev + 428LL);
    if ( !(unsigned __int8)CheckAccess(&v51, &v50) )
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
      v13 = *(_QWORD *)(gpqForegroundPrev + 112LL);
      if ( v13 )
        zzzInputFocusLostWindowEvent(v13, 1LL);
    }
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 112LL) )
      zzzInputFocusReceivedWindowEvent(1LL);
    if ( a2 )
    {
      xxxCancelTracking();
      CCursorClip::ClearClip(gpCursorClip);
      zzzLockWindowUpdate2(0LL, 1);
      xxxMakeWindowForegroundWithState(0LL, 0);
    }
    v14 = 0LL;
    if ( v9 && (*(_DWORD *)(v9 + 480) & 1) == 0 )
      v14 = *(_QWORD *)(v9 + 424);
    v15 = 0LL;
    if ( a2 )
      v15 = *(_QWORD *)(a2 + 424);
    v53 = 0LL;
    if ( v14 && v14 != v15 )
    {
      CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(&v54, v14);
      v58 = AllocQEntryEx((struct tagMLIST *)(v14 + 24), 0LL, 0);
      if ( !v58 )
      {
        v6 = 0;
        goto LABEL_78;
      }
      v16 = 0LL;
      if ( a1 )
      {
        TopLevelWindow = (const struct tagWND *)GetTopLevelWindow(a1);
        v18 = TopLevelWindow;
        v16 = TopLevelWindow
           && (unsigned int)CoreWindowProp::IsComponent(TopLevelWindow)
           && CoreWindowProp::IsHostThreadOf((const struct tagTHREADINFO *)v9, v18) != 0;
      }
      if ( gptiForeground )
        PsGetThreadId((PETHREAD)*gptiForeground);
      v19 = PtiKbdFromQ(v14);
      v49 = v16;
      v20 = v58;
      StoreQMessage(
        v58,
        0LL,
        0,
        v21,
        0LL,
        0,
        0LL,
        5u,
        v49,
        0,
        (struct tagINPUT_MESSAGE_SOURCE *)&v52,
        *(_DWORD *)(*(_QWORD *)(v19 + 416) + 280LL),
        0LL,
        0LL);
      if ( v9 )
      {
        *((_QWORD *)v20 + 13) = v9;
        SetWakeBit(v9, 8256LL);
      }
      if ( *(_QWORD *)(v14 + 120) )
      {
        if ( v9 && (unsigned int)IsThreadHung(v9, 0LL) )
        {
          v42 = *(struct tagWND **)(v14 + 120);
          v56 = 0LL;
          v55 = v42;
          v54 = *(_QWORD *)(v57 + 408);
          *(_QWORD *)(v57 + 408) = &v54;
          HMLockObject(v42);
          ClearHungFlag(*(struct tagWND **)(v14 + 120));
          ProcessHungWindow();
          ThreadUnlock1(v44, v43, v45);
        }
        else
        {
          SetHungFlag(*(struct tagWND **)(v14 + 120), 0x310u);
        }
      }
    }
    v22 = 0LL;
    if ( v65 && (*(_DWORD *)(v65 + 480) & 1) == 0 )
      v22 = *(_QWORD *)(v65 + 424);
    v23 = 0LL;
    if ( a2 )
      v23 = *(_QWORD *)(a2 + 424);
    if ( !v22 )
    {
      v12 = v65;
LABEL_71:
      v30 = 0LL;
      if ( v9 && (*(_DWORD *)(v9 + 480) & 1) == 0 )
        v30 = *(_QWORD *)(v9 + 424);
      v31 = 0LL;
      if ( a2 )
        v31 = *(_QWORD *)(a2 + 424);
      if ( v30 && v30 == v31 )
      {
        v37 = 0;
        if ( a1 )
        {
          v38 = (const struct tagWND *)GetTopLevelWindow(a1);
          v39 = v38;
          if ( v38 && (unsigned int)CoreWindowProp::IsComponent(v38) )
            v37 = CoreWindowProp::IsHostThreadOf((const struct tagTHREADINFO *)v9, v39) != 0;
          ThreadId = (unsigned int)PsGetThreadId(**(PETHREAD **)(a1 + 16));
        }
        else
        {
          ThreadId = 0;
        }
        xxxDeactivate(a2, ThreadId, v37);
      }
      goto LABEL_78;
    }
    if ( v22 == v23
      || (CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(&v54, v22),
          (v53 = AllocQEntryEx((struct tagMLIST *)(v22 + 24), 0LL, 0)) != 0LL) )
    {
      v24 = anonymous_namespace_::RemoveEventMessage(v22, 5, -1);
      if ( v22 != v23 )
      {
        if ( v23 || (a3 & 2) != 0 )
        {
          v25 = 0LL;
          if ( a1 )
            v25 = *(_QWORD *)a1;
        }
        else
        {
          v25 = 0LL;
        }
        if ( v24 )
          *(_DWORD *)(v22 + 388) |= 0x8000u;
        if ( (a3 & 1) == 0 && v9 )
          PsGetThreadId(*(PETHREAD *)v9);
        v26 = PtiKbdFromQ(v22);
        StoreQMessage(
          v53,
          0LL,
          v27,
          v29,
          v25,
          (unsigned int)v28,
          (unsigned __int64)v28,
          6u,
          (unsigned __int64)v28,
          (unsigned int)v28,
          (struct tagINPUT_MESSAGE_SOURCE *)&v52,
          *(_DWORD *)(*(_QWORD *)(v26 + 416) + 280LL),
          v28,
          (struct tagUIPI_INFO *)v28);
        v12 = v65;
        *((_QWORD *)v53 + 13) = v65;
        SetWakeBit(v65, 8256LL);
        if ( *(_QWORD *)(v22 + 120) )
        {
          v35 = IsThreadHung(v65, 0LL);
          v36 = *(struct tagWND **)(v22 + 120);
          if ( v35 )
          {
            v56 = 0LL;
            v55 = v36;
            v54 = *(_QWORD *)(v57 + 408);
            *(_QWORD *)(v57 + 408) = &v54;
            HMLockObject(v36);
            ClearHungFlag(*(struct tagWND **)(v22 + 120));
            ProcessHungWindow();
            ThreadUnlock1(v47, v46, v48);
          }
          else
          {
            SetHungFlag(v36, 0x310u);
          }
        }
        goto LABEL_69;
      }
      if ( a1 == *(_QWORD *)(v23 + 120) )
      {
        if ( a1 )
          v41 = *(_QWORD *)a1;
        else
          v41 = 0LL;
        anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)a1, 1LL, v41);
        xxxUpdateTray((struct tagWND *)a1);
        if ( (a3 & 4) == 0 )
          xxxSetWindowPos((struct tagWND *)a1, 0, 0, 3);
      }
      else if ( (a3 & 1) == 0 )
      {
        v33 = ~(16 * a3) & 0x80;
        if ( v9 )
          v34 = (unsigned int)PsGetThreadId(*(PETHREAD *)v9);
        else
          v34 = 0;
        anonymous_namespace_::xxxLocalActivateWindow((struct tagWND *)a1, v34, v33);
        if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
          zzzActiveCursorTracking(a1);
        goto LABEL_91;
      }
      v12 = v65;
LABEL_69:
      if ( (a3 & 0x40) == 0 )
        xxxDeliverRestoreFocusMessage((struct tagWND *)a1);
      goto LABEL_71;
    }
    v6 = 0;
LABEL_91:
    v12 = v65;
  }
LABEL_78:
  if ( v12 )
    PopAndFreeW32ThreadLock(&v59);
  if ( v9 )
    PopAndFreeW32ThreadLock(&v61);
  if ( a2 )
    PopAndFreeW32ThreadLock(&v63);
  return v6;
}
