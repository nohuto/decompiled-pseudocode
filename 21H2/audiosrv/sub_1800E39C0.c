/*
 * XREFs of sub_1800E39C0 @ 0x1800E39C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

void *__fastcall sub_1800E39C0(void *a1, char a2)
{
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
