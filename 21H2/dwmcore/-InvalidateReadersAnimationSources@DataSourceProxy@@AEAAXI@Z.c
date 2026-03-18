/*
 * XREFs of ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z @ 0x1801BCA3C
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
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800485B4 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

void __fastcall DataSourceProxy::InvalidateReadersAnimationSources(DataSourceProxy *this, int a2)
{
  __int64 v2; // rdi
  __int64 i; // rbx
  CResource *v5; // rcx

  v2 = *((_QWORD *)this + 26);
  for ( i = *((_QWORD *)this + 25); i != v2; i += 8LL )
  {
    v5 = *(CResource **)(*(_QWORD *)i + 16LL);
    if ( v5 )
      CResource::InvalidateAnimationSources(v5, a2);
  }
}
