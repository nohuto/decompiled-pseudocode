/*
 * XREFs of sub_1800E397C @ 0x1800E397C
 * Callers:
 *     sub_180074850 @ 0x180074850 (sub_180074850.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800E349C @ 0x1800E349C (sub_1800E349C.c)
 */

void *__fastcall sub_1800E397C(void *a1, char a2)
{
  sub_1800E349C((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
