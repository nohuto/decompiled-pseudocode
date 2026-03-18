/*
 * XREFs of ?GetDwmRemotingMode@InteractionLatencyTelemetry@@YA?AW4Enum@DwmRemotingMode@@XZ @ 0x180015E8C
 * Callers:
 *     ?BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_INFO@@_KPEBG1IAEBU_LUID@@_N@Z @ 0x180015B80 (-BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAXPEBU.c)
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIAEBU_LUID@@2PEAPEAUTouchUpdateInfo@2@@Z @ 0x18001AE6C (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEBU.c)
 * Callees:
 *     <none>
 */

__int64 InteractionLatencyTelemetry::GetDwmRemotingMode()
{
  __int64 result; // rax

  result = 0LL;
  if ( g_pComposition )
    return *((unsigned int *)g_pComposition + 276);
  return result;
}
