/*
 * XREFs of _lambda_a024861b188cf4ada81763f84c86531a_::operator() @ 0x1802F69F8
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_e52983e0dc7e1746f799001ed96c8eb0___::Invoke @ 0x1802F9A10 (CAsyncCallbackWithLambda__lambda_e52983e0dc7e1746f799001ed96c8eb0___--Invoke.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIAllUpViewHost@@@?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAllUpViewHost@@Uerr_exception_policy@wil@@@1@XZ @ 0x18009EF74 (--$query@UIAllUpViewHost@@@-$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ??$query@UIAllUpViewHostInternal@@@?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAllUpViewHostInternal@@Uerr_exception_policy@wil@@@1@XZ @ 0x18009EFC4 (--$query@UIAllUpViewHostInternal@@@-$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802CAA3C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_a024861b188cf4ada81763f84c86531a_::operator()(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rsi
  __int64 v3; // rbx
  unsigned __int8 (__fastcall *v4)(__int64, HWND); // rdi
  HWND ForegroundWindow; // rax
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  _QWORD *v11; // [rsp+50h] [rbp+18h]

  v1 = Platform::Details::ResolveWeakReference(&_uuidof__AVXamlAllUpViewController__, a1);
  v9 = v1;
  v2 = (_QWORD *)__abi_winrt_ptr_ctor(v1);
  v11 = v2;
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  if ( v2 )
  {
    wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::query<IAllUpViewHostInternal>(
      v2 + 7,
      (__int64)&v10);
    v3 = v10;
    v4 = *(unsigned __int8 (__fastcall **)(__int64, HWND))(*(_QWORD *)v10 + 24LL);
    ForegroundWindow = GetForegroundWindow();
    if ( !v4(v3, ForegroundWindow) )
    {
      wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::query<IAllUpViewHost>(v2 + 7, (__int64)&v9);
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 64LL))(v9);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x182,
          (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
          (const char *)(unsigned int)v6);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v9);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v10);
  }
  if ( v2 )
    (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
  return 0LL;
}
