/*
 * XREFs of LibLoaderTelemetryInitOnce @ 0x1800859F0
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180045ADC (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 __fastcall LibLoaderTelemetryInitOnce(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((ULONGLONG *)&dword_1801664E8);
  return 1LL;
}
