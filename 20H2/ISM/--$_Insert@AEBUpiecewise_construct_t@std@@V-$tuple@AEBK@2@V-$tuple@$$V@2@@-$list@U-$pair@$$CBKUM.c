/*
 * XREFs of ??$_Insert@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$list@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800F680C
 * Callers:
 *     ??$_Try_emplace@AEBK$$V@?$unordered_map@KUMessageInfo@DragNDropProcessor@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x1800F725C (--$_Try_emplace@AEBK$$V@-$unordered_map@KUMessageInfo@DragNDropProcessor@@U-$hash@K@std@@U-$equa.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::list<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>>::_Insert<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD **a4)
{
  _QWORD *v7; // rdi
  _QWORD *result; // rax

  if ( *(_QWORD *)(a1 + 8) == 0x38E38E38E38E38ELL )
    std::_Xlength_error("list<T> too long");
  v7 = *(_QWORD **)(a2 + 8);
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(0x48uLL);
  *((_DWORD *)result + 4) = **a4;
  *(_OWORD *)(result + 3) = 0LL;
  *(_OWORD *)(result + 5) = 0LL;
  *(_OWORD *)(result + 7) = 0LL;
  result[4] = 0LL;
  result[5] = 0LL;
  result[6] = 0LL;
  result[7] = 0LL;
  result[8] = 0LL;
  *result = a2;
  result[1] = v7;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = result;
  *v7 = result;
  return result;
}
