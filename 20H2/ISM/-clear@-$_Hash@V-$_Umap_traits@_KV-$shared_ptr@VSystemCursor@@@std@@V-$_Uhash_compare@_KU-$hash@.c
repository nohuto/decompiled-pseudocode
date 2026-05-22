/*
 * XREFs of ?clear@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x18014093C
 * Callers:
 *     ?erase@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x1801409A0 (-erase@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor@@@std@@V-$_Uhash_compa_ea_1801409A0.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18013A76C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$shared_ptr@VSystemCursor@@@std@@@s.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>>,0>>::clear(
        __int64 a1)
{
  unsigned __int64 result; // rax
  void *v3; // rdi
  unsigned __int64 v4; // rcx

  std::_List_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>,void *>>>(
    a1,
    *(_QWORD ***)(a1 + 8));
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
