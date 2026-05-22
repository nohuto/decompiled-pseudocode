/*
 * XREFs of ?IsEnabled@HolographicDriverClientContinuousTrace@@SA_NE_K@Z @ 0x1801600F8
 * Callers:
 *     ??$DynamicNodePoseValidityChanged@PEAVSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEBUSPATIAL_NODE_ID@@AEAW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEB_N@HolographicDriverClientContinuousTrace@@SAX$$QEAPEAVSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEBUSPATIAL_NODE_ID@@AEAW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEB_N@Z @ 0x18014E2D0 (--$DynamicNodePoseValidityChanged@PEAVSpatialGraphDriverHandleWrapper@Holographic@Internal@Windo.c)
 *     ??$GetPoseAtTime@AEBQEAVSpatialGraphNodeReference@Holographic@Internal@Windows@@AEAUSPATIAL_NODE_ID@@AEA_JAEB_JAEB_JAEA_JAEA_JAEAW4TracePredictionType@@AEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@AEB_NAEBI@HolographicDriverClientContinuousTrace@@SAXAEBQEAVSpatialGraphNodeReference@Holographic@Internal@Windows@@AEAUSPATIAL_NODE_ID@@AEA_JAEB_J322AEAW4TracePredictionType@@AEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@AEB_NAEBI@Z @ 0x18014E540 (--$GetPoseAtTime@AEBQEAVSpatialGraphNodeReference@Holographic@Internal@Windows@@AEAUSPATIAL_NODE.c)
 *     ??$GetPoseAtTime_LatestPoseFromDriver@AEAIAEAKAEB_JAEB_JAEBW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEBUXMFLOAT4X3@DirectX@@@HolographicDriverClientContinuousTrace@@SAXAEAIAEAKAEB_J2AEBW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEBUXMFLOAT4X3@DirectX@@@Z @ 0x18014E61C (--$GetPoseAtTime_LatestPoseFromDriver@AEAIAEAKAEB_JAEB_JAEBW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AE.c)
 *     ??$GetPoseAtTime_PredictFromPoses@AEBJAEA_JAEA_JAEAW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEAUXMFLOAT4X3@DirectX@@@HolographicDriverClientContinuousTrace@@SAXAEBJAEA_J1AEAW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEAUXMFLOAT4X3@DirectX@@@Z @ 0x18014E69C (--$GetPoseAtTime_PredictFromPoses@AEBJAEA_JAEA_JAEAW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEAUXMFLOA.c)
 *     ??$GetStaticNodeForPose@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@AEAU6@@HolographicDriverClientContinuousTrace@@SAX$$QEAPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@AEAU6@@Z @ 0x18014ECA4 (--$GetStaticNodeForPose@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AE.c)
 *     ??$GetStaticNodePoses@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEAKAEAPEBU6@AEAPEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@HolographicDriverClientContinuousTrace@@SAX$$QEAPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEAKAEAPEBU6@AEAPEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x18014ED14 (--$GetStaticNodePoses@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBU.c)
 *     ??$HolographicDriverHandleWrapper_DeviceIoControlFailed@AEAKAEAKPEAVHolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEBU_GUID@@@HolographicDriverClientContinuousTrace@@SAXAEAK0$$QEAPEAVHolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEBU_GUID@@@Z @ 0x18014ED88 (--$HolographicDriverHandleWrapper_DeviceIoControlFailed@AEAKAEAKPEAVHolographicDriverHandleWrapp.c)
 *     ??$NoPoseReceivedYet@AEBUSPATIAL_NODE_ID@@AEBJ@HolographicDriverClientContinuousTrace@@SAXAEBUSPATIAL_NODE_ID@@AEBJ@Z @ 0x18014F4F4 (--$NoPoseReceivedYet@AEBUSPATIAL_NODE_ID@@AEBJ@HolographicDriverClientContinuousTrace@@SAXAEBUSP.c)
 *     _lambda_f2d9a31b738d46358cc103eee0272db8_::operator() @ 0x1801583B8 (_lambda_f2d9a31b738d46358cc103eee0272db8_--operator().c)
 *     ?GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@@Z @ 0x18015D520 (-GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_G.c)
 * Callees:
 *     ?get@?$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDriverClientContinuousTrace@@P6AXXZ@Z @ 0x180167A2C (-get@-$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDri.c)
 */

char __fastcall HolographicDriverClientContinuousTrace::IsEnabled(__int64 a1)
{
  wil::TraceLoggingProvider *v1; // rax

  v1 = (wil::TraceLoggingProvider *)wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
                                      a1,
                                      _lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_);
  return wil::TraceLoggingProvider::IsEnabled_(v1, 0);
}
