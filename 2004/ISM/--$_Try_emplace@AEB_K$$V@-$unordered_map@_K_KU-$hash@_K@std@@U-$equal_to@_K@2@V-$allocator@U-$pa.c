/*
 * XREFs of ??$_Try_emplace@AEB_K$$V@?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x180009A90
 * Callers:
 *     ?NotifyInputSinkParented@@YAHPEAX0@Z @ 0x1800153C0 (-NotifyInputSinkParented@@YAHPEAX0@Z.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@2@AEB_K@Z @ 0x1800099B0 (-lower_bound@-$_Hash@V-$_Umap_traits@_K_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@s.c)
 *     ??$_Insert_unverified@U?$pair@$$CB_K_K@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@_K_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CB_K_K@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@1@@Z @ 0x180009B60 (--$_Insert_unverified@U-$pair@$$CB_K_K@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_si.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CA78 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::unordered_map<unsigned __int64,unsigned __int64>::_Try_emplace<unsigned __int64 const &,>(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  __int64 *v6; // rbx
  __int64 v7; // rbx
  _QWORD *v8; // rsi
  _QWORD *v9; // rax
  __int64 *v11; // [rsp+60h] [rbp+8h] BYREF

  std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::lower_bound(
    a1,
    &v11,
    a3);
  v6 = (__int64 *)a1[1];
  if ( v11 == v6 )
  {
    v7 = *v6;
    if ( a1[2] == 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("list<T> too long");
    v8 = *(_QWORD **)(v7 + 8);
    v9 = operator new(0x20uLL);
    v9[2] = *(_QWORD *)a3;
    v9[3] = 0LL;
    *v9 = v7;
    v9[1] = v8;
    ++a1[2];
    *(_QWORD *)(v7 + 8) = v9;
    *v8 = v9;
    std::_Hash<std::_Umap_traits<unsigned __int64,unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,unsigned __int64>>,0>>::_Insert_unverified<std::pair<unsigned __int64 const,unsigned __int64>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,unsigned __int64>>>>>(
      a1,
      a2,
      *(_QWORD *)a1[1] + 16LL);
  }
  else
  {
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
