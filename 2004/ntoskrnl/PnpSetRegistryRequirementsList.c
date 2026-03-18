/*
 * XREFs of PnpSetRegistryRequirementsList @ 0x14089E810
 * Callers:
 *     IoReportDetectedDevice @ 0x140796830 (IoReportDetectedDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x1403F41C0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1403F5080 (ZwDeleteValueKey.c)
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
