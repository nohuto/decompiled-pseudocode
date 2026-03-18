/*
 * XREFs of BapdRegisterEtwProvider @ 0x1403A77B8
 * Callers:
 *     BapdWriteEtwEvents @ 0x1403A73CC (BapdWriteEtwEvents.c)
 *     BapdRecordFirmwareBootStats @ 0x14099DF40 (BapdRecordFirmwareBootStats.c)
 *     BapdpRecordIumStatus @ 0x140A49BA0 (BapdpRecordIumStatus.c)
 * Callees:
 *     EtwRegister @ 0x14075E4C0 (EtwRegister.c)
 *     EtwSetInformation @ 0x14077B310 (EtwSetInformation.c)
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
