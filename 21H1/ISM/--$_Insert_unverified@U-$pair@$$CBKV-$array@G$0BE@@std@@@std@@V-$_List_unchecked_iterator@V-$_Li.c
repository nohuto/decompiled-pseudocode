/*
 * XREFs of ??$_Insert_unverified@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KV?$array@G$0BE@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBKV?$array@G$0BE@@std@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@std@@@std@@@1@@Z @ 0x1800348A0
 * Callers:
 *     ??$_Insert_or_assign@AEBKV?$array@G$0BE@@std@@@?$unordered_map@KV?$array@G$0BE@@std@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@std@@@std@@@std@@_N@1@AEBK$$QEAV?$array@G$0BE@@1@@Z @ 0x1800347EC (--$_Insert_or_assign@AEBKV-$array@G$0BE@@std@@@-$unordered_map@KV-$array@G$0BE@@std@@U-$hash@K@2.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@KV?$array@G$0BE@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x180034950 (-_Check_size@-$_Hash@V-$_Umap_traits@KV-$array@G$0BE@@std@@V-$_Uhash_compare@KU-$hash@K@std@@U-$.c)
 *     ?erase@?$list@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@2@@Z @ 0x18009ACC0 (-erase@-$list@U-$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@V-$allocator@U-$pair@$$CBU.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,std::array<unsigned short,20>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::array<unsigned short,20>>>,0>>::_Insert_unverified<std::pair<unsigned long const,std::array<unsigned short,20>>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,std::array<unsigned short,20>>>>>>(
        __int64 a1,
        __int64 a2,
        const unsigned __int8 *a3,
        __int64 *a4)
{
  __int64 appended; // rax
  _QWORD *v8; // r11
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v18; // rdx
  __int64 **v19; // r9
  __int64 **v20; // rax
  __int64 *v21; // rcx
  char v22; // [rsp+50h] [rbp+18h] BYREF
  __int64 *v23; // [rsp+58h] [rbp+20h]

  v23 = a4;
  appended = std::_Fnv1a_append_bytes(a1, a3, 4uLL);
  v9 = appended & v8[6];
  v10 = 2 * v9;
  v11 = v8[3];
  v12 = v8[1];
  v13 = *(_QWORD *)(v11 + 16 * v9);
  if ( v12 != v13 )
  {
    v12 = **(_QWORD **)(v11 + 16 * v9 + 8);
    while ( v12 != v13 )
    {
      v12 = *(_QWORD *)(v12 + 8);
      if ( *(_DWORD *)a3 == *(_DWORD *)(v12 + 16) )
      {
        std::list<std::pair<tagMsgRoutingInfo const,IInputTarget *>>::erase(v8 + 1, &v22, a4);
        *(_QWORD *)a2 = v12;
        *(_BYTE *)(a2 + 8) = 0;
        return a2;
      }
    }
  }
  v14 = *a4;
  if ( v12 != *a4 )
  {
    *(_QWORD *)a4[1] = v14;
    **(_QWORD **)(v14 + 8) = v12;
    **(_QWORD **)(v12 + 8) = a4;
    v18 = *(_QWORD *)(v12 + 8);
    *(_QWORD *)(v12 + 8) = *(_QWORD *)(v14 + 8);
    *(_QWORD *)(v14 + 8) = a4[1];
    a4[1] = v18;
  }
  v15 = v8[3];
  v16 = *(_QWORD *)(v15 + 16 * v9);
  if ( v16 == v8[1] )
  {
    *(_QWORD *)(v15 + 16 * v9) = a4;
    *(_QWORD *)(v8[3] + 16 * v9 + 8) = a4;
  }
  else
  {
    v19 = (__int64 **)(v15 + 16 * v9);
    if ( v16 == v12 )
    {
      *v19 = a4;
    }
    else
    {
      v20 = (__int64 **)v19[1];
      v21 = *v20;
      v19[1] = *v20;
      if ( v21 != a4 )
        *(_QWORD *)(v8[3] + 8 * v10 + 8) = *(_QWORD *)(*(_QWORD *)(v8[3] + 8 * v10 + 8) + 8LL);
    }
  }
  std::_Hash<std::_Umap_traits<unsigned long,std::array<unsigned short,20>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::array<unsigned short,20>>>,0>>::_Check_size(v8);
  *(_QWORD *)a2 = a4;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
