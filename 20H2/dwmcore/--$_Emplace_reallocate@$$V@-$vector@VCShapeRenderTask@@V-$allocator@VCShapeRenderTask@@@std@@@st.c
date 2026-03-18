/*
 * XREFs of ??$_Emplace_reallocate@$$V@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@QEAAPEAVCShapeRenderTask@@QEAV2@@Z @ 0x18025E2A8
 * Callers:
 *     ?CreateRenderTask@CShapeDrawingContext@@QEAAJPEAPEAVCShapeRenderTask@@@Z @ 0x18025E774 (-CreateRenderTask@CShapeDrawingContext@@QEAAJPEAPEAVCShapeRenderTask@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18005D888 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@AEAAXQEAVCShapeRenderTask@@_K1@Z @ 0x1801A6260 (-_Change_array@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@std@@AEAAXQEAV.c)
 *     ??$_Uninitialized_move@PEAVCShapeRenderTask@@PEAV1@V?$allocator@VCShapeRenderTask@@@std@@@std@@YAPEAVCShapeRenderTask@@QEAV1@0PEAV1@AEAV?$allocator@VCShapeRenderTask@@@0@@Z @ 0x18025E4FC (--$_Uninitialized_move@PEAVCShapeRenderTask@@PEAV1@V-$allocator@VCShapeRenderTask@@@std@@@std@@Y.c)
 *     ?_Calculate_growth@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@AEBA_K_K@Z @ 0x18025F68C (-_Calculate_growth@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@std@@AEBA_.c)
 */

__int64 __fastcall std::vector<CShapeRenderTask>::_Emplace_reallocate<>(__int64 *a1, __int64 a2)
{
  __int64 v4; // kr00_8
  __int64 v5; // rdx
  __int64 v6; // r14
  unsigned __int64 v7; // rax
  SIZE_T v8; // rcx
  __int64 v9; // rbp
  unsigned __int64 v10; // r10
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r10
  __int64 v16; // r10

  v4 = a2 - *a1;
  v5 = (a1[1] - *a1) / 56;
  if ( v5 == 0x492492492492492LL )
    std::_Xlength_error("vector<T> too long");
  v6 = v5 + 1;
  v7 = std::vector<CShapeRenderTask>::_Calculate_growth(a1, v5 + 1);
  v8 = 56 * v7;
  v9 = v7;
  if ( v7 > v10 )
    v8 = -1LL;
  v11 = 56 * (v4 / 56);
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(v8);
  *(_DWORD *)(v11 + v12) = 0;
  v13 = a1[1];
  v14 = *a1;
  if ( a2 != v13 )
  {
    std::_Uninitialized_move<CShapeRenderTask *,CShapeRenderTask *,std::allocator<CShapeRenderTask>>(v14, a2, v12);
    v13 = a1[1];
    v12 = v11 + v15 + 56;
    v14 = a2;
  }
  std::_Uninitialized_move<CShapeRenderTask *,CShapeRenderTask *,std::allocator<CShapeRenderTask>>(v14, v13, v12);
  std::vector<CShapeRenderTask>::_Change_array((__int64)a1, v16, v6, v9);
  return v11 + *a1;
}
