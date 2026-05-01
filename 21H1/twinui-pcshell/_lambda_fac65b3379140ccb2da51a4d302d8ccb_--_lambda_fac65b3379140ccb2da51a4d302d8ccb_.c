/*
 * XREFs of _lambda_fac65b3379140ccb2da51a4d302d8ccb_::_lambda_fac65b3379140ccb2da51a4d302d8ccb_ @ 0x1802EDA94
 * Callers:
 *     Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_fac65b3379140ccb2da51a4d302d8ccb_____lambda_fac65b3379140ccb2da51a4d302d8ccb___ @ 0x1802ED4EC (Microsoft--WRL--Details--Make_XamlExplorerHostWindowCreatedCallback__lambda_fac65b3379140ccb2da5.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802CAA3C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1802D8AB0 (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPr_ea_1802D8AB0.c)
 */

__int64 __fastcall lambda_fac65b3379140ccb2da51a4d302d8ccb_::_lambda_fac65b3379140ccb2da51a4d302d8ccb_(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx

  *(_QWORD *)a1 = *(_QWORD *)a2;
  v4 = (_QWORD *)(a1 + 8);
  v5 = (_QWORD *)(a2 + 8);
  *v4 = 0LL;
  if ( v4 != (_QWORD *)(a2 + 8) )
  {
    *v4 = *v5;
    *v5 = 0LL;
  }
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 32) = __abi_winrt_ptr_ctor(*(_QWORD *)(a2 + 32));
  *(_QWORD *)(a1 + 40) = __abi_winrt_ptr_ctor(*(_QWORD *)(a2 + 40));
  *(_QWORD *)(a1 + 48) = __abi_winrt_ptr_ctor(*(_QWORD *)(a2 + 48));
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)(a1 + 64),
    a2 + 64,
    *(_DWORD *)(a2 + 96) != 0);
  *(_QWORD *)(a1 + 64) = &XamlSwitcherTelemetry::WindowCreatedCallback::`vftable';
  return a1;
}
