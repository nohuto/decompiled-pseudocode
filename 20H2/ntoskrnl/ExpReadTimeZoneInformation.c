/*
 * XREFs of ExpReadTimeZoneInformation @ 0x1405CF708
 * Callers:
 *     ExpReadSiloTimeZoneMarker @ 0x1405CF6D8 (ExpReadSiloTimeZoneMarker.c)
 *     ExpTimeZoneInitSiloState @ 0x1405CF840 (ExpTimeZoneInitSiloState.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     RtlQueryRegistryValuesEx @ 0x1406DC2F0 (RtlQueryRegistryValuesEx.c)
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
