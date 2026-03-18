/*
 * XREFs of RtlStringCchPrintfA @ 0x1C00089CC
 * Callers:
 *     Endpoint_Enable @ 0x1C0007CC0 (Endpoint_Enable.c)
 *     Endpoint_SetLogIdentifier @ 0x1C000F1C8 (Endpoint_SetLogIdentifier.c)
 *     Controller_TelemetryReport @ 0x1C00328F0 (Controller_TelemetryReport.c)
 *     Command_PrepareHardware @ 0x1C006BA58 (Command_PrepareHardware.c)
 *     Interrupter_PrepareInterrupter @ 0x1C006CAF8 (Interrupter_PrepareInterrupter.c)
 *     Controller_Create @ 0x1C006D970 (Controller_Create.c)
 *     Controller_SetLogIdentifier @ 0x1C007150C (Controller_SetLogIdentifier.c)
 *     Controller_PopulateAcpiDeviceInformation @ 0x1C0074770 (Controller_PopulateAcpiDeviceInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCchPrintfA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  NTSTATUS v3; // edi
  size_t v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v5 = cchDest - 1;
    v3 = 0;
    v6 = _vsnprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      pszDest[v5] = 0;
      return -2147483643;
    }
    else if ( v6 == v5 )
    {
      pszDest[v5] = 0;
    }
  }
  return v3;
}
