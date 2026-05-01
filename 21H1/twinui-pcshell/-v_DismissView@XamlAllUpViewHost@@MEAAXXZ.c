/*
 * XREFs of ?v_DismissView@XamlAllUpViewHost@@MEAAXXZ @ 0x1802ECE10
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x1802C9FAC (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@0@@Z @ 0x1802D77BC (--$_Destroy_range@V-$allocator@V-$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$Com.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_MonitorFrame_________lambda_65120bed13e5c980f35354f2f8547630___ @ 0x1802D8448 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1802D8448.c)
 */

void __fastcall XamlAllUpViewHost::v_DismissView(XamlAllUpViewHost *this)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  __abi_winrt_ptr_assign((__int64 *)this + 25, 0LL);
  std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_MonitorFrame_________lambda_65120bed13e5c980f35354f2f8547630___(
    (__int64)&v2,
    *((MonitorFrame ***)this + 41),
    *((MonitorFrame ***)this + 42));
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<MonitorFrame>>>(
    *((__int64 **)this + 41),
    *((__int64 **)this + 42));
  *((_QWORD *)this + 42) = *((_QWORD *)this + 41);
}
