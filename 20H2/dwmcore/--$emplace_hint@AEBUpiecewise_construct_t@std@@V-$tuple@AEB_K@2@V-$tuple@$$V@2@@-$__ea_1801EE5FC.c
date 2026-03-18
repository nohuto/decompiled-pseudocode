/*
 * XREFs of ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801EE5FC
 * Callers:
 *     ?LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV?$shared_ptr@$$BY0A@E@std@@@Z @ 0x1801EEE60 (-LookupPerFrameData@CSynchronousSuperWetInk@@AEAAJIPEAV-$shared_ptr@$$BY0A@E@std@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18005D888 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@@1@AEAU?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@1@@Z @ 0x1801EE330 (--$_Insert_hint@AEAU-$pair@$$CB_KV-$shared_ptr@$$BY0A@E@std@@@std@@PEAU-$_Tree_node@U-$pair@$$CB.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned __int64 const &>,std::tuple<>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        _QWORD **a5)
{
  __int64 v5; // rdi
  __int64 v9; // rax

  v5 = *a1;
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *(_QWORD *)(v9 + 32) = **a5;
  *(_QWORD *)(v9 + 40) = 0LL;
  *(_QWORD *)(v9 + 48) = 0LL;
  *(_QWORD *)v9 = v5;
  *(_QWORD *)(v9 + 8) = v5;
  *(_QWORD *)(v9 + 16) = v5;
  *(_WORD *)(v9 + 24) = 0;
  std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::_Insert_hint<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>> &,std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>,void *> *>(
    a1,
    a2,
    a3,
    (unsigned __int64 *)(v9 + 32),
    v9);
  return a2;
}
