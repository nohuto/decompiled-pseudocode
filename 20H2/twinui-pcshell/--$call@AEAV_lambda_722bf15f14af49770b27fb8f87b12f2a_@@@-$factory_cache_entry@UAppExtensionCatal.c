/*
 * XREFs of ??$call@AEAV_lambda_722bf15f14af49770b27fb8f87b12f2a_@@@?$factory_cache_entry@UAppExtensionCatalog@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIAppExtensionCatalogStatics@2345@@impl@winrt@@QEAA?AUAppExtensionCatalog@AppExtensions@ApplicationModel@WindowsUdk@2@AEAV_lambda_722bf15f14af49770b27fb8f87b12f2a_@@@Z @ 0x18003E3B4
 * Callers:
 *     ?TryGetCortanaAumid@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x18003E2A4 (-TryGetCortanaAumid@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18003E394 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180060B80 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x180091E7D (WINRT_InterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801B21D8 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$get_activation_factory@UIAppExtensionCatalogStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@winrt@@YA?AUIAppExtensionCatalogStatics@AppExtensions@ApplicationModel@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x1801F15D8 (--$get_activation_factory@UIAppExtensionCatalogStatics@AppExtensions@ApplicationModel@WindowsUdk.c)
 *     ?Open@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionCatalogStatics@UIAppExtensionCatalogStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUAppExtensionCatalog@AppExtensions@ApplicationModel@WindowsUdk@3@AEBUhstring@param@3@AEBW4AppExtensionCatalogOptions@5673@@Z @ 0x1801F3C88 (-Open@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionCatalogStatics@UIAppExten.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionCatalog,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>::call<_lambda_722bf15f14af49770b27fb8f87b12f2a_ &>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  unsigned int *v5; // r8
  _QWORD *v6; // rdx
  int v7; // eax
  void (__fastcall ***v9)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 v10; // rax
  char v11; // r14
  void (__fastcall ***v12)(_QWORD, __int64 *, __int64 *); // [rsp+30h] [rbp-39h] BYREF
  _QWORD *v13; // [rsp+38h] [rbp-31h] BYREF
  __int64 v14; // [rsp+40h] [rbp-29h] BYREF
  __int64 v15; // [rsp+48h] [rbp-21h] BYREF
  int v16; // [rsp+50h] [rbp-19h]
  const wchar_t *v17; // [rsp+58h] [rbp-11h]
  __int64 v18; // [rsp+60h] [rbp-9h]
  __int64 *v19; // [rsp+68h] [rbp-1h]
  __int64 *v20; // [rsp+70h] [rbp+7h]
  HSTRING string[4]; // [rsp+78h] [rbp+Fh] BYREF

  v13 = a2;
  v19 = &qword_1805CC3F8;
  _InterlockedIncrement64(&qword_1805CC3F8);
  if ( `winrt::impl::call_factory<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionCatalog,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics,_lambda_722bf15f14af49770b27fb8f87b12f2a_>'::`2'::factory )
  {
    v5 = (unsigned int *)a3[1];
    v6 = (_QWORD *)*a3;
    v14 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)`winrt::impl::call_factory<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionCatalog,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics,_lambda_722bf15f14af49770b27fb8f87b12f2a_>'::`2'::factory
                                                                       + 80LL))(
           `winrt::impl::call_factory<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionCatalog,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics,_lambda_722bf15f14af49770b27fb8f87b12f2a_>'::`2'::factory,
           *v6,
           *v5,
           &v14);
    v16 = v7;
    if ( v7 < 0 )
      winrt::throw_hresult((unsigned int)v7);
    *a2 = v14;
    _InterlockedDecrement64(&qword_1805CC3F8);
    return a2;
  }
  _InterlockedDecrement64(&qword_1805CC3F8);
  v17 = L"WindowsUdk.ApplicationModel.AppExtensions.AppExtensionCatalog";
  v18 = 61LL;
  winrt::param::hstring::hstring(string);
  winrt::get_activation_factory<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>(
    &v12,
    string);
  v9 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12;
  if ( v12 )
  {
    v15 = 0LL;
    (**v12)(v12, &winrt::impl::guid_storage<winrt::impl::IAgileObject>::value, &v15);
    v10 = v15;
    v13 = (_QWORD *)v15;
    if ( v15 )
    {
      v11 = 1;
      goto LABEL_9;
    }
  }
  else
  {
    v10 = 0LL;
    v13 = 0LL;
  }
  v11 = 0;
LABEL_9:
  if ( v10 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref((__int64 *)&v13);
  if ( v11 )
  {
    v20 = &qword_1805CC3F8;
    _InterlockedIncrement64(&qword_1805CC3F8);
    v9 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12;
    if ( !_InterlockedCompareExchange64(
            &`winrt::impl::call_factory<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionCatalog,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics,_lambda_722bf15f14af49770b27fb8f87b12f2a_>'::`2'::factory,
            (signed __int64)v12,
            0LL) )
    {
      v12 = 0LL;
      WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1805CC400);
      v9 = 0LL;
    }
    winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionCatalogStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>::Open(
      &`winrt::impl::call_factory<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionCatalog,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics,_lambda_722bf15f14af49770b27fb8f87b12f2a_>'::`2'::factory,
      a2,
      *a3,
      a3[1]);
    _InterlockedDecrement64(&qword_1805CC3F8);
  }
  else
  {
    winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionCatalogStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionCatalogStatics>::Open(
      &v12,
      a2,
      *a3,
      a3[1]);
  }
  if ( v9 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref((__int64 *)&v12);
  return a2;
}
