/*
 * XREFs of sub_180035480 @ 0x180035480
 * Callers:
 *     sub_180015E80 @ 0x180015E80 (sub_180015E80.c)
 *     sub_180016DD0 @ 0x180016DD0 (sub_180016DD0.c)
 *     sub_1800730C0 @ 0x1800730C0 (sub_1800730C0.c)
 *     sub_180074024 @ 0x180074024 (sub_180074024.c)
 *     sub_1800742F0 @ 0x1800742F0 (sub_1800742F0.c)
 *     sub_1800752F4 @ 0x1800752F4 (sub_1800752F4.c)
 * Callees:
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18001CC80 @ 0x18001CC80 (sub_18001CC80.c)
 *     sub_180035534 @ 0x180035534 (sub_180035534.c)
 */

__int64 __fastcall sub_180035480(int *a1)
{
  __int64 v1; // rbp
  int v3; // edi
  char v4; // r14
  int v5; // ebx
  int v6; // eax
  int v7; // ecx
  char v8; // bl
  unsigned int v9; // edi

  v1 = (__int64)(a1 + 16);
  v3 = 0;
  v4 = 0;
  sub_1800093A0((__int64)(a1 + 16), 0);
  if ( a1[6] >= 0 )
  {
    if ( (v5 = a1[311],
          v6 = sub_180035534(a1),
          v7 = a1[312],
          v4 = v5 != v6,
          (((unsigned __int8)v5 ^ (unsigned __int8)v6) & 0x40) != 0)
      || (v7 & 0x40) != 0
      || (v8 = v7 | v5, (v6 & 8) == 0) && (v8 & 8) != 0
      || (v6 & 0x10) == 0 && (v8 & 0x10) != 0 )
    {
      v3 = 1;
    }
  }
  v9 = sub_18001CC80(v1, v4) | v3;
  sub_18000A110(v1);
  return v9;
}
