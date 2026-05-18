/*
 * XREFs of sub_18008A50C @ 0x18008A50C
 * Callers:
 *     sub_18008A4A0 @ 0x18008A4A0 (sub_18008A4A0.c)
 *     sub_18008A50C @ 0x18008A50C (sub_18008A50C.c)
 * Callees:
 *     sub_18008A50C @ 0x18008A50C (sub_18008A50C.c)
 *     sub_18008B494 @ 0x18008B494 (sub_18008B494.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_18008A50C(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_18008A50C(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_18008B494(v6 + 4);
  }
  return result;
}
