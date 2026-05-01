/*
 * XREFs of ?OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800B88D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180038D30 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180089670 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800919B4 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?DelayedUpdateActivationTimestamp@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@_K@Z @ 0x1800B74B8 (-DelayedUpdateActivationTimestamp@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEA.c)
 *     ?RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z @ 0x1800B9288 (-RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z.c)
 *     ?SyncWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z @ 0x1800B98CC (-SyncWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z.c)
 *     ?UpdateActivationTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@0@Z @ 0x1800B9A88 (-UpdateActivationTimestamps@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAU.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1800BC05C (-lower_bound@-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::OnApplicationViewChanged(
        RTL_SRWLOCK *a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        int a3)
{
  int v4; // r8d
  unsigned int WindowForView; // eax
  unsigned int v6; // ebx
  _QWORD *Ptr; // rsi
  _QWORD *i; // rbx
  HWND v9; // rbx
  HWND PropW; // rax
  PVOID v12; // [rsp+28h] [rbp-20h] BYREF
  RTL_SRWLOCK *v13[3]; // [rsp+30h] [rbp-18h] BYREF
  char v14; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 )
  {
    v4 = a3 - 1;
    if ( v4 )
    {
      if ( v4 == 6 )
      {
        WindowForView = ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
        winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp(
          (__int64)a1,
          (__int64)&v14,
          WindowForView);
      }
    }
    else
    {
      v6 = ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
      wil::srwlock::lock_exclusive(a1 + 75, v13);
      std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::lower_bound(
        &a1[76],
        &v12);
      if ( v12 != a1[77].Ptr )
      {
        winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveWindowTabDataModel(
          (winrt::Windows::Internal::Shell::implementation::WindowTabHost *)a1,
          v6);
        Ptr = a1[77].Ptr;
        for ( i = (_QWORD *)*Ptr; i != Ptr; i = (_QWORD *)*i )
          winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncWindowTabDataModel(
            (winrt::Windows::Internal::Shell::implementation::WindowTabHost *)a1,
            i[2]);
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(v13);
    }
  }
  else
  {
    v9 = (HWND)ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
    PropW = (HWND)GetPropW(v9, (LPCWSTR)0xA920);
    if ( PropW )
      winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateActivationTimestamps(
        (winrt::Windows::Internal::Shell::implementation::WindowTabHost *)a1,
        v9,
        PropW);
  }
  return 0LL;
}
