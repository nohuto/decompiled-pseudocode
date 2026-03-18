/*
 * XREFs of sub_1C002AD90 @ 0x1C002AD90
 * Callers:
 *     sub_1C000A080 @ 0x1C000A080 (sub_1C000A080.c)
 *     sub_1C001C580 @ 0x1C001C580 (sub_1C001C580.c)
 *     sub_1C003BD90 @ 0x1C003BD90 (sub_1C003BD90.c)
 * Callees:
 *     sub_1C000A740 @ 0x1C000A740 (sub_1C000A740.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

__int64 __fastcall sub_1C002AD90(__int64 a1, unsigned __int16 a2, _DWORD *a3)
{
  __int64 v3; // rdi
  int v6; // eax
  unsigned int v7; // r10d
  int v9; // [rsp+20h] [rbp-28h]
  __int16 v10; // [rsp+58h] [rbp+10h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF
  __int16 v12; // [rsp+6Ch] [rbp+24h]
  __int16 v13; // [rsp+6Eh] [rbp+26h]

  v3 = a2;
  v10 = 0;
  sub_1C000F050(a1);
  v11 = 1048867;
  v12 = v3;
  v13 = 0;
  v6 = sub_1C000A740(a1, (__int64)&v11, 0LL, &v10, v9, a3);
  sub_1C000FD80(a1, 8, 1718382659, v6, v3);
  return v7;
}
