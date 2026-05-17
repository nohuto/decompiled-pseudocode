/*
 * XREFs of LibLoaderTelemetryInitOnce @ 0x1800859F0
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180045ADC (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 LibLoaderTelemetryInitOnce()
{
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((__int64 *)&dword_1801664E8);
  return 1LL;
}
