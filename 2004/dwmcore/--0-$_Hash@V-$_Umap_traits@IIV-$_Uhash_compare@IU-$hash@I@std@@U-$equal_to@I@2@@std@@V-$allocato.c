/*
 * XREFs of ??0?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@1@AEBV?$allocator@U?$pair@$$CBII@std@@@1@@Z @ 0x180194DBC
 * Callers:
 *     ??0DataSourceProxy@@QEAA@XZ @ 0x180194E64 (--0DataSourceProxy@@QEAA@XZ.c)
 * Callees:
 *     ?_Buy_raw@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x18002A61C (-_Buy_raw@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBII.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18004B6F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>(
        __int64 a1,
        _DWORD *a2)
{
  _QWORD *v3; // rbx
  char *v4; // rdi
  __int64 result; // rax

  *(_DWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v3 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x18uLL);
  *v3 = v3;
  v3[1] = v3;
  *(_QWORD *)(a1 + 8) = v3;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,unsigned int>>>>>::_Buy_raw(
    (__int64 *)(a1 + 24),
    0x10uLL);
  v4 = *(char **)(a1 + 24);
  memset64(v4, (unsigned __int64)v3, 0x10uLL);
  result = a1;
  *(_QWORD *)(a1 + 32) = v4 + 128;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  return result;
}
