/*
 * XREFs of sub_18007D890 @ 0x18007D890
 * Callers:
 *     sub_18007FFAC @ 0x18007FFAC (sub_18007FFAC.c)
 * Callees:
 *     sub_1800060BC @ 0x1800060BC (sub_1800060BC.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18001CC80 @ 0x18001CC80 (sub_18001CC80.c)
 */

__int64 __fastcall sub_18007D890(__int64 a1, __int64 a2)
{
  __int64 *v4; // rdi
  int v6; // [rsp+40h] [rbp-18h]
  __int64 v7; // [rsp+60h] [rbp+8h] BYREF

  sub_1800093A0(a1, 0);
  v4 = (__int64 *)(a1 + 648);
  while ( (*v4 & 0x20000000000000LL) != 0 )
  {
    v7 = *v4;
    sub_18000A110(a1);
    RtlWaitOnAddress(a1 + 648, &v7, 8LL);
    sub_1800093A0(a1, 0);
  }
  *v4 |= 0x20000000000000uLL;
  sub_1800060BC(a1, 1LL, 7LL, 0, 5, 0, 0, 0LL, v6, a2);
  sub_18001CC80(a1, 0);
  return sub_18000A110(a1);
}
