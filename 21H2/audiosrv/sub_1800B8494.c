/*
 * XREFs of sub_1800B8494 @ 0x1800B8494
 * Callers:
 *     sub_180074480 @ 0x180074480 (sub_180074480.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800B7AB8 @ 0x1800B7AB8 (sub_1800B7AB8.c)
 *     sub_1800B7FA0 @ 0x1800B7FA0 (sub_1800B7FA0.c)
 */

_QWORD *__fastcall sub_1800B8494(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v4; // bl

  v4 = a2;
  sub_1800B7AB8(a1 + 5, a2, a3);
  sub_1800B7FA0(a1);
  if ( (v4 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
