/*
 * XREFs of ??$_Insert_at@AEBIU_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@1@_NPEAU?$_Tree_node@IPEAX@1@AEBIU_Not_a_node_tag@1@@Z @ 0x18019E054
 * Callers:
 *     ??$_Insert_nohint@AEBIU_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@std@@_N@1@_NAEBIU_Not_a_node_tag@1@@Z @ 0x18019E7A0 (--$_Insert_nohint@AEBIU_Not_a_node_tag@std@@@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocato.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAX@2@@Z @ 0x180069E40 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@V-$vector@EV-$allocator@E@std@@@.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@@std@@PEAX@2@@Z @ 0x18006C3D4 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Insert_at<unsigned int const &,std::_Not_a_node_tag>(
        _QWORD *a1,
        _QWORD *a2,
        char a3,
        _QWORD *a4,
        _DWORD *a5)
{
  __int64 v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // r10
  __int64 v12; // rax
  _QWORD *v13; // r9
  __int64 i; // rax
  __int64 v15; // rax
  __int64 *v16; // rdx
  __int64 v17; // rcx

  if ( a1[1] >= 0x7FFFFFFFFFFFFFEuLL )
    std::_Xlength_error("map/set<T> too long");
  v9 = *a1;
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  v11 = v10;
  *((_DWORD *)v10 + 7) = *a5;
  *v10 = v9;
  v10[1] = v9;
  v10[2] = v9;
  *((_WORD *)v10 + 12) = 0;
  ++a1[1];
  v10[1] = a4;
  if ( a4 == (_QWORD *)*a1 )
  {
    *(_QWORD *)(*a1 + 8LL) = v10;
    *(_QWORD *)*a1 = v10;
    v12 = *a1;
LABEL_9:
    *(_QWORD *)(v12 + 16) = v11;
    goto LABEL_10;
  }
  if ( a3 )
  {
    *a4 = v10;
    if ( a4 == *(_QWORD **)*a1 )
      *(_QWORD *)*a1 = v10;
    goto LABEL_10;
  }
  a4[2] = v10;
  v12 = *a1;
  if ( a4 == *(_QWORD **)(*a1 + 16LL) )
    goto LABEL_9;
LABEL_10:
  v13 = v11;
  for ( i = v11[1]; !*(_BYTE *)(i + 24); i = v13[1] )
  {
    v15 = v13[1];
    v16 = *(__int64 **)(v15 + 8);
    v17 = *v16;
    if ( v15 == *v16 )
    {
      v17 = v16[2];
      if ( !*(_BYTE *)(v17 + 24) )
        goto LABEL_17;
      if ( v13 == *(_QWORD **)(v15 + 16) )
        std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialGraphSnapshot>>>::_Lrotate(
          (__int64)a1,
          v15);
      *(_BYTE *)(v13[1] + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(v13[1] + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,std::vector<unsigned char>>>>::_Rrotate(
        (__int64)a1,
        *(_QWORD **)(v13[1] + 8LL));
    }
    else
    {
      if ( !*(_BYTE *)(v17 + 24) )
      {
LABEL_17:
        *(_BYTE *)(v15 + 24) = 1;
        *(_BYTE *)(v17 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(v13[1] + 8LL) + 24LL) = 0;
        v13 = *(_QWORD **)(v13[1] + 8LL);
        continue;
      }
      if ( v13 == *(_QWORD **)v15 )
        std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,std::vector<unsigned char>>>>::_Rrotate(
          (__int64)a1,
          (_QWORD *)v15);
      *(_BYTE *)(v13[1] + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(v13[1] + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialGraphSnapshot>>>::_Lrotate(
        (__int64)a1,
        *(_QWORD *)(v13[1] + 8LL));
    }
  }
  *(_BYTE *)(*(_QWORD *)(*a1 + 8LL) + 24LL) = 1;
  *a2 = v11;
  return a2;
}
