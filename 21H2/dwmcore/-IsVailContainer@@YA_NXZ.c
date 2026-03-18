/*
 * XREFs of ?IsVailContainer@@YA_NXZ @ 0x18026BB8C
 * Callers:
 *     ?UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@PEAUTouchUpdateInfo@2@_K@Z @ 0x18001A5B8 (-UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAXPEBUTO.c)
 *     ?SteadyStateFrameInputGlitch@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioInfo@2@II_KAEBUTELEMETRY_INTERACTION_FRAME_TIMES@@1@Z @ 0x18001A8C0 (-SteadyStateFrameInputGlitch@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchS.c)
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIAEBU_LUID@@2PEAPEAUTouchUpdateInfo@2@@Z @ 0x18001AE6C (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEBU.c)
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x18017E1F4 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 *     ?QueueFrame@GestureTargeting@TelemetryDebug@InputTraceLogging@@SAXAEBUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x18017E588 (-QueueFrame@GestureTargeting@TelemetryDebug@InputTraceLogging@@SAXAEBUtagTELEMETRY_POINTER_FRAME.c)
 *     IsSuperWetInkCompatibleVailContainer @ 0x1801A7C68 (IsSuperWetInkCompatibleVailContainer.c)
 *     ?CheckOcclusionState@CRemoteAppRenderTarget@@UEAAJXZ @ 0x1801C2160 (-CheckOcclusionState@CRemoteAppRenderTarget@@UEAAJXZ.c)
 *     ?FirstFrameInputGlitch@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioInfo@2@IIAEBUTELEMETRY_INTERACTION_FRAME_TIMES@@_K@Z @ 0x1801D29E0 (-FirstFrameInputGlitch@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenari.c)
 *     _anonymous_namespace_::CreateD3D12ResourcesInternal @ 0x18027D294 (_anonymous_namespace_--CreateD3D12ResourcesInternal.c)
 * Callees:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x18026BB08 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 */

bool IsVailContainer(void)
{
  bool v0; // bl
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( HIBYTE(word_1803D3B88) )
    return word_1803D3B88;
  if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows", L"IsVailContainer", &v2) )
  {
    HIBYTE(word_1803D3B88) = 1;
    v0 = v2 != 0;
    LOBYTE(word_1803D3B88) = v2 != 0;
  }
  else
  {
    word_1803D3B88 = 256;
  }
  return v0;
}
