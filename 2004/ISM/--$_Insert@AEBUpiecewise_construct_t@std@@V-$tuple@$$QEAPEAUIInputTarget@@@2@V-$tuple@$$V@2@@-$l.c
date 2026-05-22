/*
 * XREFs of ??$_Insert@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAPEAUIInputTarget@@@2@V?$tuple@$$V@2@@?$list@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@V?$allocator@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAPEAUIInputTarget@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18014A154
 * Callers:
 *     ??$_Try_emplace@PEAUIInputTarget@@$$V@?$unordered_map@PEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@U?$hash@PEAUIInputTarget@@@3@U?$equal_to@PEAUIInputTarget@@@3@V?$allocator@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAPEAUIInputTarget@@@Z @ 0x18014A518 (--$_Try_emplace@PEAUIInputTarget@@$$V@-$unordered_map@PEAUIInputTarget@@V-$unordered_set@KU-$has.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$unordered_map@KW4ContextualProcessorState@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@3@@std@@QEAA@XZ @ 0x1800AE284 (--0-$unordered_map@KW4ContextualProcessorState@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U-$p.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::list<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>>::_Insert<std::piecewise_construct_t const &,std::tuple<IInputTarget * &&>,std::tuple<>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 **a4)
{
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 result; // rax
  _QWORD *v11; // [rsp+28h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 8) == 0x2E8BA2E8BA2E8BALL )
    std::_Xlength_error("list<T> too long");
  v7 = *(_QWORD **)(a2 + 8);
  v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x58uLL);
  v8 = **a4;
  v11[2] = v8;
  result = std::unordered_map<unsigned long,enum ContextualProcessorState>::unordered_map<unsigned long,enum ContextualProcessorState>(
             (__int64)(v11 + 3),
             v8,
             v9);
  *v11 = a2;
  v11[1] = v7;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v11;
  *v7 = v11;
  return result;
}
