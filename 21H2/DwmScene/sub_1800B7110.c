/*
 * XREFs of sub_1800B7110 @ 0x1800B7110
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800F9480 @ 0x1800F9480 (sub_1800F9480.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_1800B7110(__int64 a1, char a2)
{
  sub_1800F9480();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
