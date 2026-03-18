/*
 * XREFs of _NtUserCallOneParam@8 @ 0x6E730
 * Callers:
 *     <none>
 * Callees:
 *     __ThreadMessageQueueAttached@4 @ 0x6E8D4 (__ThreadMessageQueueAttached@4.c)
 *     __SetCaretBlinkTime@4 @ 0x7DA40 (__SetCaretBlinkTime@4.c)
 *     ?_AllowSetForegroundWindow@@YGHK@Z @ 0x811C4 (-_AllowSetForegroundWindow@@YGHK@Z.c)
 *     _xxxGetInputEvent@4 @ 0x82D1E (_xxxGetInputEvent@4.c)
 *     __BeginDeferWindowPos@4 @ 0x9BF2E (__BeginDeferWindowPos@4.c)
 *     __MapDesktopObject@4 @ 0xA6EA0 (__MapDesktopObject@4.c)
 *     __CreateMenu@0 @ 0xA7136 (__CreateMenu@0.c)
 *     _RegisterLPK@4 @ 0xA8AEA (_RegisterLPK@4.c)
 *     _xxxPlayEventSound@4 @ 0xA95E6 (_xxxPlayEventSound@4.c)
 *     __PostQuitMessage@4 @ 0xABF96 (__PostQuitMessage@4.c)
 *     __SetTSFEventState@4 @ 0xAED5A (__SetTSFEventState@4.c)
 *     __ForceEnableNumpadTranslation@4 @ 0xAEEE6 (__ForceEnableNumpadTranslation@4.c)
 *     __SetMessageExtraInfo@4 @ 0xB53EA (__SetMessageExtraInfo@4.c)
 *     _xxxRealizePalette@4 @ 0xBF854 (_xxxRealizePalette@4.c)
 *     __EnableSessionForMMCSS@4 @ 0xC4416 (__EnableSessionForMMCSS@4.c)
 *     __ReplyMessage@4 @ 0xC4C9C (__ReplyMessage@4.c)
 *     __GetKeyboardType@4 @ 0xC4E0C (__GetKeyboardType@4.c)
 *     _xxxRemoteReconnect@4 @ 0xD18BC (_xxxRemoteReconnect@4.c)
 *     _xxxLW_LoadFonts@4 @ 0xD6E2E (_xxxLW_LoadFonts@4.c)
 *     __SetDoubleClickTime@4 @ 0xE49D2 (__SetDoubleClickTime@4.c)
 *     ?_SetShellChangeNotifyHWND@@YGHPAUHWND__@@@Z @ 0xE95CA (-_SetShellChangeNotifyHWND@@YGHPAUHWND__@@@Z.c)
 *     __SetWatermarkStrings@4 @ 0xEB0F6 (__SetWatermarkStrings@4.c)
 *     _xxxRemoteNotify@4 @ 0xEBFFE (_xxxRemoteNotify@4.c)
 *     __DwmLockScreenUpdates@4 @ 0xEC08E (__DwmLockScreenUpdates@4.c)
 *     ?_LockSetForegroundWindow@@YGHI@Z @ 0x141663 (-_LockSetForegroundWindow@@YGHI@Z.c)
 *     __GetProcessDefaultLayout@4 @ 0x142114 (__GetProcessDefaultLayout@4.c)
 *     __SetProcessDefaultLayout@4 @ 0x142200 (__SetProcessDefaultLayout@4.c)
 *     __SetWaitForQueueAttach@4 @ 0x142231 (__SetWaitForQueueAttach@4.c)
 *     _zzzShowStartGlass@4 @ 0x142781 (_zzzShowStartGlass@4.c)
 *     _zzzRegisterSystemThread@4 @ 0x152CC2 (_zzzRegisterSystemThread@4.c)
 *     ?_SwapMouseButton@@YGHH@Z @ 0x15520E (-_SwapMouseButton@@YGHH@Z.c)
 *     __EnsureDpiDepSysMetCacheForPlateau@4 @ 0x15534E (__EnsureDpiDepSysMetCacheForPlateau@4.c)
 *     _xxxDirectedYield@4 @ 0x155BCE (_xxxDirectedYield@4.c)
 *     __PostUIActions@4 @ 0x16D7D6 (__PostUIActions@4.c)
 *     _xxxMessageBeep@4 @ 0x178F72 (_xxxMessageBeep@4.c)
 *     __GetSendMessageReceiver@4 @ 0x1812D5 (__GetSendMessageReceiver@4.c)
 *     __EnumClipboardFormats@4 @ 0x182E64 (__EnumClipboardFormats@4.c)
 *     _RemoteThinwireStats@4 @ 0x187E11 (_RemoteThinwireStats@4.c)
 *     __GetWinStationInfo@4 @ 0x187EB8 (__GetWinStationInfo@4.c)
 *     __WOWModuleUnload@4 @ 0x188E7A (__WOWModuleUnload@4.c)
 *     __CsDdeUninitialize@4 @ 0x195136 (__CsDdeUninitialize@4.c)
 */

_DWORD *__stdcall NtUserCallOneParam(int a1, unsigned int a2)
{
  _DWORD *v2; // esi
  _DWORD *v4; // eax
  int v5; // esi
  unsigned __int8 v6; // [esp-Ch] [ebp-10h]
  unsigned __int8 v7; // [esp-Ch] [ebp-10h]
  int v8; // [esp-8h] [ebp-Ch]
  int v9; // [esp-8h] [ebp-Ch]

  if ( a2 - 44 > 0x27 )
    return 0;
  if ( a2 == 83 )
  {
    v8 = 1;
    v6 = 0;
    _mm_lfence();
    EnterSharedCrit(v6, v8);
    v2 = (_DWORD *)funcs_6E762[39](a1);
LABEL_4:
    UserSessionSwitchLeaveCrit();
    return v2;
  }
  if ( a2 == 76 )
    return (_DWORD *)funcs_6E762[32](a1);
  v9 = 1;
  v7 = 0;
  _mm_lfence();
  EnterCrit(v7, v9);
  v4 = (_DWORD *)funcs_6E762[a2 - 44](a1);
  v2 = v4;
  if ( a2 >= 0x2E )
    goto LABEL_4;
  if ( v4 )
  {
    v5 = *v4;
    UserSessionSwitchLeaveCrit();
    return (_DWORD *)v5;
  }
  else
  {
    UserSessionSwitchLeaveCrit();
    return 0;
  }
}
