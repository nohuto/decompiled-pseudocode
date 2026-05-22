/*
 * XREFs of ??$_Buy_if_not_node@QEAUISystemContextObserver@@@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@U_Iterator_base0@2@@1@$$QEBQEAUISystemContextObserver@@U_Not_a_node_tag@1@@Z @ 0x18003616C
 * Callers:
 *     ??$_Insert_unverified@QEAUISystemContextObserver@@U_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@std@@_N@1@$$QEBQEAUISystemContextObserver@@U_Not_a_node_tag@1@@Z @ 0x180036020 (--$_Insert_unverified@QEAUISystemContextObserver@@U_Not_a_node_tag@std@@@-$_Hash@V-$_Uset_traits.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800130F0 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::_Buy_if_not_node<ISystemContextObserver * const>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rbx
  _QWORD *v7; // rdi
  size_t size_of; // rax
  _QWORD *v9; // rax

  v5 = a1 + 8;
  v6 = **(_QWORD **)(a1 + 8);
  if ( *(_QWORD *)(a1 + 16) == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("list<T> too long");
  v7 = *(_QWORD **)(v6 + 8);
  size_of = std::_Get_size_of_n<24>(1uLL);
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v9[2] = *a3;
  *v9 = v6;
  v9[1] = v7;
  ++*(_QWORD *)(v5 + 8);
  *(_QWORD *)(v6 + 8) = v9;
  *v7 = v9;
  *a2 = **(_QWORD **)v5;
  return a2;
}
