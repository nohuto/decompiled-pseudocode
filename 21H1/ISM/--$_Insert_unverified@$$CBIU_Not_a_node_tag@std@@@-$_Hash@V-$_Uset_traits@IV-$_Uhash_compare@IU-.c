/*
 * XREFs of ??$_Insert_unverified@$$CBIU_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@std@@_N@1@$$QEBIU_Not_a_node_tag@1@@Z @ 0x180097398
 * Callers:
 *     ?OnButtonEnabledOnIdleChanged@MobileButtonDeviceCollection@@QEAAXKW4_Button@@_N@Z @ 0x180098308 (-OnButtonEnabledOnIdleChanged@MobileButtonDeviceCollection@@QEAAXKW4_Button@@_N@Z.c)
 *     ?AttachClient@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@PEAVBamoPenEventsClientProxy@@@Z @ 0x180132CD0 (-AttachClient@PenEventsDispatcherPrincipal@@MEAAJPEAVBamoPenEventsDispatcherStub@@PEAVBamoPenEve.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x180045858 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     ??$_Buy_if_not_node@$$CBI@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@U_Iterator_base0@2@@1@$$QEBIU_Not_a_node_tag@1@@Z @ 0x180096FD0 (--$_Buy_if_not_node@$$CBI@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to.c)
 *     ?_Check_size@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAXXZ @ 0x1800990F0 (-_Check_size@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-.c)
 */

__int64 __fastcall std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::_Insert_unverified<unsigned int const,std::_Not_a_node_tag>(
        _QWORD *a1,
        __int64 a2,
        const unsigned __int8 *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  _DWORD *v7; // r11
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
  __int64 *v21; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v22[4]; // [rsp+28h] [rbp-20h] BYREF

  v5 = std::_Fnv1a_append_bytes((__int64)a1, a3, 4uLL) & a1[6];
  v6 = *std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
          (__int64)a1,
          v22,
          v5);
  while ( v6 != *(_QWORD *)(a1[3] + 16 * v5) )
  {
    v6 = *(_QWORD *)(v6 + 8);
    if ( *v7 == *(_DWORD *)(v6 + 16) )
    {
      *(_QWORD *)a2 = v6;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::_Buy_if_not_node<unsigned int const>(
    (__int64)a1,
    &v21,
    v7);
  v9 = v21;
  v10 = *v21;
  if ( v6 != *v21 )
  {
    *(_QWORD *)v21[1] = v10;
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
    std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::_Check_size();
    *(_QWORD *)a2 = v9;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::erase(
      a1,
      v22,
      v21);
    throw;
  }
  return result;
}
