/*
 * XREFs of ??$RegisterPropertiesUpdateCallback@W4TraceDriverType@@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEAPEAUISpatialGraphPropertiesUpdatedCallback@345@PEAUIWeakReference@@@HolographicDriverClientTrace@@SAX$$QEAW4TraceDriverType@@$$QEAPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEAPEAUISpatialGraphPropertiesUpdatedCallback@345@$$QEAPEAUIWeakReference@@@Z @ 0x18014F5A0
 * Callers:
 *     ?RegisterPropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUISpatialGraphPropertiesUpdatedCallback@234@@Z @ 0x180162ED0 (-RegisterPropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJP.c)
 * Callees:
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x18016011C (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?RegisterPropertiesUpdateCallback_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@PEBX11@Z @ 0x180162E0C (-RegisterPropertiesUpdateCallback_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@PEBX11@.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180167AE4 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

char __fastcall HolographicDriverClientTrace::RegisterPropertiesUpdateCallback<enum TraceDriverType,Windows::Internal::Holographic::SpatialGraphDriverClient *,Windows::Internal::Holographic::ISpatialGraphPropertiesUpdatedCallback * &,IWeakReference *>(
        unsigned int *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  char result; // al
  __int64 v9; // rcx
  __int64 v10; // rcx

  result = HolographicDriverClientTrace::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2);
  if ( result )
  {
    wil::details::static_lazy<HolographicDriverClientTrace>::get(
      v9,
      _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
    return HolographicDriverClientTrace::RegisterPropertiesUpdateCallback_(v10, *a1, *a2, *a3, *a4);
  }
  return result;
}
