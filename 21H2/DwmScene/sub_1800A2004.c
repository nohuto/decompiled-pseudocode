/*
 * XREFs of sub_1800A2004 @ 0x1800A2004
 * Callers:
 *     sub_1800A1EC0 @ 0x1800A1EC0 (sub_1800A1EC0.c)
 *     sub_1800A2004 @ 0x1800A2004 (sub_1800A2004.c)
 *     sub_1800A7454 @ 0x1800A7454 (sub_1800A7454.c)
 * Callees:
 *     sub_1800A2004 @ 0x1800A2004 (sub_1800A2004.c)
 *     sub_1800A46D8 @ 0x1800A46D8 (sub_1800A46D8.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800A2004(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_1800A2004(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_1800A46D8(v6 + 4);
  }
  return result;
}
