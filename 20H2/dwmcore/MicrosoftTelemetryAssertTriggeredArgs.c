/*
 * XREFs of MicrosoftTelemetryAssertTriggeredArgs @ 0x180214418
 * Callers:
 *     ?ConvertHostTimeToContainerTimeline@CTelemetryTouchLatencyAnalysis@@CA_K_K0@Z @ 0x18015CE10 (-ConvertHostTimeToContainerTimeline@CTelemetryTouchLatencyAnalysis@@CA_K_K0@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x180214470 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 __fastcall MicrosoftTelemetryAssertTriggeredArgs(__int64 a1, int a2, int a3)
{
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker((_DWORD)retaddr, 1, (unsigned int)"dwmcore.dll", a2, a3);
}
