/*
 * XREFs of MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00823B0
 * Callers:
 *     ??1DXGSESSIONDATA@@QEAA@XZ @ 0x1C015FE30 (--1DXGSESSIONDATA@@QEAA@XZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C00823E0 (MicrosoftTelemetryAssertTriggeredWorker.c)
 */

__int64 MicrosoftTelemetryAssertTriggeredNoArgsKM()
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  return MicrosoftTelemetryAssertTriggeredWorker(retaddr, 0LL, 0LL);
}
