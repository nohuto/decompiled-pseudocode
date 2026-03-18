/*
 * XREFs of sub_1C00138BC @ 0x1C00138BC
 * Callers:
 *     sub_1C0016130 @ 0x1C0016130 (sub_1C0016130.c)
 *     sub_1C0033A0C @ 0x1C0033A0C (sub_1C0033A0C.c)
 * Callees:
 *     sub_1C000A740 @ 0x1C000A740 (sub_1C000A740.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C002C774 @ 0x1C002C774 (sub_1C002C774.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C00138BC(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rsi
  _DWORD *v4; // r13
  __int64 v5; // rdi
  int v7; // r10d
  int v8; // eax
  int v9; // [rsp+20h] [rbp-40h]
  int v10; // [rsp+50h] [rbp-10h] BYREF
  __int16 v11; // [rsp+54h] [rbp-Ch]
  __int16 v12; // [rsp+56h] [rbp-Ah]
  __int16 v13; // [rsp+A8h] [rbp+48h] BYREF
  int v14; // [rsp+B0h] [rbp+50h] BYREF
  int v15; // [rsp+B8h] [rbp+58h] BYREF

  v2 = a2;
  v14 = 0;
  v13 = 0;
  v15 = 0;
  v4 = sub_1C000F050(a1);
  sub_1C000FD80(a1, 8, 1937076272, (unsigned int)v2, 0LL);
  v10 = 131875;
  v11 = v2;
  v12 = 0;
  v5 = (int)sub_1C000A740(a1, (__int64)&v10, 0LL, &v13, v9, &v14);
  sub_1C000FD80(a1, 8, 1937076273, v5, v14);
  if ( (v5 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)sub_1C001CEB4((unsigned int)v5) )
    sub_1C004A608(a1, (unsigned __int16)v2, 51, 0, 0, v5, v7, (__int64)aHubC, 3663, 0);
  sub_1C000FD80(a1, 8, 1937077072, v5, v2);
  if ( (v4[641] & 2) != 0 )
  {
    v8 = sub_1C002C774(a1, (unsigned __int16)v2, &v15, &v14);
    sub_1C000FD80(a1, 8, 1937076307, v8, v14);
  }
  return (unsigned int)v5;
}
