/*
 * XREFs of sub_1800D6440 @ 0x1800D6440
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D5F50 @ 0x1800D5F50 (sub_1800D5F50.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 *__fastcall sub_1800D6440(__int64 *a1, char a2)
{
  sub_1800D5F50(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
