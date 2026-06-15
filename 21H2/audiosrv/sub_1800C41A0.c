/*
 * XREFs of sub_1800C41A0 @ 0x1800C41A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800C40FC @ 0x1800C40FC (sub_1800C40FC.c)
 */

void *__fastcall sub_1800C41A0(void *a1, char a2)
{
  sub_1800C40FC((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
