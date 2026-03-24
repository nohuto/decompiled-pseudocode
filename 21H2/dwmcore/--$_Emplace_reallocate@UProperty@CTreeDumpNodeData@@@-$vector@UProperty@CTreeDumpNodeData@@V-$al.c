/*
 * XREFs of ??$_Emplace_reallocate@UProperty@CTreeDumpNodeData@@@?$vector@UProperty@CTreeDumpNodeData@@V?$allocator@UProperty@CTreeDumpNodeData@@@std@@@std@@QEAAPEAUProperty@CTreeDumpNodeData@@QEAU23@$$QEAU23@@Z @ 0x180154A68
 * Callers:
 *     ??$emplace_back@UProperty@CTreeDumpNodeData@@@?$vector@UProperty@CTreeDumpNodeData@@V?$allocator@UProperty@CTreeDumpNodeData@@@std@@@std@@QEAAAEAUProperty@CTreeDumpNodeData@@$$QEAU23@@Z @ 0x180154DD0 (--$emplace_back@UProperty@CTreeDumpNodeData@@@-$vector@UProperty@CTreeDumpNodeData@@V-$allocator.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050B88 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUProperty@CTreeDumpNodeData@@PEAU12@V?$allocator@UProperty@CTreeDumpNodeData@@@std@@@std@@YAPEAUProperty@CTreeDumpNodeData@@QEAU12@0PEAU12@AEAV?$allocator@UProperty@CTreeDumpNodeData@@@0@@Z @ 0x180154D38 (--$_Uninitialized_move@PEAUProperty@CTreeDumpNodeData@@PEAU12@V-$allocator@UProperty@CTreeDumpNo.c)
 *     ?_Change_array@?$vector@UProperty@CTreeDumpNodeData@@V?$allocator@UProperty@CTreeDumpNodeData@@@std@@@std@@AEAAXQEAUProperty@CTreeDumpNodeData@@_K1@Z @ 0x1801560F4 (-_Change_array@-$vector@UProperty@CTreeDumpNodeData@@V-$allocator@UProperty@CTreeDumpNodeData@@@.c)
 */

unsigned __int64 __fastcall std::vector<CTreeDumpNodeData::Property>::_Emplace_reallocate<CTreeDumpNodeData::Property>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  SIZE_T v12; // rcx
  unsigned __int64 v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx

  v4 = a2 - *a1;
  v5 = (a1[1] - *a1) >> 6;
  if ( v5 == 0x3FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v5 + 1;
  v9 = (a1[2] - *a1) >> 6;
  v10 = v9 >> 1;
  if ( v9 <= 0x3FFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v5 + 1;
  }
  else
  {
    v11 = v5 + 1;
  }
  v12 = v11 << 6;
  if ( v11 > 0x3FFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = v4 & 0xFFFFFFFFFFFFFFC0uLL;
  v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  *(_QWORD *)(v13 + v14 + 16) = 0LL;
  *(_QWORD *)(v13 + v14 + 24) = 0LL;
  *(_OWORD *)(v13 + v14) = *(_OWORD *)a3;
  *(_OWORD *)(v13 + v14 + 16) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 15LL;
  *(_BYTE *)a3 = 0;
  *(_QWORD *)(v13 + v14 + 48) = 0LL;
  *(_QWORD *)(v13 + v14 + 56) = 0LL;
  *(_OWORD *)(v13 + v14 + 32) = *(_OWORD *)(a3 + 32);
  *(_OWORD *)(v13 + v14 + 48) = *(_OWORD *)(a3 + 48);
  *(_QWORD *)(a3 + 48) = 0LL;
  *(_QWORD *)(a3 + 56) = 15LL;
  *(_BYTE *)(a3 + 32) = 0;
  v15 = a1[1];
  v16 = *a1;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<CTreeDumpNodeData::Property *,CTreeDumpNodeData::Property *,std::allocator<CTreeDumpNodeData::Property>>(
      v16,
      a2);
    v15 = a1[1];
    v16 = a2;
  }
  std::_Uninitialized_move<CTreeDumpNodeData::Property *,CTreeDumpNodeData::Property *,std::allocator<CTreeDumpNodeData::Property>>(
    v16,
    v15);
  std::vector<CTreeDumpNodeData::Property>::_Change_array(a1, v14, v8, v11);
  return v13 + *a1;
}
