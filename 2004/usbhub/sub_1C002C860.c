/*
 * XREFs of sub_1C002C860 @ 0x1C002C860
 * Callers:
 *     sub_1C002C5C0 @ 0x1C002C5C0 (sub_1C002C5C0.c)
 * Callees:
 *     sub_1C000A740 @ 0x1C000A740 (sub_1C000A740.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C002C860(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-40h]
  _DWORD v7[4]; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 v8; // [rsp+90h] [rbp+30h] BYREF
  int v9; // [rsp+98h] [rbp+38h] BYREF

  v9 = 0;
  sub_1C000F050(a1);
  v7[0] = 128;
  v8 = 2;
  v7[1] = 0x20000;
  v4 = sub_1C000A740(a1, (__int64)v7, a2, &v8, v6, &v9);
  if ( (v4 & 0xC0000000) == 0xC0000000 && !sub_1C001CEB4(v4) )
    sub_1C004A608(a1, 0, 17, a2, v8, v4, v9, (__int64)aHubC, 3876, 0);
  return v4;
}
