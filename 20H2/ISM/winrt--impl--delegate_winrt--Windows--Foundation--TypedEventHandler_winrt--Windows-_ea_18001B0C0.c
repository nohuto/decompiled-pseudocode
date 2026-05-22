/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs___lambda_95b2e7e0ed422bec234fdc177c39fe17___::Invoke @ 0x18001B0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@@2@AEBI@Z @ 0x18000D4C0 (-lower_bound@-$_Hash@V-$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001B29C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??$_Insert_unverified@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@@1@@Z @ 0x18001B2C0 (--$_Insert_unverified@U-$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@wi.c)
 *     ?CreateWatcher@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x18001B464 (-CreateWatcher@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics@UIWin.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CAF8 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800BD00C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs___lambda_95b2e7e0ed422bec234fdc177c39fe17___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdi
  int v5; // eax
  int v6; // ebx
  __int64 v7; // r14
  __int64 v8; // r15
  _QWORD **v9; // rsi
  __int64 v10; // rdi
  _QWORD *v11; // r12
  _DWORD *v12; // rax
  __int64 *v14; // [rsp+20h] [rbp-68h] BYREF
  __int64 v15[3]; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v16[9]; // [rsp+40h] [rbp-48h] BYREF
  int v17; // [rsp+90h] [rbp+8h] BYREF
  __int64 v18; // [rsp+98h] [rbp+10h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v18 = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  v15[1] = (__int64)&v18;
  v20 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v15[2] = (__int64)&v20;
  winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowStatics<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>::CreateWatcher(
    &v18,
    &v19);
  v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 80LL))(v19, &v17);
  if ( v5 < 0 )
    winrt::throw_hresult((unsigned int)v5);
  v6 = v17;
  v7 = v4 + 120;
  std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>,0>>::lower_bound(
    (_QWORD *)(v4 + 120),
    &v14,
    (unsigned __int8 *)&v17);
  if ( v14 == *(__int64 **)(v4 + 128) )
  {
    LODWORD(v14) = v6;
    v8 = v19;
    v15[0] = v19;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v15);
    v9 = (_QWORD **)(v4 + 128);
    v10 = **(_QWORD **)(v4 + 128);
    if ( *(_QWORD *)(v7 + 16) == 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("list<T> too long");
    v11 = *(_QWORD **)(v10 + 8);
    v16[0] = v7 + 8;
    v16[1] = 0LL;
    v12 = operator new(0x20uLL);
    v12[4] = v6;
    v15[0] = 0LL;
    *((_QWORD *)v12 + 3) = v8;
    *(_QWORD *)v12 = v10;
    *((_QWORD *)v12 + 1) = v11;
    ++*(_QWORD *)(v7 + 16);
    *(_QWORD *)(v10 + 8) = v12;
    *v11 = v12;
    std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>,0>>::_Insert_unverified<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>>>>(
      v7,
      v16,
      **v9 + 16LL);
  }
  if ( v19 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v19);
  if ( v20 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v20);
  if ( v18 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v18);
  return 0LL;
}
