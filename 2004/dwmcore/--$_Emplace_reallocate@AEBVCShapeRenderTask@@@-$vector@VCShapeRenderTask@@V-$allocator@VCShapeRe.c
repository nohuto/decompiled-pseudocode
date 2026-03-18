/*
 * XREFs of ??$_Emplace_reallocate@AEBVCShapeRenderTask@@@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@QEAAPEAVCShapeRenderTask@@QEAV2@AEBV2@@Z @ 0x18025F1A0
 * Callers:
 *     ?PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z @ 0x18025F958 (-PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18004B6F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@AEAAXQEAVCShapeRenderTask@@_K1@Z @ 0x1801A8080 (-_Change_array@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@std@@AEAAXQEAV.c)
 *     ??$_Uninitialized_move@PEAVCShapeRenderTask@@PEAV1@V?$allocator@VCShapeRenderTask@@@std@@@std@@YAPEAVCShapeRenderTask@@QEAV1@0PEAV1@AEAV?$allocator@VCShapeRenderTask@@@0@@Z @ 0x18025F2DC (--$_Uninitialized_move@PEAVCShapeRenderTask@@PEAV1@V-$allocator@VCShapeRenderTask@@@std@@@std@@Y.c)
 *     ?_Calculate_growth@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@AEBA_K_K@Z @ 0x18026046C (-_Calculate_growth@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@std@@AEBA_.c)
 */

__int64 __fastcall std::vector<CShapeRenderTask>::_Emplace_reallocate<CShapeRenderTask const &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r14
  unsigned __int64 v9; // rax
  SIZE_T v10; // rcx
  __int64 v11; // rbp
  unsigned __int64 v12; // r10
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r10
  __int64 v18; // r10

  v6 = (a2 - *a1) / 56;
  v7 = (a1[1] - *a1) / 56;
  if ( v7 == 0x492492492492492LL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = std::vector<CShapeRenderTask>::_Calculate_growth(a1, v7 + 1);
  v10 = 56 * v9;
  v11 = v9;
  if ( v9 > v12 )
    v10 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
  v14 = 56 * v6;
  *(_OWORD *)(v14 + v13) = *(_OWORD *)a3;
  *(_OWORD *)(v14 + v13 + 16) = *(_OWORD *)(a3 + 16);
  *(_OWORD *)(v14 + v13 + 32) = *(_OWORD *)(a3 + 32);
  *(_QWORD *)(v14 + v13 + 48) = *(_QWORD *)(a3 + 48);
  v15 = a1[1];
  v16 = *a1;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<CShapeRenderTask *,CShapeRenderTask *,std::allocator<CShapeRenderTask>>(v16, a2, v13);
    v15 = a1[1];
    v13 = v14 + v17 + 56;
    v16 = a2;
  }
  std::_Uninitialized_move<CShapeRenderTask *,CShapeRenderTask *,std::allocator<CShapeRenderTask>>(v16, v15, v13);
  std::vector<CShapeRenderTask>::_Change_array((__int64)a1, v18, v8, v11);
  return v14 + *a1;
}
