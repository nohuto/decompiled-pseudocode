/*
 * XREFs of ??$PTPGestureActionCompleted@AEAI@MultitaskingViewTelemetry@@SAXAEAI@Z @ 0x1803689DC
 * Callers:
 *     _lambda_f68706b3a633395346cf80930ff89e4f_::operator() @ 0x180361B18 (_lambda_f68706b3a633395346cf80930ff89e4f_--operator().c)
 * Callees:
 *     ?IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z @ 0x180365DE4 (-IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@P6AXXZ@Z @ 0x180366434 (-get@-$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@.c)
 *     ?PTPGestureActionCompleted_@MultitaskingViewTelemetry@@QEBAXI@Z @ 0x180368A10 (-PTPGestureActionCompleted_@MultitaskingViewTelemetry@@QEBAXI@Z.c)
 */

void __fastcall MultitaskingViewTelemetry::PTPGestureActionCompleted<unsigned int &>(unsigned int *a1)
{
  __int64 v2; // rcx
  MultitaskingViewTelemetry *v3; // rcx

  if ( MultitaskingViewTelemetry::IsEnabled((__int64)a1) )
  {
    wil::details::static_lazy<MultitaskingViewTelemetry>::get(
      v2,
      _lambda_4e92a466514511a8168cfdbd3e7cc271_::_lambda_invoker_cdecl_);
    MultitaskingViewTelemetry::PTPGestureActionCompleted_(v3, *a1);
  }
}
