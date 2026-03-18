/*
 * XREFs of sub_1C003CAB8 @ 0x1C003CAB8
 * Callers:
 *     sub_1C0036A00 @ 0x1C0036A00 (sub_1C0036A00.c)
 *     sub_1C004204C @ 0x1C004204C (sub_1C004204C.c)
 *     sub_1C0042AE0 @ 0x1C0042AE0 (sub_1C0042AE0.c)
 *     sub_1C0044420 @ 0x1C0044420 (sub_1C0044420.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001A550 @ 0x1C001A550 (sub_1C001A550.c)
 */

__int64 __fastcall sub_1C003CAB8(__int64 a1)
{
  int v1; // r9d
  __int64 v2; // r10
  __int64 v3; // r11

  sub_1C000FD80(a1, 8, 1381192749, 0LL, 0LL);
  return sub_1C001A550(v3, v2, v1 + 2);
}
