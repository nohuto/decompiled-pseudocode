/*
 * XREFs of ??0?$_Tree_temp_node_alloc@V?$allocator@U?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@std@@@1@@Z @ 0x18002FEE0
 * Callers:
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAPEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAPEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18002FE70 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAPEBV-$basic_string@GU-$char_traits@G@std@@V-$a.c)
 *     _anonymous_namespace_::SendFramesReport @ 0x1800751DC (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x180030150 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<std::wstring const * const,unsigned int>,void *>>>::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<std::wstring const * const,unsigned int>,void *>>>(
        _QWORD *a1,
        __int64 a2)
{
  SIZE_T size_of; // rax

  *a1 = a2;
  a1[1] = 0LL;
  size_of = std::_Get_size_of_n<48>(1LL);
  a1[1] = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  return a1;
}
