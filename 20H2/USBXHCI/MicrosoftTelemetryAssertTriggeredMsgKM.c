/*
 * XREFs of MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C00511E8
 * Callers:
 *     RootHub_WaitForResumeCompletion @ 0x1C000AF28 (RootHub_WaitForResumeCompletion.c)
 *     RootHub_DetectPortInComplianceMode @ 0x1C001B0A0 (RootHub_DetectPortInComplianceMode.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C0051218 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 MicrosoftTelemetryAssertTriggeredMsgKM(const char *a1, ...)
{
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker((_DWORD)retaddr, 0, 0, -1, -1, (__int64)a1);
}
