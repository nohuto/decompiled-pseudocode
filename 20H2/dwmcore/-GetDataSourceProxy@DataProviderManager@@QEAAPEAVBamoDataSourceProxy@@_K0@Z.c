/*
 * XREFs of ?GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z @ 0x1801647CC
 * Callers:
 *     ?RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x1800D73BC (-RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataP.c)
 *     ?UnregisterReaderForDataSource@DataProviderManager@@QEAAJ_K0PEAVCDataSourceReader@@@Z @ 0x180164B50 (-UnregisterReaderForDataSource@DataProviderManager@@QEAAJ_K0PEAVCDataSourceReader@@@Z.c)
 *     ?ProcessSetLookupId@CDataSourceReader@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DATASOURCEREADER_SETLOOKUPID@@@Z @ 0x1801BE350 (-ProcessSetLookupId@CDataSourceReader@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DATASOURCEREADER_S.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800BF834 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?GetDataSource@DataProviderProxy@@QEAAPEAVBamoDataSourceProxy@@_K@Z @ 0x180180DAC (-GetDataSource@DataProviderProxy@@QEAAPEAVBamoDataSourceProxy@@_K@Z.c)
 */

struct BamoDataSourceProxy *__fastcall DataProviderManager::GetDataSourceProxy(
        DataProviderManager *this,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 appended; // rax
  _QWORD *v6; // r11
  __int64 v7; // r10
  __int64 *v8; // rdx
  __int64 v9; // r9
  __int64 *i; // rcx
  __int64 *v11; // rax
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  v13 = a2;
  appended = std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v13, 8uLL);
  v7 = v6[8];
  v8 = (__int64 *)v6[6];
  v9 = 2 * (v6[11] & appended);
  for ( i = *(__int64 **)(v7 + 16 * (v6[11] & appended)); ; i = (__int64 *)*i )
  {
    v11 = *(__int64 **)(v7 + 8 * v9) == v8 ? (__int64 *)v6[6] : **(__int64 ***)(v7 + 8 * v9 + 8);
    if ( i == v11 )
      break;
    if ( i[2] == a2 )
      goto LABEL_9;
  }
  i = (__int64 *)v6[6];
LABEL_9:
  if ( i == v8 )
    return 0LL;
  else
    return DataProviderProxy::GetDataSource((DataProviderProxy *)i[3], a3);
}
