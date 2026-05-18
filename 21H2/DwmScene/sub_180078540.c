/*
 * XREFs of sub_180078540 @ 0x180078540
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008B63C @ 0x18008B63C (sub_18008B63C.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_180078540(__int64 a1, char a2)
{
  sub_18008B63C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
