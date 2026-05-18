/*
 * XREFs of sub_1801043B8 @ 0x1801043B8
 * Callers:
 *     sub_1801037F0 @ 0x1801037F0 (sub_1801037F0.c)
 * Callees:
 *     sub_1800CF63C @ 0x1800CF63C (sub_1800CF63C.c)
 *     sub_1800CFCC4 @ 0x1800CFCC4 (sub_1800CFCC4.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_1801043B8(_QWORD *a1)
{
  _QWORD *v1; // rdi
  __int64 *v3; // r14
  __int64 *v4; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  v3 = *(__int64 **)(*a1 + 8LL);
  while ( !*((_BYTE *)v3 + 25) )
  {
    sub_1800CF63C((__int64)a1, (__int64)a1, (__int64 *)v3[2]);
    v4 = v3;
    v3 = (__int64 *)*v3;
    sub_1800CFCC4(v4 + 4);
    result = j_j__o_free(v4);
  }
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
