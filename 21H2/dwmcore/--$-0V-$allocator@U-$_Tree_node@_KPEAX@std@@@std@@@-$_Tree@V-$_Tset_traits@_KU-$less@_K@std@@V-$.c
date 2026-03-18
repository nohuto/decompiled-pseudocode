/*
 * XREFs of ??$?0V?$allocator@U?$_Tree_node@_KPEAX@std@@@std@@@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA@AEBV01@$$QEAV?$allocator@U?$_Tree_node@_KPEAX@std@@@1@@Z @ 0x180077E14
 * Callers:
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo @ 0x180077A0C (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo.c)
 * Callees:
 *     ??$_Buyheadnode@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@@Z @ 0x180077EB4 (--$_Buyheadnode@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEA.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x180077EE8 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 *     ??$_Copy_nodes@U_Copy_tag@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@_KPEAX@1@PEAU21@0U_Copy_tag@01@@Z @ 0x1800B5F48 (--$_Copy_nodes@U_Copy_tag@-$_Tree@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator@_K@2@$0A@@std@@.c)
 */

__int64 *__fastcall std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>(
        __int64 *a1,
        _QWORD *a2,
        char a3)
{
  __int64 v5; // rax
  __int64 v6; // r9
  _QWORD *v7; // r8
  __int64 v8; // rax
  __int64 *v9; // r8
  __int64 v10; // rax
  __int64 i; // rcx

  *a1 = 0LL;
  a1[1] = 0LL;
  v5 = std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>::_Buyheadnode<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>();
  LOBYTE(v6) = a3;
  *a1 = v5;
  *(_QWORD *)(*a1 + 8) = std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Copy_nodes<std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Copy_tag>(
                           a1,
                           *(_QWORD *)(*a2 + 8LL),
                           v5,
                           v6);
  v7 = (_QWORD *)*a1;
  a1[1] = a2[1];
  if ( *(_BYTE *)(v7[1] + 25LL) )
  {
    *v7 = v7;
    *(_QWORD *)(*a1 + 16) = *a1;
  }
  else
  {
    v8 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min();
    *v9 = v8;
    v10 = *(_QWORD *)(*a1 + 8);
    for ( i = *(_QWORD *)(v10 + 16); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 16) )
      v10 = i;
    *(_QWORD *)(*a1 + 16) = v10;
  }
  return a1;
}
