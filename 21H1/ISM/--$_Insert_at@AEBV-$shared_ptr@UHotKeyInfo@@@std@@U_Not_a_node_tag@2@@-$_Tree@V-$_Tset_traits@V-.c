/*
 * XREFs of ??$_Insert_at@AEBV?$shared_ptr@UHotKeyInfo@@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@1@AEBV?$shared_ptr@UHotKeyInfo@@@1@U_Not_a_node_tag@1@@Z @ 0x18019E270
 * Callers:
 *     ??$_Insert_nohint@AEBV?$shared_ptr@UHotKeyInfo@@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@@std@@_N@1@_NAEBV?$shared_ptr@UHotKeyInfo@@@1@U_Not_a_node_tag@1@@Z @ 0x18019E91C (--$_Insert_nohint@AEBV-$shared_ptr@UHotKeyInfo@@@std@@U_Not_a_node_tag@2@@-$_Tree@V-$_Tset_trait.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAX@2@@Z @ 0x18006A0A0 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@V-$vector@EV-$allocator@E@std@@@.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@@std@@PEAX@2@@Z @ 0x18006C634 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree<std::_Tset_traits<std::shared_ptr<HotKeyInfo>,std::less<std::shared_ptr<HotKeyInfo>>,std::allocator<std::shared_ptr<HotKeyInfo>>,0>>::_Insert_at<std::shared_ptr<HotKeyInfo> const &,std::_Not_a_node_tag>(
        _QWORD *a1,
        _QWORD *a2,
        char a3,
        _QWORD *a4,
        _QWORD *a5)
{
  __int64 v9; // rsi
  _QWORD *v10; // r10
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // r9
  __int64 i; // rax
  __int64 v15; // rax
  __int64 *v16; // rdx
  __int64 v17; // rcx
  __int64 v19; // [rsp+50h] [rbp+8h]

  if ( a1[1] >= 0x555555555555554uLL )
    std::_Xlength_error("map/set<T> too long");
  v9 = *a1;
  v19 = *a1;
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  v10[4] = 0LL;
  v10[5] = 0LL;
  v11 = a5[1];
  if ( v11 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    v9 = v19;
  }
  v10[4] = *a5;
  v10[5] = a5[1];
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
LABEL_11:
    *(_QWORD *)(v12 + 16) = v10;
    goto LABEL_12;
  }
  if ( a3 )
  {
    *a4 = v10;
    if ( a4 == *(_QWORD **)*a1 )
      *(_QWORD *)*a1 = v10;
    goto LABEL_12;
  }
  a4[2] = v10;
  v12 = *a1;
  if ( a4 == *(_QWORD **)(*a1 + 16LL) )
    goto LABEL_11;
LABEL_12:
  v13 = v10;
  for ( i = v10[1]; !*(_BYTE *)(i + 24); i = v13[1] )
  {
    v15 = v13[1];
    v16 = *(__int64 **)(v15 + 8);
    v17 = *v16;
    if ( v15 == *v16 )
    {
      v17 = v16[2];
      if ( !*(_BYTE *)(v17 + 24) )
        goto LABEL_19;
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
LABEL_19:
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
  *a2 = v10;
  return a2;
}
