/*
 * XREFs of PnpSetRegistryResourceList @ 0x1408A1978
 * Callers:
 *     IoReportDetectedDevice @ 0x1407AE910 (IoReportDetectedDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x1403FAFA0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1403FBE80 (ZwDeleteValueKey.c)
 *     PnpDetermineResourceListSize @ 0x140750A1C (PnpDetermineResourceListSize.c)
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
