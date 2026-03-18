/*
 * XREFs of ??$_Emplace_reallocate@VCDepthSortedVisualCollection@@@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@QEAAPEAVCDepthSortedVisualCollection@@QEAV2@$$QEAV2@@Z @ 0x1801B6510
 * Callers:
 *     ??$emplace_back@VCDepthSortedVisualCollection@@@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@QEAAAEAVCDepthSortedVisualCollection@@$$QEAV2@@Z @ 0x1801B676C (--$emplace_back@VCDepthSortedVisualCollection@@@-$vector@VCDepthSortedVisualCollection@@V-$alloc.c)
 * Callees:
 *     ??$_Get_size_of_n@$0DI@@std@@YA_K_K@Z @ 0x180077FE0 (--$_Get_size_of_n@$0DI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAVCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@YAPEAVCDepthSortedVisualCollection@@QEAV1@0PEAV1@AEAV?$allocator@VCDepthSortedVisualCollection@@@0@@Z @ 0x1801B66B4 (--$_Uninitialized_move@PEAVCDepthSortedVisualCollection@@V-$allocator@VCDepthSortedVisualCollect.c)
 *     ?_Change_array@?$vector@VCDepthSortedVisualCollection@@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@AEAAXQEAVCDepthSortedVisualCollection@@_K1@Z @ 0x1801B6984 (-_Change_array@-$vector@VCDepthSortedVisualCollection@@V-$allocator@VCDepthSortedVisualCollectio.c)
 */

__int64 __fastcall std::vector<CDepthSortedVisualCollection>::_Emplace_reallocate<CDepthSortedVisualCollection>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // r14
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx

  v4 = 0x492492492492492LL;
  v7 = (a2 - *a1) / 56;
  v8 = 0x6DB6DB6DB6DB6DB7LL * ((a1[1] - *a1) >> 3);
  if ( v8 == 0x492492492492492LL )
    std::_Xlength_error("vector too long");
  v9 = v8 + 1;
  v10 = 0x6DB6DB6DB6DB6DB7LL * ((a1[2] - *a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0x492492492492492LL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v8 + 1;
  }
  size_of = std::_Get_size_of_n<56>(v4);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13;
  v15 = v13 + 56 * v7;
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
  *(_QWORD *)(v15 + 32) = 0LL;
  *(_QWORD *)(v15 + 40) = 0LL;
  *(_QWORD *)(v15 + 48) = 0LL;
  *(_QWORD *)(v15 + 32) = *(_QWORD *)(a3 + 32);
  *(_QWORD *)(v15 + 40) = *(_QWORD *)(a3 + 40);
  *(_QWORD *)(v15 + 48) = *(_QWORD *)(a3 + 48);
  *(_QWORD *)(a3 + 32) = 0LL;
  *(_QWORD *)(a3 + 40) = 0LL;
  *(_QWORD *)(a3 + 48) = 0LL;
  v16 = a1[1];
  v17 = *a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<CDepthSortedVisualCollection *>(v17, a2, v13);
    v16 = a1[1];
    v14 = v15 + 56;
    v17 = a2;
  }
  std::_Uninitialized_move<CDepthSortedVisualCollection *>(v17, v16, v14);
  std::vector<CDepthSortedVisualCollection>::_Change_array(a1, v13, v9, v4);
  return v15;
}
