/*
 * XREFs of ??$_Insert@AEAKUResultInfo@DragNDropProcessor@@@?$list@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEAK$$QEAUResultInfo@DragNDropProcessor@@@Z @ 0x1800F66A4
 * Callers:
 *     ??$emplace@AEAKUResultInfo@DragNDropProcessor@@@?$_Hash@V?$_Umap_traits@KUResultInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAUResultInfo@DragNDropProcessor@@@Z @ 0x1800F7698 (--$emplace@AEAKUResultInfo@DragNDropProcessor@@@-$_Hash@V-$_Umap_traits@KUResultInfo@DragNDropPr.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>>::_Insert<unsigned long &,DragNDropProcessor::ResultInfo>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 *a4)
{
  _QWORD *v8; // rdi
  _QWORD *result; // rax
  __int64 v10; // rcx

  if ( *(_QWORD *)(a1 + 8) == 0x555555555555555LL )
    std::_Xlength_error("list<T> too long");
  v8 = *(_QWORD **)(a2 + 8);
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *((_DWORD *)result + 4) = *a3;
  v10 = *a4;
  *a4 = 0LL;
  result[3] = v10;
  result[4] = a4[1];
  result[5] = a4[2];
  *result = a2;
  result[1] = v8;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = result;
  *v8 = result;
  return result;
}
