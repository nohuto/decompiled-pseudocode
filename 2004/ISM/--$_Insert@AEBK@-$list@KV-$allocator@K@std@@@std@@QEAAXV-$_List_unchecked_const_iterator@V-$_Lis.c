/*
 * XREFs of ??$_Insert@AEBK@?$list@KV?$allocator@K@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@U_Iterator_base0@2@@1@AEBK@Z @ 0x1800F67F8
 * Callers:
 *     ??$_Insert_unverified@$$CBKU_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@@std@@_N@1@$$QEBKU_Not_a_node_tag@1@@Z @ 0x1800F6964 (--$_Insert_unverified@$$CBKU_Not_a_node_tag@std@@@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-.c)
 *     ??$?0V?$allocator@U?$_List_node@KPEAX@std@@@std@@@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAA@AEBV01@AEBV?$allocator@U?$_List_node@KPEAX@std@@@1@@Z @ 0x18014987C (--$-0V-$allocator@U-$_List_node@KPEAX@std@@@std@@@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800130F0 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::list<unsigned long>::_Insert<unsigned long const &>(__int64 a1, __int64 a2, _DWORD *a3)
{
  _QWORD *v6; // rdi
  size_t size_of; // rax
  _QWORD *result; // rax

  if ( *(_QWORD *)(a1 + 8) == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("list<T> too long");
  v6 = *(_QWORD **)(a2 + 8);
  size_of = std::_Get_size_of_n<24>(1uLL);
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *((_DWORD *)result + 4) = *a3;
  *result = a2;
  result[1] = v6;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = result;
  *v6 = result;
  return result;
}
