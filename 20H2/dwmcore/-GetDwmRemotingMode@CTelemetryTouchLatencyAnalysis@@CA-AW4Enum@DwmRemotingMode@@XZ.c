/*
 * XREFs of ?GetDwmRemotingMode@CTelemetryTouchLatencyAnalysis@@CA?AW4Enum@DwmRemotingMode@@XZ @ 0x180004C04
 * Callers:
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIAEBU_LUID@@2PEAPEAUTouchUpdateInfo@1@@Z @ 0x18000399C (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 *     ?BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_INFO@@_KPEBG1IAEBU_LUID@@_N@Z @ 0x1800044E8 (-BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_INFO@@.c)
 * Callees:
 *     <none>
 */

__int64 CTelemetryTouchLatencyAnalysis::GetDwmRemotingMode()
{
  __int64 result; // rax

  result = 0LL;
  if ( g_pComposition )
    return *((unsigned int *)g_pComposition + 238);
  return result;
}
