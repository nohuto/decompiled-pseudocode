/*
 * XREFs of wil::details::RunWhenCompleteAction_Microsoft::WRL::FtmBase_Windows::Foundation::IAsyncAction____lambda_d91eb2c721b7de714783f86ce10e24b4___ @ 0x18009C670
 * Callers:
 *     wil::RunWhenCompleteNoThrow_Microsoft::WRL::FtmBase__lambda_d91eb2c721b7de714783f86ce10e24b4___ @ 0x18009C744 (wil--RunWhenCompleteNoThrow_Microsoft--WRL--FtmBase__lambda_d91eb2c721b7de714783f86ce10e24b4___.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A6F0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncActionCompletedHandler::_)(Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::FtmBase___lambda_f39b2aea233dc9be0ddf7118a39ff465___1_Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::FtmBase___lambda_f39b2aea233dc9be0ddf7118a39ff465___1_Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus_ @ 0x18009C988 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IAsyn_ea_18009C988.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::RunWhenCompleteAction_Microsoft::WRL::FtmBase_Windows::Foundation::IAsyncAction____lambda_d91eb2c721b7de714783f86ce10e24b4___(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  std::_Ref_count_base *v4; // rbx
  void *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v11; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *a2;
  v4 = (std::_Ref_count_base *)a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  v10 = v2;
  v11 = v4;
  v5 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = 0LL;
  if ( v5 )
  {
    v7 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IAsyncActionCompletedHandler::___Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus__::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::FtmBase___lambda_f39b2aea233dc9be0ddf7118a39ff465___1_Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::FtmBase___lambda_f39b2aea233dc9be0ddf7118a39ff465___1_Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus_(
           v5,
           &v10);
    v4 = v11;
    v6 = v7;
  }
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  if ( v6 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v6);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    v8 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x52F,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)0x8007000ELL);
  }
  return v8;
}
