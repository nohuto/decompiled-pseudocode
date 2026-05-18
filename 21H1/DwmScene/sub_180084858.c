/*
 * XREFs of sub_180084858 @ 0x180084858
 * Callers:
 *     sub_18007EF38 @ 0x18007EF38 (sub_18007EF38.c)
 * Callees:
 *     sub_18006D11C @ 0x18006D11C (sub_18006D11C.c)
 *     sub_1800721A0 @ 0x1800721A0 (sub_1800721A0.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_180084858(_QWORD *a1)
{
  _QWORD *v1; // rdi
  __int64 *v3; // r14
  __int64 *v4; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  v3 = *(__int64 **)(*a1 + 8LL);
  while ( !*((_BYTE *)v3 + 25) )
  {
    sub_18006D11C((__int64)a1, (__int64)a1, (__int64 *)v3[2]);
    v4 = v3;
    v3 = (__int64 *)*v3;
    sub_1800721A0(v4 + 4);
    result = j_j__o_free(v4);
  }
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
