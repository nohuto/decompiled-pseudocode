/*
 * XREFs of ??$_Buynode@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@@std@@PEAX@std@@@std@@AEBUpiecewise_construct_t@2@V?$tuple@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$tuple@$$V@2@@?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@@std@@PEAX@std@@@1@PEAU01@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801514E0
 * Callers:
 *     ??$_Try_emplace@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$$V@?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x180155DB4 (--$_Try_emplace@AEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@_ea_180155DB4.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x1800C5618 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree_node<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialGraphSnapshot>,void *>::_Buynode<std::allocator<std::_Tree_node<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialGraphSnapshot>,void *>>,std::piecewise_construct_t const &,std::tuple<std::wstring const &>,std::tuple<>>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // [rsp+28h] [rbp-10h]

  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x88uLL);
  std::wstring::wstring((__int64)(v4 + 4));
  memset_0(v4 + 8, 0, 0x48uLL);
  v4[10] = 0LL;
  v4[11] = 7LL;
  *((_WORD *)v4 + 32) = 0;
  v4[12] = 0LL;
  *((_BYTE *)v4 + 104) = 0;
  v4[14] = 0LL;
  *((_BYTE *)v4 + 120) = 0;
  v4[16] = 0LL;
  *v4 = a2;
  v4[1] = a2;
  v4[2] = a2;
  *((_WORD *)v4 + 12) = 0;
  return v4;
}
