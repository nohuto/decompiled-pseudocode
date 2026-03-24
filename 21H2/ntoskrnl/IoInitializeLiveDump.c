/*
 * XREFs of IoInitializeLiveDump @ 0x1403CFA7C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3EB60 (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwRegister @ 0x140762CB0 (EtwRegister.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14078D094 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 IoInitializeLiveDump()
{
  EtwRegister(&LiveDumpProvGuid, IopLiveDumpTracingControlCallback, 0LL, &IopLiveDumpEtwRegHandle);
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140C044D8);
}
