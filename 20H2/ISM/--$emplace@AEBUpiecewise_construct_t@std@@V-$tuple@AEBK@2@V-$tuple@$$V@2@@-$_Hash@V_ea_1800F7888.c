/*
 * XREFs of ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorState@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800F7888
 * Callers:
 *     ??$_Try_emplace@AEBK$$V@?$unordered_map@KW4ContextualProcessorDecision@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x1800F7488 (--$_Try_emplace@AEBK$$V@-$unordered_map@KW4ContextualProcessorDecision@@U-$hash@K@std@@U-$equal_.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x180013120 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Insert_unverified@U?$pair@$$CBKW4ContextualProcessorState@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorState@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBKW4ContextualProcessorState@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@std@@@std@@@1@@Z @ 0x180013B10 (--$_Insert_unverified@U-$pair@$$CBKW4ContextualProcessorState@@@std@@V-$_List_unchecked_iterator.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorState>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD **a4)
{
  __int64 ***v7; // rsi
  __int64 v8; // rbx
  _QWORD *v9; // rdi
  size_t size_of; // rax
  _QWORD *v11; // rax

  v7 = (__int64 ***)(a1 + 8);
  v8 = **(_QWORD **)(a1 + 8);
  if ( *(_QWORD *)(a1 + 16) == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("list<T> too long");
  v9 = *(_QWORD **)(v8 + 8);
  size_of = std::_Get_size_of_n<24>(1uLL);
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *((_DWORD *)v11 + 4) = **a4;
  *((_DWORD *)v11 + 5) = 0;
  *v11 = v8;
  v11[1] = v9;
  v7[1] = (__int64 **)((char *)v7[1] + 1);
  *(_QWORD *)(v8 + 8) = v11;
  *v9 = v11;
  std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorState>>,0>>::_Insert_unverified<std::pair<unsigned long const,enum ContextualProcessorState>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,enum ContextualProcessorState>>>>>(
    a1,
    a2,
    (unsigned __int8 *)**v7 + 16,
    **v7);
  return a2;
}
