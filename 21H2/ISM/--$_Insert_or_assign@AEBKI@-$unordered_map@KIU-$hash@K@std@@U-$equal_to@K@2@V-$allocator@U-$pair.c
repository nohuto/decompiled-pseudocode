/*
 * XREFs of ??$_Insert_or_assign@AEBKI@?$unordered_map@KIU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKI@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKI@std@@@std@@@std@@@std@@_N@1@AEBK$$QEAI@Z @ 0x1800AD198
 * Callers:
 *     ?DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@@Z @ 0x1800AF6C0 (-DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$ComPtr@UIIn.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000D864 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x180046088 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     ??$_Insert@AEBKI@?$list@U?$pair@$$CBKI@std@@V?$allocator@U?$pair@$$CBKI@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKI@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBK$$QEAI@Z @ 0x1800ACF1C (--$_Insert@AEBKI@-$list@U-$pair@$$CBKI@std@@V-$allocator@U-$pair@$$CBKI@std@@@2@@std@@QEAAXV-$_L.c)
 *     ??$_Insert_unverified@U?$pair@$$CBKG@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKG@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KGV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKG@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKG@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBKG@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKG@std@@@std@@@std@@@1@@Z @ 0x1800AD4C4 (--$_Insert_unverified@U-$pair@$$CBKG@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simp.c)
 */

__int64 __fastcall std::unordered_map<unsigned long,unsigned int>::_Insert_or_assign<unsigned long const &,unsigned int>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        _DWORD *a4)
{
  __int64 v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // r10
  _QWORD **v11; // rdi
  __int64 *v12; // rdx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v8 = *(_QWORD *)(a1 + 48) & std::_Fnv1a_append_bytes(a1, a3, 4uLL);
  while ( 1 )
  {
    v9 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
           a1,
           &v14,
           v8);
    if ( v10 == *v9 )
      break;
    if ( *(_DWORD *)(v10 + 16) == *(_DWORD *)a3 )
    {
      v11 = (_QWORD **)(a1 + 8);
      v12 = *(__int64 **)(a1 + 8);
      goto LABEL_6;
    }
  }
  v11 = (_QWORD **)(a1 + 8);
  v10 = *(_QWORD *)(a1 + 8);
  v12 = (__int64 *)v10;
LABEL_6:
  if ( (__int64 *)v10 == v12 )
  {
    std::list<std::pair<unsigned long const,unsigned int>>::_Insert<unsigned long const &,unsigned int>(
      (__int64)v11,
      *v12,
      a3,
      a4);
    std::_Hash<std::_Umap_traits<unsigned long,unsigned short,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned short>>,0>>::_Insert_unverified<std::pair<unsigned long const,unsigned short>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,unsigned short>>>>>(
      a1,
      a2,
      **v11 + 16LL);
  }
  else
  {
    *(_DWORD *)(v10 + 20) = *a4;
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
