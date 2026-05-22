/*
 * XREFs of ??0?$_Hash@V?$_Umap_traits@IV?$vector@IV?$allocator@I@std@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@1@AEBV?$allocator@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@1@@Z @ 0x180024D10
 * Callers:
 *     ??0?$unordered_map@IV?$vector@IV?$allocator@I@std@@@std@@U?$hash@I@2@U?$equal_to@I@2@V?$allocator@U?$pair@$$CBIV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180024B60 (--0-$unordered_map@IV-$vector@IV-$allocator@I@std@@@std@@U-$hash@I@2@U-$equal_to@I@2@V-$allocato.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Buy_raw@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x18001EEB4 (-_Buy_raw@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBUt.c)
 */

// Hidden C++ exception states: #wind=1
int *__fastcall std::_Hash<std::_Umap_traits<unsigned int,std::vector<unsigned int>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::vector<unsigned int>>>,0>>::_Hash<std::_Umap_traits<unsigned int,std::vector<unsigned int>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::vector<unsigned int>>>,0>>(
        __int64 a1,
        int *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdx

  Win32kInterop::s_frameIdToPointerIdMap = *a2;
  qword_180209B98 = 0LL;
  qword_180209BA0 = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *v2 = v2;
  v2[1] = v2;
  qword_180209B98 = (__int64)v2;
  qword_180209BA8 = 0LL;
  xmmword_180209BB0 = 0LL;
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,IInputTarget *>>>>>::_Buy_raw(
    &qword_180209BA8,
    0x10uLL);
  v3 = qword_180209BA8;
  memset64((void *)qword_180209BA8, (unsigned __int64)v2, 0x10uLL);
  *(_QWORD *)&xmmword_180209BB0 = v3 + 128;
  qword_180209BC0 = 7LL;
  qword_180209BC8 = 8LL;
  Win32kInterop::s_frameIdToPointerIdMap = LODWORD(FLOAT_1_0);
  return &Win32kInterop::s_frameIdToPointerIdMap;
}
