/*
 * XREFs of PostShellHookMessagesEx @ 0x1C0033A88
 * Callers:
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C00039D0 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     PostShellHookMessages @ 0x1C0033A70 (PostShellHookMessages.c)
 *     xxxSystemParametersInfoWorker @ 0x1C003E1F8 (xxxSystemParametersInfoWorker.c)
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     xxxSetInformationThread @ 0x1C00BD1B0 (xxxSetInformationThread.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00F9270 (EditionHandleAndPostKeyEvent.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C011B4E4 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     xxxRedrawFrameAndHook @ 0x1C0153940 (xxxRedrawFrameAndHook.c)
 *     ?RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ @ 0x1C01D1C30 (-RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01D1E08 (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01D2038 (-xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?WinlogonWinSpaceCallback@@YAX_K_J@Z @ 0x1C01D9B80 (-WinlogonWinSpaceCallback@@YAX_K_J@Z.c)
 *     PTPEnableHotkeyCallback @ 0x1C0221750 (PTPEnableHotkeyCallback.c)
 * Callees:
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0033AE0 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 */

void __fastcall PostShellHookMessagesEx(unsigned int a1, __int64 a2, struct tagINPUT_MESSAGE_SOURCE *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // rsi

  v3 = a1;
  v5 = a2;
  if ( a1 == 12 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_(12, a2, 2, 10, (__int64)&WPP_7b6843d7872833607704d87654b4b262_Traceguids);
    }
    CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
  }
  _PostShellHookMsgWorker(*(_DWORD *)(gpsi + 928LL), v3, v5, a3);
}
