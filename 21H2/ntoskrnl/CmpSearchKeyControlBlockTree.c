/*
 * XREFs of CmpSearchKeyControlBlockTree @ 0x14086F1B4
 * Callers:
 *     CmKeyBodyReplicateToVirtual @ 0x1406A0A00 (CmKeyBodyReplicateToVirtual.c)
 *     CmpDoParseKey @ 0x1406F9170 (CmpDoParseKey.c)
 *     CmpRefreshHive @ 0x14087D3F8 (CmpRefreshHive.c)
 * Callees:
 *     CmpSearchKeyControlBlockTreeEx @ 0x14086F1D4 (CmpSearchKeyControlBlockTreeEx.c)
 */

__int64 __fastcall CmpSearchKeyControlBlockTree(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // [rsp+20h] [rbp-18h]

  v4 = 1;
  return CmpSearchKeyControlBlockTreeEx(a1, a2, a3, 0LL, v4);
}
