/*
 * XREFs of sub_18006D608 @ 0x18006D608
 * Callers:
 *     sub_18006BF54 @ 0x18006BF54 (sub_18006BF54.c)
 *     sub_1800A6998 @ 0x1800A6998 (sub_1800A6998.c)
 * Callees:
 *     sub_18006A094 @ 0x18006A094 (sub_18006A094.c)
 *     sub_18006B3C4 @ 0x18006B3C4 (sub_18006B3C4.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_18006D608(_QWORD *a1)
{
  _QWORD *v1; // rdi
  __int64 *v3; // r14
  __int64 *v4; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  v3 = *(__int64 **)(*a1 + 8LL);
  while ( !*((_BYTE *)v3 + 25) )
  {
    sub_18006A094((__int64)a1, (__int64)a1, (__int64 *)v3[2]);
    v4 = v3;
    v3 = (__int64 *)*v3;
    sub_18006B3C4(v4 + 4, 0);
    result = j_j__o_free(v4);
  }
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
