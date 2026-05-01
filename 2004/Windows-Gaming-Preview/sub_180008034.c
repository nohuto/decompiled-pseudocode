/*
 * XREFs of sub_180008034 @ 0x180008034
 * Callers:
 *     sub_180006AA8 @ 0x180006AA8 (sub_180006AA8.c)
 * Callees:
 *     sub_180005394 @ 0x180005394 (sub_180005394.c)
 */

char __fastcall sub_180008034(__int64 a1, int a2, int a3, int a4)
{
  int v5; // [rsp+48h] [rbp+10h] BYREF
  int v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = a3;
  v5 = a2;
  return sub_180005394(a1, &v5, 4uLL, (int)&v6, 4uLL, a4);
}
