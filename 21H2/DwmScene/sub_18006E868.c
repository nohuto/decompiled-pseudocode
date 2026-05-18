/*
 * XREFs of sub_18006E868 @ 0x18006E868
 * Callers:
 *     sub_18006E7FC @ 0x18006E7FC (sub_18006E7FC.c)
 *     sub_18006E868 @ 0x18006E868 (sub_18006E868.c)
 * Callees:
 *     sub_180012A18 @ 0x180012A18 (sub_180012A18.c)
 *     sub_18006E868 @ 0x18006E868 (sub_18006E868.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_18006E868(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_18006E868(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_180012A18(v6 + 5);
  }
  return result;
}
