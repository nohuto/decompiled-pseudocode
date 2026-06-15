/*
 * XREFs of sub_1800B8350 @ 0x1800B8350
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800B7D60 @ 0x1800B7D60 (sub_1800B7D60.c)
 */

void *__fastcall sub_1800B8350(void *a1, char a2)
{
  sub_1800B7D60((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
