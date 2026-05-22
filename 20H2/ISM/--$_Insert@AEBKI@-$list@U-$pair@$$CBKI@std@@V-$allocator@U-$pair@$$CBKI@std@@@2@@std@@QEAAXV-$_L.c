/*
 * XREFs of ??$_Insert@AEBKI@?$list@U?$pair@$$CBKI@std@@V?$allocator@U?$pair@$$CBKI@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKI@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBK$$QEAI@Z @ 0x1800ACABC
 * Callers:
 *     ??$_Insert_or_assign@AEBKI@?$unordered_map@KIU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKI@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKI@std@@@std@@@std@@@std@@_N@1@AEBK$$QEAI@Z @ 0x1800ACD38 (--$_Insert_or_assign@AEBKI@-$unordered_map@KIU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@U-$pair.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x180013120 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::list<std::pair<unsigned long const,unsigned int>>::_Insert<unsigned long const &,unsigned int>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _DWORD *a4)
{
  _QWORD *v8; // rdi
  size_t size_of; // rax
  _QWORD *result; // rax

  if ( *(_QWORD *)(a1 + 8) == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("list<T> too long");
  v8 = *(_QWORD **)(a2 + 8);
  size_of = std::_Get_size_of_n<24>(1uLL);
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *((_DWORD *)result + 4) = *a3;
  *((_DWORD *)result + 5) = *a4;
  *result = a2;
  result[1] = v8;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = result;
  *v8 = result;
  return result;
}
