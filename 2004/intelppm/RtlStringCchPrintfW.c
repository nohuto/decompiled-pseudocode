/*
 * XREFs of RtlStringCchPrintfW @ 0x1C0001F6C
 * Callers:
 *     PopulateEnergyEstimationModel @ 0x1C003B590 (PopulateEnergyEstimationModel.c)
 *     ReadEnergyEquation @ 0x1C003B680 (ReadEnergyEquation.c)
 *     ReadPowerCurve @ 0x1C003BEAC (ReadPowerCurve.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C0001FC4 (RtlStringVPrintfWorkerW.c)
 */

NTSTATUS RtlStringCchPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  NTSTATUS v3; // r9d
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
    return RtlStringVPrintfWorkerW(pszDest, cchDest, (size_t *)pszFormat, pszFormat, va);
  if ( cchDest )
    *pszDest = 0;
  return v3;
}
