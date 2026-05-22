/*
 * XREFs of ??$_Try_emplace@AEBK$$V@?$unordered_map@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x18011C23C
 * Callers:
 *     ?RegisterClient@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVBamoControllerNavigationClientProxy@@@Z @ 0x18011D470 (-RegisterClient@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVB.c)
 * Callees:
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800F77BC (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Hash@V_ea_1800F77BC.c)
 */

__int64 __fastcall std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>::_Try_emplace<unsigned long const &,>(
        _QWORD *a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 v5; // rdx
  unsigned __int64 i; // r9
  __int64 v7; // rax
  __int64 v8; // r11
  __int64 v9; // r9
  __int64 *v10; // rdx
  __int64 v11; // r9
  __int64 *j; // rax
  __int64 *v13; // rcx
  __int64 *v14; // rcx
  _DWORD *v16; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v7 = *((unsigned __int8 *)a3 + i);
    v5 = 0x100000001B3LL * (v7 ^ v5);
  }
  v8 = a1[3];
  v9 = v5 & a1[6];
  v10 = (__int64 *)a1[1];
  v11 = 2 * v9;
  for ( j = *(__int64 **)(v8 + 8 * v11); ; j = (__int64 *)*j )
  {
    v13 = *(__int64 **)(v8 + 8 * v11) == v10 ? (__int64 *)a1[1] : **(__int64 ***)(v8 + 8 * v11 + 8);
    if ( j == v13 )
      break;
    if ( *((_DWORD *)j + 4) == *a3 )
    {
      v14 = j;
      goto LABEL_12;
    }
  }
  j = (__int64 *)a1[1];
  v14 = j;
LABEL_12:
  if ( v14 == v10 )
  {
    v16 = a3;
    std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
      (__int64)a1,
      a2,
      (__int64)a3,
      &v16);
  }
  else
  {
    *(_QWORD *)a2 = j;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
