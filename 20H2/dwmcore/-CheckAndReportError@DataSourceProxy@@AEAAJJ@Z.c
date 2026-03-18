/*
 * XREFs of ?CheckAndReportError@DataSourceProxy@@AEAAJJ@Z @ 0x18017FBDC
 * Callers:
 *     ?SetBooleanValue@DataSourceProxy@@MEAAJI_N@Z @ 0x1801803C0 (-SetBooleanValue@DataSourceProxy@@MEAAJI_N@Z.c)
 *     ?SetColorValue@DataSourceProxy@@MEAAJIMMMM@Z @ 0x180180410 (-SetColorValue@DataSourceProxy@@MEAAJIMMMM@Z.c)
 *     ?SetMatrix3x2Value@DataSourceProxy@@MEAAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180180480 (-SetMatrix3x2Value@DataSourceProxy@@MEAAJIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetMatrix4x4Value@DataSourceProxy@@MEAAJIAEBU_D3DMATRIX@@@Z @ 0x1801804D0 (-SetMatrix4x4Value@DataSourceProxy@@MEAAJIAEBU_D3DMATRIX@@@Z.c)
 *     ?SetQuaternionValue@DataSourceProxy@@MEAAJIMMMM@Z @ 0x180180540 (-SetQuaternionValue@DataSourceProxy@@MEAAJIMMMM@Z.c)
 *     ?SetScalarValue@DataSourceProxy@@MEAAJIM@Z @ 0x1801805B0 (-SetScalarValue@DataSourceProxy@@MEAAJIM@Z.c)
 *     ?SetVector2Value@DataSourceProxy@@MEAAJIMM@Z @ 0x180180600 (-SetVector2Value@DataSourceProxy@@MEAAJIMM@Z.c)
 *     ?SetVector3Value@DataSourceProxy@@MEAAJIMMM@Z @ 0x180180660 (-SetVector3Value@DataSourceProxy@@MEAAJIMMM@Z.c)
 *     ?SetVector4Value@DataSourceProxy@@MEAAJIMMMM@Z @ 0x1801806C0 (-SetVector4Value@DataSourceProxy@@MEAAJIMMMM@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DataSourceProxy::CheckAndReportError(DataSourceProxy *this, int a2)
{
  if ( a2 < 0 )
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 24LL))((char *)this + 8);
  return (unsigned int)a2;
}
