/*
 * XREFs of ?_Destroy@?$vector@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@V?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@2@@std@@AEAAXPEAV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@2@0@Z @ 0x18014515C
 * Callers:
 *     _std::vector_std::function_void___cdecl(Microsoft::WRL::ComPtr_DataProviderPrincipal__&)__std::allocator_std::function_void___cdecl(Microsoft::WRL::ComPtr_DataProviderPrincipal__&)_____::_Emplace_reallocate_std::function_void___cdecl(Microsoft::WRL::ComPtr_DataProviderPrincipal__&)__const_&__::_1_::catch$40 @ 0x180141495 (_std--vector_std--function_void___cdecl(Microsoft--WRL--ComPtr_DataProviderPrincipa_ea_180141495.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036A54 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 */

__int64 __fastcall std::vector<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>>::_Destroy(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rbx
  __int64 result; // rax

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      result = std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(v4, a2);
      v4 += 64LL;
    }
    while ( v4 != a3 );
  }
  return result;
}
