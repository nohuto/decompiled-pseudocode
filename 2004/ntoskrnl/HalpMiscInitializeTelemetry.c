/*
 * XREFs of HalpMiscInitializeTelemetry @ 0x1407B5F54
 * Callers:
 *     HalpMiscInitSystem @ 0x14099DC00 (HalpMiscInitSystem.c)
 * Callees:
 *     EtwRegister @ 0x14074F8E0 (EtwRegister.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14077ACB4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 HalpMiscInitializeTelemetry()
{
  if ( EtwRegister(&HAL_ETW_PROVIDER, 0LL, 0LL, &HalpDiagnosticEventHandle) >= 0 )
    HalpDiagnosticEventsRegistered = 1;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((ULONGLONG *)&dword_140C02DF8, 0LL, 0LL);
  return 0LL;
}
