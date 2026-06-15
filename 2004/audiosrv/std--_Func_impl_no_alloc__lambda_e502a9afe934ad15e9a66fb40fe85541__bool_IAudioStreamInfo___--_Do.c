/*
 * XREFs of std::_Func_impl_no_alloc__lambda_e502a9afe934ad15e9a66fb40fe85541__bool_IAudioStreamInfo___::_Do_call @ 0x180071E10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CBCC4 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall std::_Func_impl_no_alloc__lambda_e502a9afe934ad15e9a66fb40fe85541__bool_IAudioStreamInfo___::_Do_call(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rbx
  bool v4; // di
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a2;
  v4 = 0;
  v6 = 0LL;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v6);
  if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 24LL))(v3, &v6) >= 0 )
    v4 = (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 8) + 80LL))(*(_QWORD *)(a1 + 8), v6) == 0;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v6);
  return v4;
}
