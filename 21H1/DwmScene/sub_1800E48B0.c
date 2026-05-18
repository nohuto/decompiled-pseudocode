/*
 * XREFs of sub_1800E48B0 @ 0x1800E48B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800E4880 @ 0x1800E4880 (sub_1800E4880.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_1800E48B0(_QWORD *a1, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_1800E4880(a1, a2);
  if ( (v2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
