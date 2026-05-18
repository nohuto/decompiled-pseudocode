/*
 * XREFs of sub_180025D80 @ 0x180025D80
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_180025D80(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  j_j__o_free(*a2);
  result = 0LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  return result;
}
