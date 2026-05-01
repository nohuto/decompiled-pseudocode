/*
 * XREFs of ??1?$ComPtr@VApplicationViewWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A39DC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_ShellFeedsDesktopExperienceView_TwinUI::ShellFeeds::IShellFeedsDesktopExperienceView_IServiceProvider___&_TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification___&__::_1_::dtor$2 @ 0x1800A345F (_Microsoft--WRL--Details--MakeAndInitialize_ShellFeedsDesktopExperienceView_TwinUI-_ea_1800A345F.c)
 *     _wil::MakeOrThrow_PresentationRequestedArgs_Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings___IApplicationView____::_1_::dtor$0 @ 0x180144331 (_wil--MakeOrThrow_PresentationRequestedArgs_Windows--Internal--Shell--ViewManagerInterop--IWindo.c)
 *     _wil::MakeOrThrow_PresentationRequestedArgs_Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings___IApplicationView___unsigned_int_&__::_1_::dtor$0 @ 0x1801443FE (_wil--MakeOrThrow_PresentationRequestedArgs_Windows--Internal--Shell--ViewManagerIn_ea_1801443FE.c)
 *     _CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor$19 @ 0x180158027 (_CApplicationManager--_HandleWindowingEnvironmentSettingsRequest_--_1_--dtor$19.c)
 *     _Microsoft::WRL::Details::Make_WindowGroupManager_IPrivilegedWindowGroupingOperations___&__::_1_::dtor$0 @ 0x180293CCB (_Microsoft--WRL--Details--Make_WindowGroupManager_IPrivilegedWindowGroupingOperations___-__--_1_.c)
 *     _wil::MakeOrThrow_WindowGroupManager_IPrivilegedWindowGroupingOperations___&__::_1_::dtor$0 @ 0x180293D6A (_wil--MakeOrThrow_WindowGroupManager_IPrivilegedWindowGroupingOperations___-__--_1_--dtor$0.c)
 *     _wil::MakeOrThrow_WindowGroup_unsigned_long_&__::_1_::dtor$0 @ 0x1802994F1 (_wil--MakeOrThrow_WindowGroup_unsigned_long_-__--_1_--dtor$0.c)
 *     _CWRLImpWndProc_WindowGroup_::s_WndProcBase_::_1_::dtor$0 @ 0x180299979 (_CWRLImpWndProc_WindowGroup_--s_WndProcBase_--_1_--dtor$0.c)
 *     _wil::MakeOrThrow_ApplicationViewWrapper_IApplicationView___&__::_1_::dtor$0 @ 0x18033A1D6 (_wil--MakeOrThrow_ApplicationViewWrapper_IApplicationView___-__--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A7000 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICust.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ApplicationViewWrapper>::~ComPtr<ApplicationViewWrapper>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::Release(result);
  }
  return result;
}
