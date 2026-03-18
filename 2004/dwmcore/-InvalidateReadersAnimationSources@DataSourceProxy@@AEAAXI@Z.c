/*
 * XREFs of ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z @ 0x180181BB8
 * Callers:
 *     ?SetBooleanValue@DataSourceProxy@@MEAAJI_N@Z @ 0x180182010 (-SetBooleanValue@DataSourceProxy@@MEAAJI_N@Z.c)
 *     ?SetColorValue@DataSourceProxy@@MEAAJIMMMM@Z @ 0x180182060 (-SetColorValue@DataSourceProxy@@MEAAJIMMMM@Z.c)
 *     ?SetMatrix3x2Value@DataSourceProxy@@MEAAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801820D0 (-SetMatrix3x2Value@DataSourceProxy@@MEAAJIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetMatrix4x4Value@DataSourceProxy@@MEAAJIAEBU_D3DMATRIX@@@Z @ 0x180182120 (-SetMatrix4x4Value@DataSourceProxy@@MEAAJIAEBU_D3DMATRIX@@@Z.c)
 *     ?SetQuaternionValue@DataSourceProxy@@MEAAJIMMMM@Z @ 0x180182190 (-SetQuaternionValue@DataSourceProxy@@MEAAJIMMMM@Z.c)
 *     ?SetScalarValue@DataSourceProxy@@MEAAJIM@Z @ 0x180182200 (-SetScalarValue@DataSourceProxy@@MEAAJIM@Z.c)
 *     ?SetVector2Value@DataSourceProxy@@MEAAJIMM@Z @ 0x180182250 (-SetVector2Value@DataSourceProxy@@MEAAJIMM@Z.c)
 *     ?SetVector3Value@DataSourceProxy@@MEAAJIMMM@Z @ 0x1801822B0 (-SetVector3Value@DataSourceProxy@@MEAAJIMMM@Z.c)
 *     ?SetVector4Value@DataSourceProxy@@MEAAJIMMMM@Z @ 0x180182310 (-SetVector4Value@DataSourceProxy@@MEAAJIMMMM@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A0060 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

void __fastcall DataSourceProxy::InvalidateReadersAnimationSources(DataSourceProxy *this, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  CResource *v6; // rcx

  v2 = *((_QWORD *)this + 25);
  v4 = 0LL;
  v5 = (*((_QWORD *)this + 26) - v2 + 7) >> 3;
  if ( v2 > *((_QWORD *)this + 26) )
    v5 = 0LL;
  if ( v5 )
  {
    do
    {
      v6 = *(CResource **)(*(_QWORD *)v2 + 16LL);
      if ( v6 )
        CResource::InvalidateAnimationSources(v6, a2);
      v2 += 8LL;
      ++v4;
    }
    while ( v4 != v5 );
  }
}
