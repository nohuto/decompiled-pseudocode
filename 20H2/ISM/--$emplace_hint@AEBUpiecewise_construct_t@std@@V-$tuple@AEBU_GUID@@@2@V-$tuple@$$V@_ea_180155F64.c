/*
 * XREFs of ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBU_GUID@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBU_GUID@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180155F64
 * Callers:
 *     ??$_Try_emplace@AEBU_GUID@@$$V@?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBU_GUID@@@Z @ 0x18015580C (--$_Try_emplace@AEBU_GUID@@$$V@-$map@U_GUID@@V-$vector@EV-$allocator@E@std@@@std@@UGuidLess@Prop.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAX@1@@Z @ 0x1801535AC (--$_Insert_hint@AEAU-$pair@$$CBU_GUID@@V-$vector@EV-$allocator@E@std@@@std@@@std@@PEAU-$_Tree_no.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<_GUID const &>,std::tuple<>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        _OWORD **a5)
{
  __int64 v8; // rdi
  _QWORD *v9; // rax

  v8 = *a1;
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x48uLL);
  *((_OWORD *)v9 + 2) = **a5;
  v9[6] = 0LL;
  v9[7] = 0LL;
  v9[8] = 0LL;
  *v9 = v8;
  v9[1] = v8;
  v9[2] = v8;
  *((_WORD *)v9 + 12) = 0;
  std::_Tree<std::_Tmap_traits<_GUID,std::vector<unsigned char>,Windows::Internal::Holographic::PropertyCache::GuidLess,std::allocator<std::pair<_GUID const,std::vector<unsigned char>>>,0>>::_Insert_hint<std::pair<_GUID const,std::vector<unsigned char>> &,std::_Tree_node<std::pair<_GUID const,std::vector<unsigned char>>,void *> *>(
    a1,
    a2,
    a3,
    v9 + 4,
    (__int64)v9);
  return a2;
}
