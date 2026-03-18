/*
 * XREFs of PostShellHookMessagesEx @ 0x1C00BF158
 * Callers:
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C0003870 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C002F978 (xxxSystemParametersInfoWorker.c)
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     xxxSetInformationThread @ 0x1C007DA60 (xxxSetInformationThread.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00BDD10 (EditionHandleAndPostKeyEvent.c)
 *     PostShellHookMessages @ 0x1C00BF140 (PostShellHookMessages.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C011BED4 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     xxxRedrawFrameAndHook @ 0x1C0156270 (xxxRedrawFrameAndHook.c)
 *     ?RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ @ 0x1C01D0E20 (-RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01D0FF8 (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01D1228 (-xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AEAAXXZ.c)
 *     ?WinlogonWinSpaceCallback@@YAX_K_J@Z @ 0x1C01D8EC0 (-WinlogonWinSpaceCallback@@YAX_K_J@Z.c)
 *     PTPEnableHotkeyCallback @ 0x1C02208C0 (PTPEnableHotkeyCallback.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0040298 (WPP_RECORDER_SF_.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00BF1B0 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
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
