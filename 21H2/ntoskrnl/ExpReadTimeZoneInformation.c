/*
 * XREFs of ExpReadTimeZoneInformation @ 0x1405D1A44
 * Callers:
 *     ExpReadSiloTimeZoneMarker @ 0x1405D1A14 (ExpReadSiloTimeZoneMarker.c)
 *     ExpTimeZoneInitSiloState @ 0x1405D1B7C (ExpTimeZoneInitSiloState.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     RtlQueryRegistryValuesEx @ 0x14061AFD0 (RtlQueryRegistryValuesEx.c)
 */

NTSTATUS __fastcall ExpReadTimeZoneInformation(wchar_t *a1, int a2, void *a3)
{
  _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+30h] [rbp-78h] BYREF
  int v7; // [rsp+B8h] [rbp+10h] BYREF

  v7 = a2;
  memset(QueryTable, 0, sizeof(QueryTable));
  QueryTable[0].Flags = 288;
  QueryTable[0].Name = a1;
  QueryTable[0].EntryContext = a3;
  QueryTable[0].DefaultType = 67108868;
  QueryTable[0].DefaultData = &v7;
  QueryTable[0].DefaultLength = 4;
  return RtlQueryRegistryValuesEx(2u, L"TimeZoneInformation", QueryTable, 0LL, 0LL);
}
