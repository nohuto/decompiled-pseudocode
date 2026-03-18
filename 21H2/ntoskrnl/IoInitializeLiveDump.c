/*
 * XREFs of IoInitializeLiveDump @ 0x1403DED54
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1406D2264 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 */

__int64 IoInitializeLiveDump()
{
  EtwRegister(&LiveDumpProvGuid, IopLiveDumpTracingControlCallback, 0LL, &IopLiveDumpEtwRegHandle);
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140C064E0);
}
