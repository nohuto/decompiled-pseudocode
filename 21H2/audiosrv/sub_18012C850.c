/*
 * XREFs of sub_18012C850 @ 0x18012C850
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_18012C764 @ 0x18012C764 (sub_18012C764.c)
 */

void *__fastcall sub_18012C850(void *a1, char a2)
{
  sub_18012C764((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_180033A70(a1);
  return a1;
}
