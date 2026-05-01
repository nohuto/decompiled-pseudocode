/*
 * XREFs of ?OnInputPaneTryHideRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputPaneTryHideRequestedEventArgs@45678@@Z @ 0x180360410
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B23E8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@QEAAJI_N0@Z @ 0x18034CD9C (-NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@QEAAJI_N0@Z.c)
 *     ?HandleInputPaneTryHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180368D20 (-HandleInputPaneTryHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Sh.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputPaneTryHideRequested(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputPaneTryHideRequestedEventArgs *a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = KeyboardHosting::TabTipAdapterPolicy::HandleInputPaneTryHide(
         *((KeyboardHosting::TabTipAdapterPolicy **)this + 13),
         0,
         (enum Windows::Internal::Shell::Text::ShellRequestType *)&v8);
  if ( v4 < 0 )
  {
    v5 = 653LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  if ( v8 == 2 )
  {
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 40LL))((char *)this + 8);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
      (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
      1u,
      3u);
    v4 = TouchKeyboardExperienceManager::NotifyCurrentVisibilityState(
           *((TouchKeyboardExperienceManager **)this + 8),
           *((_DWORD *)this + 122),
           0,
           0);
    if ( v4 < 0 )
    {
      v5 = 661LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
