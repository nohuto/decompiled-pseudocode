/*
 * XREFs of ?CreateOnDedicatedThread@MPCManagerClientFactory@@UEAAJPEAPEAUIMPCManagerClient@MPCManager@Input@Internal@Windows@@@Z @ 0x180107820
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180021CF4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002828C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18003215C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$integr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D280 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::System::IDispatcherQueueHandler::_)(void)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::System::IDispatcherQueueHandler_Microsoft::WRL::FtmBase___lambda_9c50f6fc9eb9557ee1ff9937b0daaece___1_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::System::IDispatcherQueueHandler_Microsoft::WRL::FtmBase___lambda_9c50f6fc9eb9557ee1ff9937b0daaece___1_ @ 0x180046B04 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--System--IDispatcherQueueHandle.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180069C2C (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetActivationFactory@UIDispatcherQueueControllerStatics@System@Windows@@@wil@@YA?AV?$com_ptr_t@UIDispatcherQueueControllerStatics@System@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180106084 (--$GetActivationFactory@UIDispatcherQueueControllerStatics@System@Windows@@@wil@@YA-AV-$com_ptr_.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18010C57C (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall MPCManagerClientFactory::CreateOnDedicatedThread(
        MPCManagerClientFactory *this,
        struct Windows::Internal::Input::MPCManager::IMPCManagerClient **a2,
        unsigned int a3)
{
  __int64 v4; // rax
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 (__fastcall *v7)(__int64, __int64 *); // rdi
  int v8; // eax
  void *v9; // rdx
  wil::details *Event; // rbx
  __int64 v11; // r8
  const char *v12; // r9
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, __int64, char *); // rsi
  __int64 v15; // rbx
  void *v16; // rax
  void *v17; // rdx
  unsigned int v18; // r8d
  const char *v19; // r9
  wil::details::in1diag3 *v20; // rcx
  int v21; // eax
  wil::details::in1diag3 *v22; // rcx
  const char *v23; // r9
  wil::details::in1diag3 *v24; // rcx
  DWORD v25; // eax
  void *v26; // rdx
  const char *v27; // r9
  struct Windows::Internal::Input::MPCManager::IMPCManagerClient *v28; // rax
  __int64 v30; // [rsp+20h] [rbp-30h] BYREF
  HANDLE hHandle; // [rsp+28h] [rbp-28h] BYREF
  struct Windows::Internal::Input::MPCManager::IMPCManagerClient *v32; // [rsp+30h] [rbp-20h] BYREF
  __int128 v33; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  char v35; // [rsp+80h] [rbp+30h] BYREF
  __int64 v36; // [rsp+88h] [rbp+38h] BYREF

  LODWORD(v36) = 0;
  v30 = 0LL;
  wil::GetActivationFactory<Windows::System::IDispatcherQueueControllerStatics>((const WCHAR *)&v33, (__int64)a2, a3);
  v36 = 0LL;
  v4 = *(_QWORD *)v33;
  v36 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(v4 + 48))(v33, &v36);
  v6 = retaddr;
  if ( v5 < 0 )
  {
LABEL_19:
    wil::details::in1diag3::FailFast_Hr(
      v6,
      422LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v36 + 48LL);
  v30 = 0LL;
  v8 = v7(v36, &v30);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      423LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_21;
  }
  if ( v36 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  if ( (_QWORD)v33 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v33 + 16LL))(v33);
  v32 = 0LL;
  hHandle = 0LL;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( !Event )
    goto LABEL_22;
  GetLastError();
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    (wil::details **)&hHandle,
    Event);
  v13 = v30;
  v14 = *(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v30 + 56LL);
  *(_QWORD *)&v33 = &v32;
  *((_QWORD *)&v33 + 1) = &hHandle;
  v15 = 0LL;
  v16 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v16 )
    v15 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::System::IDispatcherQueueHandler::___void__::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::System::IDispatcherQueueHandler_Microsoft::WRL::FtmBase___lambda_9c50f6fc9eb9557ee1ff9937b0daaece___1_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::System::IDispatcherQueueHandler_Microsoft::WRL::FtmBase___lambda_9c50f6fc9eb9557ee1ff9937b0daaece___1_(
            (__int64)v16,
            &v33);
  *(_QWORD *)&v33 = v15;
  LODWORD(v36) = 1;
  v20 = retaddr;
  if ( !v15 )
  {
LABEL_21:
    wil::details::in1diag3::_Throw_NullAlloc(v20, v17, v18, v19);
LABEL_22:
    wil::details::in1diag3::Throw_GetLastError(retaddr, v9, v11, v12);
    goto LABEL_23;
  }
  v21 = v14(v13, v15, &v35);
  v22 = retaddr;
  if ( v21 < 0 )
  {
LABEL_23:
    wil::details::in1diag3::FailFast_Hr(
      v22,
      437LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      (const char *)(unsigned int)v21);
LABEL_24:
    wil::details::in1diag3::_FailFast_Unexpected(
      v24,
      438LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcmanagerclient.cpp",
      v23);
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v24 = retaddr;
  if ( !v35 )
    goto LABEL_24;
  v25 = WaitForSingleObjectEx(hHandle, 0xFFFFFFFF, 0);
  if ( v25 != 258 && v25 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      2569LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      v27);
    goto LABEL_19;
  }
  v28 = v32;
  v32 = 0LL;
  *a2 = v28;
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
    (wil::details **)&hHandle,
    v26);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v32);
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  return 0LL;
}
