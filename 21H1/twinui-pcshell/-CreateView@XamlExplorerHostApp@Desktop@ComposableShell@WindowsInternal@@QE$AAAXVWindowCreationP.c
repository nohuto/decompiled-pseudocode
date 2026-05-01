/*
 * XREFs of ?CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationParameters@Xaml@UI@Windows@@PE$AAVXamlExplorerHostLaunchHandler@234@@Z @ 0x1802CEFEC
 * Callers:
 *     ?CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KPEAUIPrivilegedPresentationOperations@@PEAUIXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z @ 0x1802CBBD4 (-CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedC.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18008D1AC (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180177DE8 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802CAA3C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::_lambda_d1cc878f49256a12ed651bb70f914db7_ @ 0x1802CDF08 (_lambda_d1cc878f49256a12ed651bb70f914db7_--_lambda_d1cc878f49256a12ed651bb70f914db7_.c)
 *     ??0?$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Details@Platform@@QE$AAA@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x1802CE04C (--0-$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Det.c)
 *     wil::details::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___ @ 0x1802CE120 (wil--details--ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___--ScopeExitFn__lambda_d1cc8.c)
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::__lambda_d1cc878f49256a12ed651bb70f914db7_ @ 0x1802CE4E0 (_lambda_d1cc878f49256a12ed651bb70f914db7_--__lambda_d1cc878f49256a12ed651bb70f914db7_.c)
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::operator() @ 0x1802CEB80 (_lambda_d1cc878f49256a12ed651bb70f914db7_--operator().c)
 *     ?_Push_back_internal@?$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@V?$allocator@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@AEAAXAEBQE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x1802D02E8 (-_Push_back_internal@-$deque@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@Windows.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView(
        __int64 a1,
        __int128 *a2,
        __int64 a3)
{
  int v5; // eax
  int v6; // eax
  __int64 v7; // r14
  __int64 v8; // rsi
  Platform::Details *v9; // rdi
  Platform::Details *v10; // rax
  __int64 WeakReference; // rbx
  _DWORD *v12; // rdi
  const char *v13; // r9
  __int64 result; // rax
  __int64 v15; // [rsp+28h] [rbp-71h] BYREF
  __int64 v16[3]; // [rsp+30h] [rbp-69h] BYREF
  char v17; // [rsp+48h] [rbp-51h]
  __int64 v18[5]; // [rsp+50h] [rbp-49h] BYREF
  __int128 v19; // [rsp+78h] [rbp-21h]
  int v20; // [rsp+88h] [rbp-11h]
  _QWORD v21[3]; // [rsp+90h] [rbp-9h] BYREF
  char v22; // [rsp+A8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v15 = __abi_winrt_ptr_ctor(a3);
  v5 = _Mtx_lock((_Mtx_t)(a1 + 104));
  if ( v5 )
    std::_Throw_C_error(v5);
  std::deque<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::_Push_back_internal(
    a1 + 184,
    &v15);
  v6 = _Mtx_unlock((_Mtx_t)(a1 + 104));
  if ( v6 )
    std::_Throw_C_error(v6);
  v7 = __abi_winrt_ptr_ctor(a1);
  v18[3] = v7;
  v8 = v15;
  if ( v15 )
  {
    v10 = (Platform::Details *)Platform::Details::Heap::Allocate(0x38uLL, 0x50uLL);
    v9 = Platform::Details::CustomBox<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::CustomBox<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>(
           v10,
           v8);
  }
  else
  {
    v9 = 0LL;
  }
  WeakReference = Platform::Details::GetWeakReference(v9);
  if ( v9 )
    (*(void (__fastcall **)(Platform::Details *))(*(_QWORD *)v9 + 16LL))(v9);
  v18[0] = __abi_winrt_ptr_ctor(a1);
  v18[1] = __abi_winrt_ptr_ctor(v7);
  v18[2] = WeakReference;
  if ( WeakReference )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)WeakReference + 8LL))(WeakReference);
  lambda_d1cc878f49256a12ed651bb70f914db7_::_lambda_d1cc878f49256a12ed651bb70f914db7_(v16, v18);
  v17 = 1;
  lambda_d1cc878f49256a12ed651bb70f914db7_::__lambda_d1cc878f49256a12ed651bb70f914db7_(v18);
  v19 = *a2;
  v20 = *((_DWORD *)a2 + 4);
  wil::details::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___(
    (__int64)v21,
    (__int64)v16);
  v12 = operator new(0x38uLL);
  *(_OWORD *)v12 = v19;
  v12[4] = v20;
  wil::details::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___(
    (__int64)(v12 + 6),
    (__int64)v21);
  v18[4] = (__int64)v12;
  if ( v22 )
  {
    v22 = 0;
    lambda_d1cc878f49256a12ed651bb70f914db7_::operator()(v21);
  }
  lambda_d1cc878f49256a12ed651bb70f914db7_::__lambda_d1cc878f49256a12ed651bb70f914db7_(v21);
  if ( !SHCreateThread(
          (LPTHREAD_START_ROUTINE)lambda_05f458ff3b283a3e9a9130333ab0a931_::_lambda_invoker_cdecl_,
          v12,
          0,
          0LL) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x55,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostapp.cpp",
      v13);
  if ( v17 )
  {
    v17 = 0;
    lambda_d1cc878f49256a12ed651bb70f914db7_::operator()(v16);
  }
  result = lambda_d1cc878f49256a12ed651bb70f914db7_::__lambda_d1cc878f49256a12ed651bb70f914db7_(v16);
  if ( WeakReference )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)WeakReference + 16LL))(WeakReference);
  if ( v7 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v8 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return result;
}
