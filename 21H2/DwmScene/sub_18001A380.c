/*
 * XREFs of sub_18001A380 @ 0x18001A380
 * Callers:
 *     sub_1801260F9 @ 0x1801260F9 (sub_1801260F9.c)
 * Callees:
 *     sub_1800B6AF8 @ 0x1800B6AF8 (sub_1800B6AF8.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_18001A380(__int64 a1, char a2)
{
  sub_1800B6AF8();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
