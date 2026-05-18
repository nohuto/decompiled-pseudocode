/*
 * XREFs of sub_1800837E0 @ 0x1800837E0
 * Callers:
 *     sub_18012B736 @ 0x18012B736 (sub_18012B736.c)
 * Callees:
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_1800837E0(_QWORD *a1)
{
  __int64 result; // rax

  if ( a1[1] > 0x100uLL )
    return j__o_free(*a1);
  return result;
}
