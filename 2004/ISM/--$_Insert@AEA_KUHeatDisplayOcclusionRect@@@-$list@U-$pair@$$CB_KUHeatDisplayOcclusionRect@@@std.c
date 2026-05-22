/*
 * XREFs of ??$_Insert@AEA_KUHeatDisplayOcclusionRect@@@?$list@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@V?$allocator@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEA_K$$QEAUHeatDisplayOcclusionRect@@@Z @ 0x18012ADAC
 * Callers:
 *     ??$emplace@AEA_KUHeatDisplayOcclusionRect@@@?$_Hash@V?$_Umap_traits@_KUHeatDisplayOcclusionRect@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@std@@@std@@@std@@_N@1@AEA_K$$QEAUHeatDisplayOcclusionRect@@@Z @ 0x18012BA30 (--$emplace@AEA_KUHeatDisplayOcclusionRect@@@-$_Hash@V-$_Umap_traits@_KUHeatDisplayOcclusionRect@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::list<std::pair<unsigned __int64 const,HeatDisplayOcclusionRect>>::_Insert<unsigned __int64 &,HeatDisplayOcclusionRect>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4)
{
  _QWORD *v8; // rdi
  _QWORD *v9; // rdx
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) == 0x1745D1745D1745DLL )
    std::_Xlength_error("list<T> too long");
  v8 = *(_QWORD **)(a2 + 8);
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0xB0uLL);
  v9[2] = *a3;
  *(_OWORD *)(v9 + 3) = *(_OWORD *)a4;
  *(_OWORD *)(v9 + 5) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(v9 + 7) = *(_OWORD *)(a4 + 32);
  *(_OWORD *)(v9 + 9) = *(_OWORD *)(a4 + 48);
  *(_OWORD *)(v9 + 11) = *(_OWORD *)(a4 + 64);
  *(_OWORD *)(v9 + 13) = *(_OWORD *)(a4 + 80);
  *(_OWORD *)(v9 + 15) = *(_OWORD *)(a4 + 96);
  *(_OWORD *)(v9 + 17) = *(_OWORD *)(a4 + 112);
  *(_OWORD *)(v9 + 19) = *(_OWORD *)(a4 + 128);
  result = *(unsigned int *)(a4 + 144);
  *((_DWORD *)v9 + 42) = result;
  *v9 = a2;
  v9[1] = v8;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v9;
  *v8 = v9;
  return result;
}
