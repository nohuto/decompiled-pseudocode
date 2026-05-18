/*
 * XREFs of sub_180068014 @ 0x180068014
 * Callers:
 *     sub_180068E78 @ 0x180068E78 (sub_180068E78.c)
 *     sub_180091EE0 @ 0x180091EE0 (sub_180091EE0.c)
 *     sub_1800971B0 @ 0x1800971B0 (sub_1800971B0.c)
 *     sub_18009F380 @ 0x18009F380 (sub_18009F380.c)
 *     sub_1800A0F1C @ 0x1800A0F1C (sub_1800A0F1C.c)
 *     sub_1800CC860 @ 0x1800CC860 (sub_1800CC860.c)
 *     sub_1800D08D0 @ 0x1800D08D0 (sub_1800D08D0.c)
 *     sub_1800D2C78 @ 0x1800D2C78 (sub_1800D2C78.c)
 *     sub_1800D3404 @ 0x1800D3404 (sub_1800D3404.c)
 * Callees:
 *     sub_180067924 @ 0x180067924 (sub_180067924.c)
 */

__int64 __fastcall sub_180068014(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v4[6]; // [rsp+30h] [rbp-18h] BYREF

  v4[0] = a2;
  sub_180067924((__int64 **)(a1 + 80), (__int64)&v3, v4);
  result = v3;
  *(_BYTE *)(v3 + 32) = 1;
  return result;
}
