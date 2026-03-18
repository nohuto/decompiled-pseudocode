/*
 * XREFs of ??$_Deallocate@$07$0A@@std@@YAXPEAX_K@Z @ 0x1801A92FC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_c8bdd275e743d83e5e3676893aa9bea6__long_CExternalEffectGraph::CGraphRenderingContext___::_Delete_this @ 0x1800E21F0 (std--_Func_impl_no_alloc__lambda_c8bdd275e743d83e5e3676893aa9bea6__long_CExternalEffectGraph--CG.c)
 *     std::_Func_impl_no_alloc__lambda_4064d43483b5bb29fd990d0cb2f57b97__long_CExternalEffectGraph::CGraphRenderingContext___::_Delete_this @ 0x1800F8BB0 (std--_Func_impl_no_alloc__lambda_4064d43483b5bb29fd990d0cb2f57b97__long_CExternalEf_ea_1800F8BB0.c)
 *     std::_Func_impl_no_alloc__lambda_9dcfd4a181459fe08d94fb0c4400ffb8__long_CCursorVisual___::_Delete_this @ 0x1801C5A70 (std--_Func_impl_no_alloc__lambda_9dcfd4a181459fe08d94fb0c4400ffb8__long_CCursorVisual___--_Delet.c)
 *     std::_Func_impl_no_alloc__lambda_88358cf897930614284adb3422b4c545__long_CD3DDevice::D3D12Resources___::_Delete_this @ 0x18027F600 (std--_Func_impl_no_alloc__lambda_88358cf897930614284adb3422b4c545__long_CD3DDevice-_ea_18027F600.c)
 *     std::_Func_impl_no_alloc__lambda_9ef8cd32bb462703e0f92a2aca4819db__long_CExternalEffectGraph::CGraphRenderingContext___::_Delete_this @ 0x1802B31A0 (std--_Func_impl_no_alloc__lambda_9ef8cd32bb462703e0f92a2aca4819db__long_CExternalEf_ea_1802B31A0.c)
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D737C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall std::_Deallocate<8,0>(void *a1, unsigned __int64 a2)
{
  void *v2; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = a1;
  if ( a2 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v2, &v3);
    a1 = v2;
  }
  operator delete(a1);
}
