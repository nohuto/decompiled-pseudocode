/*
 * XREFs of ExpReadTimeZoneInformation @ 0x1405D1A44
 * Callers:
 *     ExpReadSiloTimeZoneMarker @ 0x1405D1A14 (ExpReadSiloTimeZoneMarker.c)
 *     ExpTimeZoneInitSiloState @ 0x1405D1B7C (ExpTimeZoneInitSiloState.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
 *     RtlQueryRegistryValuesEx @ 0x1406BBF50 (RtlQueryRegistryValuesEx.c)
 */

__int64 __fastcall ExpReadTimeZoneInformation(__int64 a1, int a2, __int64 a3)
{
  _QWORD v6[15]; // [rsp+30h] [rbp-78h] BYREF
  int v7; // [rsp+B8h] [rbp+10h] BYREF

  v7 = a2;
  memset(v6, 0, 0x70uLL);
  LODWORD(v6[1]) = 288;
  v6[2] = a1;
  v6[3] = a3;
  LODWORD(v6[4]) = 67108868;
  v6[5] = &v7;
  LODWORD(v6[6]) = 4;
  return RtlQueryRegistryValuesEx(2LL, L"TimeZoneInformation", v6, 0LL, 0LL);
}
