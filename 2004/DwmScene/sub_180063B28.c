/*
 * XREFs of sub_180063B28 @ 0x180063B28
 * Callers:
 *     sub_180063BA4 @ 0x180063BA4 (sub_180063BA4.c)
 *     sub_18009988C @ 0x18009988C (sub_18009988C.c)
 *     sub_18009B244 @ 0x18009B244 (sub_18009B244.c)
 *     sub_1800A50F8 @ 0x1800A50F8 (sub_1800A50F8.c)
 *     sub_1800AC980 @ 0x1800AC980 (sub_1800AC980.c)
 *     sub_1800CD5F0 @ 0x1800CD5F0 (sub_1800CD5F0.c)
 *     sub_1800CD84C @ 0x1800CD84C (sub_1800CD84C.c)
 *     sub_1800F289C @ 0x1800F289C (sub_1800F289C.c)
 * Callees:
 *     sub_1800200A0 @ 0x1800200A0 (sub_1800200A0.c)
 *     sub_180022FE0 @ 0x180022FE0 (sub_180022FE0.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_180063B28(_QWORD *a1)
{
  _QWORD *v1; // rdi
  __int64 *v3; // r14
  __int64 *v4; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  v3 = *(__int64 **)(*a1 + 8LL);
  while ( !*((_BYTE *)v3 + 25) )
  {
    sub_1800200A0((__int64)a1, (__int64)a1, (__int64 *)v3[2]);
    v4 = v3;
    v3 = (__int64 *)*v3;
    sub_180022FE0((__int64)(v4 + 4), 0);
    result = j_j__o_free(v4);
  }
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
