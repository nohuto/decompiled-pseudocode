/*
 * XREFs of MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0050678
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0009430 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     RootHub_WaitForResumeCompletion @ 0x1C000A64C (RootHub_WaitForResumeCompletion.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C00506A8 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 MicrosoftTelemetryAssertTriggeredMsgKM(const char *a1, ...)
{
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker((_DWORD)retaddr, 0, 0, -1, -1, (__int64)a1);
}
