/*
 * XREFs of sub_1800C65F8 @ 0x1800C65F8
 * Callers:
 *     sub_180074530 @ 0x180074530 (sub_180074530.c)
 * Callees:
 *     sub_180006524 @ 0x180006524 (sub_180006524.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

void *__fastcall sub_1800C65F8(void *a1, char a2)
{
  sub_180006524((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
