/*
 * XREFs of IoInitializeLiveDump @ 0x1403CF10C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A40FE0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwRegister @ 0x14075E4C0 (EtwRegister.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1407892B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 IoInitializeLiveDump()
{
  EtwRegister(&LiveDumpProvGuid, IopLiveDumpTracingControlCallback, 0LL, &IopLiveDumpEtwRegHandle);
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140C04498);
}
