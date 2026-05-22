/*
 * XREFs of ??1?$_Uninitialized_backout_al@PEAV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@V?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@2@@std@@QEAA@XZ @ 0x180141554
 * Callers:
 *     _std::vector_std::function_void___cdecl(Microsoft::WRL::ComPtr_DataProviderPrincipal__&)__std::allocator_std::function_void___cdecl(Microsoft::WRL::ComPtr_DataProviderPrincipal__&)_____::_Emplace_reallocate_std::function_void___cdecl(Microsoft::WRL::ComPtr_DataProviderPrincipal__&)__const_&__::_1_::dtor$24 @ 0x180141459 (_std--vector_std--function_void___cdecl(Microsoft--WRL--ComPtr_DataProviderPrincipal__-)__std--a.c)
 *     _std::vector_std::function_void___cdecl(Microsoft::WRL::ComPtr_DataProviderPrincipal__&)__std::allocator_std::function_void___cdecl(Microsoft::WRL::ComPtr_DataProviderPrincipal__&)_____::_Emplace_reallocate_std::function_void___cdecl(Microsoft::WRL::ComPtr_DataProviderPrincipal__&)__const_&__::_1_::dtor$29 @ 0x180141465 (_std--vector_std--function_void___cdecl(Microsoft--WRL--ComPtr_DataProviderPrincipa_ea_180141465.c)
 *     _std::vector_std::function_void___cdecl(Microsoft::WRL::ComPtr_DataProviderPrincipal__&)__std::allocator_std::function_void___cdecl(Microsoft::WRL::ComPtr_DataProviderPrincipal__&)_____::_Emplace_reallocate_std::function_void___cdecl(Microsoft::WRL::ComPtr_DataProviderPrincipal__&)__const_&__::_1_::dtor$35 @ 0x18014147D (_std--vector_std--function_void___cdecl(Microsoft--WRL--ComPtr_DataProviderPrincipa_ea_18014147D.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036A54 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 */

__int64 __fastcall std::_Uninitialized_backout_al<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)> *,std::allocator<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>>>::~_Uninitialized_backout_al<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)> *,std::allocator<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>>>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rdi
  __int64 i; // rbx
  __int64 result; // rax

  v2 = a1[1];
  for ( i = *a1; i != v2; i += 64LL )
    result = std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(i, a2);
  return result;
}
