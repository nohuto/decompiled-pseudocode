/*
 * XREFs of wil::details::RunWhenCompleteAction_Microsoft::WRL::FtmBase_Windows::Foundation::IAsyncAction____lambda_a2e8b52356540255c945e7b53f94ed94__&_ @ 0x1800AB2C0
 * Callers:
 *     wil::RunWhenCompleteNoThrow_Microsoft::WRL::FtmBase__lambda_a2e8b52356540255c945e7b53f94ed94__&_ @ 0x1800AB458 (wil--RunWhenCompleteNoThrow_Microsoft--WRL--FtmBase__lambda_a2e8b52356540255c945e7b53f94ed94__-_.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004D370 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncActionCompletedHandler::_)(Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::FtmBase___lambda_1128af2452d8a6a7c7b4181d3e17205c___1_Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::FtmBase___lambda_1128af2452d8a6a7c7b4181d3e17205c___1_Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus_ @ 0x1800AB6E8 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IAsyncActionComple.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::RunWhenCompleteAction_Microsoft::WRL::FtmBase_Windows::Foundation::IAsyncAction____lambda_a2e8b52356540255c945e7b53f94ed94____(
        __int64 a1,
        _QWORD *a2)
{
  volatile signed __int32 *v2; // rbx
  void *v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  unsigned int v7; // ebx
  int v9[2]; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v10; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (volatile signed __int32 *)a2[1];
  if ( v2 )
  {
    _InterlockedIncrement(v2 + 2);
    v2 = (volatile signed __int32 *)a2[1];
  }
  *(_QWORD *)v9 = *a2;
  v10 = v2;
  v4 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = 0LL;
  if ( v4 )
  {
    v6 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IAsyncActionCompletedHandler::___Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus__::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::FtmBase___lambda_1128af2452d8a6a7c7b4181d3e17205c___1_Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::FtmBase___lambda_1128af2452d8a6a7c7b4181d3e17205c___1_Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus_(
           v4,
           v9);
    v2 = v10;
    v5 = v6;
  }
  if ( v2 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v2);
  if ( v5 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v5);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    v7 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x52F,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)0x8007000ELL);
  }
  return v7;
}
