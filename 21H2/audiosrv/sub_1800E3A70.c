/*
 * XREFs of sub_1800E3A70 @ 0x1800E3A70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800E3474 @ 0x1800E3474 (sub_1800E3474.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall sub_1800E3A70(struct _RTL_CRITICAL_SECTION *a1, char a2)
{
  DeleteCriticalSection(a1 + 1);
  sub_1800E3474((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
