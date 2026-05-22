/*
 * XREFs of ??$DeleteStaticNodes@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEAW4SPATIAL_GRAPH_DELETE_STATIC_NODE_OPERATION@@AEAKAEAPEBUSPATIAL_NODE_ID@@@HolographicDriverClientTrace@@SAX$$QEAPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEAW4SPATIAL_GRAPH_DELETE_STATIC_NODE_OPERATION@@AEAKAEAPEBUSPATIAL_NODE_ID@@@Z @ 0x18014E620
 * Callers:
 *     ?DeleteStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJW4SPATIAL_GRAPH_DELETE_STATIC_NODE_OPERATION@@KPEBUSPATIAL_NODE_ID@@@Z @ 0x18015B1D0 (-DeleteStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJW4SPATIAL_GRAPH_D.c)
 * Callees:
 *     ?DeleteStaticNodes_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@W4SPATIAL_GRAPH_DELETE_STATIC_NODE_OPERATION@@KPEBUSPATIAL_NODE_ID@@@Z @ 0x18015B344 (-DeleteStaticNodes_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@W4SPATIAL_GRAPH_DELETE_STA.c)
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x18016060C (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180167F94 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

char __fastcall HolographicDriverClientTrace::DeleteStaticNodes<Windows::Internal::Holographic::SpatialGraphDriverClient *,_GUID const &,enum SPATIAL_GRAPH_DELETE_STATIC_NODE_OPERATION &,unsigned long &,SPATIAL_NODE_ID const * &>(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned int *a3,
        _DWORD *a4,
        _QWORD *a5)
{
  char result; // al
  __int64 v10; // rcx
  __int64 v11; // rcx

  result = HolographicDriverClientTrace::IsEnabled((unsigned __int8)a1, a2);
  if ( result )
  {
    wil::details::static_lazy<HolographicDriverClientTrace>::get(
      v10,
      _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
    return HolographicDriverClientTrace::DeleteStaticNodes_(v11, *a1, a2, *a3, *a4, *a5);
  }
  return result;
}
