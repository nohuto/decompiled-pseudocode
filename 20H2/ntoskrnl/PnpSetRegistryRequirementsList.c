/*
 * XREFs of PnpSetRegistryRequirementsList @ 0x1408A4340
 * Callers:
 *     IoReportDetectedDevice @ 0x1407A5B60 (IoReportDetectedDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x1403F8D70 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1403F9C50 (ZwDeleteValueKey.c)
 */

NTSTATUS __fastcall PnpSetRegistryRequirementsList(HANDLE KeyHandle, __int64 a2, _DWORD *a3)
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"BasicConfigVector");
  if ( a3 )
    return ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xAu, a3, *a3);
  else
    return ZwDeleteValueKey(KeyHandle, &DestinationString);
}
