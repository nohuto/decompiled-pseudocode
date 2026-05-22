/*
 * XREFs of _lambda_ba6101031141f0d6e8e74a4c358feff2_::__lambda_ba6101031141f0d6e8e74a4c358feff2_ @ 0x18013E3F8
 * Callers:
 *     _std::function_void___cdecl(Microsoft::WRL::ComPtr_DataProviderPrincipal__&)_::function_void___cdecl(Microsoft::WRL::ComPtr_DataProviderPrincipal__&)___lambda_ba6101031141f0d6e8e74a4c358feff2__void__::_1_::dtor$0 @ 0x18013D73D (_std--function_void___cdecl(Microsoft--WRL--ComPtr_DataProviderPrincipal__-)_--function_void___c.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B2E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall lambda_ba6101031141f0d6e8e74a4c358feff2_::__lambda_ba6101031141f0d6e8e74a4c358feff2_(__int64 a1)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  v2 = *(std::_Ref_count_base **)(a1 + 48);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
}
