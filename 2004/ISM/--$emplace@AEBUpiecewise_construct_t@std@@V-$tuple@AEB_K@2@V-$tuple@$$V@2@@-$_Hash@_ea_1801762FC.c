/*
 * XREFs of ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801762FC
 * Callers:
 *     ??$_Try_emplace@AEB_K$$V@?$unordered_map@_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@_K@std@@U?$equal_to@_K@5@V?$allocator@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x180176250 (--$_Try_emplace@AEB_K$$V@-$unordered_map@_KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@U-$hash@_K@s.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Insert_unverified@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@1@@Z @ 0x1801760B8 (--$_Insert_unverified@U-$pair@$$CB_KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@V-$_List_unch.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<unsigned __int64 const &>,std::tuple<>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD **a4)
{
  const unsigned __int8 ***v7; // rsi
  __int64 v8; // rbx
  _QWORD *v9; // rdi
  _QWORD *v10; // rax

  v7 = (const unsigned __int8 ***)(a1 + 8);
  v8 = **(_QWORD **)(a1 + 8);
  if ( *(_QWORD *)(a1 + 16) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("list<T> too long");
  v9 = *(_QWORD **)(v8 + 8);
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  v10[2] = **a4;
  v10[3] = 0LL;
  *v10 = v8;
  v10[1] = v9;
  v7[1] = (const unsigned __int8 **)((char *)v7[1] + 1);
  *(_QWORD *)(v8 + 8) = v10;
  *v9 = v10;
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Insert_unverified<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>>>>>(
    a1,
    a2,
    **v7 + 16,
    **v7);
  return a2;
}
