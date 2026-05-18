/*
 * XREFs of sub_18006487C @ 0x18006487C
 * Callers:
 *     sub_180064758 @ 0x180064758 (sub_180064758.c)
 *     sub_18006487C @ 0x18006487C (sub_18006487C.c)
 * Callees:
 *     sub_18006487C @ 0x18006487C (sub_18006487C.c)
 *     sub_180065B6C @ 0x180065B6C (sub_180065B6C.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18006487C(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_18006487C(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_180065B6C(v6 + 4, 0LL);
  }
  return result;
}
