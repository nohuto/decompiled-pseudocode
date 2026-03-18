/*
 * XREFs of ?CheckAndReportError@DataSourceProxy@@AEAAJJ@Z @ 0x1801BC46C
 * Callers:
 *     ?SetBooleanValue@DataSourceProxy@@MEAAJI_N@Z @ 0x1801BCF40 (-SetBooleanValue@DataSourceProxy@@MEAAJI_N@Z.c)
 *     ?SetColorValue@DataSourceProxy@@MEAAJIMMMM@Z @ 0x1801BCF90 (-SetColorValue@DataSourceProxy@@MEAAJIMMMM@Z.c)
 *     ?SetMatrix3x2Value@DataSourceProxy@@MEAAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801BD000 (-SetMatrix3x2Value@DataSourceProxy@@MEAAJIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetMatrix4x4Value@DataSourceProxy@@MEAAJIAEBU_D3DMATRIX@@@Z @ 0x1801BD050 (-SetMatrix4x4Value@DataSourceProxy@@MEAAJIAEBU_D3DMATRIX@@@Z.c)
 *     ?SetQuaternionValue@DataSourceProxy@@MEAAJIMMMM@Z @ 0x1801BD0C0 (-SetQuaternionValue@DataSourceProxy@@MEAAJIMMMM@Z.c)
 *     ?SetScalarValue@DataSourceProxy@@MEAAJIM@Z @ 0x1801BD130 (-SetScalarValue@DataSourceProxy@@MEAAJIM@Z.c)
 *     ?SetVector2Value@DataSourceProxy@@MEAAJIMM@Z @ 0x1801BD190 (-SetVector2Value@DataSourceProxy@@MEAAJIMM@Z.c)
 *     ?SetVector3Value@DataSourceProxy@@MEAAJIMMM@Z @ 0x1801BD1F0 (-SetVector3Value@DataSourceProxy@@MEAAJIMMM@Z.c)
 *     ?SetVector4Value@DataSourceProxy@@MEAAJIMMMM@Z @ 0x1801BD260 (-SetVector4Value@DataSourceProxy@@MEAAJIMMMM@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DataSourceProxy::CheckAndReportError(DataSourceProxy *this, int a2)
{
  if ( a2 < 0 )
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 24LL))((char *)this + 8);
  return (unsigned int)a2;
}
