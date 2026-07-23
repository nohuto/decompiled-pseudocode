/*
 * XREFs of BapdRegisterEtwProvider @ 0x14039B564
 * Callers:
 *     BapdWriteEtwEvents @ 0x14039B178 (BapdWriteEtwEvents.c)
 *     BapdRecordFirmwareBootStats @ 0x14099A260 (BapdRecordFirmwareBootStats.c)
 *     BapdpRecordIumStatus @ 0x140A42AAC (BapdpRecordIumStatus.c)
 * Callees:
 *     EtwRegister @ 0x140762E70 (EtwRegister.c)
 *     EtwSetInformation @ 0x14077F2B0 (EtwSetInformation.c)
 */

NTSTATUS __fastcall BapdRegisterEtwProvider(const GUID *a1, char a2, ULONGLONG *a3)
{
  NTSTATUS result; // eax

  result = EtwRegister(a1, 0LL, 0LL, a3);
  if ( result < 0 )
  {
    *a3 = 0LL;
  }
  else
  {
    if ( a2 )
      EtwSetInformation(
        *a3,
        EventProviderSetTraits,
        &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
        (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
    return 0;
  }
  return result;
}
