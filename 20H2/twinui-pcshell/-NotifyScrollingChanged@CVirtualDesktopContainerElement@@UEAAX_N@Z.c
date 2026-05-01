/*
 * XREFs of ?NotifyScrollingChanged@CVirtualDesktopContainerElement@@UEAAX_N@Z @ 0x1803C0450
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z @ 0x180386A54 (-IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@P6AXXZ@Z @ 0x1803870A4 (-get@-$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@.c)
 *     ?CalcMaxVisibleDesktopCount@CVirtualDesktopContainerElement@@IEAAHXZ @ 0x1803BF630 (-CalcMaxVisibleDesktopCount@CVirtualDesktopContainerElement@@IEAAHXZ.c)
 *     ?VirtualDesktopScrollingChanged_@MultitaskingViewTelemetry@@QEBAX_NI@Z @ 0x1803C0AA8 (-VirtualDesktopScrollingChanged_@MultitaskingViewTelemetry@@QEBAX_NI@Z.c)
 */

void __fastcall CVirtualDesktopContainerElement::NotifyScrollingChanged(CVirtualDesktopContainerElement *this, bool a2)
{
  unsigned int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rcx
  MultitaskingViewTelemetry *v6; // rcx

  v3 = CVirtualDesktopContainerElement::CalcMaxVisibleDesktopCount((CVirtualDesktopContainerElement *)((char *)this - 224));
  if ( MultitaskingViewTelemetry::IsEnabled(v4) )
  {
    wil::details::static_lazy<MultitaskingViewTelemetry>::get(
      v5,
      _lambda_4e92a466514511a8168cfdbd3e7cc271_::_lambda_invoker_cdecl_);
    MultitaskingViewTelemetry::VirtualDesktopScrollingChanged_(v6, a2, v3);
  }
}
