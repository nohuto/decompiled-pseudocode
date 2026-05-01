/*
 * XREFs of ??$call@AEAV_lambda_3174d6f28dd4ff66a1abe0cc6653db52_@@@?$factory_cache_entry@UAppExtensionCatalog@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIAppExtensionCatalogStatics@2345@@impl@winrt@@QEAA?AUAppExtensionCatalog@AppExtensions@ApplicationModel@WindowsUdk@2@AEAV_lambda_3174d6f28dd4ff66a1abe0cc6653db52_@@@Z @ 0x1801C3BE0
 * Callers:
 *     _anonymous_namespace_::TryGetAUMIDFromAppExtensionCatalog @ 0x1801C7A58 (_anonymous_namespace_--TryGetAUMIDFromAppExtensionCatalog.c)
 *     ?GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@SAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18033C468 (-GetDefaultInputAppId@TabTipAdapter@KeyboardHosting@@SAJAEAV-$basic_string@GU-$char_traits@G@std.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1800663C0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180066A80 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x18009191D (WINRT_InterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$get_activation_factory@UIAppExtensionCatalogStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@winrt@@YA?AUIAppExtensionCatalogStatics@AppExtensions@ApplicationModel@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x1801C3DBC (--$get_activation_factory@UIAppExtensionCatalogStatics@AppExtensions@ApplicationModel@WindowsUdk.c)
 *     ?Open@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionCatalogStatics@UIAppExtensionCatalogStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUAppExtensionCatalog@AppExtensions@ApplicationModel@WindowsUdk@3@AEBUhstring@param@3@@Z @ 0x1801C66B4 (-Open@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionCatalogStatics@UIAppExten.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionCatalog,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>::call<_lambda_3174d6f28dd4ff66a1abe0cc6653db52_ &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  void (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 v6; // rax
  char v7; // r14
  void (__fastcall ***v9)(_QWORD, __int64 *, __int64 *); // [rsp+20h] [rbp-60h] BYREF
  __int64 v10; // [rsp+28h] [rbp-58h] BYREF
  __int64 v11; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v12[4]; // [rsp+38h] [rbp-48h] BYREF
  HSTRING string[4]; // [rsp+58h] [rbp-28h] BYREF

  v10 = a2;
  v12[2] = &qword_1805A0048;
  _InterlockedIncrement64(&qword_1805A0048);
  if ( `winrt::impl::call_factory<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionCatalog,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics,_lambda_3174d6f28dd4ff66a1abe0cc6653db52_>'::`2'::factory )
  {
    winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionCatalogStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>::Open(
      &`winrt::impl::call_factory<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionCatalog,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics,_lambda_3174d6f28dd4ff66a1abe0cc6653db52_>'::`2'::factory,
      a2,
      *a3);
    _InterlockedDecrement64(&qword_1805A0048);
    return a2;
  }
  _InterlockedDecrement64(&qword_1805A0048);
  v12[0] = L"WindowsUdk.ApplicationModel.AppExtensions.AppExtensionCatalog";
  v12[1] = 61LL;
  winrt::param::hstring::hstring(string, (__int64)v12);
  winrt::get_activation_factory<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>(
    &v9,
    string);
  v5 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v9;
  if ( v9 )
  {
    v11 = 0LL;
    (**v9)(v9, &winrt::impl::guid_storage<winrt::impl::IAgileObject>::value, &v11);
    v6 = v11;
    v10 = v11;
    if ( v11 )
    {
      v7 = 1;
      goto LABEL_6;
    }
  }
  else
  {
    v6 = 0LL;
    v10 = 0LL;
  }
  v7 = 0;
LABEL_6:
  if ( v6 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(&v10);
  if ( v7 )
  {
    v12[3] = &qword_1805A0048;
    _InterlockedIncrement64(&qword_1805A0048);
    v5 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v9;
    if ( !_InterlockedCompareExchange64(
            &`winrt::impl::call_factory<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionCatalog,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics,_lambda_3174d6f28dd4ff66a1abe0cc6653db52_>'::`2'::factory,
            (signed __int64)v9,
            0LL) )
    {
      v9 = 0LL;
      WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1805A0050);
      v5 = 0LL;
    }
    winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionCatalogStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>::Open(
      &`winrt::impl::call_factory<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionCatalog,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics,_lambda_3174d6f28dd4ff66a1abe0cc6653db52_>'::`2'::factory,
      a2,
      *a3);
    _InterlockedDecrement64(&qword_1805A0048);
  }
  else
  {
    winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionCatalogStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>::Open(
      &v9,
      a2,
      *a3);
  }
  if ( v5 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref((__int64 *)&v9);
  return a2;
}
