/*
 * XREFs of ??$_Buy_if_not_node@$$CBI@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@U_Iterator_base0@2@@1@$$QEBIU_Not_a_node_tag@1@@Z @ 0x180096A70
 * Callers:
 *     ??$_Insert_unverified@$$CBIU_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@std@@_N@1@$$QEBIU_Not_a_node_tag@1@@Z @ 0x180096E38 (--$_Insert_unverified@$$CBIU_Not_a_node_tag@std@@@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x180013120 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::_Buy_if_not_node<unsigned int const>(
        __int64 a1,
        _QWORD *a2,
        _DWORD *a3)
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
  *((_DWORD *)v9 + 4) = *a3;
  *v9 = v6;
  v9[1] = v7;
  ++*(_QWORD *)(v5 + 8);
  *(_QWORD *)(v6 + 8) = v9;
  *v7 = v9;
  *a2 = **(_QWORD **)v5;
  return a2;
}
