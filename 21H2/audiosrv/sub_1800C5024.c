/*
 * XREFs of sub_1800C5024 @ 0x1800C5024
 * Callers:
 *     sub_1800C50AC @ 0x1800C50AC (sub_1800C50AC.c)
 *     sub_1800C5A78 @ 0x1800C5A78 (sub_1800C5A78.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800C4EF8 @ 0x1800C4EF8 (sub_1800C4EF8.c)
 */

void *__fastcall sub_1800C5024(void *a1)
{
  sub_1800C4EF8((__int64)a1);
  sub_18006A148(a1);
  return a1;
}
