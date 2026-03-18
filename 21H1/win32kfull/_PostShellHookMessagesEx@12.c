/*
 * XREFs of _PostShellHookMessagesEx@12 @ 0x17156
 * Callers:
 *     _PostShellHookMessages@8 @ 0x17142 (_PostShellHookMessages@8.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     ?_GhostWindow@@YGHPAUtagWND@@@Z @ 0xC1FAA (-_GhostWindow@@YGHPAUtagWND@@@Z.c)
 *     _xxxSetInformationThread@16 @ 0xC9146 (_xxxSetInformationThread@16.c)
 *     ?RotationLockTogglePressed@CLegacyRotationMgr@@UAEXXZ @ 0x140B88 (-RotationLockTogglePressed@CLegacyRotationMgr@@UAEXXZ.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AAEXXZ @ 0x140D98 (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AAEXXZ.c)
 *     ?xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AAEXXZ @ 0x140FCE (-xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AAEXXZ.c)
 *     ?WinlogonWinSpaceCallback@@YGXIJ@Z @ 0x1474C1 (-WinlogonWinSpaceCallback@@YGXIJ@Z.c)
 *     _PTPEnableHotkeyCallback@8 @ 0x183CAB (_PTPEnableHotkeyCallback@8.c)
 *     _xxxRedrawFrameAndHook@4 @ 0x1A13C6 (_xxxRedrawFrameAndHook@4.c)
 *     ?xxxHandleOwnerSwitch@@YGXPAUtagWND@@00@Z @ 0x1A5A84 (-xxxHandleOwnerSwitch@@YGXPAUtagWND@@00@Z.c)
 * Callees:
 *     ?_PostShellHookMsgWorker@@YGXIIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1718E (-_PostShellHookMsgWorker@@YGXIIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 */

void __fastcall PostShellHookMessagesEx(int a1, unsigned int a2, unsigned int a3)
{
  int v4; // [esp+0h] [ebp-8h]
  struct tagINPUT_MESSAGE_SOURCE *v5; // [esp+4h] [ebp-4h]

  if ( a1 == 12 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(2, 10, &WPP_7b6843d7872833607704d87654b4b262_Traceguids);
    CInputGlobals::ClearPtiLastWoken(_gpInputGlobals);
  }
  _PostShellHookMsgWorker(a2, a3, v4, v5);
}
