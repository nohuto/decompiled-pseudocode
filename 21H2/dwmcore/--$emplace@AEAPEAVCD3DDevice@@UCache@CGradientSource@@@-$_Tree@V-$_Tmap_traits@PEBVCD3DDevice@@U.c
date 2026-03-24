/*
 * XREFs of ??$emplace@AEAPEAVCD3DDevice@@UCache@CGradientSource@@@?$_Tree@V?$_Tmap_traits@PEBVCD3DDevice@@UCache@CGradientSource@@U?$less@PEBVCD3DDevice@@@std@@V?$allocator@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@@std@@@std@@@std@@_N@1@AEAPEAVCD3DDevice@@$$QEAUCache@CGradientSource@@@Z @ 0x180209C9C
 * Callers:
 *     ?FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDevice@@_NAEBVRetrievalParams@1@@Z @ 0x180209DB8 (-FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDevice@@_NAEBVRetrievalParams@1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050B88 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Insert_nohint@AEAU?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@PEAU?$_Tree_node@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBVCD3DDevice@@UCache@CGradientSource@@U?$less@PEBVCD3DDevice@@@std@@V?$allocator@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@1@PEAU?$_Tree_node@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@PEAX@1@@Z @ 0x180209B88 (--$_Insert_nohint@AEAU-$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@PEAU-$_Tree_node@U-$p.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<CD3DDevice const *,CGradientSource::Cache,std::less<CD3DDevice const *>,std::allocator<std::pair<CD3DDevice const * const,CGradientSource::Cache>>,0>>::emplace<CD3DDevice * &,CGradientSource::Cache>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v4; // rsi
  __int64 v9; // rax
  _QWORD *v10; // rcx

  v4 = *a1;
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *(_QWORD *)(v9 + 32) = *a3;
  *(_QWORD *)(v9 + 40) = 0LL;
  if ( (_QWORD *)(v9 + 40) != a4 )
  {
    *(_QWORD *)(v9 + 40) = *a4;
    *a4 = 0LL;
  }
  v10 = a4 + 1;
  *(_QWORD *)(v9 + 48) = 0LL;
  if ( (_QWORD *)(v9 + 48) != a4 + 1 )
  {
    *(_QWORD *)(v9 + 48) = *v10;
    *v10 = 0LL;
  }
  *(_QWORD *)v9 = v4;
  *(_QWORD *)(v9 + 8) = v4;
  *(_QWORD *)(v9 + 16) = v4;
  *(_WORD *)(v9 + 24) = 0;
  std::_Tree<std::_Tmap_traits<CD3DDevice const *,CGradientSource::Cache,std::less<CD3DDevice const *>,std::allocator<std::pair<CD3DDevice const * const,CGradientSource::Cache>>,0>>::_Insert_nohint<std::pair<CD3DDevice const * const,CGradientSource::Cache> &,std::_Tree_node<std::pair<CD3DDevice const * const,CGradientSource::Cache>,void *> *>(
    a1,
    a2,
    0LL,
    (_QWORD *)(v9 + 32),
    (__int64 *)v9);
  return a2;
}
