/*
 * XREFs of ?IsVailContainer@@YA_NXZ @ 0x180013B38
 * Callers:
 *     ??4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z @ 0x180013AD0 (--4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIAEBU_LUID@@2PEAPEAUTouchUpdateInfo@1@@Z @ 0x180013E2C (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0AEBUVAIL_TELEMETRY_TOUCH_INFO@1@@Z @ 0x180014338 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0AEBUVAIL_TELEMETRY_.c)
 *     ?DetectInputGlitch@CTelemetryTouchLatencyAnalysis@@AEBAXAEAUTouchScenarioInfo@1@_K11111111III1@Z @ 0x18001446C (-DetectInputGlitch@CTelemetryTouchLatencyAnalysis@@AEBAXAEAUTouchScenarioInfo@1@_K11111111III1@Z.c)
 *     ??HCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA?AV01@AEBV01@@Z @ 0x18015E434 (--HCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA-AV01@AEBV01@@Z.c)
 *     ??KCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA?AV01@I@Z @ 0x18015E4E8 (--KCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA-AV01@I@Z.c)
 *     ?FirstFrameInputGlitch@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@II_K1111111@Z @ 0x18015F310 (-FirstFrameInputGlitch@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatency.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ @ 0x180161C78 (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ.c)
 *     ?SetMax@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAXAEBV12@@Z @ 0x1801624A8 (-SetMax@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAXAEBV12@@Z.c)
 *     ?UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@PEAUTouchUpdateInfo@1@_K@Z @ 0x180163034 (-UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@P.c)
 * Callees:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x180012E34 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 */

bool IsVailContainer(void)
{
  __int16 v0; // ax
  bool v2; // zf
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  if ( byte_180345671 )
  {
    v0 = unk_180345670;
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
    unk_180345670 = v3;
  }
  return HIBYTE(v0) != 0 ? v0 : 0;
}
