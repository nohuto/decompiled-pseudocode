/*
 * XREFs of sub_18011B25C @ 0x18011B25C
 * Callers:
 *     sub_1801309C4 @ 0x1801309C4 (sub_1801309C4.c)
 * Callees:
 *     sub_18006E8C4 @ 0x18006E8C4 (sub_18006E8C4.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_18011B25C(__int64 *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)a1[1];
  if ( v1 )
  {
    sub_18006E8C4(a1[1], *a1, *(__int64 **)(*v1 + 8LL));
    return j_j__o_free(*v1);
  }
  return result;
}
