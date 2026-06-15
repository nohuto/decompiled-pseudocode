/*
 * XREFs of sub_180129130 @ 0x180129130
 * Callers:
 *     <none>
 * Callees:
 *     sub_18012BB74 @ 0x18012BB74 (sub_18012BB74.c)
 */

__int64 __fastcall sub_180129130(__int64 a1)
{
  __int128 v2; // [rsp+20h] [rbp-48h] BYREF
  int v3; // [rsp+30h] [rbp-38h]
  __int128 v4; // [rsp+40h] [rbp-28h] BYREF
  __int64 v5; // [rsp+50h] [rbp-18h]

  v5 = 0LL;
  v4 = 0LL;
  LOWORD(v4) = 2;
  WORD4(v4) = 0;
  v3 = 2;
  v2 = xmmword_180160C48;
  return sub_18012BB74(a1 - 568, &v2, &v4);
}
