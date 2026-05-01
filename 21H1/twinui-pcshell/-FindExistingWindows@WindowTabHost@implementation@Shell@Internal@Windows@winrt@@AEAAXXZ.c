/*
 * XREFs of ?FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800B7904
 * Callers:
 *     ?perform_delayed_initialization@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1800BC160 (-perform_delayed_initialization@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAX.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180038D30 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x180094AE0 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??0?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1800A5F5C (--0-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800B4898 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?SyncWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z @ 0x1800B98CC (-SyncWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z.c)
 *     ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x1800B9C68 (-UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??DIterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA?AV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@XZ @ 0x180185D4C (--DIterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Micros.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180186B34 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ?begin@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x180189384 (-begin@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@.c)
 *     ?end@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x1801893B4 (-end@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@d.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1801C44B0 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::FindExistingWindows(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this)
{
  __int64 v2; // rbx
  __int64 (__fastcall *v3)(__int64, __int64 *); // rsi
  int v4; // eax
  struct IApplicationView *v5; // rdx
  unsigned int WindowForView; // ebx
  unsigned int v7; // eax
  _QWORD *v8; // rsi
  _QWORD *i; // rbx
  __int64 v10; // [rsp+20h] [rbp-58h] BYREF
  __int64 v11[2]; // [rsp+28h] [rbp-50h] BYREF
  int v12; // [rsp+38h] [rbp-40h] BYREF
  __int64 v13[2]; // [rsp+40h] [rbp-38h] BYREF
  int v14; // [rsp+50h] [rbp-28h] BYREF
  __int64 v15[4]; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+20h]
  __int64 v17; // [rsp+A0h] [rbp+28h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+30h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+38h] BYREF
  ApplicationViewHelpers *v20; // [rsp+B8h] [rbp+40h] BYREF

  v17 = 0LL;
  v2 = *((_QWORD *)this + 21);
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 24LL);
  v17 = 0LL;
  v4 = v3(v2, &v17);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      393LL,
      (__int64)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>(
    (__int64)v11,
    v17);
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::begin(v11, &v12);
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::end(v11, &v14);
  while ( v12 != v14 || v13[1] != v15[1] )
  {
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::operator*(
      &v12,
      &v20);
    WindowForView = ApplicationViewHelpers::GetWindowForView(
                      (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v20,
                      v5);
    v18 = 0LL;
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 18) + 48LL))(
           *((_QWORD *)this + 18),
           WindowForView,
           &v18);
    winrt::check_hresult(v7);
    v19 = v18;
    v10 = 0LL;
    if ( !(unsigned __int8)winrt::Windows::Foundation::operator==(&v19, &v10) )
      winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateTabsForWindow(this, WindowForView);
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    ++v12;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v12);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11);
  v8 = (_QWORD *)*((_QWORD *)this + 77);
  for ( i = (_QWORD *)*v8; i != v8; i = (_QWORD *)*i )
    winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncWindowTabDataModel(this, i[2]);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
}
