/*
 * XREFs of ?OnEditControlEmbeddedHandwritingViewEnabledSettingChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlEmbeddedHandwritingViewEnabledSettingChangedEventArgs@45678@@Z @ 0x180085BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlEmbeddedHandwritingViewEnabledSettingChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlEmbeddedHandwritingViewEnabledSettingChangedEventArgs *a3)
{
  __int64 v3; // rax
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v9; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(_QWORD *)a3;
  v9 = 0;
  v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlEmbeddedHandwritingViewEnabledSettingChangedEventArgs *, char *))(v3 + 48))(
         a3,
         &v9);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C7,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  else
  {
    *(_BYTE *)(*((_QWORD *)this + 13) + 502LL) = v9 != 0;
    return 0LL;
  }
}
