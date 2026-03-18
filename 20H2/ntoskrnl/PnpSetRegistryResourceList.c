/*
 * XREFs of PnpSetRegistryResourceList @ 0x1408A43A8
 * Callers:
 *     IoReportDetectedDevice @ 0x1407A5B60 (IoReportDetectedDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x1403F8D70 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1403F9C50 (ZwDeleteValueKey.c)
 *     PnpDetermineResourceListSize @ 0x140749E5C (PnpDetermineResourceListSize.c)
 */

NTSTATUS __fastcall PnpSetRegistryResourceList(HANDLE KeyHandle, __int64 a2, _DWORD *a3)
{
  ULONG DataSize; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"BootConfig");
  if ( !a3 )
    return ZwDeleteValueKey(KeyHandle, &DestinationString);
  DataSize = PnpDetermineResourceListSize(a3);
  return ZwSetValueKey(KeyHandle, &DestinationString, 0, 8u, a3, DataSize);
}
