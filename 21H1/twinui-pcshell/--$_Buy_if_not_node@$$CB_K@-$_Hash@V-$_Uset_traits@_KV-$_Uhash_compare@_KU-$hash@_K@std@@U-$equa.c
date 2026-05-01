/*
 * XREFs of ??$_Buy_if_not_node@$$CB_K@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@1@$$QEB_KU_Not_a_node_tag@1@@Z @ 0x1800B1608
 * Callers:
 *     ??$_Insert_unverified@$$CB_KU_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@@std@@_N@1@$$QEB_KU_Not_a_node_tag@1@@Z @ 0x1800B1CFC (--$_Insert_unverified@$$CB_KU_Not_a_node_tag@std@@@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180042A8C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::_Buy_if_not_node<unsigned __int64 const>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rbx
  _QWORD *v7; // rdi
  _QWORD *v8; // rax

  v5 = a1 + 8;
  v6 = **(_QWORD **)(a1 + 8);
  if ( *(_QWORD *)(a1 + 16) == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("list<T> too long");
  v7 = *(_QWORD **)(v6 + 8);
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x18uLL);
  v8[2] = *a3;
  *v8 = v6;
  v8[1] = v7;
  ++*(_QWORD *)(v5 + 8);
  *(_QWORD *)(v6 + 8) = v8;
  *v7 = v8;
  *a2 = **(_QWORD **)v5;
  return a2;
}
