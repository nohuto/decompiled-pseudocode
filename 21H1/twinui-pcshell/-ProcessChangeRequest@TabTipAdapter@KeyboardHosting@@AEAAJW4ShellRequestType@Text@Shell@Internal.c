/*
 * XREFs of ?ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal@Windows@@I@Z @ 0x180340018
 * Callers:
 *     ?OnLightDismiss@TabTipAdapter@KeyboardHosting@@QEAAJI@Z @ 0x18033F0B8 (-OnLightDismiss@TabTipAdapter@KeyboardHosting@@QEAAJI@Z.c)
 *     ?OnShellRequestedHide@TabTipAdapter@KeyboardHosting@@UEAAJXZ @ 0x18033FA10 (-OnShellRequestedHide@TabTipAdapter@KeyboardHosting@@UEAAJXZ.c)
 * Callees:
 *     ?SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x18002B410 (-SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEAE1PEAW4CoreKeyboardModality@45678@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@8@@Z @ 0x18008AF60 (-GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Intern.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A42F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180115128 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?UpdateViewVisibilityInShellPreference@TouchKeyboardExperienceManager@@QEAAXI_N@Z @ 0x180335100 (-UpdateViewVisibilityInShellPreference@TouchKeyboardExperienceManager@@QEAAXI_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::ProcessChangeRequest(__int64 a1, int a2, unsigned int a3)
{
  const char *v6; // r9
  int v7; // eax
  int v8; // ebx
  int v9; // esi
  _BYTE *v10; // rbx
  int ShellState; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r9
  int v16; // [rsp+20h] [rbp-30h]
  unsigned int v17; // [rsp+40h] [rbp-10h] BYREF
  __int64 v18; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int v20; // [rsp+78h] [rbp+28h] BYREF
  char v21; // [rsp+88h] [rbp+38h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
    (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
    1u,
    3u);
  if ( a3 == *(_DWORD *)(a1 + 488) )
  {
    v7 = KeyboardHosting::TabTipAdapter::SetOverrideMonitorSizeForSIP((KeyboardHosting::TabTipAdapter *)a1);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x816,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v7);
  }
  v8 = a2 - 2;
  if ( v8 )
  {
    if ( v8 != 1 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        2091LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        v6);
      __debugbreak();
    }
    v9 = 3;
  }
  else
  {
    v9 = 2;
  }
  v21 = 0;
  LOBYTE(v20) = 0;
  v17 = 0;
  v18 = 0LL;
  v10 = *(_BYTE **)(a1 + 104);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  ShellState = KeyboardHosting::TabTipAdapterPolicy::GetShellState(v10, 11LL, &v21, (bool *)&v20, &v17, &v18);
  v12 = ShellState;
  if ( ShellState < 0 )
  {
    v13 = 2098LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)ShellState);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    return v12;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
    (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
    1u,
    3u);
  if ( v9 == 2 )
    TouchKeyboardExperienceManager::UpdateViewVisibilityInShellPreference(
      *(TouchKeyboardExperienceManager **)(a1 + 64),
      a3,
      1u);
  LOBYTE(v16) = v20;
  LOBYTE(v14) = v21;
  ShellState = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, int, int, unsigned int))(**(_QWORD **)(a1 + 24) + 496LL))(
                 *(_QWORD *)(a1 + 24),
                 v18,
                 v17,
                 v14,
                 v16,
                 v9,
                 a3);
  v12 = ShellState;
  if ( ShellState < 0 )
  {
    v13 = 2118LL;
    goto LABEL_15;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  return 0LL;
}
