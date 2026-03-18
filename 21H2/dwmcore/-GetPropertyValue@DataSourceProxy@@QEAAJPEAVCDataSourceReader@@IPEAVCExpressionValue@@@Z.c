/*
 * XREFs of ?GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@IPEAVCExpressionValue@@@Z @ 0x1801BC95C
 * Callers:
 *     ?GetPropertyValue@DataProviderManager@@QEAAJPEAVCDataSourceReader@@_K1IPEAVCExpressionValue@@@Z @ 0x180195604 (-GetPropertyValue@DataProviderManager@@QEAAJPEAVCDataSourceReader@@_K1IPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DoesReaderHaveAccess@DataSourceProxy@@AEAA_NPEAVCDataSourceReader@@@Z @ 0x1801BC4A4 (-DoesReaderHaveAccess@DataSourceProxy@@AEAA_NPEAVCDataSourceReader@@@Z.c)
 *     ?GetPropertyValue@DataSourcePropertySet@@QEAAJIPEAVCExpressionValue@@@Z @ 0x1801BC50C (-GetPropertyValue@DataSourcePropertySet@@QEAAJIPEAVCExpressionValue@@@Z.c)
 */

__int64 __fastcall DataSourceProxy::GetPropertyValue(
        DataSourceProxy *this,
        struct CDataSourceReader *a2,
        int a3,
        struct CExpressionValue *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( DataSourceProxy::DoesReaderHaveAccess(this, a2) )
    return DataSourcePropertySet::GetPropertyValue((DataSourceProxy *)((char *)this + 64), a3, a4);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x177,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\datasourceproxy.cpp",
    (const char *)0x80004005LL);
  return 2147500037LL;
}
