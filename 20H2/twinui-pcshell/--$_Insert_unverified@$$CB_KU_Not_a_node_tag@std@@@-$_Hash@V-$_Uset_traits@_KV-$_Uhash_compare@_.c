/*
 * XREFs of ??$_Insert_unverified@$$CB_KU_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@@std@@_N@1@$$QEB_KU_Not_a_node_tag@1@@Z @ 0x1800C65BC
 * Callers:
 *     ?GetWindowTabAllotment@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z @ 0x1800CC1C0 (-GetWindowTabAllotment@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_K_K@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180073B14 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Buy_if_not_node@$$CB_K@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@1@$$QEB_KU_Not_a_node_tag@1@@Z @ 0x1800C5EC8 (--$_Buy_if_not_node@$$CB_K@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equa.c)
 *     ?_Check_size@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAAXXZ @ 0x1800CE5F0 (-_Check_size@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std.c)
 *     ?_End@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x1800CE848 (-_End@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$al.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::_Insert_unverified<unsigned __int64 const,std::_Not_a_node_tag>(
        _QWORD *a1,
        __int64 a2,
        const unsigned __int8 *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  _QWORD *v7; // r11
  __int64 result; // rax
  __int64 *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 **v16; // rsi
  __int64 **v17; // rax
  __int64 *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD *iter; // rax
  __int64 *v23; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v24[32]; // [rsp+28h] [rbp-20h] BYREF

  v5 = std::_Fnv1a_append_bytes((__int64)a1, a3, 8uLL) & a1[6];
  v6 = *(_QWORD *)std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::_End(
                    a1,
                    v24,
                    v5);
  while ( v6 != *(_QWORD *)(a1[3] + 16 * v5) )
  {
    v6 = *(_QWORD *)(v6 + 8);
    if ( *v7 == *(_QWORD *)(v6 + 16) )
    {
      *(_QWORD *)a2 = v6;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::_Buy_if_not_node<unsigned __int64 const>(
    (__int64)a1,
    &v23,
    v7);
  v9 = v23;
  v10 = *v23;
  if ( v6 != *v23 )
  {
    *(_QWORD *)v23[1] = v10;
    **(_QWORD **)(v10 + 8) = v6;
    **(_QWORD **)(v6 + 8) = v9;
    v11 = *(_QWORD *)(v6 + 8);
    *(_QWORD *)(v6 + 8) = *(_QWORD *)(v10 + 8);
    *(_QWORD *)(v10 + 8) = v9[1];
    v9[1] = v11;
  }
  v12 = 2 * v5;
  v13 = a1[3];
  v14 = *(_QWORD *)(v13 + 16 * v5);
  if ( v14 == a1[1] )
  {
    *(_QWORD *)(v13 + 16 * v5) = v9;
    v15 = a1[3];
    *(_QWORD *)(v15 + 16 * v5 + 8) = v9;
  }
  else
  {
    v16 = (__int64 **)(v13 + 16 * v5);
    if ( v14 == v6 )
    {
      *v16 = v9;
    }
    else
    {
      v17 = (__int64 **)v16[1];
      v18 = *v17;
      v16[1] = *v17;
      if ( v18 != v9 )
      {
        v19 = a1[3];
        v20 = *(_QWORD *)(v19 + 8 * v12 + 8);
        *(_QWORD *)(v19 + 8 * v12 + 8) = *(_QWORD *)(v20 + 8);
      }
    }
  }
  try
  {
    std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::_Check_size();
    *(_QWORD *)a2 = v9;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    iter = (_QWORD *)std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Make_iter(
                       v21,
                       v24,
                       v23);
    std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::erase(
      a1,
      &v23,
      *iter);
    throw;
  }
  return result;
}
