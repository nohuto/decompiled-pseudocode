/*
 * XREFs of ??$_Insert_unverified@$$CBUguid@winrt@@U_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@Uguid@winrt@@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@Uguid@winrt@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@Uguid@winrt@@@std@@@std@@@std@@_N@1@$$QEBUguid@winrt@@U_Not_a_node_tag@1@@Z @ 0x1800BDFDC
 * Callers:
 *     ?GetPendingTabChanges@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEAV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@0@Z @ 0x1800BF2B8 (-GetPendingTabChanges@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEAV-$vector@.c)
 *     ?SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x1800BFA58 (-SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFi.c)
 * Callees:
 *     ??$_Insert@AEBUguid@winrt@@@?$list@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@Uguid@winrt@@@std@@@std@@U_Iterator_base0@2@@1@AEBUguid@winrt@@@Z @ 0x1800B1A04 (--$_Insert@AEBUguid@winrt@@@-$list@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAAXV-$_L.c)
 *     ??R?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@QEBA_KAEBUguid@winrt@@@Z @ 0x1800B5178 (--R-$_Uhash_compare@Uguid@winrt@@U-$hash@Uguid@winrt@@@std@@U-$equal_to@Uguid@winrt@@@4@@std@@QE.c)
 *     ?_Check_size@?$_Hash@V?$_Uset_traits@Uguid@winrt@@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@Uguid@winrt@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x1800BA50C (-_Check_size@-$_Hash@V-$_Uset_traits@Uguid@winrt@@V-$_Uhash_compare@Uguid@winrt@@U-$hash@Uguid@w.c)
 *     ?_End@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x1800BA7E8 (-_End@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$al.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>::_Insert_unverified<winrt::guid const,std::_Not_a_node_tag>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rsi
  _QWORD *v6; // rbx
  __int64 v7; // r10
  __int64 result; // rax
  __int64 *v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 *v16; // rsi
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 *iter; // rax
  __int64 v23; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v24[4]; // [rsp+28h] [rbp-20h] BYREF

  v5 = *(_QWORD *)(a1 + 48) & std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>::operator()(
                                a1,
                                a3);
  v6 = (_QWORD *)*std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::_End(
                    a1,
                    v24,
                    v5);
  while ( v6 != *(_QWORD **)(*(_QWORD *)(a1 + 24) + 16 * v5) )
  {
    v6 = (_QWORD *)v6[1];
    if ( *(_QWORD *)v7 == v6[2] && *(_QWORD *)(v7 + 8) == v6[3] )
    {
      *(_QWORD *)a2 = v6;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  std::list<winrt::guid>::_Insert<winrt::guid const &>(a1 + 8, **(_QWORD **)(a1 + 8), (_OWORD *)v7);
  v9 = *(__int64 **)(a1 + 8);
  v10 = *v9;
  v23 = v10;
  v11 = *(_QWORD *)v10;
  if ( v6 != *(_QWORD **)v10 )
  {
    **(_QWORD **)(v10 + 8) = v11;
    **(_QWORD **)(v11 + 8) = v6;
    *(_QWORD *)v6[1] = v10;
    v12 = v6[1];
    v6[1] = *(_QWORD *)(v11 + 8);
    *(_QWORD *)(v11 + 8) = *(_QWORD *)(v10 + 8);
    *(_QWORD *)(v10 + 8) = v12;
    v9 = *(__int64 **)(a1 + 8);
  }
  v13 = 2 * v5;
  v14 = *(_QWORD *)(a1 + 24);
  if ( *(__int64 **)(v14 + 16 * v5) == v9 )
  {
    *(_QWORD *)(v14 + 16 * v5) = v10;
    v15 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(v15 + 16 * v5 + 8) = v10;
  }
  else
  {
    v16 = (__int64 *)(v14 + 16 * v5);
    if ( *(_QWORD **)(v14 + 8 * v13) == v6 )
    {
      *v16 = v10;
    }
    else
    {
      v17 = (__int64 *)v16[1];
      v18 = *v17;
      v16[1] = *v17;
      if ( v18 != v10 )
      {
        v19 = *(_QWORD *)(a1 + 24);
        v20 = *(_QWORD *)(v19 + 8 * v13 + 8);
        *(_QWORD *)(v19 + 8 * v13 + 8) = *(_QWORD *)(v20 + 8);
      }
    }
  }
  try
  {
    std::_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>::_Check_size(a1);
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    iter = std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Make_iter(
             v21,
             v24,
             v23);
    std::_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>::erase(
      (_QWORD *)a1,
      &v23,
      *iter);
    throw;
  }
  return result;
}
