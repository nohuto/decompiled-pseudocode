/*
 * XREFs of sub_1800388A0 @ 0x1800388A0
 * Callers:
 *     sub_180039EE4 @ 0x180039EE4 (sub_180039EE4.c)
 * Callees:
 *     sub_1800393C8 @ 0x1800393C8 (sub_1800393C8.c)
 */

__int64 __fastcall sub_1800388A0(int a1, int a2, int a3)
{
  int v4; // [rsp+48h] [rbp+10h] BYREF
  int v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = a3;
  v4 = a2;
  return sub_1800393C8(a1, (unsigned int)&v4, 4, (unsigned int)&v5, 4LL, 1);
}
