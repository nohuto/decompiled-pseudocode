/*
 * XREFs of ??$_Insert_or_assign@AEBKAEAPEAUIRawInputProvider@@@?$unordered_map@KPEAUIRawInputProvider@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAPEAUIRawInputProvider@@@Z @ 0x18002918C
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x180029000 (-OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@@2@_K@Z @ 0x180003BC0 (-_End@-$_Hash@V-$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$emplace_front@AEBKAEAPEAUIRawInputProvider@@@?$list@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@2@@std@@QEAAAEAU?$pair@$$CBKPEAUIRawInputProvider@@@1@AEBKAEAPEAUIRawInputProvider@@@Z @ 0x180028F5C (--$emplace_front@AEBKAEAPEAUIRawInputProvider@@@-$list@U-$pair@$$CBKPEAUIRawInputProvider@@@std@.c)
 *     ??$_Insert_unverified@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBKPEAUIRawInputProvider@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@std@@@std@@@1@@Z @ 0x180029254 (--$_Insert_unverified@U-$pair@$$CBKPEAUIRawInputProvider@@@std@@V-$_List_unchecked_iterator@V-$_.c)
 */

__int64 __fastcall std::unordered_map<unsigned long,IRawInputProvider *>::_Insert_or_assign<unsigned long const &,IRawInputProvider * &>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        _QWORD *a4)
{
  __int64 v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // r10
  __int64 **v11; // rdi
  __int64 v12; // rax
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v8 = *(_QWORD *)(a1 + 48) & std::_Fnv1a_append_bytes(a1, a3, 4uLL);
  do
  {
    v9 = std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>,0>>::_End(
           a1,
           &v14,
           v8);
    if ( v10 == *v9 )
    {
      v11 = (__int64 **)(a1 + 8);
      v10 = *(_QWORD *)(a1 + 8);
      v12 = v10;
      goto LABEL_4;
    }
  }
  while ( *(_DWORD *)(v10 + 16) != *(_DWORD *)a3 );
  v11 = (__int64 **)(a1 + 8);
  v12 = *(_QWORD *)(a1 + 8);
LABEL_4:
  if ( v10 == v12 )
  {
    std::list<std::pair<unsigned long const,IRawInputProvider *>>::emplace_front<unsigned long const &,IRawInputProvider * &>(
      v11,
      a3,
      a4);
    std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::_Insert_unverified<std::pair<unsigned long const,IRawInputProvider *>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,IRawInputProvider *>>>>>(
      a1,
      a2,
      **v11 + 16);
  }
  else
  {
    *(_QWORD *)(v10 + 24) = *a4;
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
