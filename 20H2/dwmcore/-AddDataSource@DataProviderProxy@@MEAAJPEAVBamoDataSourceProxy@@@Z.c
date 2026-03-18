/*
 * XREFs of ?AddDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z @ 0x180180D00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ??$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z @ 0x1801642B4 (--$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z.c)
 *     ?CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataSourceProxy@@@Z @ 0x1801646FC (-CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataS.c)
 *     ??$_Insert@_KAEAPEAVBamoDataSourceProxy@@@?$list@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@1@$$QEA_KAEAPEAVBamoDataSourceProxy@@@Z @ 0x1801809F4 (--$_Insert@_KAEAPEAVBamoDataSourceProxy@@@-$list@U-$pair@$$CB_KV-$ComPtr@VBamoDataSourceProxy@@@.c)
 *     ??$_Insert_unverified@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@1@@Z @ 0x180180AA0 (--$_Insert_unverified@U-$pair@$$CB_KV-$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@V-$_Li.c)
 */

__int64 __fastcall DataProviderProxy::AddDataSource(DataProviderProxy *this, struct BamoDataSourceProxy *a2)
{
  DataProviderManager *v3; // rcx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 Unique; // [rsp+40h] [rbp+8h] BYREF
  struct BamoDataSourceProxy *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  *((_QWORD *)a2 + 24) = this;
  Unique = DataProviderHelper::GetUniqueId<DataSourceProxy>((__int64)a2);
  std::list<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>::_Insert<unsigned __int64,BamoDataSourceProxy * &>(
    (__int64)this + 88,
    **((_QWORD **)this + 11),
    &Unique,
    (__int64 (__fastcall ****)(_QWORD))&v7);
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::_Insert_unverified<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>>>>(
    (_QWORD *)this + 10,
    (__int64)v5,
    (const unsigned __int8 *)(**((_QWORD **)this + 11) + 16LL),
    **((_QWORD ****)this + 11));
  if ( !v5[8] )
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 1) + 40LL))((char *)this + 8, 2147942583LL);
  v3 = (DataProviderManager *)*((_QWORD *)this + 9);
  if ( v3 )
    DataProviderManager::CheckAndRegisterReadyReaders(v3, this, v7);
  return 0LL;
}
