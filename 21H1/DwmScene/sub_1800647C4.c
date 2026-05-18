/*
 * XREFs of sub_1800647C4 @ 0x1800647C4
 * Callers:
 *     sub_180064680 @ 0x180064680 (sub_180064680.c)
 *     sub_1800647C4 @ 0x1800647C4 (sub_1800647C4.c)
 *     sub_180067D38 @ 0x180067D38 (sub_180067D38.c)
 * Callees:
 *     sub_1800647C4 @ 0x1800647C4 (sub_1800647C4.c)
 *     sub_180065AF4 @ 0x180065AF4 (sub_180065AF4.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800647C4(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_1800647C4(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_180065AF4(v6 + 4, 0LL);
  }
  return result;
}
