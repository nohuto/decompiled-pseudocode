/*
 * XREFs of ?ItemInitTelemetry@SwitchItemTelemetry@@YAJJ@Z @ 0x18037EE7C
 * Callers:
 *     ?CreateElementForObject@CSwitchItemElementFactory@@UEAAJPEAUIUnknown@@PEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x180374B80 (-CreateElementForObject@CSwitchItemElementFactory@@UEAAJPEAUIUnknown@@PEAUISwitchThumbnailFactor.c)
 * Callees:
 *     ?IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z @ 0x180365DE4 (-IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@P6AXXZ@Z @ 0x180366434 (-get@-$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@.c)
 *     ?SwitchItemInitializationError_@MultitaskingViewTelemetry@@QEBAXJ@Z @ 0x18037EEB4 (-SwitchItemInitializationError_@MultitaskingViewTelemetry@@QEBAXJ@Z.c)
 */

__int64 __fastcall SwitchItemTelemetry::ItemInitTelemetry(SwitchItemTelemetry *this)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx
  MultitaskingViewTelemetry *v3; // rcx

  v1 = (unsigned int)this;
  if ( (int)this < 0 && MultitaskingViewTelemetry::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<MultitaskingViewTelemetry>::get(
      v2,
      _lambda_4e92a466514511a8168cfdbd3e7cc271_::_lambda_invoker_cdecl_);
    MultitaskingViewTelemetry::SwitchItemInitializationError_(v3, v1);
  }
  return v1;
}
