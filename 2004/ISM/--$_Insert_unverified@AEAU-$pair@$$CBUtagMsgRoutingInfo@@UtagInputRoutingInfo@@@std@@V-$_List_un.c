/*
 * XREFs of ??$_Insert_unverified@AEAU?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@1@@Z @ 0x180102ECC
 * Callers:
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180103660 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V-$_Uhash_comp.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@@2@_K@Z @ 0x180003BC0 (-_End@-$_Hash@V-$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@.c)
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x180035344 (-_Check_size@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V-$_Uhash_compare.c)
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x180035638 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     ?erase@?$list@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@2@@Z @ 0x180103760 (-erase@-$list@U-$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@V-$allocator@U-$pair@$.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::_Insert_unverified<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>>>>(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        __int64 *a4)
{
  __int64 v7; // rdi
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 **v17; // r10
  __int64 **v18; // rax
  __int64 *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v23; // [rsp+50h] [rbp+18h] BYREF
  __int64 *v24; // [rsp+58h] [rbp+20h]

  v24 = a4;
  v7 = *std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>,0>>::_End(
          a1,
          &v23,
          *(_QWORD *)(a1 + 48) & (a3[1] | ((unsigned __int64)*a3 << 32)));
  while ( 1 )
  {
    v10 = *(_QWORD *)(v9 + 24);
    if ( v7 == *(_QWORD *)(v10 + 16 * v8) )
      break;
    v7 = *(_QWORD *)(v7 + 8);
    if ( operator==((__int64)a3, v7 + 16) )
    {
      std::list<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>::erase(v9 + 8, &v23);
      *(_QWORD *)a2 = v7;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  v12 = *a4;
  if ( v7 != *a4 )
  {
    *(_QWORD *)a4[1] = v12;
    **(_QWORD **)(v12 + 8) = v7;
    **(_QWORD **)(v7 + 8) = a4;
    v13 = *(_QWORD *)(v7 + 8);
    *(_QWORD *)(v7 + 8) = *(_QWORD *)(v12 + 8);
    *(_QWORD *)(v12 + 8) = a4[1];
    a4[1] = v13;
    v10 = *(_QWORD *)(v9 + 24);
  }
  v14 = 2 * v8;
  v15 = *(_QWORD *)(v10 + 16 * v8);
  if ( v15 == *(_QWORD *)(v9 + 8) )
  {
    *(_QWORD *)(v10 + 16 * v8) = a4;
    v16 = *(_QWORD *)(v9 + 24);
    *(_QWORD *)(v16 + 16 * v8 + 8) = a4;
  }
  else
  {
    v17 = (__int64 **)(v10 + 16 * v8);
    if ( v15 == v7 )
    {
      *v17 = a4;
    }
    else
    {
      v18 = (__int64 **)v17[1];
      v19 = *v18;
      v17[1] = *v18;
      if ( v19 != a4 )
      {
        v20 = *(_QWORD *)(v9 + 24);
        v21 = *(_QWORD *)(v20 + 8 * v14 + 8);
        *(_QWORD *)(v20 + 8 * v14 + 8) = *(_QWORD *)(v21 + 8);
      }
    }
  }
  try
  {
    std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::_Check_size(v9);
    *(_QWORD *)a2 = a4;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>>>,void>(
      a1,
      &v23,
      v24);
    throw;
  }
  return result;
}
