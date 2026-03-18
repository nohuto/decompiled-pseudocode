/*
 * XREFs of PnpSetRegistryResourceList @ 0x14089D558
 * Callers:
 *     IoReportDetectedDevice @ 0x140796A80 (IoReportDetectedDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x1403F2F30 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1403F3DF0 (ZwDeleteValueKey.c)
 *     PnpDetermineResourceListSize @ 0x1407393CC (PnpDetermineResourceListSize.c)
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
