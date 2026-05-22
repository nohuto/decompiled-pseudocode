/*
 * XREFs of ?IsEnabled@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800D0150
 * Callers:
 *     ??$TrackingRequestedHeartbeat@PEB_WAEAKKI_NAEA_NPEB_WAEAU_GUID@@AEAW4SPATIAL_TRACKING_CAPABILITY_FLAGS@@AEAY02MAEAY03MAEAY02MAEAY03M@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SAX$$QEAPEB_WAEAK$$QEAK$$QEAI$$QEA_NAEA_N0AEAU_GUID@@AEAW4SPATIAL_TRACKING_CAPABILITY_FLAGS@@AEAY02MAEAY03M89@Z @ 0x1800CC8D0 (--$TrackingRequestedHeartbeat@PEB_WAEAKKI_NAEA_NPEB_WAEAU_GUID@@AEAW4SPATIAL_TRACKING_CAPABILITY.c)
 *     ?OnInputReport@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEADKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800D1360 (-OnInputReport@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UE.c)
 *     ??$SpatialInteractionEyeGaze_CombinedGaze@AEAMAEAMAEAMAEAMAEAMAEAM@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SAXAEAM00000@Z @ 0x1800DAF34 (--$SpatialInteractionEyeGaze_CombinedGaze@AEAMAEAMAEAMAEAMAEAMAEAM@SpatialInteractionTraceContin.c)
 *     ??$HandReportIgnored@U_GUID@@AEA_JIIAEAEAEA_N@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SAX$$QEAU_GUID@@AEA_J$$QEAI2AEAEAEA_N@Z @ 0x1800DD500 (--$HandReportIgnored@U_GUID@@AEA_JIIAEAEAEA_N@SpatialInteractionTraceContinuous@SpatialInteracti.c)
 *     ?Parse@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x1800E0B30 (-Parse@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatial.c)
 *     ?ReadNextState@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAA_NXZ @ 0x1800E0FE0 (-ReadNextState@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAA_NXZ.c)
 *     ??$EffectiveHapticsFeedback@AEAJAEAKAEAKAEAE@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SAXAEAJAEAK1AEAE@Z @ 0x18016812C (--$EffectiveHapticsFeedback@AEAJAEAKAEAKAEAE@SpatialInteractionTraceContinuous@SpatialInteractio.c)
 *     wil::details::ScopeExitFn__lambda_f890c18201f590f7cdc6ef396e9cd839___::operator() @ 0x18016A2BC (wil--details--ScopeExitFn__lambda_f890c18201f590f7cdc6ef396e9cd839___--operator().c)
 *     ?StopHapticsFeedback@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x18016F4C0 (-StopHapticsFeedback@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UE.c)
 * Callees:
 *     ?get@?$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTraceContinuous@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800D415C (-get@-$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@Q.c)
 */

char __fastcall SpatialInteractionDevices::SpatialInteractionTraceContinuous::IsEnabled(__int64 a1)
{
  wil::TraceLoggingProvider *v1; // rax

  v1 = (wil::TraceLoggingProvider *)wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTraceContinuous>::get(
                                      a1,
                                      _lambda_0bcba54505780f78856f588866e18ac8_::_lambda_invoker_cdecl_);
  return wil::TraceLoggingProvider::IsEnabled_(v1, 0);
}
