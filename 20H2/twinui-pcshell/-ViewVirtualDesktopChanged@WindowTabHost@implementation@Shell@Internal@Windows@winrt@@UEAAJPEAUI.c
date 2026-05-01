/*
 * XREFs of ?ViewVirtualDesktopChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@@Z @ 0x1800CE090
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800303B0 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?at@?$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U?$hash@_K@std@@U?$equal_to@_K@8@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@@std@@QEAAAEAUWindowData@implementation@Shell@Internal@Windows@winrt@@AEB_K@Z @ 0x1800CF554 (-at@-$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U-$hash@_K@std@@U.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1800D007C (-lower_bound@-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?MoveProxyWindowsToDesktop@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXPEAUIApplicationViewCollection@@PEAUIVirtualDesktopManagerInternal3@@PEAUIApplicationView@@@Z @ 0x1800D3440 (-MoveProxyWindowsToDesktop@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXPEAUIApp.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180138368 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_180138368.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18013C888 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::ViewVirtualDesktopChanged(
        struct IApplicationViewCollection **this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  winrt::Windows::Internal::Shell::implementation::WindowData *v4; // rax
  __int64 WindowForView; // [rsp+40h] [rbp+8h] BYREF
  char v7; // [rsp+50h] [rbp+18h] BYREF
  struct IApplicationViewCollection *v8; // [rsp+58h] [rbp+20h] BYREF

  WindowForView = (unsigned int)ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 73, &v7);
  std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::lower_bound(
    this + 74,
    &v8);
  if ( v8 != this[75] )
  {
    v4 = (winrt::Windows::Internal::Shell::implementation::WindowData *)std::unordered_map<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData>::at(
                                                                          this + 74,
                                                                          &WindowForView);
    winrt::Windows::Internal::Shell::implementation::WindowData::MoveProxyWindowsToDesktop(
      v4,
      this[19],
      this[55],
      (struct IApplicationView *)a2);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v7);
  return 0LL;
}
