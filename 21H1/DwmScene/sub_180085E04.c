/*
 * XREFs of sub_180085E04 @ 0x180085E04
 * Callers:
 *     sub_1801260C1 @ 0x1801260C1 (sub_1801260C1.c)
 * Callees:
 *     sub_180085CBC @ 0x180085CBC (sub_180085CBC.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_180085E04(__int64 a1, char a2)
{
  sub_180085CBC(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
