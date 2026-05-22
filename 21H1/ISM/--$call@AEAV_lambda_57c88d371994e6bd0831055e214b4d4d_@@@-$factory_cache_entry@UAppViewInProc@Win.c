/*
 * XREFs of ??$call@AEAV_lambda_57c88d371994e6bd0831055e214b4d4d_@@@?$factory_cache_entry@UAppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIAppViewStatics@23456@@impl@winrt@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@2@AEAV_lambda_57c88d371994e6bd0831055e214b4d4d_@@@Z @ 0x1800BCC34
 * Callers:
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x1800BD330 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?GetActiveView@ViewHierarchyWithWindowManager@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@XZ @ 0x1800BDA84 (-GetActiveView@ViewHierarchyWithWindowManager@@QEAA-AUAppView@WindowManagement@ApplicationModel@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001B26C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180033A78 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??$get_activation_factory@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@YA?AUIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x180033AF4 (--$get_activation_factory@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@wi.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x18003DBDD (WINRT_InterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?GetFromWindowId@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@3@AEBUWindowId@56783@@Z @ 0x1800BD10C (-GetFromWindowId@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics@UI.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>::call<_lambda_57c88d371994e6bd0831055e214b4d4d_ &>(
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
  v12[2] = &qword_180209688;
  _InterlockedIncrement64(&qword_180209688);
  if ( `winrt::impl::call_factory<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics,_lambda_57c88d371994e6bd0831055e214b4d4d_>'::`2'::factory )
  {
    winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>::GetFromWindowId(
      &`winrt::impl::call_factory<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics,_lambda_57c88d371994e6bd0831055e214b4d4d_>'::`2'::factory,
      a2,
      *a3);
    _InterlockedDecrement64(&qword_180209688);
    return a2;
  }
  _InterlockedDecrement64(&qword_180209688);
  v12[0] = L"Windows.Internal.ApplicationModel.WindowManagement.AppViewInProc";
  v12[1] = 64LL;
  winrt::param::hstring::hstring(string, (__int64)v12);
  winrt::get_activation_factory<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>(
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
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v10);
  if ( v7 )
  {
    v12[3] = &qword_180209688;
    _InterlockedIncrement64(&qword_180209688);
    v5 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v9;
    if ( !_InterlockedCompareExchange64(
            &`winrt::impl::call_factory<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics,_lambda_57c88d371994e6bd0831055e214b4d4d_>'::`2'::factory,
            (signed __int64)v9,
            0LL) )
    {
      v9 = 0LL;
      WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180209690);
      v5 = 0LL;
    }
    winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>::GetFromWindowId(
      &`winrt::impl::call_factory<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics,_lambda_57c88d371994e6bd0831055e214b4d4d_>'::`2'::factory,
      a2,
      *a3);
    _InterlockedDecrement64(&qword_180209688);
  }
  else
  {
    winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewStatics<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>::GetFromWindowId(
      &v9,
      a2,
      *a3);
  }
  if ( v5 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v9);
  return a2;
}
