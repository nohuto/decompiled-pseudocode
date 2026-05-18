/*
 * XREFs of sub_1800B91D0 @ 0x1800B91D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B8234 @ 0x1800B8234 (sub_1800B8234.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_1800B91D0(__int64 a1, char a2)
{
  sub_1800B8234(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
