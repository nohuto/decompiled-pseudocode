/*
 * XREFs of sub_1800693F8 @ 0x1800693F8
 * Callers:
 *     sub_180069474 @ 0x180069474 (sub_180069474.c)
 *     sub_18009F15C @ 0x18009F15C (sub_18009F15C.c)
 *     sub_1800A0B14 @ 0x1800A0B14 (sub_1800A0B14.c)
 *     sub_1800AA9C8 @ 0x1800AA9C8 (sub_1800AA9C8.c)
 *     sub_1800B2250 @ 0x1800B2250 (sub_1800B2250.c)
 *     sub_1800D2EC0 @ 0x1800D2EC0 (sub_1800D2EC0.c)
 *     sub_1800D311C @ 0x1800D311C (sub_1800D311C.c)
 *     sub_1800F816C @ 0x1800F816C (sub_1800F816C.c)
 * Callees:
 *     sub_180025970 @ 0x180025970 (sub_180025970.c)
 *     sub_1800288B0 @ 0x1800288B0 (sub_1800288B0.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800693F8(_QWORD *a1)
{
  _QWORD *v1; // rdi
  __int64 *v3; // r14
  __int64 *v4; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  v3 = *(__int64 **)(*a1 + 8LL);
  while ( !*((_BYTE *)v3 + 25) )
  {
    sub_180025970((__int64)a1, (__int64)a1, (__int64 *)v3[2]);
    v4 = v3;
    v3 = (__int64 *)*v3;
    sub_1800288B0((__int64)(v4 + 4), 0);
    result = j_j__o_free(v4);
  }
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
