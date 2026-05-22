/*
 * XREFs of ??$_Insert_unverified@AEAU?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@EUTargetingInfo@KeyboardProcessor@@V?$_Uhash_compare@EU?$hash@E@std@@U?$equal_to@E@2@@std@@V?$allocator@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@1@@Z @ 0x1800477DC
 * Callers:
 *     ??$emplace@AEBEUTargetingInfo@KeyboardProcessor@@@?$_Hash@V?$_Umap_traits@EUTargetingInfo@KeyboardProcessor@@V?$_Uhash_compare@EU?$hash@E@std@@U?$equal_to@E@2@@std@@V?$allocator@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@_N@1@AEBE$$QEAUTargetingInfo@KeyboardProcessor@@@Z @ 0x180047974 (--$emplace@AEBEUTargetingInfo@KeyboardProcessor@@@-$_Hash@V-$_Umap_traits@EUTargetingInfo@Keyboa.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@EUTargetingInfo@KeyboardProcessor@@V?$_Uhash_compare@EU?$hash@E@std@@U?$equal_to@E@2@@std@@V?$allocator@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180047E58 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@EUTargetingInfo@KeyboardProcessor@@V-$_Uhash_compare@EU-.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x180045248 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@EUTargetingInfo@KeyboardProcessor@@V?$_Uhash_compare@EU?$hash@E@std@@U?$equal_to@E@2@@std@@V?$allocator@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@4@$0A@@std@@@std@@IEAAXXZ @ 0x180047DB0 (-_Check_size@-$_Hash@V-$_Umap_traits@EUTargetingInfo@KeyboardProcessor@@V-$_Uhash_compare@EU-$ha.c)
 *     ?erase@?$list@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@V?$allocator@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@2@@Z @ 0x180047F58 (-erase@-$list@U-$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@V-$allocator@U-$pair@$$CBEUTa.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned char,KeyboardProcessor::TargetingInfo,std::_Uhash_compare<unsigned char,std::hash<unsigned char>,std::equal_to<unsigned char>>,std::allocator<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>,0>>::_Insert_unverified<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>(
        __int64 a1,
        __int64 a2,
        const unsigned __int8 *a3,
        __int64 a4)
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
  __int64 *v19; // r10
  __int64 *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *iter; // rax
  __int64 v26; // [rsp+20h] [rbp-28h] BYREF
  __int64 v28; // [rsp+60h] [rbp+18h] BYREF
  __int64 v29; // [rsp+68h] [rbp+20h]

  v29 = a4;
  appended = std::_Fnv1a_append_bytes(a1, a3, 1uLL);
  v9 = *std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
          v8,
          &v28,
          appended & *(_QWORD *)(v8 + 48));
  while ( 1 )
  {
    v12 = *(_QWORD *)(v11 + 24);
    if ( v9 == *(_QWORD *)(v12 + 16 * v10) )
      break;
    v9 = *(_QWORD *)(v9 + 8);
    if ( *a3 == *(_BYTE *)(v9 + 16) )
    {
      std::list<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>::erase(v11 + 8, &v28, a4);
      *(_QWORD *)a2 = v9;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  v14 = *(_QWORD *)a4;
  if ( v9 != *(_QWORD *)a4 )
  {
    **(_QWORD **)(a4 + 8) = v14;
    **(_QWORD **)(v14 + 8) = v9;
    **(_QWORD **)(v9 + 8) = a4;
    v15 = *(_QWORD *)(v9 + 8);
    *(_QWORD *)(v9 + 8) = *(_QWORD *)(v14 + 8);
    *(_QWORD *)(v14 + 8) = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = v15;
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
    v19 = (__int64 *)(v12 + 16 * v10);
    if ( v17 == v9 )
    {
      *v19 = a4;
    }
    else
    {
      v20 = (__int64 *)v19[1];
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
    std::_Hash<std::_Umap_traits<unsigned char,KeyboardProcessor::TargetingInfo,std::_Uhash_compare<unsigned char,std::hash<unsigned char>,std::equal_to<unsigned char>>,std::allocator<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>,0>>::_Check_size();
    *(_QWORD *)a2 = a4;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    iter = std::_Hash<std::_Umap_traits<unsigned long,ResizeProcessor::InitialPointerInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>>,0>>::_Make_iter(
             v24,
             &v28,
             v29);
    std::_Hash<std::_Umap_traits<unsigned char,KeyboardProcessor::TargetingInfo,std::_Uhash_compare<unsigned char,std::hash<unsigned char>,std::equal_to<unsigned char>>,std::allocator<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>,void>(
      a1,
      &v26,
      *iter);
    throw;
  }
  return result;
}
