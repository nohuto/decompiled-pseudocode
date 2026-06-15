/*
 * XREFs of sub_1800C6634 @ 0x1800C6634
 * Callers:
 *     sub_180074540 @ 0x180074540 (sub_180074540.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800C62F4 @ 0x1800C62F4 (sub_1800C62F4.c)
 */

void *__fastcall sub_1800C6634(void *a1, char a2)
{
  sub_1800C62F4((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
