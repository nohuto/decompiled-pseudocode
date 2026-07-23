/*
 * XREFs of IoInitializeLiveDump @ 0x1403CFBEC
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3FB60 (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwRegister @ 0x140762E70 (EtwRegister.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14078D254 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 IoInitializeLiveDump()
{
  EtwRegister(&LiveDumpProvGuid, IopLiveDumpTracingControlCallback, 0LL, &IopLiveDumpEtwRegHandle);
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140C044D8);
}
