/*
 * XREFs of RaidUnitSavePowerCycleCount @ 0x1C0016658
 * Callers:
 *     RaidUnitSavePowerCycleCountWorker @ 0x1C0012600 (RaidUnitSavePowerCycleCountWorker.c)
 *     RaidDeleteUnit @ 0x1C001380C (RaidDeleteUnit.c)
 * Callees:
 *     PortRegistryWriteDeviceKey @ 0x1C00729B4 (PortRegistryWriteDeviceKey.c)
 */

__int64 __fastcall RaidUnitSavePowerCycleCount(__int64 a1)
{
  struct _UNICODE_STRING v3; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  DestinationString = 0LL;
  v3 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Storport");
  RtlInitUnicodeString(&v3, L"PowerCycleCount");
  return PortRegistryWriteDeviceKey(
           *(_QWORD *)(a1 + 8),
           (unsigned int)&DestinationString,
           (unsigned int)&v3,
           4,
           a1 + 3200,
           4);
}
