/*
 * XREFs of sub_1800D76F4 @ 0x1800D76F4
 * Callers:
 *     sub_1800D6A24 @ 0x1800D6A24 (sub_1800D6A24.c)
 *     sub_1800D6B10 @ 0x1800D6B10 (sub_1800D6B10.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 *     sub_1801090C0 @ 0x1801090C0 (sub_1801090C0.c)
 * Callees:
 *     sub_18006A0F0 @ 0x18006A0F0 (sub_18006A0F0.c)
 *     sub_18006B3C4 @ 0x18006B3C4 (sub_18006B3C4.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800D76F4(_QWORD *a1)
{
  _QWORD *v1; // rdi
  __int64 *v3; // r14
  __int64 *v4; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  v3 = *(__int64 **)(*a1 + 8LL);
  while ( !*((_BYTE *)v3 + 25) )
  {
    sub_18006A0F0((__int64)a1, (__int64)a1, (__int64 *)v3[2]);
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
