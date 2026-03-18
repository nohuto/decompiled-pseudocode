/*
 * XREFs of ?SetScalarValue@DataSourceProxy@@MEAAJIM@Z @ 0x180184F70
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetProperty@M@DataSourcePropertySet@@QEAAJIPEBMW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1801837B0 (--$SetProperty@M@DataSourcePropertySet@@QEAAJIPEBMW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?CheckAndReportError@DataSourceProxy@@AEAAJJ@Z @ 0x18018459C (-CheckAndReportError@DataSourceProxy@@AEAAJJ@Z.c)
 *     ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z @ 0x180184928 (-InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXI@Z.c)
 */

__int64 __fastcall DataSourceProxy::SetScalarValue(DataSourceProxy *this, int a2, float a3)
{
  int v4; // eax
  float v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  v4 = DataSourcePropertySet::SetProperty<float>((_QWORD *)this + 8, a2, &v6);
  if ( (int)DataSourceProxy::CheckAndReportError(this, v4) >= 0 )
    DataSourceProxy::InvalidateReadersAnimationSources(this);
  return 0LL;
}
