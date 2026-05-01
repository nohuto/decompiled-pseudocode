/*
 * XREFs of ?RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEBV?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@8@@Z @ 0x1800CB704
 * Callers:
 *     ?RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z @ 0x1800CB898 (-RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z.c)
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x1800CBB14 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 * Callees:
 *     ??$assign@V?$_Deque_unchecked_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@std@@X@?$deque@_KV?$allocator@_K@std@@@std@@QEAAXV?$_Deque_unchecked_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@1@0@Z @ 0x1800C56B0 (--$assign@V-$_Deque_unchecked_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@_K@std@@@std@@.c)
 *     ??0?$deque@_KV?$allocator@_K@std@@@std@@QEAA@XZ @ 0x1800C6C50 (--0-$deque@_KV-$allocator@_K@std@@@std@@QEAA@XZ.c)
 *     ??1?$deque@_KV?$allocator@_K@std@@@std@@QEAA@XZ @ 0x1800C7898 (--1-$deque@_KV-$allocator@_K@std@@@std@@QEAA@XZ.c)
 *     ??A?$deque@_KV?$allocator@_K@std@@@std@@QEAAAEA_K_K@Z @ 0x1800C7DE0 (--A-$deque@_KV-$allocator@_K@std@@@std@@QEAAAEA_K_K@Z.c)
 *     ??A?$unordered_map@Uguid@winrt@@_KU?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@@std@@QEAAAEA_KAEBUguid@winrt@@@Z @ 0x1800C7E48 (--A-$unordered_map@Uguid@winrt@@_KU-$hash@Uguid@winrt@@@std@@U-$equal_to@Uguid@winrt@@@4@V-$allo.c)
 *     ?_Push_back_internal@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXAEB_K@Z @ 0x1800CD4A4 (-_Push_back_internal@-$deque@_KV-$allocator@_K@std@@@std@@AEAAXAEB_K@Z.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@9@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@@std@@@std@@@std@@@std@@V12@@2@AEBUguid@winrt@@@Z @ 0x1800CDB20 (-equal_range@-$_Hash@V-$_Umap_traits@Uguid@winrt@@UWindowTabView@Shell@UI@Internal@Windows@2@V-$.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@2@0@Z @ 0x1800CDCB0 (-erase@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@winrt@@U-$hash@Uguid@winrt.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@_KUguid@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@$0A@@std@@@std@@QEBA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1800CE620 (-lower_bound@-$_Hash@V-$_Umap_traits@_KUguid@winrt@@V-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveTabsFromWindowOrder(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3)
{
  unsigned __int64 j; // rbx
  void **i; // rsi
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rax
  void **k; // rax
  __int128 v12; // [rsp+20h] [rbp-50h] BYREF
  void **v13; // [rsp+30h] [rbp-40h] BYREF
  void **v14; // [rsp+38h] [rbp-38h]
  void *v15[3]; // [rsp+40h] [rbp-30h] BYREF
  void **v16; // [rsp+58h] [rbp-18h]
  __int64 v17; // [rsp+60h] [rbp-10h]
  unsigned __int64 v18; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v19; // [rsp+C8h] [rbp+58h] BYREF

  std::deque<unsigned __int64>::deque<unsigned __int64>(v15);
  j = 0LL;
  v18 = 0LL;
  for ( i = (void **)(a1 + 672); j < *(_QWORD *)(a1 + 704); v18 = j )
  {
    std::_Hash<std::_Umap_traits<unsigned __int64,winrt::guid,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::guid>>,0>>::lower_bound(
      a3,
      &v19,
      &v18);
    v8 = *(_QWORD *)(a3 + 8);
    if ( v19 != v8 )
    {
      v9 = v17;
      std::_Hash<std::_Umap_traits<unsigned __int64,winrt::guid,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::guid>>,0>>::lower_bound(
        a3,
        &v12,
        &v18);
      if ( (_QWORD)v12 == v8 )
      {
        std::_Xout_of_range("invalid unordered_map<K, T> key");
        __debugbreak();
        goto LABEL_10;
      }
      *(_QWORD *)std::unordered_map<winrt::guid,unsigned __int64>::operator[](a1 + 712, (_OWORD *)(v12 + 24)) = v9;
      v10 = std::deque<unsigned __int64>::operator[]((_QWORD *)(a1 + 672), j);
      std::deque<unsigned __int64>::_Push_back_internal(v15, v10);
    }
    ++j;
  }
  if ( i != v15 )
  {
    *(_QWORD *)&v12 = v15;
    *((_QWORD *)&v12 + 1) = (char *)v16 + v17;
    v13 = v15;
    v14 = v16;
    std::deque<unsigned __int64>::assign<std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>,void>(
      (_QWORD *)(a1 + 672),
      (__int64 *)&v13,
      &v12);
  }
  i = (void **)a2[1];
  for ( j = *a2; (void **)j != i; j += 16LL )
  {
LABEL_10:
    std::_Hash<std::_Umap_traits<winrt::guid,winrt::Windows::Internal::UI::Shell::WindowTabView,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::Windows::Internal::UI::Shell::WindowTabView>>,0>>::equal_range(
      a1 + 712,
      &v13,
      j);
    for ( k = v13; k != v14; k = (void **)*k )
      ;
    std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::erase(
      a1 + 712,
      &v18,
      v13,
      v14);
  }
  std::deque<unsigned __int64>::~deque<unsigned __int64>(v15);
}
