/*
 * XREFs of RtlStringCbPrintfW @ 0x1C004CF8C
 * Callers:
 *     ACPIBusIrpQueryInstanceId @ 0x1C0092934 (ACPIBusIrpQueryInstanceId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C0092A34 (ACPIBusIrpQueryDeviceId.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C00068A0 (RtlStringVPrintfWorkerW.c)
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  NTSTATUS result; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  v3 = cbDest >> 1;
  if ( v3 - 1 <= 0x7FFFFFFE )
    return RtlStringVPrintfWorkerW(pszDest, v3, 0LL, pszFormat, va);
  result = -1073741811;
  if ( v3 )
    *pszDest = 0;
  return result;
}
