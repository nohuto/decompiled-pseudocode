/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVCResource@@@1@V?$tuple@$$V@1@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@PEAX@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVCResource@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180064FC8
 * Callers:
 *     ??$_Try_emplace@AEBQEAVCResource@@$$V@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@PEAX@std@@_N@1@AEBQEAVCResource@@@Z @ 0x180064E4C (--$_Try_emplace@AEBQEAVCResource@@$$V@-$_Hash@V-$_Umap_traits@PEAVCResource@@UResourceDebugInfo@.c)
 * Callees:
 *     ??$_Get_size_of_n@$0EI@@std@@YA_K_K@Z @ 0x180065038 (--$_Get_size_of_n@$0EI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD **a4)
{
  SIZE_T size_of; // rax
  __int64 v7; // rax

  *a1 = a2;
  a1[1] = 0LL;
  size_of = std::_Get_size_of_n<72>(1LL);
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  a1[1] = v7;
  *(_QWORD *)(v7 + 16) = **a4;
  *(_DWORD *)(v7 + 24) = 0;
  *(_QWORD *)(v7 + 48) = 0LL;
  *(_QWORD *)(v7 + 56) = 7LL;
  *(_WORD *)(v7 + 32) = 0;
  *(_QWORD *)(v7 + 64) = 0LL;
  return a1;
}
