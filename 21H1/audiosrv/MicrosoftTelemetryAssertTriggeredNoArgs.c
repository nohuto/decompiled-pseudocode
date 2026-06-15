/*
 * XREFs of MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1800748E8
 * Callers:
 *     ??_GCVirtualAudioStream@@UEAAPEAXI@Z @ 0x1800F7B80 (--_GCVirtualAudioStream@@UEAAPEAXI@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18013DA68 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 MicrosoftTelemetryAssertTriggeredNoArgs()
{
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker((_DWORD)retaddr, 0, 0, -1, -1);
}
