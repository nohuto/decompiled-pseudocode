/*
 * XREFs of sub_180072C70 @ 0x180072C70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180085D6C @ 0x180085D6C (sub_180085D6C.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_180072C70(__int64 a1, char a2)
{
  sub_180085D6C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
