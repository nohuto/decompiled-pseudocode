/*
 * XREFs of sub_1800E0E90 @ 0x1800E0E90
 * Callers:
 *     sub_1800E0DF0 @ 0x1800E0DF0 (sub_1800E0DF0.c)
 *     sub_1800E0E00 @ 0x1800E0E00 (sub_1800E0E00.c)
 *     sub_1800E0E10 @ 0x1800E0E10 (sub_1800E0E10.c)
 *     sub_1800E0E20 @ 0x1800E0E20 (sub_1800E0E20.c)
 *     sub_1800E0E30 @ 0x1800E0E30 (sub_1800E0E30.c)
 *     sub_1800E0E40 @ 0x1800E0E40 (sub_1800E0E40.c)
 *     sub_1800E0E50 @ 0x1800E0E50 (sub_1800E0E50.c)
 *     sub_1800E0E60 @ 0x1800E0E60 (sub_1800E0E60.c)
 *     sub_1800E0E70 @ 0x1800E0E70 (sub_1800E0E70.c)
 *     sub_1800E0E80 @ 0x1800E0E80 (sub_1800E0E80.c)
 * Callees:
 *     sub_1800E0C94 @ 0x1800E0C94 (sub_1800E0C94.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_1800E0E90(_QWORD *a1, char a2)
{
  sub_1800E0C94(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
