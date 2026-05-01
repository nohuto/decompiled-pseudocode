/*
 * XREFs of sub_18006CB94 @ 0x18006CB94
 * Callers:
 *     sub_18006EA80 @ 0x18006EA80 (sub_18006EA80.c)
 * Callees:
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18006C4A4 @ 0x18006C4A4 (sub_18006C4A4.c)
 */

bool __fastcall sub_18006CB94(_DWORD *a1, char a2, unsigned int a3, __int64 a4)
{
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+50h] [rbp+18h] BYREF

  sub_18001E380();
  sub_18006C4A4(a1, a2, &v10, v9);
  sub_18000F390();
  return a3 <= v10 && (~v9[0] & a4) == 0;
}
