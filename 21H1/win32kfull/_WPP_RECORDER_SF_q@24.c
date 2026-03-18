/*
 * XREFs of _WPP_RECORDER_SF_q@24 @ 0x1B74E
 * Callers:
 *     ?WindowBorderExitIfEntered@NotifyShell@@YGXPAUtagWND@@@Z @ 0x12CEE (-WindowBorderExitIfEntered@NotifyShell@@YGXPAUtagWND@@@Z.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1770E (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1A052 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     ?xxxActivateWindowWithOptions@@YG_NPAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1A2C8 (-xxxActivateWindowWithOptions@@YG_NPAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStr.c)
 *     _xxxMakeWindowForegroundWithState@8 @ 0x1A5E4 (_xxxMakeWindowForegroundWithState@8.c)
 *     ?xxxUserNotifyProcessCreate@@YGJKKKK@Z @ 0x1A838 (-xxxUserNotifyProcessCreate@@YGJKKKK@Z.c)
 *     ?InitMapSharedSection@@YGJPAU_EPROCESS@@PAU_USERCONNECT@@@Z @ 0x1B10E (-InitMapSharedSection@@YGJPAU_EPROCESS@@PAU_USERCONNECT@@@Z.c)
 *     ?xxxActivateOnMinimize@@YGHPAUtagWND@@@Z @ 0x256DC (-xxxActivateOnMinimize@@YGHPAUtagWND@@@Z.c)
 *     _xxxEndDeferWindowPosEx@8 @ 0x34486 (_xxxEndDeferWindowPosEx@8.c)
 *     ?xxxSkipSysMsgEx@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@H@Z @ 0x6F108 (-xxxSkipSysMsgEx@@YGPAUtagQMSG@@PAUtagTHREADINFO@@PAU1@H@Z.c)
 *     ?VWPLNextBase@@YGPAUtagWND@@PAUtagVWPL@@KPAU1@PAKH2@Z @ 0x6FC58 (-VWPLNextBase@@YGPAUtagWND@@PAUtagVWPL@@KPAU1@PAKH2@Z.c)
 *     ?DestroyPendingDesktops@@YGXPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z @ 0x7CC38 (-DestroyPendingDesktops@@YGXPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z.c)
 *     ?_AllowSetForegroundWindow@@YGHK@Z @ 0x811C4 (-_AllowSetForegroundWindow@@YGHK@Z.c)
 *     ?JobCalloutTerminate@@YGHPAUtagW32JOB@@@Z @ 0x9D20C (-JobCalloutTerminate@@YGHPAUtagW32JOB@@@Z.c)
 *     _UserJobCallout@4 @ 0x9D26C (_UserJobCallout@4.c)
 *     ?UpdateJob@@YGXPAUtagW32JOB@@@Z @ 0x9D3F8 (-UpdateJob@@YGXPAUtagW32JOB@@@Z.c)
 *     ?CreateW32Job@@YGPAUtagW32JOB@@PAU_EJOB@@@Z @ 0x9D5D4 (-CreateW32Job@@YGPAUtagW32JOB@@PAU_EJOB@@@Z.c)
 *     ?xxxHandleDesktopMessages@@YGHPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z @ 0xA18FA (-xxxHandleDesktopMessages@@YGHPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z.c)
 *     _CancelForegroundActivate@0 @ 0xAC494 (_CancelForegroundActivate@0.c)
 *     _NtUserSendInput@12 @ 0xAF922 (_NtUserSendInput@12.c)
 *     _xxxSendInput@8 @ 0xAFB7E (_xxxSendInput@8.c)
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 *     ?WindowBorderEnter@NotifyShell@@YGXPAUtagWND@@H@Z @ 0xB5830 (-WindowBorderEnter@NotifyShell@@YGXPAUtagWND@@H@Z.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YGJPAUtagDESKTOP@@GPAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0xD2782 (-xxxRemoteSetDisconnectDisplayMode@@YGJPAUtagDESKTOP@@GPAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_LockSetForegroundWindow@@YGHI@Z @ 0x141663 (-_LockSetForegroundWindow@@YGHI@Z.c)
 *     _zzzShowStartGlass@4 @ 0x142781 (_zzzShowStartGlass@4.c)
 *     ?SortTouchContacts@@YGHPAUtagPOINTER_TOUCH_INFO@@I@Z @ 0x1493C6 (-SortTouchContacts@@YGHPAUtagPOINTER_TOUCH_INFO@@I@Z.c)
 *     ?ValidateInjectedTouchFrame@@YGHIPAUtagPOINTER_TOUCH_INFO@@PAUtagINJECTED_CONTACT@@PAUtagRECT@@I@Z @ 0x149543 (-ValidateInjectedTouchFrame@@YGHIPAUtagPOINTER_TOUCH_INFO@@PAUtagINJECTED_CONTACT@@PAUtagRECT@@I.c)
 *     _xxxInjectTouchInput@8 @ 0x14A084 (_xxxInjectTouchInput@8.c)
 *     _NtUserInjectTouchInput@8 @ 0x165800 (_NtUserInjectTouchInput@8.c)
 *     ?xxxQueryShellForSizeCooperation@@YGXPAU_MOVESIZEDATA@@@Z @ 0x1751C3 (-xxxQueryShellForSizeCooperation@@YGXPAU_MOVESIZEDATA@@@Z.c)
 *     _xxxInitializeMoveSizeData@20 @ 0x176FCC (_xxxInitializeMoveSizeData@20.c)
 *     _xxxMoveSize@12 @ 0x177959 (_xxxMoveSize@12.c)
 *     ?UnlinkConv@@YGPAUtagDDECONV@@PAU1@@Z @ 0x17ECA6 (-UnlinkConv@@YGPAUtagDDECONV@@PAU1@@Z.c)
 *     ?xxxAdviseDataAck@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F0D7 (-xxxAdviseDataAck@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxCopyDDEOut@@YGPAXPAUtagINTDDEINFO@@PAPAX@Z @ 0x17F3F5 (-xxxCopyDDEOut@@YGPAXPAUtagINTDDEINFO@@PAPAX@Z.c)
 *     ?xxxExecute@@YGKPAKPAJPAUtagDDECONV@@@Z @ 0x17F55E (-xxxExecute@@YGKPAKPAJPAUtagDDECONV@@@Z.c)
 *     ?xxxFreeDDEHandle@@YGXPAUtagDDECONV@@PAXK@Z @ 0x17F786 (-xxxFreeDDEHandle@@YGXPAUtagDDECONV@@PAXK@Z.c)
 *     ?xxxFreeListFree@@YGXPAUtagFREELIST@@@Z @ 0x17F7F9 (-xxxFreeListFree@@YGXPAUtagFREELIST@@@Z.c)
 *     _xxxCleanupAndFreeDdeConv@4 @ 0x180056 (_xxxCleanupAndFreeDdeConv@4.c)
 *     _xxxDDETrackGetMessageHook@4 @ 0x180099 (_xxxDDETrackGetMessageHook@4.c)
 *     _xxxFreeDdeConv@4 @ 0x180896 (_xxxFreeDdeConv@4.c)
 *     ?WindowSizingCompleted@NotifyShell@@YGXPAUtagWND@@W4ARRANGED_WINDOW_SIZE_RESULT@@@Z @ 0x19C35B (-WindowSizingCompleted@NotifyShell@@YGXPAUtagWND@@W4ARRANGED_WINDOW_SIZE_RESULT@@@Z.c)
 *     _anonymous_namespace_::WindowSizingUpdate @ 0x19C38C (_anonymous_namespace_--WindowSizingUpdate.c)
 *     _xxxHardErrorControl@12 @ 0x1A022C (_xxxHardErrorControl@12.c)
 *     _xxxDragObject@20 @ 0x1A6347 (_xxxDragObject@20.c)
 * Callees:
 *     <none>
 */

int __fastcall WPP_RECORDER_SF_q(int a1, int a2, unsigned int a3, int a4, int a5, char a6)
{
  unsigned int v7; // edx
  int v9; // [esp+0h] [ebp-10h]
  int v10; // [esp+4h] [ebp-Ch]
  int v11; // [esp+8h] [ebp-8h]
  struct RECORDER_LOG__ *v12; // [esp+Ch] [ebp-4h]

  v12 = gFullLog;
  v7 = HIWORD(a3);
  if ( ((1 << ((a3 - 1) & 0x1F)) & *(&WPP_GLOBAL_Control->Characteristics + 14 * HIWORD(a3) + (((a3 - 1) >> 5) & 0x7FF))) != 0
    && *((_BYTE *)&WPP_GLOBAL_Control->Flags + 56 * v7 + 1) >= (unsigned __int8)a2 )
  {
    ((void (__cdecl *)(_DWORD, _DWORD, int, int, int, char *, int, _DWORD))pfnWppTraceMessage)(
      *((_DWORD *)&WPP_GLOBAL_Control->AttachedDevice + 14 * v7),
      *((_DWORD *)&WPP_GLOBAL_Control->CurrentIrp + 14 * v7),
      43,
      a5,
      a4,
      &a6,
      4,
      0);
  }
  return _WppAutoLogTrace(v12, a2, a3, a5, a4, &a6, 4, 0, v9, v10, v11, v12);
}
