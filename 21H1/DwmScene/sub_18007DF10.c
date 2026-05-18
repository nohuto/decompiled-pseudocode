/*
 * XREFs of sub_18007DF10 @ 0x18007DF10
 * Callers:
 *     sub_180125E1E @ 0x180125E1E (sub_180125E1E.c)
 * Callees:
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_18007DF10(_QWORD *a1)
{
  __int64 result; // rax

  if ( a1[1] > 0x100uLL )
    return j__o_free(*a1);
  return result;
}
