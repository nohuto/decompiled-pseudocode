/*
 * XREFs of ?GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@IPEAVCExpressionValue@@@Z @ 0x180181B0C
 * Callers:
 *     ?GetPropertyValue@DataProviderManager@@QEAAJPEAVCDataSourceReader@@_K1IPEAVCExpressionValue@@@Z @ 0x180166658 (-GetPropertyValue@DataProviderManager@@QEAAJPEAVCDataSourceReader@@_K1IPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DoesReaderHaveAccess@DataSourceProxy@@AEAA_NPEAVCDataSourceReader@@@Z @ 0x180181858 (-DoesReaderHaveAccess@DataSourceProxy@@AEAA_NPEAVCDataSourceReader@@@Z.c)
 *     ?GetPropertyValue@DataSourcePropertySet@@QEAAJIPEAVCExpressionValue@@@Z @ 0x1801818AC (-GetPropertyValue@DataSourcePropertySet@@QEAAJIPEAVCExpressionValue@@@Z.c)
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
    (void *)0x174,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\datasourceproxy.cpp",
    (const char *)0x80004005LL);
  return 2147500037LL;
}
