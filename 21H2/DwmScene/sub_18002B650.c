/*
 * XREFs of sub_18002B650 @ 0x18002B650
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_18002B650(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  j_j__o_free(*a2);
  result = 0LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  return result;
}
