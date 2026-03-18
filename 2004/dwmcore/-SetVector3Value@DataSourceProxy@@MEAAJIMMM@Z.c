/*
 * XREFs of ?SetVector3Value@DataSourceProxy@@MEAAJIMMM@Z @ 0x1801822B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetProperty@UD2DVector3@@@DataSourcePropertySet@@QEAAJIPEBUD2DVector3@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180180ED4 (--$SetProperty@UD2DVector3@@@DataSourcePropertySet@@QEAAJIPEBUD2DVector3@@W4DCOMPOSITION_EXPRESS.c)
 *     ?CheckAndReportError@DataSourceProxy@@AEAAJJ@Z @ 0x18018182C (-CheckAndReportError@DataSourceProxy@@AEAAJJ@Z.c)
 *     ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z @ 0x180181BB8 (-InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z.c)
 */

__int64 __fastcall DataSourceProxy::SetVector3Value(DataSourceProxy *this, int a2, float a3, float a4, float a5)
{
  int v7; // eax
  _DWORD v9[6]; // [rsp+20h] [rbp-18h] BYREF

  *(float *)&v9[2] = a5;
  *(float *)v9 = a3;
  *(float *)&v9[1] = a4;
  v7 = DataSourcePropertySet::SetProperty<D2DVector3>((_QWORD *)this + 8, a2, (__int64)v9);
  if ( (int)DataSourceProxy::CheckAndReportError(this, v7) >= 0 )
    DataSourceProxy::InvalidateReadersAnimationSources(this, a2);
  return 0LL;
}
