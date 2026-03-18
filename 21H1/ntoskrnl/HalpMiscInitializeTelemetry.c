/*
 * XREFs of HalpMiscInitializeTelemetry @ 0x1407B2DE4
 * Callers:
 *     HalpMiscInitSystem @ 0x14099C460 (HalpMiscInitSystem.c)
 * Callees:
 *     EtwRegister @ 0x14074B4C0 (EtwRegister.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1407788A4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 HalpMiscInitializeTelemetry()
{
  if ( EtwRegister(&HAL_ETW_PROVIDER, 0LL, 0LL, &HalpDiagnosticEventHandle) >= 0 )
    HalpDiagnosticEventsRegistered = 1;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((ULONGLONG *)&dword_140C02DB8, 0LL, 0LL);
  return 0LL;
}
