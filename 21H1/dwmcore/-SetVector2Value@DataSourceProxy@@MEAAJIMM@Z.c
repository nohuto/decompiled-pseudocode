/*
 * XREFs of ?SetVector2Value@DataSourceProxy@@MEAAJIMM@Z @ 0x180184FC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetProperty@UD2DVector2@@@DataSourcePropertySet@@QEAAJIPEBUD2DVector2@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180183B1C (--$SetProperty@UD2DVector2@@@DataSourcePropertySet@@QEAAJIPEBUD2DVector2@@W4DCOMPOSITION_EXPRESS.c)
 *     ?CheckAndReportError@DataSourceProxy@@AEAAJJ@Z @ 0x18018459C (-CheckAndReportError@DataSourceProxy@@AEAAJJ@Z.c)
 *     ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z @ 0x180184928 (-InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z.c)
 */

__int64 __fastcall DataSourceProxy::SetVector2Value(DataSourceProxy *this, int a2, float a3, float a4)
{
  int v5; // eax
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = __PAIR64__(LODWORD(a4), LODWORD(a3));
  v5 = DataSourcePropertySet::SetProperty<D2DVector2>((_QWORD *)this + 8, a2, (__int64 *)&v7);
  if ( (int)DataSourceProxy::CheckAndReportError(this, v5) >= 0 )
    DataSourceProxy::InvalidateReadersAnimationSources(this);
  return 0LL;
}
