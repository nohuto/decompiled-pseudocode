/*
 * XREFs of HalpMiscInitializeTelemetry @ 0x1407C8C70
 * Callers:
 *     HalpMiscInitSystem @ 0x1409A1520 (HalpMiscInitSystem.c)
 * Callees:
 *     EtwRegister @ 0x140762CB0 (EtwRegister.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14078D094 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 HalpMiscInitializeTelemetry()
{
  if ( EtwRegister(&HAL_ETW_PROVIDER, 0LL, 0LL, &HalpDiagnosticEventHandle) >= 0 )
    HalpDiagnosticEventsRegistered = 1;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((ULONGLONG *)&dword_140C02E38, 0LL, 0LL);
  return 0LL;
}
