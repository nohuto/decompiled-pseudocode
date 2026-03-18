/*
 * XREFs of ?SetVector4Value@DataSourceProxy@@MEAAJIMMMM@Z @ 0x180185080
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetProperty@UD2DVector4@@@DataSourcePropertySet@@QEAAJIPEBUD2DVector4@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180183D74 (--$SetProperty@UD2DVector4@@@DataSourcePropertySet@@QEAAJIPEBUD2DVector4@@W4DCOMPOSITION_EXPRESS.c)
 *     ?CheckAndReportError@DataSourceProxy@@AEAAJJ@Z @ 0x18018459C (-CheckAndReportError@DataSourceProxy@@AEAAJJ@Z.c)
 *     ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z @ 0x180184928 (-InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z.c)
 */

__int64 __fastcall DataSourceProxy::SetVector4Value(
        DataSourceProxy *this,
        int a2,
        float a3,
        float a4,
        unsigned int a5,
        float a6)
{
  int v7; // eax
  float v9[6]; // [rsp+20h] [rbp-18h] BYREF

  v9[3] = a6;
  v9[0] = a3;
  *(_QWORD *)&v9[1] = __PAIR64__(a5, LODWORD(a4));
  v7 = DataSourcePropertySet::SetProperty<D2DVector4>((_QWORD *)this + 8, a2, v9);
  if ( (int)DataSourceProxy::CheckAndReportError(this, v7) >= 0 )
    DataSourceProxy::InvalidateReadersAnimationSources(this);
  return 0LL;
}
