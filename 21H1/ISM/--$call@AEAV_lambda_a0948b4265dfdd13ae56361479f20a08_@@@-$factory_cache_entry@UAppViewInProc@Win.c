/*
 * XREFs of ??$call@AEAV_lambda_a0948b4265dfdd13ae56361479f20a08_@@@?$factory_cache_entry@UAppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIAppViewStatics@23456@@impl@winrt@@QEAA?AUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@2@AEAV_lambda_a0948b4265dfdd13ae56361479f20a08_@@@Z @ 0x180033740
 * Callers:
 *     ??0ViewHierarchyWithWindowManager@@QEAA@XZ @ 0x180026298 (--0ViewHierarchyWithWindowManager@@QEAA@XZ.c)
 *     ?OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@67@@Z @ 0x1800BE4CC (-OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@App.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001B26C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180033A78 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?CreateWatcher@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x180033AAC (-CreateWatcher@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics@UIAp.c)
 *     ??$get_activation_factory@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@YA?AUIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x180033AF4 (--$get_activation_factory@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@wi.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x18003DBDD (WINRT_InterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>::call<_lambda_a0948b4265dfdd13ae56361479f20a08_ &>(
        __int64 a1,
        __int64 a2)
{
  void (__fastcall ***v3)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 v4; // rax
  char v5; // si
  void (__fastcall ***v7)(_QWORD, __int64 *, _QWORD *); // [rsp+20h] [rbp-60h] BYREF
  __int64 v8; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v9[5]; // [rsp+30h] [rbp-50h] BYREF
  HSTRING string[4]; // [rsp+58h] [rbp-28h] BYREF

  v8 = a2;
  v9[3] = &qword_180209B18;
  _InterlockedIncrement64(&qword_180209B18);
  if ( `winrt::impl::call_factory<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics,_lambda_a0948b4265dfdd13ae56361479f20a08_>'::`2'::factory )
  {
    winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>::CreateWatcher(&`winrt::impl::call_factory<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics,_lambda_a0948b4265dfdd13ae56361479f20a08_>'::`2'::factory);
    _InterlockedDecrement64(&qword_180209B18);
    return a2;
  }
  _InterlockedDecrement64(&qword_180209B18);
  v9[1] = L"Windows.Internal.ApplicationModel.WindowManagement.AppViewInProc";
  v9[2] = 64LL;
  winrt::param::hstring::hstring(string);
  winrt::get_activation_factory<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>(
    &v7,
    string);
  v3 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v7;
  if ( v7 )
  {
    v9[0] = 0LL;
    (**v7)(v7, &winrt::impl::guid_storage<winrt::impl::IAgileObject>::value, v9);
    v4 = v9[0];
    v8 = v9[0];
    if ( v9[0] )
    {
      v5 = 1;
      goto LABEL_5;
    }
  }
  else
  {
    v4 = 0LL;
    v8 = 0LL;
  }
  v5 = 0;
LABEL_5:
  if ( v4 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v8);
  if ( v5 )
  {
    v9[4] = &qword_180209B18;
    _InterlockedIncrement64(&qword_180209B18);
    v3 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v7;
    if ( !_InterlockedCompareExchange64(
            &`winrt::impl::call_factory<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics,_lambda_a0948b4265dfdd13ae56361479f20a08_>'::`2'::factory,
            (signed __int64)v7,
            0LL) )
    {
      v7 = 0LL;
      WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &ListEntry);
      v3 = 0LL;
    }
    winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>::CreateWatcher(&`winrt::impl::call_factory<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics,_lambda_a0948b4265dfdd13ae56361479f20a08_>'::`2'::factory);
    _InterlockedDecrement64(&qword_180209B18);
  }
  else
  {
    winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>::CreateWatcher(&v7);
  }
  if ( v3 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v7);
  return a2;
}
