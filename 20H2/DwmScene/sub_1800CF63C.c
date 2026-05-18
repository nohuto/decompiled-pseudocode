/*
 * XREFs of sub_1800CF63C @ 0x1800CF63C
 * Callers:
 *     sub_1800CF5D0 @ 0x1800CF5D0 (sub_1800CF5D0.c)
 *     sub_1800CF63C @ 0x1800CF63C (sub_1800CF63C.c)
 *     sub_1801043B8 @ 0x1801043B8 (sub_1801043B8.c)
 * Callees:
 *     sub_1800CF63C @ 0x1800CF63C (sub_1800CF63C.c)
 *     sub_1800CFCC4 @ 0x1800CFCC4 (sub_1800CFCC4.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800CF63C(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_1800CF63C(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_1800CFCC4(v6 + 4);
  }
  return result;
}
