/*
 * XREFs of ?clear@?$_Hash@V?$_Umap_traits@KUResultInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x1800FC43C
 * Callers:
 *     ?erase@?$_Hash@V?$_Umap_traits@KUResultInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1800FC7B8 (-erase@-$_Hash@V-$_Umap_traits@KUResultInfo@DragNDropProcessor@@V-$_Uhash_compare@K_ea_1800FC7B8.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800F68E0 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::ResultInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>>,0>>::clear(
        __int64 a1)
{
  unsigned __int64 result; // rax
  void *v3; // rdi
  unsigned __int64 v4; // rcx

  std::_List_node<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>,void *>>>(
    a1,
    *(const struct std::nothrow_t **)(a1 + 8));
  **(_QWORD **)(a1 + 8) = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = *(_QWORD *)(a1 + 8);
  result = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v3 = *(void **)(a1 + 24);
  v4 = (unsigned __int64)(*(_QWORD *)(a1 + 32) - (_QWORD)v3 + 7LL) >> 3;
  if ( (unsigned __int64)v3 > *(_QWORD *)(a1 + 32) )
    v4 = 0LL;
  if ( v4 )
  {
    result = *(_QWORD *)(a1 + 8);
    memset64(v3, result, v4);
  }
  return result;
}
