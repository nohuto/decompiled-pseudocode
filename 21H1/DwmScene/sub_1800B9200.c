/*
 * XREFs of sub_1800B9200 @ 0x1800B9200
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B826C @ 0x1800B826C (sub_1800B826C.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 *__fastcall sub_1800B9200(__int64 *a1, char a2)
{
  sub_1800B826C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
