/*
 * XREFs of ?SetVector3Value@DataSourceProxy@@MEAAJIMMM@Z @ 0x180185020
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetProperty@UD2DVector3@@@DataSourcePropertySet@@QEAAJIPEBUD2DVector3@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180183C50 (--$SetProperty@UD2DVector3@@@DataSourcePropertySet@@QEAAJIPEBUD2DVector3@@W4DCOMPOSITION_EXPRESS.c)
 *     ?CheckAndReportError@DataSourceProxy@@AEAAJJ@Z @ 0x18018459C (-CheckAndReportError@DataSourceProxy@@AEAAJJ@Z.c)
 *     ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z @ 0x180184928 (-InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z.c)
 */

__int64 __fastcall DataSourceProxy::SetVector3Value(DataSourceProxy *this, int a2, float a3, float a4, float a5)
{
  int v6; // eax
  _DWORD v8[6]; // [rsp+20h] [rbp-18h] BYREF

  *(float *)&v8[2] = a5;
  *(float *)v8 = a3;
  *(float *)&v8[1] = a4;
  v6 = DataSourcePropertySet::SetProperty<D2DVector3>((_QWORD *)this + 8, a2, (__int64)v8);
  if ( (int)DataSourceProxy::CheckAndReportError(this, v6) >= 0 )
    DataSourceProxy::InvalidateReadersAnimationSources(this);
  return 0LL;
}
