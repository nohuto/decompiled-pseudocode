/*
 * XREFs of sub_18001A440 @ 0x18001A440
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800199B8 @ 0x1800199B8 (sub_1800199B8.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_18001A440(__int64 a1, char a2)
{
  sub_1800199B8(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
