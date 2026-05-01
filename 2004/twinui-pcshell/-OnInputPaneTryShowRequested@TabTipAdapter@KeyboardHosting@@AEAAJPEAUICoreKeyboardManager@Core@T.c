/*
 * XREFs of ?OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputPaneTryShowRequestedEventArgs@45678@@Z @ 0x1803604B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002FE10 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEAE1PEAW4CoreKeyboardModality@45678@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@8@@Z @ 0x18008B620 (-GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Intern.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B23E8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@QEAAJI_N0@Z @ 0x18034CD9C (-NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@QEAAJI_N0@Z.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x180361460 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180363478 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180368D70 (-HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Sh.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputPaneTryShowRequested(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputPaneTryShowRequestedEventArgs *a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  unsigned int v7; // edi
  _BYTE *v8; // rbx
  int ShellState; // eax
  __int64 v10; // rdx
  HSTRING v11; // rbx
  int v12; // eax
  int v13; // [rsp+30h] [rbp-19h] BYREF
  bool v14; // [rsp+34h] [rbp-15h] BYREF
  _BYTE v15[3]; // [rsp+35h] [rbp-14h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-11h] BYREF
  __int64 v17; // [rsp+40h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-1h] BYREF
  HSTRING v19; // [rsp+60h] [rbp+17h]
  HSTRING_HEADER v20; // [rsp+68h] [rbp+1Fh] BYREF
  HSTRING v21; // [rsp+80h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v16 = 0;
  v4 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputPaneTryShowRequestedEventArgs *, unsigned int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v16);
  if ( v4 < 0 )
  {
    v5 = 589LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = KeyboardHosting::TabTipAdapterPolicy::HandleInputPaneTryShow(
         *((KeyboardHosting::TabTipAdapterPolicy **)this + 13),
         v16,
         (enum Windows::Internal::Shell::Text::ShellRequestType *)&v13);
  if ( v4 < 0 )
  {
    v5 = 590LL;
    goto LABEL_3;
  }
  if ( v13 != 1 )
    return 0LL;
  switch ( v16 )
  {
    case 0u:
      goto LABEL_17;
    case 1u:
      v7 = 8;
      goto LABEL_18;
    case 2u:
      v7 = 7;
      goto LABEL_18;
    case 3u:
      v7 = 2;
      goto LABEL_18;
  }
  if ( v16 != 4 )
  {
LABEL_17:
    v7 = 0;
    goto LABEL_18;
  }
  v7 = 10;
LABEL_18:
  v13 = 0;
  v17 = 0LL;
  v8 = (_BYTE *)*((_QWORD *)this + 13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  ShellState = KeyboardHosting::TabTipAdapterPolicy::GetShellState(v8, v7, v15, &v14, &v13, &v17);
  v4 = ShellState;
  if ( ShellState < 0 )
  {
    v10 = 622LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)ShellState);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    return (unsigned int)v4;
  }
  if ( ((v7 - 2) & 0xFFFFFFF7) != 0 )
  {
    (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this + 1) + 32LL))(
      (char *)this + 8,
      (unsigned int)v13,
      v7);
  }
  else
  {
    v19 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"1", 2u, 1u);
    v11 = v19;
    v21 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v20, L"ShowEmojiPanelTips", 0x13u, 0x12u);
    v12 = KeyboardHosting::TabTipAdapter::SetShellPreference(this, v21, v11);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x272,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v12);
    ShellState = KeyboardHosting::TabTipAdapter::OnShellRequestedStateChange(this, v7, (unsigned int)v13, 5LL);
    v4 = ShellState;
    if ( ShellState < 0 )
    {
      v10 = 628LL;
      goto LABEL_24;
    }
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
    (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
    1u,
    3u);
  ShellState = TouchKeyboardExperienceManager::NotifyCurrentVisibilityState(
                 *((TouchKeyboardExperienceManager **)this + 8),
                 *((_DWORD *)this + 122),
                 1,
                 0);
  v4 = ShellState;
  if ( ShellState < 0 )
  {
    v10 = 637LL;
    goto LABEL_24;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  return 0LL;
}
