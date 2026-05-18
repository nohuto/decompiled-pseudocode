/*
 * XREFs of sub_180038750 @ 0x180038750
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CDD40 @ 0x1800CDD40 (sub_1800CDD40.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_180038750(__int64 a1, char a2)
{
  sub_1800CDD40(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
