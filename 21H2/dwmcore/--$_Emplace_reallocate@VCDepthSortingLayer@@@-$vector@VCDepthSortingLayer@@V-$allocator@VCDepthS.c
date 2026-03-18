/*
 * XREFs of ??$_Emplace_reallocate@VCDepthSortingLayer@@@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@QEAAPEAVCDepthSortingLayer@@QEAV2@$$QEAV2@@Z @ 0x18024713C
 * Callers:
 *     ??$emplace_back@VCDepthSortingLayer@@@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@QEAAAEAVCDepthSortingLayer@@$$QEAV2@@Z @ 0x180247580 (--$emplace_back@VCDepthSortingLayer@@@-$vector@VCDepthSortingLayer@@V-$allocator@VCDepthSortingL.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1800B7328 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAVCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@YAPEAVCDepthSortingLayer@@QEAV1@0PEAV1@AEAV?$allocator@VCDepthSortingLayer@@@0@@Z @ 0x180247468 (--$_Uninitialized_move@PEAVCDepthSortingLayer@@V-$allocator@VCDepthSortingLayer@@@std@@@std@@YAP.c)
 *     ?_Change_array@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAXQEAVCDepthSortingLayer@@_K1@Z @ 0x180247988 (-_Change_array@-$vector@VCDepthSortingLayer@@V-$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAX.c)
 */

__int64 __fastcall std::vector<CDepthSortingLayer>::_Emplace_reallocate<CDepthSortingLayer>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // r14
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx

  v4 = 0x666666666666666LL;
  v7 = (a2 - *a1) / 40;
  v8 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 3);
  if ( v8 == 0x666666666666666LL )
    std::_Xlength_error("vector too long");
  v9 = v8 + 1;
  v10 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - *a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0x666666666666666LL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v8 + 1;
  }
  size_of = std::_Get_size_of_n<40>(v4);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v15 = v13 + 40 * v7;
  *(_QWORD *)v15 = 0LL;
  *(_QWORD *)(v15 + 8) = 0LL;
  *(_QWORD *)(v15 + 16) = 0LL;
  *(_QWORD *)v15 = *(_QWORD *)a3;
  *(_QWORD *)(v15 + 8) = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(v15 + 16) = *(_QWORD *)(a3 + 16);
  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_DWORD *)(v15 + 24) = *(_DWORD *)(a3 + 24);
  *(_DWORD *)(v15 + 28) = *(_DWORD *)(a3 + 28);
  *(_DWORD *)(v15 + 32) = *(_DWORD *)(a3 + 32);
  v16 = a1[1];
  v17 = *a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<CDepthSortingLayer *>(v17, a2, v13);
    v16 = a1[1];
    v14 = v15 + 40;
    v17 = a2;
  }
  std::_Uninitialized_move<CDepthSortingLayer *>(v17, v16, v14);
  std::vector<CDepthSortingLayer>::_Change_array(a1, v13, v9, v4);
  return v15;
}
