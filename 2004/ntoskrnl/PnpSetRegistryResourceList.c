/*
 * XREFs of PnpSetRegistryResourceList @ 0x14089E878
 * Callers:
 *     IoReportDetectedDevice @ 0x140796830 (IoReportDetectedDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x1403F41C0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1403F5080 (ZwDeleteValueKey.c)
 *     PnpDetermineResourceListSize @ 0x14073AF4C (PnpDetermineResourceListSize.c)
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
