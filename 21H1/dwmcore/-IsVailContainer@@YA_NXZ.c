/*
 * XREFs of ?IsVailContainer@@YA_NXZ @ 0x180024F6C
 * Callers:
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIAEBU_LUID@@2PEAPEAUTouchUpdateInfo@1@@Z @ 0x180023E4C (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0AEBUVAIL_TELEMETRY_TOUCH_INFO@1@@Z @ 0x180024358 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0AEBUVAIL_TELEMETRY_.c)
 *     ?DetectInputGlitch@CTelemetryTouchLatencyAnalysis@@AEBAXAEAUTouchScenarioInfo@1@_K11111111III1@Z @ 0x18002448C (-DetectInputGlitch@CTelemetryTouchLatencyAnalysis@@AEBAXAEAUTouchScenarioInfo@1@_K11111111III1@Z.c)
 *     ??4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z @ 0x180024F04 (--4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??HCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA?AV01@AEBV01@@Z @ 0x180160F94 (--HCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA-AV01@AEBV01@@Z.c)
 *     ??KCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA?AV01@I@Z @ 0x180161048 (--KCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA-AV01@I@Z.c)
 *     ?FirstFrameInputGlitch@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@II_K1111111@Z @ 0x180161E70 (-FirstFrameInputGlitch@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatency.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ @ 0x1801647D8 (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ.c)
 *     ?SetMax@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAXAEBV12@@Z @ 0x180165008 (-SetMax@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAXAEBV12@@Z.c)
 *     ?UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@PEAUTouchUpdateInfo@1@_K@Z @ 0x180165B94 (-UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@P.c)
 * Callees:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x180025300 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 */

bool IsVailContainer(void)
{
  __int16 v0; // ax
  bool v2; // zf
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  if ( byte_180349671 )
  {
    v0 = unk_180349670;
  }
  else
  {
    if ( RegGetHKLMDword(L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows", L"IsVailContainer", &v3) )
    {
      v2 = v3 == 0;
      BYTE1(v3) = 1;
      LOBYTE(v3) = !v2;
    }
    else
    {
      LOWORD(v3) = 256;
    }
    v0 = v3;
    unk_180349670 = v3;
  }
  return HIBYTE(v0) != 0 ? v0 : 0;
}
