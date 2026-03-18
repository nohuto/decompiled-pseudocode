/*
 * XREFs of sub_1C002D7DC @ 0x1C002D7DC
 * Callers:
 *     sub_1C002F8C0 @ 0x1C002F8C0 (sub_1C002F8C0.c)
 * Callees:
 *     sub_1C000A740 @ 0x1C000A740 (sub_1C000A740.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C002D7DC(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rbx
  int v5; // r10d
  int v7; // [rsp+20h] [rbp-60h]
  int v8; // [rsp+50h] [rbp-30h] BYREF
  int v9; // [rsp+58h] [rbp-28h] BYREF
  __int16 v10; // [rsp+5Ch] [rbp-24h]
  __int16 v11; // [rsp+5Eh] [rbp-22h]
  __int16 v12; // [rsp+60h] [rbp-20h] BYREF
  int v13; // [rsp+62h] [rbp-1Eh] BYREF
  __int16 v14; // [rsp+66h] [rbp-1Ah]
  char v15; // [rsp+68h] [rbp-18h]
  char v16; // [rsp+69h] [rbp-17h]

  v2 = a2;
  v16 = 0;
  v8 = 0;
  sub_1C000F050(a1);
  v13 = 0;
  v14 = v2;
  v12 = 0;
  sub_1C000FD80(a1, 8, 1886416944, (unsigned int)v2, 0LL);
  v11 = 0;
  v9 = 525091;
  v15 = 3;
  v10 = v2;
  v4 = (int)sub_1C000A740(a1, (__int64)&v9, 0LL, (_WORD *)&v13 + 1, v7, &v8);
  sub_1C000FD80(a1, 8, 1886416945, v4, v8);
  if ( (v4 & 0xC0000000) == 0xC0000000 && !sub_1C001CEB4(v4) )
    sub_1C004A608(a1, (unsigned __int16)v2, 12, (unsigned int)&v12, 10, v4, v5, (__int64)aHubC, 3524, 0);
  sub_1C000FD80(a1, 8, 1886549072, v4, v2);
  return (unsigned int)v4;
}
