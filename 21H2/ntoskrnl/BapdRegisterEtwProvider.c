/*
 * XREFs of BapdRegisterEtwProvider @ 0x1403B7244
 * Callers:
 *     BapdWriteEtwEvents @ 0x1403B6E4C (BapdWriteEtwEvents.c)
 *     BapdRecordFirmwareBootStats @ 0x140A5464C (BapdRecordFirmwareBootStats.c)
 *     BapdpRecordIumStatus @ 0x140B1CB28 (BapdpRecordIumStatus.c)
 * Callees:
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 *     EtwSetInformation @ 0x1406DEBF0 (EtwSetInformation.c)
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
