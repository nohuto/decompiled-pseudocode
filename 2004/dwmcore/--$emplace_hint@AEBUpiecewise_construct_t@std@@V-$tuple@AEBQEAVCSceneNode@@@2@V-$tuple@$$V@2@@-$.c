/*
 * XREFs of ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVCSceneNode@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneNode@@PEAX@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneNode@@PEAX@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVCSceneNode@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18020A194
 * Callers:
 *     ?HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z @ 0x18020A374 (-HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18004B6F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Insert_hint@AEAU?$pair@QEAVCSceneNode@@PEAX@std@@PEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneNode@@PEAX@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneNode@@PEAX@std@@@std@@@std@@@1@AEAU?$pair@QEAVCSceneNode@@PEAX@1@PEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@1@@Z @ 0x180209F00 (--$_Insert_hint@AEAU-$pair@QEAVCSceneNode@@PEAX@std@@PEAU-$_Tree_node@U-$pair@QEAVCSceneNode@@PE.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<CSceneNode *,void *,std::less<CSceneNode *>,std::allocator<std::pair<CSceneNode * const,void *>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<CSceneNode * const &>,std::tuple<>>(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 a4,
        _QWORD **a5)
{
  __int64 v5; // rdi
  __int64 v9; // rax

  v5 = *a1;
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *(_QWORD *)(v9 + 32) = **a5;
  *(_QWORD *)(v9 + 40) = 0LL;
  *(_QWORD *)v9 = v5;
  *(_QWORD *)(v9 + 8) = v5;
  *(_QWORD *)(v9 + 16) = v5;
  *(_WORD *)(v9 + 24) = 0;
  std::_Tree<std::_Tmap_traits<CSceneNode *,void *,std::less<CSceneNode *>,std::allocator<std::pair<CSceneNode * const,void *>>,0>>::_Insert_hint<std::pair<CSceneNode * const,void *> &,std::_Tree_node<std::pair<CSceneNode * const,void *>,void *> *>(
    a1,
    a2,
    a3,
    (unsigned __int64 *)(v9 + 32),
    (_QWORD *)v9);
  return a2;
}
