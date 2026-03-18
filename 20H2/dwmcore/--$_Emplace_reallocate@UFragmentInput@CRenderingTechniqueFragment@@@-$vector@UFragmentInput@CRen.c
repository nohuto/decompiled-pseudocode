/*
 * XREFs of ??$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAAPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU23@$$QEAU23@@Z @ 0x18005667C
 * Callers:
 *     ?AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180055AD8 (-AddMaskBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCMaskBrush@@_NPEAPEAVCRenderingTechniqueFrag.c)
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x18005629C (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@IEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180056FBC (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 * Callees:
 *     ??$_Uninitialized_move@PEAUFragmentInput@CRenderingTechniqueFragment@@PEAU12@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU12@0PEAU12@AEAV?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@0@@Z @ 0x180056780 (--$_Uninitialized_move@PEAUFragmentInput@CRenderingTechniqueFragment@@PEAU12@V-$allocator@UFragm.c)
 *     ?_Change_array@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@AEAAXQEAUFragmentInput@CRenderingTechniqueFragment@@_K1@Z @ 0x1800567D8 (-_Change_array@-$vector@UFragmentInput@CRenderingTechniqueFragment@@V-$allocator@UFragmentInput@.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18005D888 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

unsigned __int64 __fastcall std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  SIZE_T v12; // rcx
  unsigned __int64 v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx

  v4 = a2 - *a1;
  v5 = (a1[1] - *a1) >> 4;
  if ( v5 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v5 + 1;
  v9 = (a1[2] - *a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 > 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v5 + 1;
  }
  else
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v5 + 1;
  }
  v12 = 16 * v11;
  if ( v11 > 0xFFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v15 = v14;
  *(_QWORD *)(v13 + v14) = *a3;
  v16 = a3[1];
  a3[1] = 0LL;
  *(_QWORD *)(v13 + v14 + 8) = v16;
  v17 = a1[1];
  v18 = *a1;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<CRenderingTechniqueFragment::FragmentInput *,CRenderingTechniqueFragment::FragmentInput *,std::allocator<CRenderingTechniqueFragment::FragmentInput>>(
      v18,
      a2,
      v14);
    v17 = a1[1];
    v15 = v14 + v13 + 16;
    v18 = a2;
  }
  std::_Uninitialized_move<CRenderingTechniqueFragment::FragmentInput *,CRenderingTechniqueFragment::FragmentInput *,std::allocator<CRenderingTechniqueFragment::FragmentInput>>(
    v18,
    v17,
    v15);
  std::vector<CRenderingTechniqueFragment::FragmentInput>::_Change_array(a1, v14, v8, v11);
  return v13 + *a1;
}
