/*
 * XREFs of ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x180455E44
 * Callers:
 *     ?OnEditControlEmbeddedHandwritingViewVisibleSettingChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlEmbeddedHandwritingViewVisibleSettingChangedEventArgs@45678@@Z @ 0x180085CC0 (-OnEditControlEmbeddedHandwritingViewVisibleSettingChanged@TabTipAdapter@KeyboardHosting@@AEAAJP.c)
 *     ?NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@QEAAJI_N0@Z @ 0x18032B29C (-NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@QEAAJI_N0@Z.c)
 *     ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason@2@@Z @ 0x18033B920 (-ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason.c)
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x18033FB40 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x18033FDC0 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?BoolToQword@QwordHelpers@@YA_K_N@Z @ 0x180455E10 (-BoolToQword@QwordHelpers@@YA_K_N@Z.c)
 */

void __fastcall IhmNotification::SendKeyboardSetVisible(IhmNotification *this, char a2)
{
  unsigned __int64 v3; // rax
  QwordHelpers *v4; // rcx
  _QWORD v5[2]; // [rsp+30h] [rbp-28h] BYREF

  v3 = QwordHelpers::BoolToQword(this);
  LOBYTE(v4) = a2;
  v5[0] = v3;
  v5[1] = QwordHelpers::BoolToQword(v4);
  RtlPublishWnfStateData(WNF_TKBN_KEYBOARD_SET_VISIBLE_NOTIFICATION, 0LL, v5, 16LL);
}
