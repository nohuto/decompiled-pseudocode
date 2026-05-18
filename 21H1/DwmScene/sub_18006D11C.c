/*
 * XREFs of sub_18006D11C @ 0x18006D11C
 * Callers:
 *     sub_18006CF10 @ 0x18006CF10 (sub_18006CF10.c)
 *     sub_18006D11C @ 0x18006D11C (sub_18006D11C.c)
 *     sub_180084858 @ 0x180084858 (sub_180084858.c)
 *     sub_180125DD6 @ 0x180125DD6 (sub_180125DD6.c)
 * Callees:
 *     sub_18006D11C @ 0x18006D11C (sub_18006D11C.c)
 *     sub_1800721A0 @ 0x1800721A0 (sub_1800721A0.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18006D11C(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_18006D11C(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_1800721A0(v6 + 4);
  }
  return result;
}
