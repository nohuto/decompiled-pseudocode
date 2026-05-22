/*
 * XREFs of ?GetActiveView@ViewHierarchyWithWindowManager@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@XZ @ 0x1800BDA84
 * Callers:
 *     ?GetActiveViewInstanceId@ViewHierarchyWithWindowManager@@QEAAIXZ @ 0x1800BDBFC (-GetActiveViewInstanceId@ViewHierarchyWithWindowManager@@QEAAIXZ.c)
 * Callees:
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUWindowId@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x180003BEC (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManageme.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001B26C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??$call@AEAV_lambda_57c88d371994e6bd0831055e214b4d4d_@@@?$factory_cache_entry@UAppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIAppViewStatics@23456@@impl@winrt@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@2@AEAV_lambda_57c88d371994e6bd0831055e214b4d4d_@@@Z @ 0x1800BCC34 (--$call@AEAV_lambda_57c88d371994e6bd0831055e214b4d4d_@@@-$factory_cache_entry@UAppViewInProc@Win.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800BD56C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall ViewHierarchyWithWindowManager::GetActiveView(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // r14
  _QWORD *i; // rbx
  void (__fastcall ***v5)(_QWORD, void *, __int64 *); // rsi
  __int64 v6; // rcx
  signed int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v12; // [rsp+28h] [rbp-8h] BYREF
  char v13; // [rsp+60h] [rbp+30h] BYREF
  __int64 *v14; // [rsp+68h] [rbp+38h]
  __int64 v15; // [rsp+70h] [rbp+40h] BYREF
  void (__fastcall ***v16)(_QWORD, void *, __int64 *); // [rsp+78h] [rbp+48h] BYREF

  v14 = a2;
  *a2 = 0LL;
  v3 = *(_QWORD **)(a1 + 128);
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
  {
    v16 = (void (__fastcall ***)(_QWORD, void *, __int64 *))i[3];
    v5 = v16;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v16);
    if ( v5 )
    {
      v15 = 0LL;
      (**v5)(
        v5,
        &winrt::impl::guid_storage<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow_Input>::value,
        &v15);
      v6 = v15;
    }
    else
    {
      v6 = 0LL;
    }
    v12 = v6;
    v7 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 48LL))(v6, &v13);
    if ( v7 < 0 )
      winrt::throw_hresult(v7);
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v12);
    if ( v13 )
    {
      v12 = winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow>::Id(
              &v16,
              (__int64)&v13);
      winrt::impl::factory_cache_entry<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics>::call<_lambda_57c88d371994e6bd0831055e214b4d4d_ &>(
        v8,
        (__int64)&v15,
        &v12);
      if ( a2 == &v15 )
      {
        v10 = v15;
      }
      else
      {
        if ( *a2 )
          winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(a2);
        v9 = v15;
        v10 = 0LL;
        v15 = 0LL;
        *a2 = v9;
      }
      if ( v10 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v15);
      if ( v5 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v16);
      return a2;
    }
    if ( v5 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v16);
  }
  return a2;
}
