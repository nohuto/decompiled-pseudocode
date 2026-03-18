/*
 * XREFs of HalpMiscInitializeTelemetry @ 0x140858BF8
 * Callers:
 *     HalpMiscInitSystem @ 0x140A5B550 (HalpMiscInitSystem.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1406D2264 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 */

__int64 HalpMiscInitializeTelemetry()
{
  if ( EtwRegister(&HAL_ETW_PROVIDER, 0LL, 0LL, &HalpDiagnosticEventHandle) >= 0 )
    HalpDiagnosticEventsRegistered = 1;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C04538, 0LL, 0LL);
  return 0LL;
}
