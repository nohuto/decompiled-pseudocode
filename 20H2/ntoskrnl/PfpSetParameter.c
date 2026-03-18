/*
 * XREFs of PfpSetParameter @ 0x1407BACB4
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1406F4480 (PfSetSuperfetchInformation.c)
 *     PfpSetBaseTime @ 0x1407BAC20 (PfpSetBaseTime.c)
 *     PfpParametersInitialize @ 0x140A6D424 (PfpParametersInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x1403F8D70 (ZwSetValueKey.c)
 */

NTSTATUS __fastcall PfpSetParameter(HANDLE KeyHandle, const WCHAR *a2, __int64 a3, void *a4, ULONG DataSize)
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  if ( KeyHandle )
    return ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, a4, DataSize);
  else
    return -1073741811;
}
