/*
 * XREFs of sub_1800464C0 @ 0x1800464C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CF1A4 @ 0x1800CF1A4 (sub_1800CF1A4.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_1800464C0(__int64 a1, char a2)
{
  sub_1800CF1A4();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
