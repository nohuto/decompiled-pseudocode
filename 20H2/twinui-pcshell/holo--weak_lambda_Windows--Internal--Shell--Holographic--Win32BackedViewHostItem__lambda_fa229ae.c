/*
 * XREFs of holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_fa229aea017a19cbc9cb3db68405d883___ @ 0x1800AB4D4
 * Callers:
 *     _lambda_fa229aea017a19cbc9cb3db68405d883_::operator()_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_ @ 0x1800AAB30 (_lambda_fa229aea017a19cbc9cb3db68405d883_--operator()_Windows--Internal--Shell--Holographic--Win.c)
 *     ?PortToHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z @ 0x1802501A0 (-PortToHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18008D5BC (--2@YAPEAX_K@Z.c)
 *     std::_Ref_count_obj__holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_fa229aea017a19cbc9cb3db68405d883____::_2_::captured_state_::_Ref_count_obj__holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_fa229aea017a19cbc9cb3db68405d883____::_2_::captured_state___holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_fa229aea017a19cbc9cb3db68405d883____::_2_::captured_state_ @ 0x1800AA918 (std--_Ref_count_obj__holo--weak_lambda_Windows--Internal--Shell--Holographic--Win32BackedViewHos.c)
 *     _holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_fa229aea017a19cbc9cb3db68405d883____::_2_::captured_state::_captured_state @ 0x1800AB99C (_holo--weak_lambda_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem___ea_1800AB99C.c)
 *     ??$com_weak_query_failfast@AEAPEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@AEAPEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x18024AD18 (--$com_weak_query_failfast@AEAPEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@w.c)
 *     ??0?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x18024B284 (--0-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_Tl.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_fa229aea017a19cbc9cb3db68405d883___(
        _QWORD *a1,
        void *a2,
        __int64 a3)
{
  __int64 v6; // rdi
  void *v8; // [rsp+20h] [rbp-188h] BYREF
  __int64 v9[2]; // [rsp+30h] [rbp-178h] BYREF
  void **v10; // [rsp+40h] [rbp-168h] BYREF

  v8 = a2;
  wil::com_weak_query_failfast<Windows::Internal::Shell::Holographic::Win32BackedViewHostItem * &>(v9, &v8);
  v9[1] = (__int64)a2;
  wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    &v10,
    a3);
  v10 = &Win32BackedViewHostItemTelemetry::PortToHolographic::`vftable';
  v8 = operator new(0x158uLL);
  v6 = std::_Ref_count_obj__holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_fa229aea017a19cbc9cb3db68405d883____::_2_::captured_state_::_Ref_count_obj__holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_fa229aea017a19cbc9cb3db68405d883____::_2_::captured_state___holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_fa229aea017a19cbc9cb3db68405d883____::_2_::captured_state_(
         (__int64)v8,
         v9);
  holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_fa229aea017a19cbc9cb3db68405d883____::_2_::captured_state::_captured_state(v9);
  *a1 = v6 + 16;
  a1[1] = v6;
  return a1;
}
