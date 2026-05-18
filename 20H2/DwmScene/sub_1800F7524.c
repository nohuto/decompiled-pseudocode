/*
 * XREFs of sub_1800F7524 @ 0x1800F7524
 * Callers:
 *     sub_180129CD7 @ 0x180129CD7 (sub_180129CD7.c)
 * Callees:
 *     sub_1800F7354 @ 0x1800F7354 (sub_1800F7354.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_1800F7524(_QWORD *a1, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_1800F7354(a1, a2);
  if ( (v2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
