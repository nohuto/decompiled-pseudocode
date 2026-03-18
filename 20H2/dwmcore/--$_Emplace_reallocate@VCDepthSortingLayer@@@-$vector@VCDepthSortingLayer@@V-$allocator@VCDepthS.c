/*
 * XREFs of ??$_Emplace_reallocate@VCDepthSortingLayer@@@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@QEAAPEAVCDepthSortingLayer@@QEAV2@$$QEAV2@@Z @ 0x1801F9CE0
 * Callers:
 *     ??$emplace_back@VCDepthSortingLayer@@@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@QEAAAEAVCDepthSortingLayer@@$$QEAV2@@Z @ 0x1801FA174 (--$emplace_back@VCDepthSortingLayer@@@-$vector@VCDepthSortingLayer@@V-$allocator@VCDepthSortingL.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18005D888 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAVCDepthSortingLayer@@PEAV1@V?$allocator@VCDepthSortingLayer@@@std@@@std@@YAPEAVCDepthSortingLayer@@QEAV1@0PEAV1@AEAV?$allocator@VCDepthSortingLayer@@@0@@Z @ 0x1801FA05C (--$_Uninitialized_move@PEAVCDepthSortingLayer@@PEAV1@V-$allocator@VCDepthSortingLayer@@@std@@@st.c)
 *     ?_Change_array@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAXQEAVCDepthSortingLayer@@_K1@Z @ 0x1801FA598 (-_Change_array@-$vector@VCDepthSortingLayer@@V-$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAX.c)
 */

__int64 __fastcall std::vector<CDepthSortingLayer>::_Emplace_reallocate<CDepthSortingLayer>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // r14
  __int64 v7; // rdx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  SIZE_T v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx

  v6 = (a2 - *a1) / 40;
  v7 = (a1[1] - *a1) / 40;
  if ( v7 == 0x666666666666666LL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) / 40;
  v10 = v9 >> 1;
  if ( v9 <= 0x666666666666666LL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = 40 * v11;
  if ( v11 > 0x666666666666666LL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = 5 * v6;
  *(_QWORD *)(v13 + 8 * v14) = 0LL;
  *(_QWORD *)(v13 + 8 * v14 + 8) = 0LL;
  *(_QWORD *)(v13 + 8 * v14 + 16) = 0LL;
  *(_QWORD *)(v13 + 8 * v14) = *(_QWORD *)a3;
  *(_QWORD *)(v13 + 8 * v14 + 8) = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(v13 + 8 * v14 + 16) = *(_QWORD *)(a3 + 16);
  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_DWORD *)(v13 + 8 * v14 + 24) = *(_DWORD *)(a3 + 24);
  *(_DWORD *)(v13 + 8 * v14 + 28) = *(_DWORD *)(a3 + 28);
  *(_DWORD *)(v13 + 8 * v14 + 32) = *(_DWORD *)(a3 + 32);
  v15 = a1[1];
  v16 = *a1;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<CDepthSortingLayer *,CDepthSortingLayer *,std::allocator<CDepthSortingLayer>>(v16, a2);
    v15 = a1[1];
    v16 = a2;
  }
  std::_Uninitialized_move<CDepthSortingLayer *,CDepthSortingLayer *,std::allocator<CDepthSortingLayer>>(v16, v15);
  std::vector<CDepthSortingLayer>::_Change_array(a1, v13, v8, v11);
  return *a1 + 8 * v14;
}
