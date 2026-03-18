/*
 * XREFs of ?PostExpressionsUpdated@DataProviderManager@@QEAAXXZ @ 0x1800D6CE4
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18007D2F8 (-PreRender@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@PEAX@2@PEAU32@@Z @ 0x180195C0C (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V-$_.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEB_K@Z @ 0x1801BDA94 (--$find@X@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V-$_Uhash_co.c)
 */

void __fastcall DataProviderManager::PostExpressionsUpdated(DataProviderManager *this)
{
  _QWORD *v1; // r14
  _QWORD *i; // rbx
  _QWORD *v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = (_QWORD *)*((_QWORD *)this + 6);
  for ( i = (_QWORD *)*v1; i != v1; i = (_QWORD *)*i )
  {
    v3 = (_QWORD *)i[3];
    v4 = v3[18];
    v5 = v3[19];
    if ( v4 != v5 )
    {
      do
      {
        std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::find<void>(
          v3 + 10,
          &v6,
          v4);
        if ( v6 != v3[11] )
        {
          *(_QWORD *)(*(_QWORD *)(v6 + 24) + 192LL) = 0LL;
          std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::_Unchecked_erase(v3 + 10);
        }
        v4 += 8LL;
      }
      while ( v4 != v5 );
      v4 = v3[18];
    }
    v3[19] = v4;
  }
}
