/*
 * XREFs of ?PropertyUpdatedListenerThreadProcV2Static@SpatialGraphDriverClient@Holographic@Internal@Windows@@CAKPEAX@Z @ 0x180162D20
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x18016011C (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?Log_Information_@HolographicDriverClientTrace@@QEAAXKPEB_W@Z @ 0x180160324 (-Log_Information_@HolographicDriverClientTrace@@QEAAXKPEB_W@Z.c)
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x180162508 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180167AE4 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::PropertyUpdatedListenerThreadProcV2Static(
        Windows::Internal::Holographic::SpatialGraphDriverClient *Parameter)
{
  int v1; // ebx
  __int64 v2; // rcx
  __int64 v3; // rcx
  HolographicDriverClientTrace *v4; // rcx

  v1 = Windows::Internal::Holographic::SpatialGraphDriverClient::PropertyUpdatedListenerThreadProcV2(Parameter);
  if ( HolographicDriverClientTrace::IsEnabled(v2) )
  {
    wil::details::static_lazy<HolographicDriverClientTrace>::get(
      v3,
      _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
    HolographicDriverClientTrace::Log_Information_(v4, v1, L"Stop listening for SpatialGraphDriver property changes.");
  }
  return 0LL;
}
