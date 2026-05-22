/*
 * XREFs of ??$_Insert_unverified@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KUInitialPointerInfo@ResizeProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@std@@@std@@@1@@Z @ 0x1800457F0
 * Callers:
 *     ??$_Try_emplace@AEBK$$V@?$unordered_map@KUInitialPointerInfo@ResizeProcessor@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x180045988 (--$_Try_emplace@AEBK$$V@-$unordered_map@KUInitialPointerInfo@ResizeProcessor@@U-$hash@K@std@@U-$.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@KUInitialPointerInfo@ResizeProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800460B4 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@KUInitialPointerInfo@ResizeProcessor@@V-$_Uhash_compare@.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000D864 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@KUInitialPointerInfo@ResizeProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x180045EBC (-_Check_size@-$_Hash@V-$_Umap_traits@KUInitialPointerInfo@ResizeProcessor@@V-$_Uhash_compare@KU-.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x180046088 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     ?erase@?$list@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@V?$allocator@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x1800465D0 (-erase@-$list@U-$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@V-$allocator@U-$pair@$$CBK.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,ResizeProcessor::InitialPointerInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>>,0>>::_Insert_unverified<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>>>>>(
        __int64 a1,
        __int64 a2,
        const unsigned __int8 *a3,
        __int64 *a4)
{
  __int64 appended; // rax
  __int64 v8; // r11
  __int64 v9; // rdi
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 **v19; // r10
  __int64 **v20; // rax
  __int64 *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *iter; // rax
  __int64 v26; // [rsp+20h] [rbp-28h] BYREF
  char v28; // [rsp+60h] [rbp+18h] BYREF
  __int64 *v29; // [rsp+68h] [rbp+20h]

  v29 = a4;
  appended = std::_Fnv1a_append_bytes(a1, a3, 4uLL);
  v9 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
                    v8,
                    &v28,
                    appended & *(_QWORD *)(v8 + 48));
  while ( 1 )
  {
    v12 = *(_QWORD *)(v11 + 24);
    if ( v9 == *(_QWORD *)(v12 + 16 * v10) )
      break;
    v9 = *(_QWORD *)(v9 + 8);
    if ( *(_DWORD *)a3 == *(_DWORD *)(v9 + 16) )
    {
      std::list<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>>::erase(v11 + 8, &v28, a4);
      *(_QWORD *)a2 = v9;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  v14 = *a4;
  if ( v9 != *a4 )
  {
    *(_QWORD *)a4[1] = v14;
    **(_QWORD **)(v14 + 8) = v9;
    **(_QWORD **)(v9 + 8) = a4;
    v15 = *(_QWORD *)(v9 + 8);
    *(_QWORD *)(v9 + 8) = *(_QWORD *)(v14 + 8);
    *(_QWORD *)(v14 + 8) = a4[1];
    a4[1] = v15;
    v12 = *(_QWORD *)(v11 + 24);
  }
  v16 = 2 * v10;
  v17 = *(_QWORD *)(v12 + 16 * v10);
  if ( v17 == *(_QWORD *)(v11 + 8) )
  {
    *(_QWORD *)(v12 + 16 * v10) = a4;
    v18 = *(_QWORD *)(v11 + 24);
    *(_QWORD *)(v18 + 16 * v10 + 8) = a4;
  }
  else
  {
    v19 = (__int64 **)(v12 + 16 * v10);
    if ( v17 == v9 )
    {
      *v19 = a4;
    }
    else
    {
      v20 = (__int64 **)v19[1];
      v21 = *v20;
      v19[1] = *v20;
      if ( v21 != a4 )
      {
        v22 = *(_QWORD *)(v11 + 24);
        v23 = *(_QWORD *)(v22 + 8 * v16 + 8);
        *(_QWORD *)(v22 + 8 * v16 + 8) = *(_QWORD *)(v23 + 8);
      }
    }
  }
  try
  {
    std::_Hash<std::_Umap_traits<unsigned long,ResizeProcessor::InitialPointerInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>>,0>>::_Check_size();
    *(_QWORD *)a2 = a4;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    iter = (_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,ResizeProcessor::InitialPointerInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>>,0>>::_Make_iter(
                       v24,
                       &v28,
                       v29);
    std::_Hash<std::_Umap_traits<unsigned long,ResizeProcessor::InitialPointerInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>>>>,void>(
      a1,
      &v26,
      *iter);
    throw;
  }
  return result;
}
