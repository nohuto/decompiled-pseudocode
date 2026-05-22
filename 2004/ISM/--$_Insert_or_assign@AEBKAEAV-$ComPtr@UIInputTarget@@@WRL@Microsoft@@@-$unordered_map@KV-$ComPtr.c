/*
 * XREFs of ??$_Insert_or_assign@AEBKAEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@Z @ 0x1800ACCF4
 * Callers:
 *     _lambda_a3b8ebf0ea7227d18a15fa2b24c62f92_::operator() @ 0x1800412F8 (_lambda_a3b8ebf0ea7227d18a15fa2b24c62f92_--operator().c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000F088 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x180045248 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     ??$_Insert@AEBKAEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@?$list@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBKAEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@Z @ 0x1800ACAA4 (--$_Insert@AEBKAEAV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@-$list@U-$pair@$$CBKV-$ComPtr@UIInpu.c)
 *     ??$_Insert_unverified@AEAU?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@std@@@1@@Z @ 0x1800AD42C (--$_Insert_unverified@AEAU-$pair@$$CBKV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@V-$_List_un.c)
 */

__int64 __fastcall std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::_Insert_or_assign<unsigned long const &,Microsoft::WRL::ComPtr<IInputTarget> &>(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 *a3,
        __int64 *a4)
{
  __int64 v8; // r11
  __int64 i; // rbx
  _QWORD **v10; // rdi
  __int64 *v11; // rdx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v8 = a1[6] & std::_Fnv1a_append_bytes((__int64)a1, a3, 4uLL);
  for ( i = *(_QWORD *)(a1[3] + 16 * v8);
        i != *std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
                (__int64)a1,
                &v13,
                v8);
        i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 16) == *(_DWORD *)a3 )
    {
      v10 = (_QWORD **)(a1 + 1);
      v11 = (__int64 *)a1[1];
      goto LABEL_7;
    }
  }
  v10 = (_QWORD **)(a1 + 1);
  i = a1[1];
  v11 = (__int64 *)i;
LABEL_7:
  if ( (__int64 *)i == v11 )
  {
    std::list<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>::_Insert<unsigned long const &,Microsoft::WRL::ComPtr<IInputTarget> &>(
      (__int64)v10,
      *v11,
      a3,
      a4);
    std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Insert_unverified<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IInputTarget>>>>>>(
      a1,
      a2,
      **v10 + 16LL);
  }
  else
  {
    Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)(i + 24), a4);
    *(_QWORD *)a2 = i;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
