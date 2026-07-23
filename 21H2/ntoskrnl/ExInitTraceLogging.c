/*
 * XREFs of ExInitTraceLogging @ 0x140A95604
 * Callers:
 *     Phase1InitializationIoReady @ 0x140A4D104 (Phase1InitializationIoReady.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14078D254 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 ExInitTraceLogging()
{
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((ULONGLONG *)&dword_140C02C60, 0LL, 0LL);
}
