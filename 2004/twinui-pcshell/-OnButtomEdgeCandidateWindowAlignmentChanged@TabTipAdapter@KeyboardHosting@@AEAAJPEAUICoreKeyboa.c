/*
 * XREFs of ?OnButtomEdgeCandidateWindowAlignmentChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerBottomEdgeCandidateWindowAlignmentChangedEventArgs@45678@@Z @ 0x180085730
 * Callers:
 *     <none>
 * Callees:
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18002BAC8 (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HandleButtomEdgeCandidateWindowAlignmentChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800857B0 (-HandleButtomEdgeCandidateWindowAlignmentChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnButtomEdgeCandidateWindowAlignmentChanged(
        KeyboardHosting::TabTipAdapterPolicy **this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerBottomEdgeCandidateWindowAlignmentChangedEventArgs *a3)
{
  __int64 v3; // rax
  int v5; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int8 v9; // [rsp+40h] [rbp+18h] BYREF
  int v10; // [rsp+48h] [rbp+20h] BYREF

  v3 = *(_QWORD *)a3;
  v9 = 0;
  v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerBottomEdgeCandidateWindowAlignmentChangedEventArgs *, unsigned __int8 *))(v3 + 48))(
         a3,
         &v9);
  if ( v5 < 0 )
  {
    v7 = 324LL;
  }
  else
  {
    v5 = KeyboardHosting::TabTipAdapterPolicy::HandleButtomEdgeCandidateWindowAlignmentChanged(
           this[13],
           v9,
           (enum Windows::Internal::Shell::Text::ShellRequestType *)&v10);
    if ( v5 < 0 )
    {
      v7 = 327LL;
    }
    else
    {
      if ( v10 != 3 )
        return 0LL;
      v5 = KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate((KeyboardHosting::TabTipAdapter *)this);
      if ( v5 >= 0 )
        return 0LL;
      v7 = 330LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
