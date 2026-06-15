/*
 * XREFs of sub_1800C2D70 @ 0x1800C2D70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800C2A74 @ 0x1800C2A74 (sub_1800C2A74.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall sub_1800C2D70(struct _RTL_CRITICAL_SECTION *a1, char a2)
{
  sub_1800C2A74(a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
