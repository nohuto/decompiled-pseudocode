/*
 * XREFs of sub_180120F70 @ 0x180120F70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_180120EB4 @ 0x180120EB4 (sub_180120EB4.c)
 */

void *__fastcall sub_180120F70(void *a1, char a2)
{
  sub_180120EB4((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
