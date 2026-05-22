/*
 * XREFs of ??$call@AEAV_lambda_3c84e564eb869bfeecbf9f03c102acb2_@@@?$factory_cache_entry@UWindowInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIWindowStatics@23456@@impl@winrt@@QEAA?AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@2@AEAV_lambda_3c84e564eb869bfeecbf9f03c102acb2_@@@Z @ 0x180033860
 * Callers:
 *     ??0ViewHierarchyWithWindowManager@@QEAA@XZ @ 0x180026298 (--0ViewHierarchyWithWindowManager@@QEAA@XZ.c)
 *     ?OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@67@@Z @ 0x1800BE4CC (-OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@App.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001B26C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?CreateWatcher@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x18001B434 (-CreateWatcher@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics@UIWin.c)
 *     ??$get_activation_factory@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@YA?AUIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x180033A18 (--$get_activation_factory@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@win.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180033A78 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x18003DBDD (WINRT_InterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>::call<_lambda_3c84e564eb869bfeecbf9f03c102acb2_ &>(
        __int64 a1,
        _QWORD *a2)
{
  void (__fastcall ***v3)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 v4; // rax
  char v5; // si
  void (__fastcall ***v7)(_QWORD, __int64 *, _QWORD *); // [rsp+20h] [rbp-60h] BYREF
  _QWORD *v8; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v9[5]; // [rsp+30h] [rbp-50h] BYREF
  HSTRING string[4]; // [rsp+58h] [rbp-28h] BYREF

  v8 = a2;
  v9[3] = &qword_180209B38;
  _InterlockedIncrement64(&qword_180209B38);
  if ( `winrt::impl::call_factory<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics,_lambda_3c84e564eb869bfeecbf9f03c102acb2_>'::`2'::factory )
  {
    winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>::CreateWatcher(
      &`winrt::impl::call_factory<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics,_lambda_3c84e564eb869bfeecbf9f03c102acb2_>'::`2'::factory,
      a2);
    _InterlockedDecrement64(&qword_180209B38);
    return a2;
  }
  _InterlockedDecrement64(&qword_180209B38);
  v9[1] = L"Windows.Internal.ApplicationModel.WindowManagement.WindowInProc";
  v9[2] = 63LL;
  winrt::param::hstring::hstring(string);
  winrt::get_activation_factory<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>(
    &v7,
    string);
  v3 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v7;
  if ( v7 )
  {
    v9[0] = 0LL;
    (**v7)(v7, &winrt::impl::guid_storage<winrt::impl::IAgileObject>::value, v9);
    v4 = v9[0];
    v8 = (_QWORD *)v9[0];
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
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v8);
  if ( v5 )
  {
    v9[4] = &qword_180209B38;
    _InterlockedIncrement64(&qword_180209B38);
    v3 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v7;
    if ( !_InterlockedCompareExchange64(
            &`winrt::impl::call_factory<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics,_lambda_3c84e564eb869bfeecbf9f03c102acb2_>'::`2'::factory,
            (signed __int64)v7,
            0LL) )
    {
      v7 = 0LL;
      WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180209B40);
      v3 = 0LL;
    }
    winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>::CreateWatcher(
      &`winrt::impl::call_factory<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics,_lambda_3c84e564eb869bfeecbf9f03c102acb2_>'::`2'::factory,
      a2);
    _InterlockedDecrement64(&qword_180209B38);
  }
  else
  {
    winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>::CreateWatcher(
      (__int64 *)&v7,
      a2);
  }
  if ( v3 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v7);
  return a2;
}
