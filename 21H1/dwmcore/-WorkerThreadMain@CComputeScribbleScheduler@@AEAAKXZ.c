/*
 * XREFs of ?WorkerThreadMain@CComputeScribbleScheduler@@AEAAKXZ @ 0x1801A94A8
 * Callers:
 *     _lambda_89e933d5fb66f69ea87b181cfe24c3bb_::_lambda_invoker_cdecl_ @ 0x1801A7B40 (_lambda_89e933d5fb66f69ea87b181cfe24c3bb_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E04C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180168BDC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??I?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIUnknown@@XZ @ 0x180188844 (--I-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIUnknown@@XZ.c)
 */

__int64 __fastcall CComputeScribbleScheduler::WorkerThreadMain(CComputeScribbleScheduler *this)
{
  __int64 *v1; // rsi
  int v3; // eax
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64, __int64 *); // rbx
  __int64 *v6; // rax
  int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (__int64 *)((char *)this + 152);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 19);
  v3 = CoreUICreate(v1);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1B1,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblescheduler.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v4 = *((_QWORD *)this + 18);
  v5 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v4 + 24LL);
  v6 = wil::com_ptr_t<IUnknown,wil::err_returncode_policy>::operator&((__int64 *)this + 20);
  v7 = v5(v4, *v1, v6);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1B5,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblescheduler.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 (__fastcall *)(CComputeScribbleScheduler *), CComputeScribbleScheduler *))(*(_QWORD *)*v1 + 256LL))(
         *v1,
         *((_QWORD *)this + 7),
         lambda_53d4671a486059e215298fd0bc9bb545_::_lambda_invoker_cdecl_,
         this);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1BF,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblescheduler.cpp",
      (const char *)(unsigned int)v8);
    JUMPOUT(0x1801A95BALL);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)*v1 + 216LL))(*v1);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
  return 0LL;
}
