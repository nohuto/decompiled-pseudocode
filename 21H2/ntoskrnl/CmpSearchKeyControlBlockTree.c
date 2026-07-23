/*
 * XREFs of CmpSearchKeyControlBlockTree @ 0x14086F314
 * Callers:
 *     CmKeyBodyReplicateToVirtual @ 0x1405FFD40 (CmKeyBodyReplicateToVirtual.c)
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 *     CmpRefreshHive @ 0x14087D558 (CmpRefreshHive.c)
 * Callees:
 *     CmpSearchKeyControlBlockTreeEx @ 0x14086F334 (CmpSearchKeyControlBlockTreeEx.c)
 */

__int64 __fastcall CmpSearchKeyControlBlockTree(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // [rsp+20h] [rbp-18h]

  v4 = 1;
  return CmpSearchKeyControlBlockTreeEx(a1, a2, a3, 0LL, v4);
}
