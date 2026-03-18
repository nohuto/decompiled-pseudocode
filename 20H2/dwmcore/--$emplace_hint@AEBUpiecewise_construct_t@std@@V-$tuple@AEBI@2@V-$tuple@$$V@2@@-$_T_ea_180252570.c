/*
 * XREFs of ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180252570
 * Callers:
 *     ?RegisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x180252EB4 (-RegisterStereoscopicContentConsumer@CStereoscopicContentManager@@QEAAXPEAVCHolographicInteropTe.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18005D888 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800E3DCC (memset_0.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIUStereoscopicSlateData@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@1@@Z @ 0x180252050 (--$_Insert_hint@AEAU-$pair@$$CBIUStereoscopicSlateData@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIUSte.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicSlateData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicSlateData>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        _DWORD **a5)
{
  __int64 v5; // rsi
  __int64 v9; // r14

  v5 = *a1;
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x68uLL);
  *(_DWORD *)(v9 + 28) = **a5;
  memset_0((void *)(v9 + 32), 0, 0x44uLL);
  *(_BYTE *)(v9 + 96) = 0;
  *(_QWORD *)v9 = v5;
  *(_QWORD *)(v9 + 8) = v5;
  *(_QWORD *)(v9 + 40) = 0LL;
  *(_DWORD *)(v9 + 48) = 0;
  *(_QWORD *)(v9 + 60) = 0LL;
  *(_DWORD *)(v9 + 68) = 0;
  *(_QWORD *)(v9 + 80) = 0LL;
  *(_DWORD *)(v9 + 88) = 0;
  *(_QWORD *)(v9 + 16) = v5;
  *(_QWORD *)(v9 + 32) = 1065353216LL;
  *(_QWORD *)(v9 + 52) = 1065353216LL;
  *(_QWORD *)(v9 + 72) = 1065353216LL;
  *(_DWORD *)(v9 + 92) = 1065353216;
  *(_WORD *)(v9 + 24) = 0;
  std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicSlateData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicSlateData>>,0>>::_Insert_hint<std::pair<unsigned int const,StereoscopicSlateData> &,std::_Tree_node<std::pair<unsigned int const,StereoscopicSlateData>,void *> *>(
    a1,
    a2,
    a3,
    (unsigned int *)(v9 + 28),
    (_QWORD *)v9);
  return a2;
}
