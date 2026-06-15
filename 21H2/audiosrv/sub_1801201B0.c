/*
 * XREFs of sub_1801201B0 @ 0x1801201B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1801200F8 @ 0x1801200F8 (sub_1801200F8.c)
 */

void *__fastcall sub_1801201B0(void *a1, char a2)
{
  sub_1801200F8((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
