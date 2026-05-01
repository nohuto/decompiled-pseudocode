/*
 * XREFs of sub_180065BA8 @ 0x180065BA8
 * Callers:
 *     sub_180039EE4 @ 0x180039EE4 (sub_180039EE4.c)
 * Callees:
 *     sub_1800393C8 @ 0x1800393C8 (sub_1800393C8.c)
 */

char __fastcall sub_180065BA8(__int64 a1, int a2, int a3, int a4)
{
  int v5; // [rsp+48h] [rbp+10h] BYREF
  int v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = a3;
  v5 = a2;
  return sub_1800393C8(a1, (int)&v5, 4LL, (int)&v6, 4LL, a4);
}
