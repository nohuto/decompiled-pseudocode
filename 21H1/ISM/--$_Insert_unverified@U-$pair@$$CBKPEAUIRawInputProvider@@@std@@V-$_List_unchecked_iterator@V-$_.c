/*
 * XREFs of ??$_Insert_unverified@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBKPEAUIRawInputProvider@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@std@@@std@@@1@@Z @ 0x1800291F4
 * Callers:
 *     ??$_Insert_or_assign@AEBKAEAPEAUIRawInputProvider@@@?$unordered_map@KPEAUIRawInputProvider@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAPEAUIRawInputProvider@@@Z @ 0x18002912C (--$_Insert_or_assign@AEBKAEAPEAUIRawInputProvider@@@-$unordered_map@KPEAUIRawInputProvider@@U-$h.c)
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180029424 (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Hash@V-$_Umap_trait.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@@2@_K@Z @ 0x180003BC0 (-_End@-$_Hash@V-$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x180029304 (-_Check_size@-$_Hash@V-$_Umap_traits@KPEAUDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal.c)
 *     ?erase@?$list@U?$pair@$$CBKUtagPOINTF@@@std@@V?$allocator@U?$pair@$$CBKUtagPOINTF@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINTF@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINTF@@@std@@@std@@@std@@@2@@Z @ 0x180088604 (-erase@-$list@U-$pair@$$CBKUtagPOINTF@@@std@@V-$allocator@U-$pair@$$CBKUtagPOINTF@@@std@@@2@@std.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::_Insert_unverified<std::pair<unsigned long const,IRawInputProvider *>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,IRawInputProvider *>>>>>(
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
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 **v17; // r10
  __int64 **v19; // rax
  __int64 *v20; // rcx
  __int64 v21; // [rsp+50h] [rbp+18h] BYREF
  __int64 *v22; // [rsp+58h] [rbp+20h]

  v22 = a4;
  appended = std::_Fnv1a_append_bytes(a1, a3, 4uLL);
  v9 = *std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>,0>>::_End(
          v8,
          &v21,
          appended & *(_QWORD *)(v8 + 48));
  while ( 1 )
  {
    v12 = *(_QWORD *)(v11 + 24);
    if ( v9 == *(_QWORD *)(v12 + 16 * v10) )
      break;
    v9 = *(_QWORD *)(v9 + 8);
    if ( *(_DWORD *)a3 == *(_DWORD *)(v9 + 16) )
    {
      std::list<std::pair<unsigned long const,tagPOINTF>>::erase(v11 + 8, &v21, a4);
      *(_QWORD *)a2 = v9;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  v13 = *a4;
  if ( v9 != *a4 )
  {
    *(_QWORD *)a4[1] = v13;
    **(_QWORD **)(v13 + 8) = v9;
    **(_QWORD **)(v9 + 8) = a4;
    v14 = *(_QWORD *)(v9 + 8);
    *(_QWORD *)(v9 + 8) = *(_QWORD *)(v13 + 8);
    *(_QWORD *)(v13 + 8) = a4[1];
    a4[1] = v14;
    v12 = *(_QWORD *)(v11 + 24);
  }
  v15 = 2 * v10;
  v16 = *(_QWORD *)(v12 + 16 * v10);
  if ( v16 == *(_QWORD *)(v11 + 8) )
  {
    *(_QWORD *)(v12 + 16 * v10) = a4;
    *(_QWORD *)(*(_QWORD *)(v11 + 24) + 16 * v10 + 8) = a4;
  }
  else
  {
    v17 = (__int64 **)(v12 + 16 * v10);
    if ( v16 == v9 )
    {
      *v17 = a4;
    }
    else
    {
      v19 = (__int64 **)v17[1];
      v20 = *v19;
      v17[1] = *v19;
      if ( v20 != a4 )
        *(_QWORD *)(*(_QWORD *)(v11 + 24) + 8 * v15 + 8) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 24) + 8 * v15 + 8)
                                                                     + 8LL);
    }
  }
  std::_Hash<std::_Umap_traits<unsigned long,DeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DeviceInfo *>>,0>>::_Check_size(v11);
  *(_QWORD *)a2 = a4;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
