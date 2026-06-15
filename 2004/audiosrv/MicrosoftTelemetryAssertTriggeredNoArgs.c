/*
 * XREFs of MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1800749E8
 * Callers:
 *     ??_GCVirtualAudioStream@@UEAAPEAXI@Z @ 0x1800F7C40 (--_GCVirtualAudioStream@@UEAAPEAXI@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18013D718 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 MicrosoftTelemetryAssertTriggeredNoArgs()
{
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker((_DWORD)retaddr, 0, 0, -1, -1);
}
