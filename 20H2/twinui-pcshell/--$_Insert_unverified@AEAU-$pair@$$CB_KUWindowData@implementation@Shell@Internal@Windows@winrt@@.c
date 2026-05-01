/*
 * XREFs of ??$_Insert_unverified@AEAU?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@1@@Z @ 0x1800C68F4
 * Callers:
 *     ??$_Try_emplace@AEB_KAEAU?$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAUWindowTabDataModel@Shell@UI@Internal@Windows@2@AEAUevent_token@2@AEAU82@@?$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U?$hash@_K@std@@U?$equal_to@_K@8@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@_N@1@AEB_KAEAU?$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAUWindowTabDataModel@Shell@UI@Internal@Windows@4@AEAUevent_token@4@3@Z @ 0x1800C70CC (--$_Try_emplace@AEB_KAEAU-$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800CE974 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winr.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180073B14 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAAXXZ @ 0x1800CE464 (-_Check_size@-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?_End@?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@_K@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x1800CE848 (-_End@-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$al.c)
 *     ?erase@?$list@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@@Z @ 0x1800CFDAC (-erase@-$list@U-$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@V-$al.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::_Insert_unverified<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>>>>(
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
  appended = std::_Fnv1a_append_bytes(a1, a3, 8uLL);
  v9 = *(_QWORD *)std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::_End(
                    v8,
                    &v28,
                    appended & *(_QWORD *)(v8 + 48));
  while ( 1 )
  {
    v12 = *(_QWORD *)(v11 + 24);
    if ( v9 == *(_QWORD *)(v12 + 16 * v10) )
      break;
    v9 = *(_QWORD *)(v9 + 8);
    if ( *(_QWORD *)a3 == *(_QWORD *)(v9 + 16) )
    {
      std::list<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>::erase(
        v11 + 8,
        &v28,
        a4);
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
    std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::_Check_size();
    *(_QWORD *)a2 = a4;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    iter = (_QWORD *)std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Make_iter(
                       v24,
                       &v28,
                       v29);
    std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>>>,void>(
      a1,
      &v26,
      *iter);
    throw;
  }
  return result;
}
