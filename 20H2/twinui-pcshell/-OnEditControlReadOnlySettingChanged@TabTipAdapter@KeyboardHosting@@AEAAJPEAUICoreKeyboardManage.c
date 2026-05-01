/*
 * XREFs of ?OnEditControlReadOnlySettingChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs@45678@@Z @ 0x180086E40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlReadOnlySettingChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs *a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v11; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(_QWORD *)a3;
  v11 = 0;
  v6 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs *, char *))(v3 + 48))(
         a3,
         &v11);
  if ( v6 < 0 )
  {
    v9 = 442LL;
  }
  else
  {
    v7 = *((_QWORD *)this + 6);
    if ( !v7 )
      return 0LL;
    LOBYTE(v5) = v11 != 0;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 56LL))(v7, v5);
    if ( v6 >= 0 )
      return 0LL;
    v9 = 446LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
