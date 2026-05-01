/*
 * XREFs of holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_892ad901658013e5b1bc138888dac51b___ @ 0x18009C7A0
 * Callers:
 *     _lambda_892ad901658013e5b1bc138888dac51b_::operator()_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_ @ 0x18009C174 (_lambda_892ad901658013e5b1bc138888dac51b_--operator()_Windows--Internal--Shell--Holographic--Win.c)
 *     ?PortToHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z @ 0x18022E860 (-PortToHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18008D1AC (--2@YAPEAX_K@Z.c)
 *     std::_Ref_count_obj__holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_892ad901658013e5b1bc138888dac51b____::_2_::captured_state_::_Ref_count_obj__holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_892ad901658013e5b1bc138888dac51b____::_2_::captured_state___holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_892ad901658013e5b1bc138888dac51b____::_2_::captured_state_ @ 0x18009BFF8 (std--_Ref_count_obj__holo--weak_lambda_Windows--Internal--Shell--Holographic--Win32BackedViewHos.c)
 *     _holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_892ad901658013e5b1bc138888dac51b____::_2_::captured_state::_captured_state @ 0x18009CA20 (_holo--weak_lambda_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem___ea_18009CA20.c)
 *     ??$com_weak_query_failfast@AEAPEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@AEAPEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x180228B0C (--$com_weak_query_failfast@AEAPEAVWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@w.c)
 *     ??0?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1802290E8 (--0-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_Tl.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_892ad901658013e5b1bc138888dac51b___(
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
  v6 = std::_Ref_count_obj__holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_892ad901658013e5b1bc138888dac51b____::_2_::captured_state_::_Ref_count_obj__holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_892ad901658013e5b1bc138888dac51b____::_2_::captured_state___holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_892ad901658013e5b1bc138888dac51b____::_2_::captured_state_(
         (__int64)v8,
         v9);
  holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_892ad901658013e5b1bc138888dac51b____::_2_::captured_state::_captured_state(v9);
  *a1 = v6 + 16;
  a1[1] = v6;
  return a1;
}
