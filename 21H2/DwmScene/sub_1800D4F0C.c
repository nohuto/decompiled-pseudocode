/*
 * XREFs of sub_1800D4F0C @ 0x1800D4F0C
 * Callers:
 *     sub_1800D4EA0 @ 0x1800D4EA0 (sub_1800D4EA0.c)
 *     sub_1800D4F0C @ 0x1800D4F0C (sub_1800D4F0C.c)
 *     sub_180109C88 @ 0x180109C88 (sub_180109C88.c)
 * Callees:
 *     sub_1800D4F0C @ 0x1800D4F0C (sub_1800D4F0C.c)
 *     sub_1800D5594 @ 0x1800D5594 (sub_1800D5594.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800D4F0C(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_1800D4F0C(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_1800D5594(v6 + 4);
  }
  return result;
}
