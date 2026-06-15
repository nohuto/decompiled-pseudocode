/*
 * XREFs of MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180073F28
 * Callers:
 *     ??_GCVirtualAudioStream@@UEAAPEAXI@Z @ 0x1800F6FB0 (--_GCVirtualAudioStream@@UEAAPEAXI@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18013CA88 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 MicrosoftTelemetryAssertTriggeredNoArgs()
{
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker((_DWORD)retaddr, 0, 0, -1, -1);
}
