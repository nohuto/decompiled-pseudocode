/*
 * XREFs of ?GetPropertyValue@DataProviderManager@@QEAAJPEAVCDataSourceReader@@_K1IPEAVCExpressionValue@@@Z @ 0x180166658
 * Callers:
 *     ?GetProperty@CDataSourceReader@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801C0200 (-GetProperty@CDataSourceReader@@UEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800BFC74 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@IPEAVCExpressionValue@@@Z @ 0x180181B0C (-GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@IPEAVCExpressionValue@@@Z.c)
 *     ?GetDataSource@DataProviderProxy@@QEAAPEAVBamoDataSourceProxy@@_K@Z @ 0x1801829FC (-GetDataSource@DataProviderProxy@@QEAAPEAVBamoDataSourceProxy@@_K@Z.c)
 */

int __fastcall DataProviderManager::GetPropertyValue(
        DataProviderManager *this,
        struct CDataSourceReader *a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        struct CExpressionValue *a6)
{
  __int64 appended; // rax
  _QWORD *v10; // r11
  __int64 v11; // r8
  __int64 *v12; // rdx
  __int64 v13; // r10
  __int64 *i; // rcx
  __int64 *v15; // rax
  __int64 v16; // rdx
  DataSourceProxy *DataSource; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v20; // [rsp+40h] [rbp+18h] BYREF

  v20 = a3;
  appended = std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v20, 8uLL);
  v11 = v10[8];
  v12 = (__int64 *)v10[6];
  v13 = 2 * (v10[11] & appended);
  for ( i = *(__int64 **)(v11 + 16 * (v10[11] & appended)); ; i = (__int64 *)*i )
  {
    v15 = *(__int64 **)(v11 + 8 * v13) == v12 ? (__int64 *)v10[6] : **(__int64 ***)(v11 + 8 * v13 + 8);
    if ( i == v15 )
      break;
    if ( i[2] == a3 )
      goto LABEL_9;
  }
  i = (__int64 *)v10[6];
LABEL_9:
  if ( i == v12 )
  {
    v16 = 318LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)0x80004005LL);
    return -2147467259;
  }
  DataSource = DataProviderProxy::GetDataSource((DataProviderProxy *)i[3], a4);
  if ( !DataSource )
  {
    v16 = 321LL;
    goto LABEL_11;
  }
  return DataSourceProxy::GetPropertyValue(DataSource, a2, a5, a6);
}
