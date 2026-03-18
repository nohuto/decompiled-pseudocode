/*
 * XREFs of ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00BE818
 * Callers:
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003FC4 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x1C0006A9C (-CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z.c)
 *     NtUserSendEventMessage @ 0x1C00072A0 (NtUserSendEventMessage.c)
 *     xxxSwitchToThisWindow @ 0x1C0007E00 (xxxSwitchToThisWindow.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C0012724 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     xxxMinMaximizeEx @ 0x1C0017D5C (xxxMinMaximizeEx.c)
 *     zzzDecomposeDesktop @ 0x1C001C008 (zzzDecomposeDesktop.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C00388C0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxBroadcastMessageEx @ 0x1C0038FD0 (xxxBroadcastMessageEx.c)
 *     zzzComposeDesktop @ 0x1C00801A8 (zzzComposeDesktop.c)
 *     SetWindowExtendedBoundsMargin @ 0x1C008F75C (SetWindowExtendedBoundsMargin.c)
 *     xxxTrackMouseMove @ 0x1C00BAAC4 (xxxTrackMouseMove.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00BDD10 (EditionHandleAndPostKeyEvent.c)
 *     zzzReattachThreads @ 0x1C00BF898 (zzzReattachThreads.c)
 *     xxxApplyGlobalInputSettings @ 0x1C00C20AC (xxxApplyGlobalInputSettings.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C00D204C (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     xxxProcessNotifyWinEvent @ 0x1C00D6418 (xxxProcessNotifyWinEvent.c)
 *     xxxProcessEventMessage @ 0x1C00D8288 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D8A90 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z @ 0x1C01068E4 (-PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z.c)
 *     ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1C0109530 (-AsyncWindowPos@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxSetWindowPlacement @ 0x1C0112068 (xxxSetWindowPlacement.c)
 *     ?BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z @ 0x1C0119850 (-BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C011D62C (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     NtUserDisableThreadIme @ 0x1C011D780 (NtUserDisableThreadIme.c)
 *     EditionPostInputEvent @ 0x1C011EF10 (EditionPostInputEvent.c)
 *     EditionPostUpdateKeyStateEvent @ 0x1C01215C0 (EditionPostUpdateKeyStateEvent.c)
 *     NtUserBroadcastThemeChangeEvent @ 0x1C0122890 (NtUserBroadcastThemeChangeEvent.c)
 *     NtUserShowWindowAsync @ 0x1C0125F20 (NtUserShowWindowAsync.c)
 *     NtUserRegisterBSDRWindow @ 0x1C012A890 (NtUserRegisterBSDRWindow.c)
 *     ?CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z @ 0x1C01CF718 (-CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z.c)
 *     QueueShutdownData @ 0x1C01D2B5C (QueueShutdownData.c)
 *     EditionPostThreadInputEvent @ 0x1C01E14A0 (EditionPostThreadInputEvent.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01E3D1C (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01F1420 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?BeginSetWindowArrangement@@YA_NPEAUtagWND@@QEBUtagRECT@@1K@Z @ 0x1C020A480 (-BeginSetWindowArrangement@@YA_NPEAUtagWND@@QEBUtagRECT@@1K@Z.c)
 *     ?WindowArrangementHotKeyCallback@@YAX_K_J@Z @ 0x1C020C9B0 (-WindowArrangementHotKeyCallback@@YAX_K_J@Z.c)
 *     EditionPostAccessibility @ 0x1C0212F00 (EditionPostAccessibility.c)
 *     EditionPostRitSound @ 0x1C0212F60 (EditionPostRitSound.c)
 *     xxxMinimizeHungWindow @ 0x1C023ED30 (xxxMinimizeHungWindow.c)
 *     ?ForceForeground@CWindow@@QEAA_NXZ @ 0x1C023FFC8 (-ForceForeground@CWindow@@QEAA_NXZ.c)
 *     ?CreateAndPostRequest@CMoveSizeRequest@@CA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@AEBUtagPOINT@@@Z @ 0x1C02414AC (-CreateAndPostRequest@CMoveSizeRequest@@CA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@AEBUtagPOINT@@@Z.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C0241F5C (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C004E698 (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C0053840 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     ??0?$CLockExclusiveInUserCrit@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00BE9BC (--0-$CLockExclusiveInUserCrit@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     PtiKbdFromQ @ 0x1C00BEA34 (PtiKbdFromQ.c)
 *     SetWakeBit @ 0x1C00D4F30 (SetWakeBit.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00F79FC (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     ProcessSuspendedEventMessage @ 0x1C011DBD4 (ProcessSuspendedEventMessage.c)
 */

__int64 __fastcall PostEventMessageEx(
        struct tagTHREADINFO *a1,
        struct tagQ *a2,
        unsigned int a3,
        struct tagWND *a4,
        unsigned int a5,
        unsigned __int64 a6,
        __int64 a7,
        struct tagINPUT_MESSAGE_SOURCE *a8)
{
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // ebx
  struct tagQMSG *v15; // r14
  unsigned int v16; // ecx
  tagDomLock *v18[2]; // [rsp+70h] [rbp-38h] BYREF

  CLockExclusiveInUserCrit<DLT_QUEUE>::CLockExclusiveInUserCrit<DLT_QUEUE>(v18);
  v14 = 0;
  if ( !a1
    || (*((_DWORD *)a1 + 122) & 1) == 0
    && ((vAdjustDelegatePriority(a1, v12, v13), (*((_DWORD *)a1 + 308) & 0x20) == 0)
     || (unsigned int)ProcessSuspendedEventMessage(a1, a3, a4)) )
  {
    v15 = AllocQEntryEx((struct tagQ *)((char *)a2 + 24), 0LL, 0);
    if ( v15 )
    {
      if ( a4 )
        v16 = *(_DWORD *)(*((_QWORD *)a4 + 5) + 288LL);
      else
        v16 = *(_DWORD *)(*(_QWORD *)(PtiKbdFromQ(a2) + 424) + 280LL);
      StoreQMessage(v15, a4, a5, a6, a7, 0, 0LL, a3, 0LL, 0, a8, v16, 0LL, 0LL);
      *((_QWORD *)v15 + 13) = a1;
      if ( a3 == 20 )
        CTouchProcessor::ReferenceMsgDataExternal(gpTouchProcessor, a7, 3LL, v15);
      if ( !a1 )
      {
        SetWakeBit(*((_QWORD *)a2 + 11), 8256LL);
        a1 = (struct tagTHREADINFO *)*((_QWORD *)a2 + 12);
      }
      SetWakeBit(a1, 8256LL);
      v14 = 1;
    }
  }
  tagObjLock::UnLockExclusive(v18[1]);
  tagDomLock::UnLockShared(v18[0]);
  return v14;
}
