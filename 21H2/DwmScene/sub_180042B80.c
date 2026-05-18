/*
 * XREFs of sub_180042B80 @ 0x180042B80
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CE39C @ 0x1800CE39C (sub_1800CE39C.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_180042B80(__int64 a1, char a2)
{
  sub_1800CE39C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
