/*
 * XREFs of sub_18000806C @ 0x18000806C
 * Callers:
 *     sub_180006AA8 @ 0x180006AA8 (sub_180006AA8.c)
 * Callees:
 *     sub_180005394 @ 0x180005394 (sub_180005394.c)
 */

char __fastcall sub_18000806C(__int64 a1, int a2, int a3)
{
  int v4; // [rsp+48h] [rbp+10h] BYREF
  int v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = a3;
  v4 = a2;
  return sub_180005394(a1, &v4, 4uLL, (int)&v5, 4uLL, 1);
}
