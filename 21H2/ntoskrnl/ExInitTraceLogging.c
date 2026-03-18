/*
 * XREFs of ExInitTraceLogging @ 0x140B5446C
 * Callers:
 *     Phase1InitializationIoReady @ 0x140B020A4 (Phase1InitializationIoReady.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1406D2264 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 ExInitTraceLogging()
{
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C06820, 0LL, 0LL);
}
