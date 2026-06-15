/*
 * XREFs of sub_180109B50 @ 0x180109B50
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_180109A24 @ 0x180109A24 (sub_180109A24.c)
 */

void *__fastcall sub_180109B50(void *a1, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_180109A24((__int64)a1, a2);
  if ( (v2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
