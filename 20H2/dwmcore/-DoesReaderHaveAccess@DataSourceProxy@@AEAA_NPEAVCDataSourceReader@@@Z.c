/*
 * XREFs of ?DoesReaderHaveAccess@DataSourceProxy@@AEAA_NPEAVCDataSourceReader@@@Z @ 0x18017FC08
 * Callers:
 *     ?GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@IPEAVCExpressionValue@@@Z @ 0x18017FEBC (-GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@IPEAVCExpressionValue@@@Z.c)
 *     ?RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x1801802D8 (-RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall DataSourceProxy::DoesReaderHaveAccess(DataSourceProxy *this, struct CDataSourceReader *a2)
{
  int v3; // edi

  v3 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 40LL))((char *)this + 8);
  return !v3 || (*(unsigned int (__fastcall **)(struct CDataSourceReader *))(*(_QWORD *)a2 + 152LL))(a2) == v3;
}
